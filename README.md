### Default Firmware
The easiest way to compile and deploy the OpenEarable firmware is this App sketch for [PlatformIO](https://platformio.org). 
Before you start, please make sure you have setup [PlatformIO for VSCode](https://platformio.org/install/ide?install=vscode).


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

With this minimal sketch, all internal functionality is activated and OpenEarable becomes controllable via our [Dashboard](https://github.com/OpenEarable/dashboard), via [EdgeML](https://edge-ml.org/), and via the BLE API.
