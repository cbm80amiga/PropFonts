// Proportional font support library
// (c) 2019 by Pawel A. Hernik

#include "PropFont.h"

// ----------------------------------------------------------------
PropFont::PropFont()
{
}
// ----------------------------------------------------------------
// drawPixel and fillRect functions callbacks and screen width and height is necessary to initialize the library
void PropFont::init(void (*pixelFun)(int x, int y, int c), void (*rectFun)(int x, int y, int w, int h, int c), int swd, int sht)
{
  drawPixelFun = pixelFun;
  fillRectFun = rectFun;
  scrWd = swd;
  scrHt = sht;
  isNumberFun = &isNumber;
  cr = dualChar = 0;
  sx = sy = 1;
  fg = bg = 1;
  cfont.font = NULL;
}

// ---------------------------------
void PropFont::setFont(const uint8_t* font)
{
  cfont.font = font;
  uint8_t fwd = pgm_read_byte(cfont.font+0);
  cfont.wd = fwd>=128 ? 256-(uint16_t)fwd : fwd;
  cfont.ht = pgm_read_byte(cfont.font+1);
  cfont.firstCh = pgm_read_byte(cfont.font+2);
  cfont.lastCh  = pgm_read_byte(cfont.font+3);
  minCharWd = minDigitWd = 0;
  isNumberFun = &isNumber;
  spacing = 1;
  spacingY = 0;
  cr = 0;
}

// ----------------------------------------------------------------
int PropFont::charWidth(uint8_t c)
{
#if CONVERT_PL_CHARS==1
  c = convertPolish(c);
#endif
  if(c<cfont.firstCh || c>cfont.lastCh)  return c==' ' ?  sx*cfont.wd/2 : 0;
  int ys8=(cfont.ht+7)/8;
  int idx = 4 + (c-cfont.firstCh)*(cfont.wd*ys8+1);
  int wd = pgm_read_byte(cfont.font + idx);
  int wdL = 0, wdR = 0; // default spacing before and behind char
  if((*isNumberFun)(c) && minDigitWd>0) {
    if(minDigitWd>wd) {
      wdL = (minDigitWd-wd)/2;
      wdR += (minDigitWd-wd-wdL);
    }
  } else
  if(minCharWd>wd) {
    wdL = (minCharWd-wd)/2;
    wdR += (minCharWd-wd-wdL);
  }
  return (wd+wdL+wdR)*sx;
}

// ----------------------------------------------------------------
int PropFont::drawChar(int x0, int y0, unsigned char c) 
{
  if(x0 >= scrWd || y0 >= scrHt || !cfont.font)  return 0;
  int fht8 = (cfont.ht + 7) / 8, wd, fwd = cfont.wd;

#if CONVERT_PL_CHARS==1
  c = convertPolish(c);
#endif
  if(c < cfont.firstCh || c > cfont.lastCh)  return c==' ' ?  1 + fwd/2 : 0;

  int x,y8,b,cdata = (c - cfont.firstCh) * (fwd*fht8+1) + 4;
  byte d;
  wd = pgm_read_byte(cfont.font+cdata++);
  int wdL = 0, wdR = 0;
  if((*isNumberFun)(c)) {
    if(minDigitWd>wd) {
      wdL = (minDigitWd-wd)/2;
      wdR += (minDigitWd-wd-wdL);
    }
  } else
  if(minCharWd>wd) {
    wdL = (minCharWd-wd)/2;
    wdR += (minCharWd-wd-wdL);
  }
  if(x0+wd+wdL+wdR>scrWd) wdR = max(scrWd-x0-wdL-wd, 0);
  if(x0+wd+wdL+wdR>scrWd) wd  = max(scrWd-x0-wdL, 0);
  if(x0+wd+wdL+wdR>scrWd) wdL = max(scrWd-x0, 0);

  if(fg!=bg && wdL>0) (*fillRectFun)(x0,y0, sx*wdL,sy*cfont.ht, bg);
  x0+=wdL*sx;

  for(x=0; x<wd; x++) {
    for(y8=0; y8<fht8; y8++) {
      d = pgm_read_byte(cfont.font+cdata+x*fht8+y8);
      int lastbit = cfont.ht - y8 * 8;
      if(lastbit>8) lastbit = 8;
#if OPTIMIZE_BIG_FONTS==1
      if(d==0xff) { (*fillRectFun)(x0+x*sx, y0+(y8*8)*sy, sx,sy*8, fg); continue; }
      if(lastbit==8) {
        if(d==0) {
          if(fg!=bg) (*fillRectFun)(x0+x*sx, y0+(y8*8)*sy, sx,sy*8, bg);
          continue;
        }
        if(d==0xf0) {
          if(fg!=bg) (*fillRectFun)(x0+x*sx, y0+(y8*8)*sy, sx,sy*4, bg);
          (*fillRectFun)(x0+x*sx, y0+(y8*8+4)*sy, sx,sy*4, fg);
           continue; 
        }
        if(d==0x0f) { 
          (*fillRectFun)(x0+x*sx, y0+(y8*8)*sy, sx,sy*4, fg); 
          if(fg!=bg) (*fillRectFun)(x0+x*sx, y0+(y8*8+4)*sy, sx,sy*4, bg);
          continue; 
        }
      }
#endif
      for(b=0; b<lastbit; b++) {
        if(d & 1) {
          if(sx==1 && sy==1) (*drawPixelFun)(x0+x, y0+y8*8+b, fg);
          else               (*fillRectFun)(x0+x*sx, y0+(y8*8+b)*sy, sx,sy, fg);
        } else if(fg!=bg) {
          if(sx==1 && sy==1) (*drawPixelFun)(x0+x, y0+y8*8+b, bg);
          else               (*fillRectFun)(x0+x*sx, y0+(y8*8+b)*sy,  sx,sy, bg);
        }
        d>>=1;
      }
    }
  }
  if(fg!=bg && wdR>0) (*fillRectFun)(x0+wd*sx,y0, sx*wdR,sy*cfont.ht, bg);
  return (wd+wdR+wdL)*sx; 
}

// ----------------------------------------------------------------
int PropFont::strWidth(char *str)
{
  int wd = 0;
  while(*str) { wd += charWidth(*str++); if(*str) wd+=spacing; }
  return wd;
}

// ----------------------------------------------------------------
int PropFont::printStr(int x0, int y0, char *str)
{
  if(!cfont.font) return 0;
  int x = x0;
  int y = y0;
  int wd = strWidth(str);

  if(x==ALIGN_RIGHT) x = scrWd - wd; // right = -1
  else if(x<0) x = (scrWd - wd) / 2; // center = -2
  if(x<0) x = 0; // left

  while(*str) {
    char ch = *str++;
    int wd = drawChar(x,y,ch);
    if(fg!=bg && *str) (*fillRectFun)(x+wd,y, spacing,sy*cfont.ht, bg);
    x += wd+spacing;
    if((cr && x>=scrWd) || ch==10) { 
      x = cr ? 0 : x0; 
      y += cfont.ht * sy + spacingY; 
      if(y>scrHt) y = 0;
    }
  }
  return x;
}
// ----------------------------------------------------------------
// callbacks
bool PropFont::isNumber(uint8_t ch)
{
  return isdigit(ch) || ch==' ';
}

bool PropFont::isNumberExt(uint8_t ch)
{
  return isdigit(ch) || ch=='-' || ch=='+' || ch=='.' || ch==' ';
}
// ----------------------------------------------------------------
unsigned char PropFont::convertPolish(unsigned char _c)
{
  unsigned char pl, c = _c;
  if(c==196 || c==197 || c==195) {
    dualChar = c;
    return 0;
  }
  if(dualChar) { // UTF8 coding
    switch(_c) {
      case 133: pl = 1+9; break; // 'π'
      case 135: pl = 2+9; break; // 'Ê'
      case 153: pl = 3+9; break; // 'Í'
      case 130: pl = 4+9; break; // '≥'
      case 132: pl = dualChar==197 ? 5+9 : 1; break; // 'Ò' and '•'
      case 179: pl = 6+9; break; // 'Û'
      case 155: pl = 7+9; break; // 'ú'
      case 186: pl = 8+9; break; // 'ü'
      case 188: pl = 9+9; break; // 'ø'
      //case 132: pl = 1; break; // '•'
      case 134: pl = 2; break; // '∆'
      case 152: pl = 3; break; // ' '
      case 129: pl = 4; break; // '£'
      case 131: pl = 5; break; // '—'
      case 147: pl = 6; break; // '”'
      case 154: pl = 7; break; // 'å'
      case 185: pl = 8; break; // 'è'
      case 187: pl = 9; break; // 'Ø'
      default:  return c; break;
    }
    dualChar = 0;
  } else   
  switch(_c) {  // Windows coding
    case 165: pl = 1; break; // •
    case 198: pl = 2; break; // ∆
    case 202: pl = 3; break; //  
    case 163: pl = 4; break; // £
    case 209: pl = 5; break; // —
    case 211: pl = 6; break; // ”
    case 140: pl = 7; break; // å
    case 143: pl = 8; break; // è
    case 175: pl = 9; break; // Ø
    case 185: pl = 10; break; // π
    case 230: pl = 11; break; // Ê
    case 234: pl = 12; break; // Í
    case 179: pl = 13; break; // ≥
    case 241: pl = 14; break; // Ò
    case 243: pl = 15; break; // Û
    case 156: pl = 16; break; // ú
    case 159: pl = 17; break; // ü
    case 191: pl = 18; break; // ø
    default:  return c; break;
  }
  return pl+'~'+1;
}
// ---------------------------------
