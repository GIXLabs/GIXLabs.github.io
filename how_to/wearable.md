---
title: Make Your First Wearable
layout: page
parent: How To
---

# Solderless breadboard
When you're starting a new electronics project, you should always* start with a solderless breadboard. These make wiring easy and are easily reconfigurable when you find you've made a mistake.

## Wire one component
Place your microcontroller in the solderless breadboard. Place one component in the breadboard and wire the appropriate pins. It can be helpful to follow a guide online for wiring your component. To find those, try searching for your component's name and "Arduino."

Use red wire for power (Vin, 3V3, and/or 5V) and black for ground. It's also wise to standardized your SDA and SCL colors. While none of these suggestions are required, they will make your circuit much easier to debug.

## Test one component code
Start by running an I2C scanner to see whether your sensor is connected to your microcontroller. You can copy and past the I2C scanner code from [here](https://playground.arduino.cc/Main/I2cScanner/). When you run this, one address (your sensor's) should show up in the Serial terminal.

Each sensor has a library that will need to be installed through the Arduino IDE. Tools > Manage Libraries > [Library name]. The library name should be findable from the tutorial you used to wire your component.

Once you have the library installed, it likely has example code you can find by clicking File > Examples in the Arduino IDE. Always start with sample code so you can isolate whether wiring was done correctly.

### Microcontrollers
- [SAMD21](https://learn.adafruit.com/adafruit-qt-py)
- [RP2040](https://learn.adafruit.com/adafruit-qt-py-2040)
- [ESP32](https://learn.adafruit.com/adafruit-qt-py-esp32-s3)

## Wire the rest, one at a time
Repeat this process for each of your components.

# Perfboard with female headers
Always start perfboard by wiring with female headers so you easily remove your expensive sensor and microcontroller components if you make a mistake.

## Clipping female headers
It looks ugly, but you should clip your female headers to the appropriate number of pins. The best way to do this is to cut the pin next to the last one you want to use. For example, if you want 4 pins, clip the row in the middle of the 5th pin.

![Image of clipping female headers](/assets/how_to/wearable/clip_fem.svg)

## Soldering wiring
For this you'll need solid core wiring from the wire cart.


## Test connections with multimeter


# Debugging
## "I can't flash code to my microcontroller, it doesn't show up in the Arduino IDE."
Make sure you have installed the board under the Board Manager. Check the getting started pages for your microcontroller (linked above).

## "I can flash code, but it says the sensor isn't connected"
First run the I2C scanner to see if your device is connected properly. If the I2C scanner doesn't find your device, you have a problem with wiring and should use a multimeter with the continuity setting to see whether all of the pins are connected properly.

Make sure you are testing with the example code first so you can isolate whether it is your wiring or your code.

## "I don't see the RP2040 port in the Arduino IDE."
The first time you flash code to the RP2040 you will need to put it into bootloader mode. To do this, hold the `boot` button, keep holding it, momentarily press the `reset` button, then release the `boot` button. The RP2040 should now show up as an option under the Tools menu.