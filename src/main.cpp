#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "OpenEarable.h"

void setup()
{
    open_earable.begin();
}

void loop()
{
    open_earable.update();
}