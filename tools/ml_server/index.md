---
title: Machine Learning Server
layout: page
has_children: True
nav_order: 6
parent: Tools
---
# Server specs and info

* CPU: AMD Ryzen 5900X
* RAM: 8 X 32GB
* GPU: Nvidia RTX 4090 (so far the fastest GPU for machine learning...)
* 2TB SSD storage + 8TB HDD storage
* IP address: 10.155.234.141
* SSH port: 22

# What you can do with it:

* Hosting large datasets
* Training ML models with GPU
  * By PyTorch, Tensorflow, etc.
* Hosting your short-term app
  * For example, web scraping, cloud service for HW/SW project or launch (local net only)

# What you can’t do with it:

* Gaming (forbidden, and it’s Ubuntu Server OS)
* Long-term app deployment (please use Azure)
* Long-term model deployment (don’t leave your model in the GPU forever)

# How to use it?

Sending an email to [gixhelp@uw.edu](mailto:gixhelp@uw.edu), with the title starts with [ML Server User Add], with:

Your use case (either course project or personal project are fine, but please tell us your usage)

Your desired username

Your SSH public key ([what is this?](https://jumpcloud.com/blog/what-are-ssh-keys)). With this, you can log into your account without a password.

* Mac user: open terminal -> type ssh-keygen and hit enter until the keygen program ends -> type cat ~/.ssh/id_rsa.pub and hit enter -> copy the content
* For convenience and safety, we do not support password login.
* We’ll create detailed instructions on how to use it with VSCode Remove Server plugins

After each quarter, we will clean the users on the server. If you want to use it after the quarter, please let us know in advance (before the final week).
