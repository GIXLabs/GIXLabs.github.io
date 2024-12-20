---
title: Make Your Own Nametag (KiCAD)
layout: page
parent: How To
---

[Download KiCad 8](https://www.kicad.org/download/) and install it.

Open KiCad and create a new project, name it something meaningful, like name_tag.

KiCad projects have at least two components: a schematic and a board. For most projects, you'll start by creating a circuit diagram in the schematic, then place the components and connect them in the board. For this project, we're just working with the board file. Double click to open it.

KiCad works in layers that tell PCB manufacturing companies how create your board. We'll be working with F.Cu, which is where the copper traces (wires) for the front of the board are placed, and Edge.Cuts, which is where the borders of your PCB are placed.

![Image highlighting layers](/assets/how_to/kicad_name/layers.svg)

Select the Edge.Cuts layer by clicking on it in the right panel. Select the rectangle tool on the right and click once somewhere in the main work area to place the top left corner of the rectangle.

Move your cursor until it says x = 90 mm and y = 35 mm. Click again to set the bottom right corner. KiCad is not like Fusion, so you'll need to move the edges to change the dimensions, not just update a dimension. You can also import a dxf to create the border, but that's for another time.

If you want to move the rectangle at any point, hover over the rectangle's edge and press M (for move).

Now for the text, click on the F.Cu layer to select it. Select the text tool from the right bar. Once you have selected the text tool, it will ask you what text you would like to put, how big, and what font. You'll be able to change this later, but start with what's suggested below (should probably use your own name though).

![Image of text tool](/assets/how_to/kicad_name/text.svg)

![Image of text dialog box](/assets/how_to/kicad_name/text_dialog.svg)

Click to place the text inside the border. Remember you can use the keyboard shortcut M to move it around.

You may need to resize your text. Hover over the text and press the keyboard shortcut E to open the properties back up (E for propErtiEs I guess?).

Export the gerber files to a new folder.