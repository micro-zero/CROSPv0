# Decoding Stage

Decoding stage gets input from fetch unit and convert
instructions to decoded operations, including functional unit,
functional code, and oprand source.

## Decoding Module

### Decoder

According to RISC-V specification, bit 6 to bit 2 in a normal
instruction controls the domain. So first `op` calculates the
decoded wires with each bit indicating related opcode. Then for
each opcode, calculate `alu_funct`, `lsu_funct`, `mul_funct`,
`div_funct`, `fpu_funct` , immediate and oprand source. Except
the functional code, `dec_bundle` will also includes
information passed from fetch unit including global history,
pattern and chosen bank.

Normal instructions are decoded into one operation, while there
are some being decoded into multiple operations. The fused
multiply-add instructions are decoded into two operations. The
first is to calculate floating multiply into a temporary
register with number of 65, and the second is to use the
temporary register to calculate final addition. Atomic
operations need three operations. The first is to load from
memory, the second is to operate according to the instruction,
and the third is to store it to memory. To maintain its
atomicity, these load and store should be specially marked by
bit 1 of `rsrv` in function code `lsu_funct`. It should acquire
a lock of address in memory and release it when store is done.

The oprands can be immediate or from registers. In the design,
integer registers are encoded from 1 to 31, while
floating-point registers are encoded from 32 to 64. The
temporary registers for multiple-operation instructions uses
registers above 64. If oprands are from registers, in the
bundles the MSB will be set indicating source of registers, and
read from register file when being dispatched to issue queue.

### ID Generation

Decoding module also has the function of generating
identifiers. The identifiers are allocated and released in
decoding module. Pipeline will be stuck at decoding stage if it
exceeds maximal limit.

- `opid`: Instruction identifier, indicating ROB index. 
- `brid`: Branch identifier for branch or jump instructions,
    indicating snapshot index.
- `ldid`: Load identifier for load instruction, indicating load
    queue index.
- `stid`: Store identifier for store instructions, indicating
    store queue index.

For non-branch instruction, `brid` indicates that of the last
branch instruction before it. `ldid` and `stid` are similar.
This is designed for the convenience of redirection at
writeback stage.

## Compressed Instruction Converter

The "C" extension in RISC-V defines some compressed instruction
with 16-bit encoding. In the specification each compressed
instruction has a unique mapping to a normal instruction.
So for compressed instructions in fetch bundle, decoder firstly
convert them to normal instructions by module `ci2i`. This
module is implemented by a large `case`, and reassemble normal
instructions in each situation.
