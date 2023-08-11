---
title: Getting Started with Vector Graphics in Inkscape
layout: page
parent: How To
---

# Getting Started
For 2D design, we recommend the open source software Inkscape ([download here](https://inkscape.org/en/release/)). Any other vector graphics software (like Adobe Illustrator, CorelDRAW, Gravit.io, Affinity Designer, etc) will also work for our purposes.

We recommend you read through and watch the links in the Why Vector Graphics, Working with Shapes, and Creating Smooth Curve (Paths) sections here in that order. The rest of the page are references that you may find useful as you encounter challenges in your design. Please refer back to this page when you have questions (or Google it).

# Why Vector Graphics?
Most images you see are bitmaps (collections of pixels, also sometimes called raster images), which become pixellated when you zoom in. **Vector graphics don't**, you can zoom in as much as you want and a vector graphic won't become pixellated. Instead of being essentially an Excel spreadsheet with boxes colored in (bitmaps), vector graphics are collections of points (nodes), and curviture associated with those points (nodes), which are rendered using a bunch of math (which luckily you don't need to know).

Try zooming in on this image where the left side is a bitmap and the right is a vector.

![Try zooming in](/assets/how_to/rasterVsVector.svg)

This turns out to be really handy when creating images that may need to be scaled for different displays (phone, jumbotron, webpage, banners, swag, etc) and for telling a laser where to cut.

[This video](https://www.youtube.com/watch?v=pa6a7oz7vEE) shows a very quick overview of the features and uses of Inkscape. Please note that Inkscape recently updated its user interface, so many of the icons may look different, but they are still in the same place and do the same thing.

# Working with Shapes
Luckily, you do not need to work directly with complex paths or points most of the time. Inkscape has many basic shapes implemented, which you can add and subtract from each other to form more complicated shapes.

[This video](https://www.youtube.com/watch?v=2-EH-9GaUOs) walks through many of the features of different shapes, such as how to scale and round corners. It also covers how to add and subtract shapes using path commands like Union and Difference as well as how to group shapes together.

[Inkscape also has its own text-heavy tutorials on basic shapes.](https://inkscape.org/doc/tutorials/shapes/tutorial-shapes.html)

# Creating Smooth Curves (Paths)
Sometimes you will need to edit those paths (and nodes) directly to get exactly the result you want, such as when you are tracing an existing image or trying to create more organic shapes. Usually these involve the use of the Bezier pen.

[This video](https://www.youtube.com/watch?v=ABVLbqeZO6Q) gives a nice overview of the Bezier pen with some good exercises for practice.

[This video](https://www.youtube.com/watch?v=sagrkdmC_BI) shows how to use the Bezier pen to trace objects, which may be useful if you'd like to convert a hand sketch to a digital design. 

[This long video](https://www.youtube.com/watch?v=dVjJfx2oc5w) breaks down all of the details of editing nodes, including adding new nodes, creating curved sections, subtracting nodes, etc.

# Alignment and Positioning
Although you can place items on the page exactly where you want using the X and Y coordinates on the top bar, that's a bit painful. Inkscape has a couple of tools to help you place object relative to each other: the Align and Distribute window and Snaps.

[Align and Distribute](https://www.youtube.com/watch?v=MNgjZDkQW1w)
[Snaps](https://www.youtube.com/watch?v=tO8042mFRl8)

# Text to Path for Laser Cutting
To process text on a laser, you must convert it from a text block to a path. Select your text, then on the top bar Path > Object to Path. If you fail to do this, your text will not show up in the laser interface.

# Cropping in Inkscape
Cropping in Inkscape is called clipping. [This video](https://youtu.be/v-JxhF3D4No?t=10) will walk you through the basics of clipping. This can be paired with Make a Bitmap copy in the Edit tab to reduce the size of your file (if you delete the original). We use this in the Prototyping Lab when creating many of our tutorial resources to improve the load time of pages.

# Rounding Corners
[Rounding corners in Inkscape (only works on version 1.3+)](https://superuser.com/questions/640954/inkscape-rounding-corners-of-shapes)

Dimensioning (e.g. is your rectangle going to come out of the laser cutter the right size :) )

# Working with Layers
Layers allow you to lock or hide certain aspects of your design while you edit others. For example, when tracing a hand sketch you will want to lock your reference image so you don't accidentally move it around. When you finish tracing, you may want to hide that reference image, but not delete it. Layers can help with both of these issues.

[This video](https://www.youtube.com/watch?v=d2MO25zNYW8) walks through the use of layers. Note, the UI for Inkscape has improved since this video was made. The window shows up larger and also includes a list of the items in each layer.