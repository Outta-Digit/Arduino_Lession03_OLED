#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h"

SSD1306Wire display(0x3C, SDA, SCL); 

void setup()
{
    
    Serial.begin(115200);

    display.init();
    display.flipScreenVertically();

    
}

void loop()
{

    display.clear() ; // 把螢幕清除
    display.setFont(ArialMT_Plain_10);
    display.drawString(0 , 0 , "Hello World!");

    display.fillRect(20,20,  10, 10);
    
    display.display();
    delay(1000);
    
}
