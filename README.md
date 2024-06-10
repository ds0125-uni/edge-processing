### Default Firmware
The easiest way to use OpenEarable is with the provided App sketch. 
Use this [PlatformIO](https://platformio.org) project as a template.


The absolute minimum needed to run the code successfully is the following:

```c++
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
```

With this minimum sketch, all internal functionality is activated and OpenEarable becomes controllable via our [Dashboard](https://github.com/OpenEarable/dashboard), via [EdgeML](https://edge-ml.org/), and via the BLE API.
