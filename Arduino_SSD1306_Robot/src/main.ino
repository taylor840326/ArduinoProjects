#include <Arduino.h>

#include <CycleChar.hpp>
#include <RobotSmall.hpp>

void setup()
{
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop()
{
    // cycleChar();
    ShowSmall();
    delay(10);
}
