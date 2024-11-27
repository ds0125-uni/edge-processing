### open-earable-PlatformIO

The easiest way to compile and deploy the OpenEarable firmware is this [PlatformIO](https://platformio.org) wrapper firmware. 
Before you start, please make sure you have setup [PlatformIO for VSCode](https://platformio.org/install/ide?install=vscode).


You can then open this project to compile and deploy the OpenEarable firmware. It will be controllable via our [Dashboard](https://github.com/OpenEarable/dashboard), via [edge-ml](https://edge-ml.org/), and the BLE API.

> [!IMPORTANT]  
> Due to a bug in PlatformIO, [flashing the firmware with a platform version of 9.6.0 or newer results in the OpenEarable to crash and disappear as a USB device](https://github.com/platformio/platform-nordicnrf52/issues/175). Please use a version of 9.5.0 or older to flash the firmware. You can achieve this by adding `platform = nordicnrf52@9.5.0` to the `platformio.ini` file.