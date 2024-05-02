# Process
1. Turn on tool and computer next to the tool.
1. Open the software.
1. Set to RML mode if using SRP, NC_CODE if using a toolpath made in Fusion 360.
    1. The tool will automatically home each axis.
1. Find the center of rotation using the test jig.
    1. You'll first need to attach the clip to the post.
    1. The rod cannot have any of the metal part touching the jaws of the chuck.
        1. If it does, you will get a "tool checker can't be found" error.
    1. Attach the clip to the rod when prompted.
    1. When the prompt asks you to rotate the axis by hand, ignore it, the machine rotates it automatically.
    1. Remove the clip and rod from the chuck.
1. Set the y and z origin to the center of rotation using the Base Point menu.
    1. The software may prompt you to attach the clip to the post again. Do what it says.
1. Open SRP and open your stl model.
1. Rotate your part, aligning the x axis with the long axis of your part.
1. Set your stock size.
    1. Note: your stock will need to be bigger than the model you hope to cut by a decent margin. SRP will throw errors if you have made the stock too small and won't let you continue.
1. Select the options that correspond to your situation (optimize for surface finish vs speed, curvature, etc)
1. Add tabs.
1. Make sure the tools in the tool library correspond to the ones you have in the automated tool changer.
1. Calculate toolpaths.
1. Run the cut.



# Limitations
At the moment we are using the SRP software provided by Roland to handle toolpaths. This means you can't just cut a pocket on an existing piece of material, you have to cut the entire part.

Locating the center of rotation does not automatically set the y and z origins to the center of rotations.

The x origin should be on the left-most side of the material.

Creating toolpaths in Fusion 360 using the 4th axis requires a well defined machine, which has not been completed yet. If you aren't using the 4th axis, 