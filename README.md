# MSP430G2553 + Proteus v8.9 [.pdsprj]
# Texas Instrument’s MSP430G2553 microcontroller Proteus Design Suite Simulation Project
 The Proteus design files .pdsprj contains the necessary schematic and code( be it in .C or .HEX or .ELF ) and just after keeping some folders and files in one place, these Project files can simply be opened by Proteus Design Suite 8.9 or later or earlier and the simulation can be run. 
 
 The example .C programs are borrowed from a NPTEL course <Introduction to Embedded System Design> (https://onlinecourses.nptel.ac.in/noc20_ee98/course) and their Git repository (https://github.com/ticepd/EmbSysDesign_NPTEL_Course) . Also there is a kit on which these all programs are focused on (https://lunchbox.sincgrid.com/docs/build/html/index.html) and all credits goes to them for creating these all.  Also this is an unofficial repository only I am maintaining for the Proteus Simulation and .INO and .HEX , .ELF files. They have taught the whole course and programs in detail by using a kit (https://store.sincgrid.com/index.php?route=product/product&product_id=109&search=MSP430) 
 
 But I am making all the hardware in Proteus Design Suite 8.9 and making all necessary adaptations, modifications and translations to run the same way as it would have been by having a hardware in hand. 
 Lastly for running everything you must have a Windows PC, Proteus Design Suite 8.9 or any version from 8.7 to latest 8.10, Texas Instrument’s Code Composer Studio v9 or later, best would be v9.3 (compiler version: TI v18.12.4.LTS), Energia IDE 1.8.10E23. Basically for running and developing you would need everything except for the hardware, extra you would need is Proteus Design Suite v8.9. 
 
 I have made the schematics and configuration for Proteus Project Files and have made necessary changes to codes of Embedded C, so that it can run software UART and be compiled using Energia IDE, because hardware UART on Proteus for MSP430G2x53, MSP430G2x13 does not work. So I have made all to software UART.

 https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation

 There is a need for detailed instructions for where to keep files and locate them, so as to run Proteus Simulations. Currently I have no time for that, If you are in urgent need of detailed instructions, mail me at subhu990@gmail.com.
 
 ## However I have provided some sort of instruction below ! Do have a Look !
 ### Also it is in - [README.md of Proteus Project Files [.pdsprj] folder](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/tree/master/Proteus%20Project%20Files%20%5B.pdsprj%5D)

 Also I will be keeping Fritzing Sketch Files for the actual wiring diagram of some selected projects.
 Fritzing Sketch [.fzz]

Thank You

```diff
+ If you have cloned this repository, make sure you do a "git pull origin master" as I update files weekly
+ and add new experiments as the NPTEL weeks unfold.
```

![Exp16_LunchBox_HelloLCDWithCustomCharacter-RUN](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp16_LunchBox_HelloLCDWithCustomCharacter-RUN.jpg)


# How to set up CCS compiler for Proteus ?
## You can run simulations either by using CCS compiler in Proteus (firmware project) or you have to run ELF file by taking them from CCS( also modifying CCS compiler in the process) - (non-firmware project)

 I don't have enough time to give all instructions step by step, but you can set up CCS compiler and then clone my repository and after figuring out by yourself more can run simulations in proteus. Also for running Hardware UART programs, you have to modify the program to Software UART and compile and run them through HEX files. because the Hardware UART does not give out any signal. Also the bounce debounce such things don't apply here, So getting a lunchbox in hand is the best way.
 
 ### This is a software UART (modified program from original ): 
 ![Exp41_LunchBox_Introduction_to_Embedded_C-INO.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp41_LunchBox_Introduction_to_Embedded_C-INO.png)
 
 ### Another Hello world ( software UART -  (modified program from original ) ) :
 ![Exp01_LunchBox_UART_Template-INO.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp01_LunchBox_UART_Template-INO.png)
  
 ### This is as per lecture video and using Embedded C code : 
 ![Exp05_LunchBox_DebouncingTheSwitch.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp05_LunchBox_DebouncingTheSwitch.png)
 
#### For using the Repository and my project files, you need to have CCS installed and integrated into Proteus, then you can use my files, but the UART ones need more guide to run( currently I am not able to write that much documentation )

## A way to integrate CCS compiler with Proteus : 
(a not so detailed way of explanation)

+ Step 1 : find the CCS installation directory , go to it :

![1.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/1.png)

+ Step 2 : open proteus and select new project, do next next and come to this window :

![2.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/2.png)

+ Step 3 : then select compilers and then search for Code Composer for MSP430 : and enter like this with your proper path and drive letter : 

![3.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/3.png)

if you have installed typically in c drive and version as per NPTEL lecture, then your path may be like this : C:\ti\ccs930\ccs\tools\compiler\ti-cgt-msp430_18.12.4.LTS

Then clone my repository and open the Proteus project files and work with them, for UART, I will have to give detail explanation, but other than that any program having non-serial functionality should work, and exceptions will always be there for not working, you will have to figure it out.

Hope this all helps and any one else trying out on proteus due to lack of hardware do contribute.

Thank You