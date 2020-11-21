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
 ### Also it is in - [README.md of Proteus Project Files .pdsprj folder](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/tree/master/Proteus%20Project%20Files%20%5B.pdsprj%5D)

 Also I will be keeping Fritzing Sketch Files for the actual wiring diagram of some selected projects.
 Fritzing Sketch [.fzz]

Thank You

```diff
+ If you have cloned this repository, make sure you do a "git pull origin master" as I update files weekly
+ and add new experiments as the NPTEL weeks unfold.
```

![Exp16_LunchBox_HelloLCDWithCustomCharacter-RUN](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp16_LunchBox_HelloLCDWithCustomCharacter-RUN.jpg?raw=true)


# How to set up CCS compiler for Proteus ?
## You can run simulations either by using CCS compiler in Proteus (firmware project) or you have to run ELF file by taking them from CCS( also modifying CCS compiler in the process) - (non-firmware project)

 I don't have enough time to give all instructions step by step, but you can set up CCS compiler and then clone my repository and after figuring out by yourself more can run simulations in proteus. Also for running Hardware UART programs, you have to modify the program to Software UART and compile and run them through HEX files. because the Hardware UART does not give out any signal. Also the bounce debounce such things don't apply here, So getting a lunchbox in hand is the best way.
 
 ### This is a software UART (modified program from original): 
 ![Exp41_LunchBox_Introduction_to_Embedded_C-INO.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp41_LunchBox_Introduction_to_Embedded_C-INO.png?raw=true)
 
 ### Another Hello world ( software UART -  (modified program from original)) :
 ![Exp01_LunchBox_UART_Template-INO.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp01_LunchBox_UART_Template-INO.png?raw=true)
  
 ### This is as per lecture video and using Embedded C code : 
 ![Exp05_LunchBox_DebouncingTheSwitch.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp05_LunchBox_DebouncingTheSwitch.png?raw=true)
 
#### For using the Repository and my project files, you need to have CCS installed and integrated into Proteus, then you can use my files, but the UART ones need more guide to run( currently I am not able to write that much documentation )

## A way to integrate CCS compiler with Proteus : 
(a not so detailed way of explanation)

+ Step 1 : find the CCS installation directory , go to it :

![1.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/1.png?raw=true)

+ Step 2 : open proteus and select new project, do next next and come to this window :

![2.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/2.png?raw=true)

+ Step 3 : then select compilers and then search for Code Composer for MSP430 : and enter like this with your proper path and drive letter : 

![3.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/3.png?raw=true)

if you have installed typically in c drive and version as per NPTEL lecture, then your path may be like this : C:\ti\ccs930\ccs\tools\compiler\ti-cgt-msp430_18.12.4.LTS

Then clone my repository and open the Proteus project files and work with them, for UART, I will have to give detail explanation, but other than that any program having non-serial functionality should work, and exceptions will always be there for not working, you will have to figure it out.

Hope this all helps and any one else trying out on proteus due to lack of hardware do contribute.

Thank You
# _____________________________________
## Week wise distribution of Simulations

### Week 7
+Exp00_LunchBox_Template

+Exp00_LunchBox_Template-ELF
![E0_0.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E0_0.png?raw=true)

+Exp01_LunchBox_UART_Template-INO
![E1C.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E1C.png?raw=true)

+Exp02_LunchBox_HelloLED

+Exp03_LunchBox_HelloBlink

+Exp04_LunchBox_HelloSwitch
![E4.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E4.png?raw=true)

+Exp05_LunchBox_DebouncingTheSwitch

+Exp06_LunchBox_HelloSwitch_PullDown

+Exp07_LunchBox_HelloSwitch_PullUp

+Exp41_LunchBox_Introduction_to_Embedded_C-INO
![Exp41_LunchBox_Introduction_to_Embedded_C-INO.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp41_LunchBox_Introduction_to_Embedded_C-INO.png?raw=true)
		

### Week 8
+Exp08_LunchBox_HelloClock
![E8.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E8.png?raw=true)

+Exp09_LunchBox_HelloResetSource-Not working (unknown fault)
![E9.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E9.png?raw=true)

+Exp10_LunchBox_HelloInterrupt

+Exp11_LunchBox_HelloInterrupt_Rising

+Exp12_LunchBox_HelloInterrupt_Falling
![E12.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E12.png?raw=true)

+Exp12_LunchBox_HelloInterrupt_Falling-Exercise.

+Exp12_LunchBox_HelloInterrupt-Rising_Falling-Exercise


### Week 9
+Exp13_LunchBox_HelloSSD-modified P1p2
![Exp13_LunchBox_HelloSSD-modified_P1p2.jpg](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp13_LunchBox_HelloSSD-modified_P1p2.jpg?raw=true)

+Exp14_LunchBox_HelloLPM
![E14.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E14.png?raw=true)

+Exp15_LunchBox_HelloLCD-P2 instead of P1
![E15.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E15.png?raw=true)

+Exp16_LunchBox_HelloLCDWithCustomCharacter-P2 instead of P1
![Exp16_LunchBox_HelloLCDWithCustomCharacter-RUN](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp16_LunchBox_HelloLCDWithCustomCharacter-RUN.jpg?raw=true)

+Exp17_LunchBox_HelloTimer
![E17.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E17.png?raw=true)


### Week 10
+Exp18_LunchBox_HelloSoftwarePWM_Large_Delay
![Exp18_LunchBox_HelloSoftwarePWM_Large_Delay](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp18_LunchBox_HelloSoftwarePWM_Large_Delay.jpg?raw=true)

+Exp18_LunchBox_HelloSoftwarePWM_Small_Delay
![Exp18_LunchBox_HelloSoftwarePWM_Small_Delay](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp18_LunchBox_HelloSoftwarePWM_Small_Delay.jpg?raw=true)

+Exp19_LunchBox_HelloHardwarePWM_8Bit-Not working (unknown fault)

+Exp20_LunchBox_HelloHardwarePWM_16Bit-Not working (unknown fault)

+Exp21_LunchBox_HelloADC-Not working (unknown fault)
![E21.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E21.png?raw=true)

+Exp22_LunchBox_HelloADC_LCD-Not working (unknown fault)
![E22.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E22.png?raw=true)

+Exp23_LunchBox_HelloADC_Internal_Temperature_Sensor
![E23O.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E23O.png?raw=true)

+Exp24_LunchBox_HelloLFSR_8Bit-P2 instead of P1
![E24O.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E24O.png?raw=true)

+Exp25_LunchBox_HelloLFSR_32Bit
![E25.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E25.png?raw=true)

+Exp26_LunchBox_HelloDAC_4Bit-P2 instead of P1
![E26.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E26.png?raw=true)
![E26O.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E26O.png?raw=true)		

+Exp26_LunchBox_HelloDAC_8Bit-P2 instead of P1
![E268.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E268.png?raw=true)
![E268O.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E268O.png?raw=true)

+Exp27_LunchBox_Lemon_Battery_LED_Blink
![E268P.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/E268P.png?raw=true)

+ Week 11
	* Exp28_LunchBox_HelloSerial
	* Exp29_LunchBox_HelloPeriod
	* Exp30_LunchBox_HelloFrequency
	* Exp31_LunchBox_SerialLog
	* Exp32_LunchBox_CharlieLog
	* Exp33_LunchBox_RefreshSSD_Sequential
	* Exp34_LunchBox_RefreshSSD_InterruptBased