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
Each sensor has a library that will need to be installed through the Arduino IDE. Tools > Manage Libraries > [Library name]. The library name should be findable from the tutorial you used to wire your component.

Once you have the library installed, it likely has example code you can find by clicking File > Examples in the Arduino IDE. Always start with sample code so you can isolate whether wiring was done correctly.

### Microcontrollers
[SAMD21](https://learn.adafruit.com/adafruit-qt-py)
[RP2040](https://learn.adafruit.com/adafruit-qt-py-2040)
[ESP32](https://learn.adafruit.com/adafruit-qt-py-esp32-s3)

## Wire the rest, one at a time
Repeat this process for each of your components.

# Perfboard with female headers

## Clipping female headers
It looks ugly, but you should clip your female headers to the appropriate number of pins. The best way to do this is to cut the pin next to the last one you want to use. For example, if you want 4 pins, clip the row in the middle of the 5th pin.

## Soldering wiring
For this you'll need solid core wiring

## Test connections with multimeter

# Debugging
