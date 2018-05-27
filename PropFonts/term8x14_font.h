#ifndef Term8x14PL_font_h
#define Term8x14PL_font_h

const uint8_t Term8x14PL[] PROGMEM =
{
-8, 16, 32, '~'+1+18+4,  // -width, height, firstChar, lastChar
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //  
        0x06, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0xFF, 0x33, 0xFF, 0x33, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00,  // !
        0x06, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,  // "
        0x08, 0x20, 0x01, 0xFE, 0x1F, 0xFE, 0x1F, 0x20, 0x01, 0x20, 0x01, 0xFE, 0x1F, 0xFE, 0x1F, 0x20, 0x01,  // #
        0x08, 0x38, 0x06, 0x3C, 0x0E, 0x64, 0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x84, 0x09, 0x1C, 0x0F, 0x18, 0x07,  // $
        0x08, 0x1E, 0x30, 0x33, 0x1C, 0x1E, 0x07, 0xC0, 0x01, 0x70, 0x00, 0x1C, 0x1E, 0x07, 0x33, 0x01, 0x1E,  // %
        0x08, 0x1E, 0x1F, 0xB3, 0x31, 0xE1, 0x20, 0xE1, 0x20, 0xB3, 0x31, 0x1E, 0x1F, 0x00, 0x1B, 0x80, 0x31,  // &
        0x02, 0x0B, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // '
        0x04, 0xF0, 0x07, 0xFE, 0x3F, 0x0F, 0x78, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // (
        0x04, 0x01, 0x40, 0x0F, 0x78, 0xFE, 0x3F, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // )
        0x08, 0x80, 0x00, 0xA0, 0x02, 0xE0, 0x03, 0xC0, 0x01, 0xC0, 0x01, 0xE0, 0x03, 0xA0, 0x02, 0x80, 0x00,  // *
        0x08, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0xE0, 0x03, 0xE0, 0x03, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,  // +
        0x02, 0x00, 0xB0, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ,
        0x05, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,  // -
        0x02, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // .
        0x08, 0x00, 0x30, 0x00, 0x3C, 0x00, 0x0F, 0xC0, 0x03, 0xF0, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0x00,  // /
        0x08, 0xFC, 0x0F, 0xFE, 0x1F, 0x03, 0x36, 0x81, 0x21, 0x61, 0x20, 0x1B, 0x30, 0xFE, 0x1F, 0xFC, 0x0F,  // 0
        0x08, 0x04, 0x20, 0x04, 0x20, 0x06, 0x20, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20,  // 1
        0x08, 0x0C, 0x38, 0x0E, 0x3C, 0x03, 0x26, 0x01, 0x23, 0x81, 0x21, 0xC3, 0x20, 0x7E, 0x20, 0x3C, 0x20,  // 2
        0x08, 0x0C, 0x0C, 0x0E, 0x1C, 0x43, 0x30, 0x41, 0x20, 0x41, 0x20, 0x43, 0x30, 0xFE, 0x1F, 0xBC, 0x0F,  // 3
        0x08, 0x00, 0x0F, 0xE0, 0x0F, 0xFC, 0x08, 0x1F, 0x08, 0x83, 0x3F, 0x80, 0x3F, 0x00, 0x08, 0x00, 0x08,  // 4
        0x08, 0x3F, 0x0C, 0x3F, 0x1C, 0x21, 0x30, 0x21, 0x20, 0x21, 0x20, 0x61, 0x30, 0xC1, 0x1F, 0x81, 0x0F,  // 5
        0x08, 0xE0, 0x0F, 0xF8, 0x1F, 0x5C, 0x30, 0x46, 0x20, 0x43, 0x20, 0xC1, 0x30, 0x81, 0x1F, 0x01, 0x0F,  // 6
        0x08, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x3C, 0x81, 0x3F, 0xF1, 0x03, 0x7F, 0x00, 0x0F, 0x00,  // 7
        0x08, 0x1C, 0x0F, 0xBE, 0x1F, 0xE3, 0x30, 0x41, 0x20, 0x41, 0x20, 0xE3, 0x30, 0xBE, 0x1F, 0x1C, 0x0F,  // 8
        0x08, 0x3C, 0x20, 0x7E, 0x20, 0xC3, 0x20, 0x81, 0x30, 0x81, 0x18, 0x83, 0x0E, 0xFE, 0x07, 0xFC, 0x01,  // 9
        0x02, 0x60, 0x30, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // :
        0x02, 0x60, 0xB0, 0x60, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ;
        0x07, 0x80, 0x00, 0xC0, 0x01, 0x60, 0x03, 0x30, 0x06, 0x18, 0x0C, 0x0C, 0x18, 0x04, 0x10, 0x00, 0x00,  // <
        0x08, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01,  // =
        0x07, 0x04, 0x10, 0x0C, 0x18, 0x18, 0x0C, 0x30, 0x06, 0x60, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00,  // >
        0x08, 0x06, 0x00, 0x07, 0x00, 0x03, 0x00, 0x01, 0x33, 0xC1, 0x33, 0xF3, 0x00, 0x3F, 0x00, 0x1E, 0x00,  // ?
        0x08, 0xFC, 0x0F, 0xFE, 0x1F, 0x03, 0x30, 0xE1, 0x21, 0xF1, 0x23, 0x11, 0x22, 0x13, 0x21, 0xFE, 0x33,  // @
        0x08, 0xFC, 0x3F, 0xFE, 0x3F, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x01, 0xFE, 0x3F, 0xFC, 0x3F,  // A
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0xE3, 0x30, 0xBE, 0x1F, 0x1C, 0x0F,  // B
        0x08, 0xFC, 0x0F, 0xFE, 0x1F, 0x03, 0x30, 0x01, 0x20, 0x01, 0x20, 0x03, 0x30, 0x0E, 0x1C, 0x0C, 0x0C,  // C
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x07, 0x38, 0xFE, 0x1F, 0xF8, 0x07,  // D
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x01, 0x20,  // E
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x01, 0x00,  // F
        0x08, 0xFC, 0x0F, 0xFE, 0x1F, 0x03, 0x30, 0x01, 0x20, 0x81, 0x20, 0x83, 0x30, 0x8E, 0x1F, 0x8C, 0x0F,  // G
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0xFF, 0x3F, 0xFF, 0x3F,  // H
        0x08, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0xFF, 0x3F, 0xFF, 0x3F, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20,  // I
        0x08, 0x00, 0x0C, 0x00, 0x1C, 0x00, 0x30, 0x00, 0x20, 0x00, 0x20, 0x00, 0x30, 0xFF, 0x1F, 0xFF, 0x0F,  // J
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0xC0, 0x00, 0xE0, 0x01, 0x38, 0x07, 0x1C, 0x0E, 0x0F, 0x3C, 0x03, 0x30,  // K
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20,  // L
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x78, 0x00, 0xC0, 0x03, 0xC0, 0x03, 0x78, 0x00, 0xFF, 0x3F, 0xFF, 0x3F,  // M
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x1C, 0x00, 0x70, 0x00, 0xC0, 0x01, 0x00, 0x07, 0xFF, 0x3F, 0xFF, 0x3F,  // N
        0x08, 0xFC, 0x0F, 0xFE, 0x1F, 0x03, 0x30, 0x01, 0x20, 0x01, 0x20, 0x03, 0x30, 0xFE, 0x1F, 0xFC, 0x0F,  // O
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0xC3, 0x00, 0x7E, 0x00, 0x3C, 0x00,  // P
        0x08, 0xFC, 0x0F, 0xFE, 0x1F, 0x03, 0x30, 0x01, 0x20, 0x01, 0x60, 0x03, 0xF0, 0xFE, 0x9F, 0xFC, 0x0F,  // Q
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x81, 0x00, 0x81, 0x00, 0x81, 0x01, 0xC3, 0x1F, 0x7E, 0x3E, 0x3C, 0x20,  // R
        0x08, 0x3C, 0x0C, 0x7E, 0x1C, 0x63, 0x30, 0xE1, 0x20, 0xC1, 0x21, 0x83, 0x31, 0x8E, 0x1F, 0x0C, 0x0F,  // S
        0x08, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,  // T
        0x08, 0xFF, 0x0F, 0xFF, 0x1F, 0x00, 0x30, 0x00, 0x20, 0x00, 0x20, 0x00, 0x30, 0xFF, 0x1F, 0xFF, 0x0F,  // U
        0x08, 0x3F, 0x00, 0xFF, 0x01, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0x3C, 0xC0, 0x0F, 0xFF, 0x01, 0x3F, 0x00,  // V
        0x08, 0xFF, 0x01, 0xFF, 0x3F, 0x00, 0x3E, 0xC0, 0x01, 0xC0, 0x01, 0x00, 0x3E, 0xFF, 0x3F, 0xFF, 0x01,  // W
        0x08, 0x0F, 0x3C, 0x3F, 0x3F, 0xF0, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0xF0, 0x03, 0x3F, 0x3F, 0x0F, 0x3C,  // X
        0x08, 0x3F, 0x00, 0xFF, 0x00, 0xC0, 0x01, 0x80, 0x3F, 0x80, 0x3F, 0xC0, 0x01, 0xFF, 0x00, 0x3F, 0x00,  // Y
        0x08, 0x01, 0x38, 0x01, 0x3E, 0x81, 0x27, 0xC1, 0x21, 0x61, 0x20, 0x39, 0x20, 0x1F, 0x20, 0x07, 0x20,  // Z
        0x04, 0xFF, 0x3F, 0xFF, 0x3F, 0x01, 0x20, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // [
        0x08, 0x03, 0x00, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x00, 0xC0, 0x03, 0x00, 0x0F, 0x00, 0x3C, 0x00, 0x30,  // BackSlash
        0x04, 0x01, 0x20, 0x01, 0x20, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ]
        0x06, 0x04, 0x00, 0x06, 0x00, 0x03, 0x00, 0x03, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,  // ^
        0x08, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80,  // _
        0x06, 0x06, 0x00, 0x0F, 0x00, 0x09, 0x00, 0x09, 0x00, 0x0F, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,  // deg
        0x08, 0x00, 0x1E, 0x40, 0x3F, 0x20, 0x21, 0x20, 0x21, 0x20, 0x21, 0x20, 0x11, 0xE0, 0x3F, 0xC0, 0x3F,  // a
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x40, 0x10, 0x20, 0x20, 0x20, 0x20, 0x60, 0x30, 0xC0, 0x1F, 0x80, 0x0F,  // b
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x60, 0x30, 0x40, 0x10,  // c
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x30, 0x20, 0x20, 0x20, 0x20, 0x40, 0x10, 0xFF, 0x3F, 0xFF, 0x3F,  // d
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x32, 0x20, 0x22, 0x20, 0x22, 0x60, 0x22, 0xC0, 0x33, 0x80, 0x13,  // e
        0x08, 0x20, 0x00, 0x20, 0x00, 0xFE, 0x3F, 0xFF, 0x3F, 0x21, 0x00, 0x21, 0x00, 0x23, 0x00, 0x02, 0x00,  // f
        0x08, 0x80, 0x07, 0xC0, 0x4F, 0x60, 0xD8, 0x20, 0x90, 0x20, 0x90, 0x40, 0xC8, 0xE0, 0x7F, 0xE0, 0x3F,  // g
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x60, 0x00, 0xC0, 0x3F, 0x80, 0x3F,  // h
        0x06, 0x20, 0x20, 0x20, 0x20, 0xE3, 0x3F, 0xE3, 0x3F, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,  // i
        0x05, 0x00, 0x40, 0x20, 0xC0, 0x20, 0x80, 0xE3, 0xFF, 0xE3, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // j
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x06, 0x00, 0x07, 0x80, 0x0D, 0xC0, 0x18, 0x60, 0x30, 0x20, 0x20,  // k
        0x06, 0x01, 0x20, 0x01, 0x20, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,  // l
        0x08, 0xE0, 0x3F, 0xE0, 0x3F, 0x60, 0x00, 0xC0, 0x1F, 0xC0, 0x1F, 0x60, 0x00, 0xE0, 0x3F, 0xC0, 0x3F,  // m
        0x08, 0xE0, 0x3F, 0xE0, 0x3F, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x60, 0x00, 0xC0, 0x3F, 0x80, 0x3F,  // n
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x30, 0x20, 0x20, 0x20, 0x20, 0x60, 0x30, 0xC0, 0x1F, 0x80, 0x0F,  // o
        0x08, 0xE0, 0xFF, 0xE0, 0xFF, 0x40, 0x10, 0x20, 0x20, 0x20, 0x20, 0x60, 0x30, 0xC0, 0x1F, 0x80, 0x0F,  // p
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x10, 0xE0, 0xFF, 0xE0, 0xFF,  // q
        0x08, 0xE0, 0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0x40, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x40, 0x00,  // r
        0x08, 0xC0, 0x10, 0xE0, 0x31, 0x20, 0x21, 0x20, 0x23, 0x20, 0x26, 0x20, 0x24, 0x60, 0x3C, 0x40, 0x18,  // s
        0x06, 0x20, 0x00, 0x20, 0x00, 0xFE, 0x1F, 0xFE, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,  // t
        0x08, 0xE0, 0x1F, 0xE0, 0x3F, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0xE0, 0x3F, 0xE0, 0x3F,  // u
        0x08, 0xE0, 0x03, 0xE0, 0x07, 0x00, 0x1C, 0x00, 0x30, 0x00, 0x30, 0x00, 0x1C, 0xE0, 0x07, 0xE0, 0x03,  // v
        0x08, 0xE0, 0x07, 0xE0, 0x3F, 0x00, 0x38, 0xC0, 0x07, 0xC0, 0x07, 0x00, 0x38, 0xE0, 0x3F, 0xE0, 0x07,  // w
        0x08, 0x60, 0x30, 0xE0, 0x3D, 0x80, 0x0D, 0x00, 0x07, 0x00, 0x07, 0x80, 0x0D, 0xE0, 0x3D, 0x60, 0x30,  // x
        0x08, 0xE0, 0x83, 0xE0, 0x8F, 0x00, 0xDC, 0x00, 0x70, 0x00, 0x30, 0x00, 0x1C, 0xE0, 0x0F, 0xE0, 0x03,  // y
        0x08, 0x20, 0x30, 0x20, 0x38, 0x20, 0x2C, 0x20, 0x26, 0x20, 0x23, 0xA0, 0x21, 0xE0, 0x20, 0x60, 0x20,  // z
        0x05, 0x80, 0x00, 0xFE, 0x3F, 0x7F, 0x7F, 0x01, 0x40, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // {
        0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // |
        0x05, 0x01, 0x40, 0x01, 0x40, 0x7F, 0x7F, 0xFE, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // }
        0x08, 0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00,  // ~
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0xFF, 0x3F, 0xFF, 0x3F,  // 

        0x08, 0xFC, 0x3F, 0xFE, 0x3F, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x41, 0xFE, 0xFF, 0xFC, 0xBF,  // Ą
        0x08, 0xF8, 0x0F, 0xFC, 0x1F, 0x02, 0x30, 0x06, 0x20, 0x03, 0x20, 0x06, 0x30, 0x1C, 0x1C, 0x18, 0x0C,  // Ć
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x41, 0x20, 0x41, 0x20, 0x41, 0x20, 0x41, 0x60, 0x41, 0xE0, 0x01, 0xA0,  // Ę
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0xC0, 0x20, 0x60, 0x20, 0x30, 0x20, 0x10, 0x20, 0x00, 0x20, 0x00, 0x20,  // Ł
        0x08, 0xFF, 0x3F, 0xFF, 0x3F, 0x1C, 0x00, 0x71, 0x00, 0xC3, 0x01, 0x00, 0x07, 0xFF, 0x3F, 0xFF, 0x3F,  // Ń
        0x08, 0xF8, 0x0F, 0xFC, 0x1F, 0x02, 0x30, 0x06, 0x20, 0x03, 0x20, 0x06, 0x30, 0xFC, 0x1F, 0xF8, 0x0F,  // Ó
        0x08, 0x38, 0x0C, 0x7C, 0x1C, 0x62, 0x30, 0xE6, 0x20, 0xC3, 0x21, 0x86, 0x31, 0x8C, 0x1F, 0x08, 0x0F,  // Ś
        0x08, 0x02, 0x38, 0x02, 0x3E, 0x86, 0x27, 0xC2, 0x21, 0x63, 0x20, 0x3A, 0x20, 0x1E, 0x20, 0x06, 0x20,  // Ź
        0x08, 0x81, 0x38, 0x81, 0x3E, 0x81, 0x27, 0xC1, 0x21, 0xE1, 0x20, 0xB9, 0x20, 0x9F, 0x20, 0x07, 0x20,  // Ż
        
        0x08, 0x00, 0x1E, 0x40, 0x3F, 0x20, 0x21, 0x20, 0x21, 0x20, 0x21, 0x20, 0x51, 0xE0, 0xFF, 0xC0, 0xBF,  // ą
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x30, 0x24, 0x20, 0x26, 0x20, 0x22, 0x20, 0x60, 0x30, 0x40, 0x10,  // ć
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x32, 0x20, 0x22, 0x20, 0x22, 0x60, 0x62, 0xC0, 0xF3, 0x80, 0x93,  // ę
        0x06, 0x01, 0x26, 0x01, 0x23, 0xFF, 0x3F, 0xFF, 0x3F, 0x60, 0x20, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00,  // ł
        0x08, 0xE0, 0x3F, 0xE0, 0x3F, 0x40, 0x00, 0x24, 0x00, 0x26, 0x00, 0x62, 0x00, 0xC0, 0x3F, 0x80, 0x3F,  // ń
        0x08, 0x80, 0x0F, 0xC0, 0x1F, 0x60, 0x30, 0x24, 0x20, 0x26, 0x20, 0x62, 0x30, 0xC0, 0x1F, 0x80, 0x0F,  // ó
        0x08, 0xC0, 0x10, 0xE0, 0x31, 0x20, 0x21, 0x24, 0x23, 0x26, 0x26, 0x22, 0x24, 0x60, 0x3C, 0x40, 0x18,  // ś
        0x08, 0x20, 0x30, 0x20, 0x38, 0x20, 0x2C, 0x24, 0x26, 0x26, 0x23, 0xA2, 0x21, 0xE0, 0x20, 0x60, 0x20,  // ź
        0x08, 0x20, 0x30, 0x20, 0x38, 0x20, 0x2C, 0x26, 0x26, 0x26, 0x23, 0xA0, 0x21, 0xE0, 0x20, 0x60, 0x20,  // ż
        
        0x08, 0x80, 0x20, 0xC0, 0x20, 0x60, 0x20, 0xFF, 0x3F, 0xFF, 0x3F, 0x61, 0x00, 0xC1, 0x00, 0x81, 0x00,  // 146-RISE
        0x08, 0x41, 0x00, 0xC1, 0x00, 0x81, 0x01, 0xFF, 0x3F, 0xFF, 0x3F, 0x80, 0x21, 0xC0, 0x20, 0x40, 0x20,  // 147-FALL
        0x08, 0xFC, 0x21, 0xFE, 0x3F, 0x03, 0x3E, 0x01, 0x00, 0x01, 0x00, 0x03, 0x3E, 0xFE, 0x3F, 0xFC, 0x21,  // 148-ohm
        0x08, 0xE0, 0xFF, 0xE0, 0x3F, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0xE0, 0x3F, 0xE0, 0x3F,  // 149-micro
};

#endif
