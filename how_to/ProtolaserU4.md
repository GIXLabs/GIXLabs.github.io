---
title: Printing Your PCB on Protolaser U4
layout: page
parent: How To
---

# Using the Protolaser U4 to Print Your PCB

This guide is designed to give you the basics needed to print your PCB (single or double sided) with the Protolaser U4

---

&nbsp;

### Step 0
Turn on the ProtoLaser using the button on the machine. The login info is on the crwresources github page only accessible to Crew.

Open CircuitPro from the desktop.

CircuitPro will initialize the machine, read the prompts and answer accurately. Usually it asks whether lights are on, which you should check. It also typically lets you know about maintenance. If you have not done the maintenance, notify staff, and select "Not Yet Performed."


### Step 1
----
Obtain Gerber Files for your PCB and put them on a USB. 

Refer to [the bottom of this tutorial](KiCad_Tutorial.md) to learn how to
export gerbers from KiCad.

### Step 2
---
Insert USB into USB dock connected to the Protolaser. 

In the CircuitPro program click on Create
New Document

![Image of CircuitPro with New Doc Highlighted](/assets/how_to/ProtolaserU4/NewDocument.svg)


### Step 3
---
 Choose the Template for your PCB, If doing single-sided choose single-sided bottom or single-sided top, depending on which side your traces are on. 
 
If doing you are double-sided choose double-sided NoTHP.

![Image of CircuitPro Template Choices](/assets/how_to/ProtolaserU4/Templates.svg)


### Step 4
---
The Material Settings window should pop open.

Machine Type should be PL U4, Material Type
FR4_1.70mm_Cu35_ElectroPlated. 

For material thickness, take calipers and determine the thickness of
the board you will be using and add 0.1mm. (Ex. For a board that is 1.7mm thick, enter 1.8mm)

![Image of Material Settings](/assets/how_to/ProtolaserU4/MaterialSettings.svg)


### Step 5
----
Click on the Import button

![Image of CircuitPro Import](/assets/how_to/ProtolaserU4/Import.svg)


### Step 6
---
Navigate to the folder on the USB that contains your Gerber and Drill Files.

If you got your Gerber files from Fusion 360 you are looking for a folder named CAMOutputs

![Image of CAMOutputs folder](/assets/how_to/ProtolaserU4/CAMOutputs.svg)


### Step 7
---
 Go into the GerberFiles Folder and select the copper_bottom, copper_top, and profile gerber files (ctrl + click to select multiple files). If your file was made using KiCAD, these will be named [your project name]-B_Cu.gbr, -F_Cu.gbr, and -Edge_Cuts.gbr.

 Once those three are selected, click Open.

 If you are doing a single-sided PCB you just need to select the side that has your design not both

 ![Image of Gerber Files](/assets/how_to/ProtolaserU4/GerberFiles.svg)


### Step 8
---
In the Import window, click on Add File in the bottom left corner.
  
When the file explorer window opens, click on the Up One Level button to get out of the GerberFiles folder and back into the
CAMOutputs Folder. 

Go into the DrillFiles Folder. Click on the drill file and click on Open.


![Image of Add File button](/assets/how_to/ProtolaserU4/AddFile.svg)


![Image of Up One Level Icon](/assets/how_to/ProtolaserU4/UpOneLevel.svg)


![Image of Drill Files](/assets/how_to/ProtolaserU4/DrillFiles.svg)


### Step 9
---

Now we must assign which layer each file represents. Most of the KiCad files will default to the correct Layer/Template, but it is good to double check them.
 
In the Import window under the Layer/Template column, for each file select the appropriate layer representation from the drop down
menu. 

(Copper_bottom or B_Cu is Bottom Layer, Copper_top or F_Cu is Top Layer, Profile or Edge_cuts is Board Outline, drill is Drill
Unplated)

![Image of Layer/Template Dropdown](/assets/how_to/ProtolaserU4/DropDown.svg)

![Image of Layer/Template Complete](/assets/how_to/ProtolaserU4/Layer_Template_Complete.svg)


### Step 10
---

Once you have finished assigning the layers, click on OK on the bottom right of the Import window. 

You should now be taken to the Layout screen and see your PCB on a grid with each layer in a different color.

![Image of the Board Layout](/assets/how_to/ProtolaserU4/Layout.svg)


### Step 11
---

Now we want to insert fiducials into our design.

On the top menu Click on Insert, at the bottom is the fiducial option, mouse over that and click on Fiducial. 

(For info on what Fiducials are: [Fiducial marker - Wikipedia](https://en.wikipedia.org/wiki/Fiducial_marker))

![Image of Fiducial Menu and Button](/assets/how_to/ProtolaserU4/Fiducial_Select.svg)


### Step 12
---

On the grid where your PCB is you can click to add your Fiducials. You can also type in
coordinates to add the Fiducials as well. There are more details to know if you are planning on [soldermasking](Protolaser_Solder_Mask.md) your board.

Add four fiducials that are close to your PCB.

![Image of Fiducials near the PCB](/assets/how_to/ProtolaserU4/Fiducial_Layout.svg)

It is okay if the red circles of the Fiducials slightly overlap the PCB. The white circles are the actual holes that will be drilled


### Step 13
---

Once you have finished placing your fiducials, hit the ESC key on the keyboard. 

Click on Toolpaths on the top menu and Select Compute All...

![Image of ToolPaths Select All button](/assets/how_to/ProtolaserU4/ToolPaths.svg)


### Step 14
---

Once CircuitPro has finished computing the ToolPaths click Close on the Computation Results window.

It is okay if there are warnings for Drill Plated and Cut Inside since we did not add layers for those.

![Image of Computation Results](/assets/how_to/ProtolaserU4/ComputationResults.svg)


### Step 15
---

Click on Processing on the top menu and select Placement...

![Image of Processing Placement... button](/assets/how_to/ProtolaserU4/Placement.svg)


### Step 16
---

You should now be moved to the Processing tab and the Placement window should pop open.

Move the Placement window if you cannot see your PCB. 

You can drag the PCB around to move it to
where you’d like; you can also enter coordinates in the Placement window for more precise placement (You will need to click Apply if you enter coordinates).

Press OK in the Placement window when you are finished placing your PCB.

![Image of Placement in Processing Tab](/assets/how_to/ProtolaserU4/PlacementLayout.svg)


### Step 17
---

We are now ready to load a board into the Protolaser. 

Take a board from the station across from the Protolaser. 

Gently rub the board with steel wool in the area that will have the PCB, if doing double-sided rub both sides.

![Image of Board with Steel Wool](/assets/how_to/ProtolaserU4/Board_SteelWool.svg)


### Step 18
---

Put the board into the Protolaser and tape down the four corners of the board. The tape should hold the board down firmly.

Make sure to try and center it as much as possible and close the hood after the board is placed.

![Image of board in Protolaser](/assets/how_to/ProtolaserU4/Board_Loaded.svg)


### Step 19
---

Back in CircuitPro in the Processing tab, turn on the pilot laser and double click on each fiducial.

For each fiducial make sure that the Pilot laser is on the copper board.

If for one Fiducial the pilot laser is
off the board, readjust the placement of the PCB on CircuitPro by repeating Step 16.

![Image of Board Layout and Pilot laser](/assets/how_to/ProtolaserU4/PilotLaser.svg)


### Step 20
---

We are now ready to start the Protolaser. 

Click on the Play button below the Camera tab.

![Image of Process Button](/assets/how_to/ProtolaserU4/Process.svg)

You should hear the vacuum turn on and the laser will begin processing the board. It starts with a 20 minute warm-up cycle for the laser which you shouldn't skip unless you just got done cutting another board.

Alternatively, you can choose where you want CircuitPro to start processing from.

On the left panel, under the Processing section, right-click where you would like to start from.

![Image of Process from here example](/assets/how_to/ProtolaserU4/ProcessFromHere.svg)

If you are doing a single sided PCB wait until the laser has
finished, then take out your PCB and go over it again with some steel wool to remove any copper stripsthat did not get fully removed. 

Carefully pop out the PCB from the board and you are finished. If you are doing a double-sided PCB continue to Step 21


### Step 21
---

If you are doing a double-sided PCB wait until the first layer is completed. 

When it is, take out the board and pop out the Fiducials.


Flip the board Up/Down to the other side.
(DO NOT flip it left/right) Another way to describe this is flip it towards yourself.

Clean any scorch marks around the Fiducial holes.

Place the board back into the Protolaser and tape the corners again. 

Click OK in CircuitPro to let it know that you have done this.

![Image of flip notification](/assets/how_to/ProtolaserU4/Flip.svg)

### Step 22

Circuit Pro will now try and find the fiducials for proper alignement.

For each fiducial it will search in a spiral manner. 

Once it has found the fiducial, you can update the position if the overlayed circle doesn’t match up well.

Click confirm for each fiducial when you are satisfied with the position. 

If Circuit Pro can't find the fiducials you can go into the Processing tab and click around each fiducial to try and find it and go back to the Camera tab to properly align it with the overlayed circle.

![Image of Fiducial in Camera tab](/assets/how_to/ProtolaserU4/FindFiducial.svg)


### Step 23
---

Once the Protolaser has finished, take out the board and rub the PCB area on both sides with steel wool to remove any copper that did not get fully ablated.

Carefully pop out the PCB from the board and you are finished. 