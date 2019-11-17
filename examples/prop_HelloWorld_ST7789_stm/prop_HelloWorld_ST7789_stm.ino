// PropFont library example
// (C)2019 Pawel A. Hernik

#define SCR_WD   240
#define SCR_HT   240
#include <SPI.h>
#include <Adafruit_GFX.h>
//#define TFT_DC    7
//#define TFT_RST   8 
//#include <Arduino_ST7789_Fast.h>
#define TFT_DC    PA1
#define TFT_RST   PA0
#include <Arduino_ST7789_STM.h>
Arduino_ST7789 lcd = Arduino_ST7789(TFT_DC, TFT_RST);

#include "PropFont.h"
#include "c64enh_font.h"

PropFont font;

// needed for PropFont library initialization, define your drawPixel and fillRect
void customPixel(int x, int y, int c) { lcd.drawPixel(x, y, c); }
void customRect(int x, int y, int w, int h, int c) { lcd.fillRect(x, y, w, h, c); }

void setup() 
{
  Serial.begin(9600);
  lcd.init(SCR_WD, SCR_HT);
  lcd.fillScreen(BLACK);
  font.init(customPixel, customRect, SCR_WD, SCR_HT); // custom drawPixel and fillRect function and screen width and height values

  font.setFont(c64enh);
  font.setSpacing(2);
  font.setColor(GREEN);
  font.setScale(3);
  font.printStr(ALIGN_CENTER,30,"Hello World!");

  font.setColor(YELLOW,BLUE);
  font.setScale(2,3);
  font.printStr(ALIGN_CENTER,100,"Hello World!");

  font.setColor(YELLOW,RED);
  font.setScale(2,2);
  font.printStr(80,160,"Hello\nWorld");
}

void loop()
{
}

