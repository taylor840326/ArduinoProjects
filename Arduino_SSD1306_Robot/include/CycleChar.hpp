#include <SSD1306Common.hpp>

extern void cycleChar();

static const unsigned char PROGMEM wo[] =
    {
        /*--  文字:  我  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x04, 0x40, 0x0E, 0x50, 0x78, 0x48, 0x08, 0x48, 0x08, 0x40, 0xFF, 0xFE, 0x08, 0x40, 0x08, 0x44,
        0x0A, 0x44, 0x0C, 0x48, 0x18, 0x30, 0x68, 0x22, 0x08, 0x52, 0x08, 0x8A, 0x2B, 0x06, 0x10, 0x02};

static const unsigned char PROGMEM ai[] =
    {
        /*--  文字:  爱  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x00, 0x08, 0x01, 0xFC, 0x7E, 0x10, 0x22, 0x10, 0x11, 0x20, 0x7F, 0xFE, 0x42, 0x02, 0x82, 0x04,
        0x7F, 0xF8, 0x04, 0x00, 0x07, 0xF0, 0x0A, 0x10, 0x11, 0x20, 0x20, 0xC0, 0x43, 0x30, 0x1C, 0x0E};

static const unsigned char PROGMEM bei[] =
    {
        /*--  文字:  北  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x44, 0x04, 0x48, 0x7C, 0x50, 0x04, 0x60, 0x04, 0x40,
        0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x42, 0x1C, 0x42, 0xE4, 0x42, 0x44, 0x3E, 0x04, 0x00};

static const unsigned char PROGMEM jing[] =
    {
        /*--  文字:  京  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x02, 0x00, 0x01, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x10, 0x10, 0x10, 0x10,
        0x10, 0x10, 0x1F, 0xF0, 0x01, 0x00, 0x11, 0x10, 0x11, 0x08, 0x21, 0x04, 0x45, 0x04, 0x02, 0x00};

static const unsigned char PROGMEM tian[] =
    {
        /*--  文字:  天  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x00, 0x00, 0x3F, 0xF8, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFE, 0x01, 0x00,
        0x02, 0x80, 0x02, 0x80, 0x04, 0x40, 0x04, 0x40, 0x08, 0x20, 0x10, 0x10, 0x20, 0x08, 0xC0, 0x06};

static const unsigned char PROGMEM an[] =
    {
        /*--  文字:  安  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x02, 0x00, 0x01, 0x00, 0x3F, 0xFC, 0x20, 0x04, 0x42, 0x08, 0x02, 0x00, 0x02, 0x00, 0xFF, 0xFE,
        0x04, 0x20, 0x08, 0x20, 0x18, 0x40, 0x06, 0x40, 0x01, 0x80, 0x02, 0x60, 0x0C, 0x10, 0x70, 0x08};

static const unsigned char PROGMEM men[] =
    {
        /*--  文字:  门  --*/
        /*--  Fixedsys12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x20, 0x00, 0x13, 0xFC, 0x10, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04,
        0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x14, 0x40, 0x08};
