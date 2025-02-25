

Open **Developer Command Prompt** and run:

   
    cd C:\Program Files\Typhoon HIL Control Center 2025.1\compilers\windows\z7\gnu\arm\nt\bin
    
    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\machine_lut.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libmachinelut_a9.o
    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\machine.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libmachine_a9.o
    arm-xilinx-eabi-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\interpolations.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libinterpolations_a9.o
    arm-xilinx-eabi-ar  rcs c:\Users\jmmau\workspace\usemac\machine_lut\libmachinelut_a9.a c:\Users\jmmau\workspace\usemac\machine_lut\libmachinelut_a9.o c:\Users\jmmau\workspace\usemac\machine_lut\libmachine_a9.o c:\Users\jmmau\workspace\usemac\machine_lut\libinterpolations_a9.o 

    cd C:\Program Files\Typhoon HIL Control Center 2025.1\compilers\windows\zu\gnu\aarch64\nt\aarch64-none\bin

    aarch64-none-elf-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\machine_lut.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libmachinelut_a53.o
    aarch64-none-elf-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\machine.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libmachine_a53.o
    aarch64-none-elf-gcc -Iinclude -c c:\Users\jmmau\workspace\usemac\machine_lut\interpolations.c -o c:\Users\jmmau\workspace\usemac\machine_lut\libinterpolations_a53.o
    aarch64-none-elf-ar  rcs c:\Users\jmmau\workspace\usemac\machine_lut\libmachinelut_a53.a c:\Users\jmmau\workspace\usemac\machine_lut\libmachinelut_a53.o c:\Users\jmmau\workspace\usemac\machine_lut\libmachine_a53.o c:\Users\jmmau\workspace\usemac\machine_lut\libinterpolations_a53.o 


 ![alt text](image-4.png)

![alt text](image-3.png)

![alt text](image-5.png)

![alt text](image-6.png)# machine_lut

