#pragma once

#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h"

SSD1306Wire display(0x3C, SDA, SCL); 

void SetOLED(){

    Serial.begin(115200);

    display.init();
    display.flipScreenVertically();




}

