---
title: Designing PCBs with KiCad
layout: page
parent: How To
---

# Using KiCad to design and layout your PCBs

This guide os designed to walk you through the process of creating electronic schematics and laying out components for your PCBS using KiCad software. This guide will be using the LM317 voltage regulator (SOT223 package), resistors (0805), capacitors (0805), and an LED (0805). It is recommended to have the data sheets open for your components to know which package you are working with and to refer to the typical application circuit. Links to additional resources will be at the end of the tutorial.

---

## Schematic

The first part of this tutorial will cover how to do schematics. We will be replicating the schematic shown below.

![Image of Completed Schematic](/assets/how_to/KiCad_Tutorial/AllNets.svg)

### Step 1
---
Open KiCad on your computer. In the upper left corner of the KiCad program, click on File. In the File drop down menu click on New Project. 

![Image of new project in drop down menu](/assets/how_to/KiCad_Tutorial/FileDropDown.svg)


### Step 2
---
Navigate to the file path where you want to save your KiCad project. Give your project a name and then click Save.

![Image of creating a New Project](/assets/how_to/KiCad_Tutorial/NewProjectSave.svg)


### Step 3
---
Your new project should now appear on the left side panel of KiCad. We will be starting with the electronic schematic for our circuit. Double click on the schematic file for your project in the left side panel.

![Image of New Project Schematic File](/assets/how_to/KiCad_Tutorial/OpenSchematic.svg)

### Step 4
---
A schematic editor window should open. We will now add our first component to our schematic. On the menu at the top click on Place, and on the drop down menu click on Add Symbol. (Alternatively you can press A on your keyboard)

![Image of Adding a Symbol](/assets/how_to/KiCad_Tutorial/AddSymbol.svg)

### Step 5
---
The Choose Symbol window should open (it might take a little while while it is loading libraries). The first component that we will be adding is the LM317 regulator. In the filter text box type in LM317. We are using the LM317 with the SOT-223 package so that will be the option we choose. Once you have selected the correct component, click Okay.

![Image of searching for LM317 in the Choose Symbol Window](/assets/how_to/KiCad_Tutorial/ChooseLM317.svg)


### Step 6
---

We can now place the component on the schematic. Click anywhere within the border of the schematic to place your component. If you end up not liking where you placed your component you can always move it later by click on the component and dragging it to the desired location. To stop adding components when you click in the schematic, press the Esc key on your keyboard.

![Image of LM317 placed in the schematic](/assets/how_to/KiCad_Tutorial/PlaceLM317.svg)

### Step 7
---

We will now add the resistors required for this circuit. Again, go click on Place on the menu at the top and click on Add Symbol (or press A). In the filter dialogue box type in R and be sure that Resistor is selected. Click on Okay and place your resistor in the schematic.

![Image of selecting a Resistor](/assets/how_to/KiCad_Tutorial/ChooseResistor.svg)

![Image of First Resistor placement](/assets/how_to/KiCad_Tutorial/FirstResistor.svg)


### Step 8
---
We need to ensure that we are using the correct size resistor in our schematic. To do this we select the resistor we placed and press E on the keyboard or double clicking on the component (Be sure you have pressed Esc to stop adding components). The Symbol Properties window should open, click on the Footprint Dialogue box and then click on the Three lines icon that appears in it.

![Image of Symbol Properties for Resistor](/assets/how_to/KiCad_Tutorial/ResistorFootprint.svg)


The Footprint Library Browser window should now open. In the left Filter dialogue box we want to type in resistor and select Resistor_SMD since we will be using surface mount resistors in this circuit. In the right Filter dialogue box we want to type 0805 since that is the size of resistor we will be using. Make sure to select the Hand Solder option. Double click it that option, the Footprint Library Browser window should close. In the Symbol Properties window, the Footprint property should now have the package size you selected.

![Image of selecting resistor footprint](/assets/how_to/KiCad_Tutorial/ChoosingResistorFootprint.svg)

![Image of Footprint box Filled](/assets/how_to/KiCad_Tutorial/FootprintFilled.svg)

### Step 9
---
Our schematic still requires two more resistors, one of which is rotated. Add two more resistors to the schematic using the methods described above. To rotate a component clockwise, select it and press R on the keyboard. (You can also rotate by right clicking after selecting the component and clicking either rotate option in the dropdown menu that appears)


![Image of rotated resistor](/assets/how_to/KiCad_Tutorial/RotatedResistor.svg)

### Step 10
---
We now want to add two capacitors to our schematic with values of 1 uF for both. Add the capacitors to the schematic(Type in C in the filter dialogue box). Go into the symbol properties as shown previously. In the Value box type in 1 uF and click OK. Lastly, we want to make sure that these capacitors are the 0805 package and we do that the same way we did for the resistors in Step 8. Type in Capacitor in the left dialogue box instead of resistor.

![Image of changing Value of Cap.](/assets/how_to/KiCad_Tutorial/ChangingValue.svg)

![Image of Caps placed](/assets/how_to/KiCad_Tutorial/CapsPlaced.svg)


### Step 11
---
We now want to add our last three components : Voltage, Ground, and the LED. When adding the symbols search for VDC, GND, and LED for the respective components. The LED will need to be rotated and be sure to have it in the correct orientation as diodes only allow current to flow in one direction. Change the package size of the LED to 0805.

![Image of All Components. Placed](/assets/how_to/KiCad_Tutorial/AllComponents.svg)


### Step 12
---
The last step for this schematic is to net all of the components together. Click on the circle at the end of the leads of one of the components to the circle at the end of another component or to a net. Continue connecting the components until you have finished your schematic. Save your schematic when completed.

![First Net Connected](/assets/how_to/KiCad_Tutorial/FirstNet.svg)

![All Nets Connected](/assets/how_to/KiCad_Tutorial/AllNets.svg)


## PCB Layout

The second part of this tutorial will be going into the PCB layout of the schematic that was completed in the first half of the tutorial. The completed layout is shown below.



### Step 1
---
In the main KiCad Window in the left panel double click on your project's PCB file.

![Image of opening PCB File](/assets/how_to/KiCad_Tutorial/PCBSelect.svg)

When the PCB Editor Window opens we want to import the components from our schematic. To do this, click on Tools on the top menu and select Update PCB from Schematic (or press F8 on your keyboard).

![Image of Update PCB](/assets/how_to/KiCad_Tutorial/UpdatePCB.svg)

In the window that pops up click on Update PCB and the components used in your schematic should appear in the PCB Editor.

![Image of Update PCB](/assets/how_to/KiCad_Tutorial/PCBUpdate.svg)

PCBs are manufactured using imperial units so we want to switch the units being used. To do this we click on the in. button on the left side of the PCB editor window.

![Image of Selecting Imperial units](/assets/how_to/KiCad_Tutorial/ImperialSelect.svg)


### Step 2
---
Now that we have our components showing, we can start placing them. You will notice that there a bunch of lines going between all of the components. Collectively these lines are known as a rat's nest, and a single line is called an airwire. These lines tell us which components are connected and will require a trace.

![Image of PCB Components](/assets/how_to/KiCad_Tutorial/PCBComponents.svg)


To move a component you can click on the pink border and drag the component to where you want it to be placed. Alternatively, you can have your cursor over a component and Press the M key on your keyboard. You can also rotate components by right clicking them and selecting rotate or by having your cursor over a component and pressing R.  
  
The objective when doing your layout is to have as little of the airwires crisscross. 

![Image of PCB Components](/assets/how_to/KiCad_Tutorial/PCBLayout.svg)

Move and rotate your components so that the airwires are no longer crisscrossing similar to the image above.


### Step 3
---
Once you have finished placing your components, you can begin routing the traces. This can be done by pressing the routing button on the left panel or by pressing X on your keyboard. Click on the pad of one component to start the trace, and move your cursor and click on the pad of another component to finish the trace.

![Image of First Trace](/assets/how_to/KiCad_Tutorial/FirstTrace.svg)


### Step 4
---
Now finish connecting all of the traces.

![Image of Completed Traces](/assets/how_to/KiCad_Tutorial/AllTraces.svg)


### Step 5
---
Next we want to complete the outline for the board. First, on the left-side panel click on the Edge Cuts layer to select it. Next, click on the Draw a Rectangle button. Click on the layout where you want the starting corner of your board and draw a rectangle around your components. You are not restricted by using a rectangle and can use a variety of the drawing features to make whatever shape you want.

![Image of Board Outline](/assets/how_to/KiCad_Tutorial/BoardOutline.svg)

### Step 6
---

With the board layout now complete, we can now export the files necessary to have the PCB manufactured. Click on File in the top right corner, mouse over Fabrication Outputs and select Gerbers.

![Image of Gerber selection](/assets/how_to/KiCad_Tutorial/Gerbers.svg)

In the Plot window that pops up first select the output directory you want your gerber and drill files saved. Next, in the bottom right of the window click on Generate Drill Files. In the window that pops up click on Generate drill files at the bottom. Close the Generate Drill Files window and in the Plot window click on the Plot button at the bottom. Check to see if the files have been saved in the location that you chose.

![Image of Gerbers Window](/assets/how_to/KiCad_Tutorial/GenerateGerbers.svg)



## Useful Links

This tutorial did not cover much of what can be done within KiCAD such as planes, trace widths, DRC, etc. There are many resources available online for more in depth information on these topics.  
  
Some useful links are posted below:  
[Digikey Youtube Series](https://www.youtube.com/watch?v=vaCVh2SAZY4&list=PL3bNyZYHcRSUhUXUt51W6nKvxx2ORvUQB)  
  
[PlumPlot Youtube Series](https://www.youtube.com/watch?v=BAUW5J5W2j8&list=PLZNH6jlLeFXsg9ohRMbJ0qqSfUrRyAn7b)  
  
[KiCAD Resource Page](https://www.kicad.org/help/learning-resources/)





