# Basic SoC implementation

This directory includes an implementation of SoC with basic
components including CROSP core, SD card bootloader, interrupt
controller and connection with AXI bus. It is capable of
booting and running OS with HTIF console protocol.

## Running buildroot

The spike configuration can use HTIF protocol as console input
and output, and it will cooperate with HTIF filter described in
wrapper of CROSP core. If other console drivers are required in
different operating systems, the related hardware drivers will
be required to connect with current AXI connections.

The default configuration of generation in simulation
environment has initial RAM file system image at high 32M in
the 1G memory from `0xbe000000` to `0xbfffffff`, and vmlinux
code image at low 32M in memory from `0x80000000` to
`0x82000000`. If the images exceeds 32M, the default
configuration will require modification according to method of
generating the image.

Run
```
make imp -j8
```
to generate Vivado project for implementation. The project will
run implementation automatically and finally generate
bitstream. If modification like debug is needed, we can open
the project in Vivado GUI and use board design to modify the
project conveniently.

Run
```
make sim -j8 SIM_IMG="..."
```
to generate Vivado project for simulation with AXI verification
IP. The project will instantiate CROSP core and interrupt
controller, in addition with an AXI verification IP to simulate
abstract memory model. The testbench will first load images
from file specified in `SIM_IMG` variable. Vivado GUI is needed
to simulate and watch waveform. Waveform auto-generation can be
done by adding TCL script after the project is generated.
