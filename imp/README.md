# SoC implementation on FPGA

This directory includes an implementation of SoC with basic
components including CROSP core, interrupt controller, and
peripherals. Currently SoC is verified on Genesys-2 board with
Debian OS. The OS and peripheral drivers are from repository
[vivado-risc-v](https://github.com/eugene-tarassov/vivado-risc-v.git).
To run TCL files generated in makefile, Vivado and license for
Genesys-2 are required.

## Running Debian OS

Bootloader has three steps:

1. Run code from ROM.
2. Code in ROM detects SD controller and load U-boot image from
  SD card.
3. U-boot initializes drivers and load Linux image.

Run
```
make build -j32 ROM_IMG="path-to-rom-image"
```
to generate Vivado project for implementation. The project will
run implementation automatically and finally generate
bitstream. If modification like debug is needed, we can open
the project in Vivado GUI and use board design to modify the
project conveniently. If auto-build is not needed, just remove
`build` object and run
```
make -j32 ROM_IMG="path-to-rom-image"
```
to create project directory `.prj`. The project includes
board design of SoC implementation and simulation testbench.

Repository vivado-risc-v provides SD card image and ROM image.
The SD image should be directly burned into SD card. If only
ELF format of ROM image is found, we can use the executable in
simulation directory `sim` to convert it into binary image
using
```
./main -rom "path-to-rom-image" "path-to-rom-elf"
```
