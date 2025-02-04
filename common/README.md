### Discription:
The common folder consists of all resources that are used in multiple repos. These documents are generally generic to the devices and software used by all groups.

### Directory Structure:
common                      <!-- files shared or relevant to all groups -->
    |-- devices             <!-- fpgas, ICs and other hardware specs and datasheets -->
        |-- fpga_7series 
            |-- kc705
            |-- vc709
    |-- tutorials           <!-- software, hardware and tools intro and comprehensive tutorials -->
        |-- modelsim
        |-- vivado
        
        
### Remote access to computing resources - Nautilus
*Last Update - Feb 15, 2024 by Pranav*

For any general computing requirements with GPUs, [JupyterHub](https://jupyterhub-west.nrp-nautilus.io) can be used.

Steps to sign-in to JupyterHub:
 - Click on CILogin
 - University of Washington can be selected as identity provider
 - Use the UW SSO to login
 - Configure the compute requirements and start
 
 
For access to a Xilinx licensed server with access to FPGAs, [Coder](https://coder.nrp-nautilus.io/login) can be used.
 
Steps to get access to coder:
 - Only users added to coder will be able to sign-in and use the platform.
 - Get access to coder by providing your **campus email** to one of the admins on [Element](https://element.nrp-nautilus.io/#/welcome). Username - jjgraham(UCSD) is one of the admins. You can post a message on the support channel with a message that rougly looks like this "I'm a student at XYZ and my campus email is name@uni.edu. Maybe a small description of your need for coder. Can you please add me to coder?". Doesn't need to be too formal.
 - Sign in to [Coder](https://coder.nrp-nautilus.io/login) using **OpenID Connect**
 - You can use "Create a new workspace from a Template." and "U55C FPGA Vitis Workflow" to get started.
 - Please ensure the workspace configuration parameters like (Memory, Storage etc) are configured according to your needs. It would not be possible to edit these once the workspace is created.
 - The Xilinx tools can be found in the path: "/tools/Xilinx"
 - If you need any other version of the tool, you can install in your home directory which is persistent storage.
 
If you face any issues, you can reach out to the admins on [Element](https://element.nrp-nautilus.io/#/welcome).


### Remote access to the computer in ECE 307-J
*Last Update - Feb 19, 2024 by Pranav*

The first step is to ensure the computer near the whiteboard in ECE 307J is powered ON and the ethernet is plugged in. 

**If you're not on campus, before getting started you'll need to connect to UW's VPN - [Husky OnNet](https://itconnect.uw.edu/tools-services-support/networks-connectivity/husky-onnet/installing-configuring-and-using-husky-onnet/)**

To access the computer through command line interface:

 - Open the terminal in your computer
 - Run "ssh user@dhcp196-246.ece.uw.edu" and enter the password for the computer
 - If you don't know the password, reach out to Geoff(geoffhjones@msn.com) or Scott(hauck@uw.edu).
 
To access the computer through graphical user interface:

 - Open the terminal in your computer
 - Run "ssh -v -C -L 5901:localhost:5901 user@dhcp196-246.ece.uw.edu" and enter the password for the computer.
 - If you don't know the password, reach out to Geoff(geoffhjones@msn.com) or Scott(hauck@uw.edu).
 - Use a VNC software like Tiger VNC and connect to the server "localhost:5901"
