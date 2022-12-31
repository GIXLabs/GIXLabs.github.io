---
title: Work with LiPo Batteries
layout: page
parent: How To
---

# When NOT to use LiPo Batteries
## You are at the low or medium fidelity stage of prototyping.
LiPo batteries are most valuable for their long battery life and small size. Neither of these are useful in the early prototyping stages because your primary unknown is whether your product has any value to users.

Battery life and size are both quality of life improvements once you have made something consumers want. Do not use LiPo batteries at the low or medium fidelity stage. The hassles of LiPo batteries are not worth it at this stage.

## You are not willing to be careful
LiPo batteries are both incredibly dangerous and fickle. Shorting them even a single time can result in a dead battery. Any puncture can turn your LiPo battery into fire.

# Dangers
## Puncture
Puncturing a LiPo battery means instantly starting a vigorous fire. [See this video for an example.](https://youtu.be/zHG_FEkZUsg?t=32) Usually punctures are not intentional, but are the result of the battery expanding into a sharp object (like a header) or being bumped by a screw.

## Shorting the Leads
Shorting, or connecting the positive and negative leads without any resistance, is bad for LiPo batteries. The short causes the battery to attempt to discharge more than it safely can at a time. For most batteries, this just triggers the overcurrent protection, which merely kills the battery rather than creating a safety risk.

There are many ways to accidentally short the leads.

### Clipping both leads at the same time
Wire snips are conductive and will create an electrical connection between positive and negative.
### Leaving the leads loose
If the leads are loose they are often accidentally connected when moved.
### Touching the soldering iron to both leads
Soldering irons and solder are conductive and will connect the two terminals.
### Attempting to charge or use a board with incorrect polarity
Many circuits are polarized, restricting the flow of electricity in one direction, but not in the other. If your connector is not polarized correctly, you can end up shorting the leads through the board. Always check that the red wire is going to + and the black to either - or GND.

# Needed Components
## Charging
Charging a LiPo battery is not as simple as hooking it up to a power supply. There are several phases of charging a LiPo battery, that depend on the current voltage of the battery and its overall capacity. Some of these phases are at constant-current and others at constant-voltage. You need a charger specifically designed to charge LiPo batteries.

## Voltage Regulation
LiPo batteries give out 3.7 V for the majority of their life (start at 4.2 V, then almost immediately drop to 3.7 V, then a steep drop at the end to 3.2 V). Your microcontroller probably does not take 3.7 V. Typically microcontrollers either want 5 V or 3.3 V.

Sometimes a microcontroller, like an ESP32, can be powered with 3.7 V on the 3.3 V pin, but you may end up with unexpected behavior (the worst kind to debug).


# References
[Adafruit guide to LiPo batteries](https://learn.adafruit.com/li-ion-and-lipoly-batteries/)
[Guide to LiPo batteries for RC enthusiasts](https://www.rogershobbycenter.com/lipoguide)