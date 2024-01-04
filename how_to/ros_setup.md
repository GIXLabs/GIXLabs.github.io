# Install Ubuntu 20.04.6 LTS
Robotics Lab 1 (TECHIN516) uses ROS Noetic, which requires an installation of Ubuntu 20.04.6 LTS.
1. Best case: Dual boot
1. Backup: Virtual machine

## Mac
Virtual machine is your only option.
[Link to Maason doc]

## PC
- If NVidia graphics card
    - Do not dual boot, use VirtualBox [add link]
- Else 
    - Check whether you have BitLocker on and turn it off.
    - Plug boot drive into computer
    - Look up what button you usually need to press to get into boot mode on your laptop model.
    - Reboot. On reboot you will need to press that button when the logo shows on your screen.
    - Plug in USB drive with boot media.
    - Find the option for your boot drive and choose the one that says Ubuntu (there may be more characters, that's ok).
    - Minimal installation.
    - Install along side Windows Boot Manager. DANGER, you can erase your main OS if you aren't careful here.

# Install ROS Noetic
- Open a terminal in Ubuntu
- Follow the instructions [here](https://wiki.ros.org/noetic/Installation/Ubuntu). A lot of these lines won't make sense, but that's ok. Many are setup commands that you will not need to run again and aren't useful to understand.
