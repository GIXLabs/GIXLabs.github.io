---
title: Installing Ubuntu and ROS for Robotics Lab 1
layout: page
parent: How To
---

# Install Ubuntu 20.04.6 LTS
Robotics Lab 1 (TECHIN516) uses ROS Noetic, which requires an installation of Ubuntu 20.04.6 LTS.
1. Best case: Dual boot
1. Backup: Virtual machine

## Mac
Virtual machine is your only option. [Here's a link to a great tutorial by Maason.](https://uwnetid.sharepoint.com/:w:/r/sites/gix/Shared%20Documents/Shared%20Externally/Shared%20with%20Student%20IT%20Employees/Course%20Resources/TECHIN%20514%20-%20Hardware%20%26%20Software%20Lab%20-%20Robotics/Installing%20a%20Linux%20VM%20on%20Mac%20M1%20Guide.docx?d=w6db6355a2f2840c39c424867cd2c891a&csf=1&web=1&e=bVffSS)

## PC
- If NVIDIA graphics card (search for Device Manager in Start menu and look under Display Adapters)
    - Do not dual boot, use [VirtualBox](https://www.virtualbox.org/wiki/Downloads). Detailed installation instructions [here](https://linuxhint.com/install_ubuntu_virtualbox_2004/). Members of the Prototyping Lab staff have USB drives with the disk image already downloaded.
- Else 
    - Check whether you have BitLocker on and turn it off. [Instructions for turning off BitLocker.](https://www.wikihow.com/Turn-Off-BitLocker)
    - Plug boot drive into computer
    - Look up what button you usually need to press to get into boot mode on your laptop model. Try Googling: "Entering boot mode on [your laptop model here]"
    - Plug in USB drive with boot media.
    - Reboot. On reboot you will need to press that button when the logo shows on your screen.
    - Find the option for your boot drive and choose the one that says Ubuntu (there may be more characters, that's ok).
    - Choose Install Ubuntu 20.04.6 LTS.
    - Minimal installation.
    - Install along side Windows Boot Manager. DANGER, you can erase your main OS if you aren't careful here.

# Install ROS Noetic
- Open a terminal in Ubuntu.
- Follow the instructions [here](https://wiki.ros.org/noetic/Installation/Ubuntu). A lot of these lines won't make sense, but that's ok. Many are setup commands that you will not need to run again and aren't useful to understand.

# Learn ROS
- [ROS tutorials.](https://wiki.ros.org/ROS/Tutorials)
