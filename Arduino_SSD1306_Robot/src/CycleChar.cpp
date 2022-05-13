#include <CycleChar.hpp>


int count = 0;
boolean reached = false;

void cycleChar()
{
    display.setTextColor(WHITE);
    display.clearDisplay();
    display.drawLine(0,12,128,12,1);
    if (count >= 240)
    {
        reached = true;
        count=128;
    }

    if (count == -114)
    {
        reached = false;
        count=0;
    }

    if (reached)
    {
        display.drawBitmap(count, 24, wo, 16, 16, 1);
        display.drawBitmap(count + 16, 24, ai, 16, 16, 1);
        display.drawBitmap(count + 32, 24, bei, 16, 16, 1);
        display.drawBitmap(count + 48, 24, jing, 16, 16, 1);
        display.drawBitmap(count + 64, 24, tian, 16, 16, 1);
        display.drawBitmap(count + 80, 24, an, 16, 16, 1);
        display.drawBitmap(count + 96, 24, men, 16, 16, 1);
        count--;
    }

    if (!reached)
    {
        display.drawBitmap(count-96, 24, wo, 16, 16, 1);
        display.drawBitmap(count-80, 24, ai, 16, 16, 1);
        display.drawBitmap(count-64, 24, bei, 16, 16, 1);
        display.drawBitmap(count-48, 24, jing, 16, 16, 1);
        display.drawBitmap(count-32, 24, tian, 16, 16, 1);
        display.drawBitmap(count-16, 24, an, 16, 16, 1);
        display.drawBitmap(count, 24, men, 16, 16, 1);
        count++;
    }
    
    display.drawLine(0,52,128,52,1);
    
    display.display();
}
