---
title: Design Your First PCB
layout: page
parent: How To
---

# Your First PCB Using Fusion 360

We'll be designing a board to replicate one of the circuits from Sensors and Circuits, specifically the BJT timer circuit.

---

## Import schematic
Instead of starting from scratch, we can modify an existing schematic. Download the incomplete schematic from [here]() and add it to a Fusion electroncis design. 

## Add parts from library
Your schematic should look like this, but it is missing a resistor. We will use the internal parts library to find a resistor and place it in our schematic.

![Image of current schematic and future schematic]()

Click on the add part button.

![Add component in a box]()

On the left side of the screen there's a menu for placing components. First thing you should do is convert that menu into a tab so you can actually see what you are doing. Fusion makes it shamefully tiny and cramped by default.

![Gif showing how to setup the menu]()

Click on the drop down menu to select the `Resistor` library. Each component is comprised of two parts: a schematic symbol and a physical footprint. The schematic symbol is supposed to represent how the part theoretically looks, while the footprint is how the part actually looks on a board. You can make your own components by making the schematic symbol and footprint, but it is a tedious process and outside the scope of this tutorial. Select the R-US component and the 7.2mm pitch from the drop down menu. These are the schematic symbol and footprint, respectively. 

![Show clicking on footprints]()

Double-click on the component. You will notice that the component now shows up on your cursor in the main workspace. Left click to add the part to your schematic and press escape when you are done. If you are using a mouse, right click will allow you to rotate the part 90 degrees. ~~If you are using a trackpad, you should consider making better life choices.~~

### Connect parts
Once your part is placed, you will need to connect it to the other components with nets. On the top ribbon, select `Net`. Click on either end of the part, and click to start the net. Click on the other piece you wish to connect to finish the net.

![Show net button and clicking nets]()

### Create your board outline
By default, Fusion will create a rectangle for your board, but it is rather large. We can reduce the size by clicking and dragging or by changing the start and end points. Fusion also allows you to pull in a board outline from a 3D shape, but that is outside the scope of this tutorial. Note: there are two units most commonly used in PCB design: mm and mil. Those may seem like they are the same, but mm is millimeters and mil is milli-inches (machinists call them "thous").



### Place components
We will be making this board all on one side to simplify soldering. 

### Route traces
Since our components on the top, we will do all of our routing on the bottom of the board (blue). First, let's change the trace width to 40 mil.

Recommended trace width: 40 mil

### Export gerber files
Most PCB manufacturers use what are called gerber files. These are actually a zipped folder containing the geometry of each layer of your board (top copper, bottom copper, soldermask, silkscreen, drills, etc).
