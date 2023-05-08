#include "Defination.h"

void setup()
{
    
    SetOLED();
    
}

void loop()
{

    display.clear()  // 把螢幕清除
    display.setFont(ArialMT_Plain_10);
    display.drawString(0 , 0 , "Hello World!");

    display.display();
    delay(1000);
    
}
