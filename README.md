

Open **Developer Command Prompt** and run:

   
    cd C:\Program Files\Typhoon HIL Control Center 2025.1\compilers\windows\z7\gnu\arm\nt\bin
    
    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\machine_lut.c -o c:\Users\jmmau\workspace\usemac\typhoon\machine_lut\libmachinelut.o
    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\machine.c -o c:\Users\jmmau\workspace\usemac\typhoon\machine_lut\libmachine.o
    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\interpolations.c -o c:\Users\jmmau\workspace\usemac\typhoon\machine_lut\libinterpolations.o

    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\interpolations.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libinterpolations.o 
 
 ![alt text](image-4.png)

![alt text](image-3.png)

![alt text](image-5.png)

![alt text](image-6.png)# machine_lut

