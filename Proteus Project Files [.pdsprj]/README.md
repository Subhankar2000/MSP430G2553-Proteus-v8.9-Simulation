# How to set up CCS compiler for Proteus ?
## You can run simulations either by using CCS compiler in Proteus (firmware project) or you have to run ELF file by taking them from CCS( also modifying CCS compiler in the process) - (non-firmware project)

 I don't have enough time to give all instructions step by step, but you can set up CCS compiler and then clone my repository and after figuring out by yourself more can run simulations in proteus. Also for running Hardware UART programs, you have to modify the program to Software UART and compile and run them through HEX files. because the Hardware UART does not give out any signal. Also the bounce debounce such things don't apply here, So getting a lunchbox in hand is the best way.
 
 This is a software UART (modified program from original ): 
 ![Exp41_LunchBox_Introduction_to_Embedded_C-INO.png](https://github.com/Subhankar2000/MSP430G2553-Proteus-v8.9-Simulation/blob/master/blob/Exp41_LunchBox_Introduction_to_Embedded_C-INO.png)
 
 