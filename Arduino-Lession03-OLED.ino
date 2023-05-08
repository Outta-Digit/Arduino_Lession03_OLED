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

    display.fillRect(20,20,  10, 10);
    
    display.display();
    delay(1000);
    
}
