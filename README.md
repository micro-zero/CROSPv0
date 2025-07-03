# CROSP version 0

Welcome to CROSP project!

CROSP (Clean-room RISC-V Out-of-order Superscalar Processor) is
a processor with RISC-V IMFDAC extension implemented. It
executes instruction out-of-order, and can issue configurable
multiple instructions in a single clock cycle.

Version 0 indicates on-going development of this repository.
Some modules like timing in issue unit require optimization.
However, some basic benchmarks are already implemented by this
version. Use Debian OS provided in repository
[vivado-risc-v](https://github.com/eugene-tarassov/vivado-risc-v.git)
a simple implementation on FPGA Genesys 2 is provided in
directory `imp`. Embeded system benchmarks like Coremark and
Dhrystone can be easily built and tested for FPGA. Full run of
SPEC 2017 is not realistic for the limitation of on-board
memory. Now only some benchmarks in SPEC can be tested. And due
to the long latency of AXI interconnection, it shows no
competitive performance.

The modules in pipeline-stage order are

- `fetch`: generate PC and fetch instructions from I-cache,
           and contains 4 stages.
- `decode`: decode the instructions into operations.
- `rename`: map source registers and allocate destination
            registers.
- `dispatch`: check readiness, read registers and dispatch them
              to issue queue.
- `execute`: read registers from physical register file and
             dispatch the operations to related function units,
             and contains 1 or more stages.
- `writeback` : re-order the instructions and generate
                redirection and exception.

Thus an instruction will flow through at least 9 stages. In
this directory, the sub-directories contain source code,
simulations, implementations, and some utilities. Details can
be found in related directories.
