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

## Shorting the Leads
### Clipping both leads at the same time
### Leaving the leads loose
### Touching the soldering iron to both leads
### Attempting to charge or use a board with incorrect polarity

# Needed Components
## Charging
## Voltage Regulation
LiPo batteries give out 3.7 V for the majority of their life (start at 4.2 V, then almost immediately drop to 3.7 V, then a steep drop at the end to 3.2 V). Your microcontroller probably does not take 3.7 V. Typically microcontrollers either want 5 V or 3.3 V.

Sometimes a microcontroller, like an ESP32, can be powered with 3.7 V on the 3.3 V pin, but you may end up with unexpected behavior (the worst kind to debug).