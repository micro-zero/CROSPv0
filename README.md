# CROSP version 0

Welcome to CROSP project!

CROSP (Clean-room RISC-V Out-of-order Superscalar Processor) is
a processor with RISC-V IMFDAC extension implemented. It
executes instruction out-of-order, and can issue configurable
multiple instructions in a single clock cycle.

Version 0 indicates on-going development of this repository.
Some functions such as floating-point arithmetic and PMP still
require implementation. However, some basic integer testing and
benchmarking are already considered by this version. Use
embedded linux [Buildroot](https://buildroot.org/) with spike
configuration and HTIF protocol, a simple implementation on
FPGA Genesys 2 is provided in directory `imp`. With the
packages of Buildroot, embeded system benchmarks like Coremark
and Dhrystone can be easily built and tested for FPGA.

The modules in pipeline-stage order are

- `frontend`: generate PC and fetch instructions from I-cache,
              and contains 2 stages.
- `decoder`: decode the instructions into operations, and
             contain 1 stage.
- `rename`: map source registers and allocate destination
            registers, and contains 1 stage.
- `issue`: check readiness of instructions and issue them to
           function units, and contains 1 stage.
- `execute`: read registers from physical register file and
             dispatch the operations to related function units,
             and contains 1 or more stages.
- `commit` : re-order the instructions and generate redirection
             and exception, and contains 1 stage.

Thus an instruction will flow through at least 7 stages. In
this directory, the sub-directories contain source code,
simulations, implementations, and some utilities. Details can
be found in related directories.
