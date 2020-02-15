// Proportional font support library
// (c) 2019 by Pawel A. Hernik

#ifndef _PROP_FONT_H
#define _PROP_FONT_H 

// -------  CONFIG ---------
// saves 370 bytes
#define CONVERT_PL_CHARS   0
// ~25% faster rendering of big fonts, but adds 500 bytes
#define OPTIMIZE_BIG_FONTS 0
// --------------------------

#include <Arduino.h>

#define ALIGN_LEFT    0
#define ALIGN_RIGHT  -1 
#define ALIGN_CENTER -2

struct _propFont {
  const uint8_t* font;
  uint8_t wd;
  uint8_t ht;
  uint8_t firstCh;
  uint8_t lastCh;
};
// ---------------------------------
class PropFont {
public:
  PropFont();
  void init(void (*pixelFun)(int x, int y, int c), void (*rectFun)(int x, int y, int w, int h, int c), int swd, int sht);
  void setFont(const uint8_t* font);
  void setCR(uint8_t _cr) { cr = _cr; }
  void setColor(int c) { fg = bg = c; }
  void setColor(int c, int _bg) { fg = c; bg = _bg; }
  void setSpacing(uint8_t sp) { spacing = sp; }
  void setSpacingY(uint8_t sp) { spacingY = sp; }
  void setScale(uint8_t _sx, uint8_t _sy) { sx = _sx; sy = _sy; }
  void setScale(uint8_t s) { sx = sy = s; }
  void setFontMinWd(uint8_t wd) { minCharWd = wd; }
  void setCharMinWd(uint8_t wd) { minCharWd = wd; }
  void setDigitMinWd(uint8_t wd) { minDigitWd = wd; }
  unsigned char convertPolish(unsigned char _c);
  int getWidth() { return cfont.wd; }
  int getHeight() { return cfont.ht; }
  int charWidth(uint8_t c);
  int drawChar(int x, int y, unsigned char c);
  int strWidth(char *str);
  int printStr(int xpos, int ypos, char *str);
  void setIsNumberFun(bool (*fun)(uint8_t)) { isNumberFun=fun; }
  void setDrawPixelFun(void (*fun)(int x, int y, int c)) { drawPixelFun=fun; }
  void setFillRectFun(void (*fun)(int x, int y, int w, int h, int c)) { fillRectFun=fun; }

  static bool isNumber(uint8_t ch);
  static bool isNumberExt(uint8_t ch);

public:
  bool (*isNumberFun)(uint8_t ch);
  void (*drawPixelFun)(int x, int y, int c);
  void (*fillRectFun)(int x, int y, int w, int h, int c);
  _propFont  cfont;
  int scrWd, scrHt;

  uint8_t spacing = 1;
  uint8_t spacingY = 0;
  uint8_t sx = 1;
  uint8_t sy = 1;
  uint8_t cr = 0;
  uint16_t fg = 1;
  uint16_t bg = 1;
  uint8_t minCharWd;
  uint8_t minDigitWd;
  uint8_t dualChar;
};
#endif

