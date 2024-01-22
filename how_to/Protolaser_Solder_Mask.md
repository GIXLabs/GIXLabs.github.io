---
title: Printing PCB with Solder mask (Resin)
layout: page
parent: How To
---

# Using the Protolaser U4 to Print Your PCB with Solder Mask (UV Resin method)

This guide is designed to walk you through the process of printing PCB with a solder mask with the Protolaser U4. It is recommended to have printed at least one double-sided PCB with the Protolaser U4, as much of the process is similar. Tutorial for that can be found [here](https://github.com/GIXLabs/GIXLabs.github.io/blob/main/how_to/ProtolaserU4.md)

---

&nbsp;


### Step 1
----
Follow steps 1-10 on the ProtolaserU4 [Tutorial](https://github.com/GIXLabs/GIXLabs.github.io/blob/main/how_to/ProtolaserU4.md)

### Step 2
---
Insert Fiducials to your design. **MAKE SURE** to document the coordinates that you place your four fiducials.
It is **imperative** to know where you have placed them.

On the top menu click on Insert, at the bottom of the drop down menu is the fiducial option.
Mouse over that and click on Fiducial.

On the Layout tab where your PCB is on the grid you can click where you want your fiducials to be, or you can type in the coordinates where you want them to be (this is recommended).

You will want four fiducials for your design. Hit Esc on the keyboard when you have finished placing them.




### Step 3
---
 On the top menu click on Toolpaths and on the drop down menu select Compute all...

 Once CircuitPro has finished computing, click Close on the Computation Results window.

### Step 4
---
On the top menu click on Processing and on the drop down menu click on Placement...

### Step 5
----
You should now be moved to the Processing tab of CircuitPro.
Move the Placement window if it is obtructing your view of the PCB.

Move the PCB by either dragging it to where you want or by typing in coordinates in the Placement window and clicking on apply at the bottom (recommended).

**Make sure** to also document the coordinates where you have placed the PCB.

You can now load a board into the Protolaser. Make sure to have rubbed it with steel wool and tape down the four corners after loading.

### Step 6
---
Back in CircuitPro, in the Processing tab, turn on the pilot laser and double click on each fiducial and check if the laser is on the board. 

If it isn't readjust the position of your PCB.

On the left panel of CircuitPro, right click on Contour and on the drop down menu click on delete.
Do the same for Drill.

We don't want the resin going into the contour or drill which is why we are removing them and will go back and do them once the solder mask has been applied.




### Step 7
---
 Once contour and drills have been removed we can start the printing by either pressing the Play button or by right clicking the first layer under the Processing section on the left panel.

 Once the Protolaser has finished printing the PCB, take the board out and go to the station across from the Reflow oven and Multipress machine.


 ### Step 8
---
At this station are the tools and materials necessary for applying the solder mask to the board.

Make sure to put some gloves on (There should be a box at the station. If they are too big there are more right outside the PCB lab.)

At the station should be Kraft Paper to catch any mess from the resin. If there isn't any get some more by the Glowforges in the Prototyping Lab.

Place your board on the Kraft paper and take a syringe of solder mask resin. The green solder mask is recommended for your first time as it is the most translucent and easiest to work with.

Dispense some resin on your PCB, the amount you dispense is based on the size of your PCB.
Generally, a line across the PCB will be sufficient.


### Step 9
---

Take a transparency sheet (There should be a box of them at the station) and place it over your PCB/resin.

Now you want to thinly spread out the resin to cover your PCB. 
There should be a plastic card at the station to aid you with this, but you can use what you like to get this accomplished. 

Use the card to spread out the resin under the transparency sheet.

Make sure there aren't any air bubbles while you are spreading out the resin.

Ideally, you want the layer of resin covering your PCB to be about .1-.2mm thick, but this isn't possible to tell so use your best judgement.


### Step 10
---

With the transparency sheet still over the PCB and the resin thinly spread out, take the UV light source (either the domed one or the flashlight) and put it over the PCB and turn it on. 

How thick you applied the resin will determine how long the resin needs to be cured. Generally, 2-4 minutes should be enough to harden the resin. If you have a PCB that is larger than the light source, you will have to cure it in sections.

Once you have finished curing the resin on the PCB, carefully peel off the transparency sheet. IF the resin did not cure properly, it will stick to the transparency or still be a liquid. In that case, use Alcohol and paper towels (Also at the station) to clean up as much as possible and repeat steps 8-10.

If you are doing a double sided PCB you will want to do steps 8-10 on both sides.


### Step 11
---

Once you have successfully applied the solder mask resin to your PCB, take a pin or toothpick and remove any resin in the fiducial holes. If solder mask resin cured around the holes, carefully scrape it off.

Place the board back into the Protolaser, with whichever side was printed first facing up.

Don't forget to tape down the corners of the board.


### Step 12
---

In CircuitPro create a new project. For the template pick Solder Mask at the bottom.

For material pick solder mask (removal) and for material thickness add .2-.4mm to the thickness you used previously to cut the board. 

### Step 13
---

Click on the import button and go to the folder with your gerber files. 
The file(s) you want to select are the solder mask ones. 

If you are doing double sided it will be both top and bottom. 
If you are doing single sided it will be the side that you have your components on.


### Step 14
---
Once you have imported the solder mask gerber files you will want to insert fiducials in the same coordinates as you did before.

Once you have added the fiducials calculate the toolpaths again.
Then, place your PCB in the same place as you did when printing it. 

You can now click the Play button to begin the solder mask removal. 

The Protolaser will begin by searching for the fiducials, and will ask you to confirm the position of each one. 

If the Protolaser cannot find the fiducials you will have to manually look for them by moving the camera around, which can be done by double clicking in the camera view or in the Processing tab of CircuitPro.


### Step 15
---

Once the Protolaser has finished check the PCB to see if the solder mask has been completely removed in the areas it was ablated. If not, run the board through the solder mask removal process again.

Now we want to cut the border of the PCB and drill the holes.

Place the board back into the Protolaser and tape down the corners.

In CircuitPro, create a new project with the template being either single sided top or bottom consistent with which side of the board is facing up in the Protolaser.

For material, use the original settings you used when first printing out the PCB. Make sure to change the material from solder mask back to FR4/Copper.


### Step 16
---

Import the board outline gerber file and the drill file for your PCB.
Insert Fiducials in the same spot as the previous times and calculate the toolpaths.
Place the PCB in the same spot as the previous times.


### Step 17
---
On the left panel of CircuitPro, right click on whichever layer is shown and click on add work package.
Right click on the newly added package and mouse over set WID and click on ReadFiducials in the drop down menu. You can also rename the new package if you would like.

If the new package is not at the top of the list of the layer drop down, drag it so that it is.

Once you have done that you can press the Play button and the Protolaser will go through the process of finding the fiducials again.

When the fiducials have been identified, it will begin the process of drilling the holes and cutting the edges of the PCB.

Once the Protolaser has finished take out the board and carefully remove the PCB from it.

You have now successfully made a PCB with solder mask.


