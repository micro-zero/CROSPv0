/**
 * decoder.sv:
 *   This is the decoder module, converting an instruction to
 *   decoder bundle.
 */

`include "types.sv"
import types::*;

`define LOAD      5'b00000 // opcode map
`define LOAD_FP   5'b00001
`define MISC_MEM  5'b00011
`define OP_IMM    5'b00100
`define AUIPC     5'b00101
`define OP_IMM_32 5'b00110
`define STORE     5'b01000
`define STORE_FP  5'b01001
`define AMO       5'b01011
`define OP        5'b01100
`define LUI       5'b01101
`define OP_32     5'b01110
`define MADD      5'b10000
`define MSUB      5'b10001
`define NMSUB     5'b10010
`define NMADD     5'b10011
`define OP_FP     5'b10100
`define BRANCH    5'b11000
`define JALR      5'b11001
`define JAL       5'b11011
`define SYSTEM    5'b11100

module decoder #(
    parameter fwd = 4,   // fetch width
    parameter dwd = 4,   // decode width
    parameter ewd = 4,   // decode width
    parameter cwd = 4,   // commit width
    parameter dqsz = 8,  // decoder queue size
    parameter opsz = 64, // operation max size (ROB size)
    parameter brsz = 16, // branch max size (snapshot size)
    parameter ldsz = 8,  // load queue size
    parameter stsz = 8   // store queue size
)(
    input logic clk,
    input logic rst,
    input logic [6:0] interrupt,
    input logic [63:0] mstatus,
    input  com_bundle_t [cwd-1:0] com_bundle,
    input  red_bundle_t           red_bundle,
    output logic        [fwd-1:0] ready,
    input  fet_bundle_t [fwd-1:0] fet_bundle,
    input  logic        [dwd-1:0] decode,
    output dec_bundle_t [dwd-1:0] dec_bundle
);
    /* decoder queue */
    localparam dwdin = dwd < 3 ? 3 : dwd;
    logic [$clog2(dqsz)-1:0] dq_front;                   // front index of decoder queue
    logic [$clog2(dqsz):0] dq_num, dq_in, dq_out;        // numbers of decoder queue
    logic [$clog2(dqsz):0] dq_brin, dq_ldin, dq_stin;    // numbers of specific instructions
    logic          [dwd-1:0][$clog2(dqsz)-1:0] dq_raddr; // decode queue operation signals
    logic        [dwdin-1:0][$clog2(dqsz)-1:0] dq_waddr; // decode queue operation signals
    logic        [dwdin-1:0]                   dq_wena;
    dec_bundle_t   [dwd-1:0]                   dq_rvalue;
    dec_bundle_t [dwdin-1:0]                   dq_wvalue;
    always_comb for (int i = 0; i < dwd;   i++) dq_raddr[i] = dq_front + $clog2(dqsz)'(i);
    always_comb for (int i = 0; i < dwdin; i++) dq_waddr[i] = dq_front + $clog2(dqsz)'(i) + $clog2(dqsz)'(dq_num);
    always_comb for (int i = 0; i < dwdin; i++) dq_wena[i] = i < 32'(dq_in);
    mwpram #(.width($bits(dec_bundle_t)), .depth(dqsz), .rports(dwd), .wports(dwdin))
        dq_inst(.clk(clk), .rst(rst),
            .raddr(dq_raddr), .rvalue(dq_rvalue),
            .waddr(dq_waddr), .wvalue(dq_wvalue), .wena(dq_wena));

    /* decoder unit */
    dec_bundle_t [fwd-1:0][2:0]            result;       // decoding results
    logic        [fwd-1:0][$clog2(dqsz):0] result_num;   // number of results
    logic        [fwd-1:0][$clog2(dqsz):0] result_brnum; // number of branch results
    logic        [fwd-1:0][$clog2(dqsz):0] result_ldnum; // number of load results
    logic        [fwd-1:0][$clog2(dqsz):0] result_stnum; // number of store results
    for (genvar g = 0; g < fwd; g++) begin : decoder_unit
        alu_funct_t [2:0] alu_funct; // functional codes
        lsu_funct_t [2:0] lsu_funct;
        fpu_funct_t [2:0] fpu_funct;
        mul_funct_t [2:0] mul_funct;
        div_funct_t [2:0] div_funct;
        logic [31:0] oir;       // the original instruction
        logic [31:0] ir, op;    // normal instruction and corresponding opcode
        logic [63:0] imm;       // immediate extract from the instruction
        logic [2:0][64:0] a, b; // oprands
        logic [2:0] delta;      // PC delta in bytes (4 or 2)

        /* decompress the instruction */
        always_comb // assign some HINT instructions for exceptions without instruction data
            if (fet_bundle[g].pf[0] | fet_bundle[g].pf[1] & &fet_bundle[g].ir[1:0])
                oir = 32'h00c02013; // instruction page fault
            else if (interrupt[6])
                oir = 32'h80002013 | (32'(interrupt[5:0]) << 20);
            else oir = fet_bundle[g].ir;
        ci2i ci2i_inst(.ci(oir), .i(ir));
        always_comb delta = &oir[1:0] ? 4 : 2;

        /* decode opcode */
        always_comb for (int i = 0; i < 32; i++) op[i] = ir[6:2] == i[4:0];

        /* extract immediate from instruction */
        always_comb imm =
            {{53{ir[31]}}, ir[30:20]} & {64{
                op[`LOAD] | op[`LOAD_FP] | op[`MISC_MEM] | op[`OP_IMM] | // I type
                op[`OP_IMM_32] | op[`JALR] | op[`SYSTEM]}} |
            {{32{ir[31]}}, ir[31:12], 12'd0} & {64{
                op[`AUIPC] | op[`LUI]}} |                                // U type
            {{53{ir[31]}}, ir[30:25], ir[11:7]} & {64{
                op[`STORE] | op[`STORE_FP]}} |                           // S type
            {{52{ir[31]}}, ir[7], ir[30:25], ir[11:8], 1'b0} & {64{
                op[`BRANCH]}} |                                          // B type
            {{44{ir[31]}}, ir[19:12], ir[20], ir[30:21], 1'b0} & {64{
                op[`JAL]}};                                              // J type

        /* decode function units and functinonal code */
        always_comb begin
            {alu_funct, lsu_funct, fpu_funct, mul_funct, div_funct} = 0;
            /* AMO and MM require 2nd operation */
            alu_funct[1].add  = op[`AMO] & ir[31:27] == 5'b00001 | op[`AMO] & ir[31:27] == 5'b00000;
            alu_funct[1].ixor = op[`AMO] & ir[31:27] == 5'b00100;
            alu_funct[1].iand = op[`AMO] & ir[31:27] == 5'b01100;
            alu_funct[1].ior  = op[`AMO] & ir[31:27] == 5'b01000;
            alu_funct[1].min  = op[`AMO] & ir[31:27] == 5'b10000 | op[`AMO] & ir[31:27] == 5'b11000;
            alu_funct[1].max  = op[`AMO] & ir[31:27] == 5'b10100 | op[`AMO] & ir[31:27] == 5'b11100;
            if (|alu_funct[1]) begin
                alu_funct[1].iword = op[`AMO] & ir[14:12] == 3'b010;
                alu_funct[1].isign = op[`AMO] & ~ir[30];
            end
            fpu_funct[1].fadd = op[`MADD] | op[`NMSUB];
            fpu_funct[1].fsub = op[`MSUB] | op[`NMADD];
            if (|fpu_funct[1]) begin
                fpu_funct[1].double = ir[25];
                fpu_funct[1].rm     = ir[14:12];
            end

            /* AMO requires 3rd operation */
            lsu_funct[2].store = op[`AMO] & |alu_funct[1];
            if (|lsu_funct[2]) begin
                lsu_funct[2].bits  = ir[14:12];
                lsu_funct[2].rsrv  = 2'b10;
                lsu_funct[2].aqrl  = ir[26:25];
            end

            /* all instructions require 1st operation */
            /* integer/system operations */
            alu_funct[0].add = op[`JALR] | op[`AUIPC] | op[`LUI] | op[`JAL] |
                (op[`OP_IMM] | op[`OP_IMM_32]) & ir[14:12] == 3'b000 |
                (op[`OP] | op[`OP_32]) & ir[14:12] == 3'b000 & ir[31:25] == 7'd0;
            alu_funct[0].sub = op[`BRANCH] |
                (op[`OP] | op[`OP_32]) & ir[14:12] == 3'b000 & ir[31:25] == 7'b0100000;
            alu_funct[0].sll  = op[`OP_IMM] & ir[14:12] == 3'b001 & ir[31:26] == 6'd0 |
                (op[`OP] | op[`OP_IMM_32] | op[`OP_32]) & ir[14:12] == 3'b001 & ir[31:25] == 7'd0;
            alu_funct[0].slt  = op[`OP_IMM] & ir[14:12] == 3'b010 | op[`OP] & ir[14:12] == 3'b010 & ir[31:25] == 7'd0;
            alu_funct[0].sltu = op[`OP_IMM] & ir[14:12] == 3'b011 | op[`OP] & ir[14:12] == 3'b011 & ir[31:25] == 7'd0;
            alu_funct[0].ixor = op[`OP_IMM] & ir[14:12] == 3'b100 | op[`OP] & ir[14:12] == 3'b100 & ir[31:25] == 7'd0;
            alu_funct[0].srl  = op[`OP_IMM] & ir[14:12] == 3'b101 & ir[31:26] == 6'd0 |
                (op[`OP] | op[`OP_IMM_32] | op[`OP_32]) & ir[14:12] == 3'b101 & ir[31:25] == 7'd0;
            alu_funct[0].sra  = op[`OP_IMM] & ir[14:12] == 3'b101 & ir[31:26] == 6'b010000 |
                (op[`OP] | op[`OP_IMM_32] | op[`OP_32]) & ir[14:12] == 3'b101 & ir[31:25] == 7'b0100000;
            alu_funct[0].ior  = op[`OP_IMM] & ir[14:12] == 3'b110 | op[`OP] & ir[14:12] == 3'b110 & ir[31:25] == 7'd0;
            alu_funct[0].iand = op[`OP_IMM] & ir[14:12] == 3'b111 | op[`OP] & ir[14:12] == 3'b111 & ir[31:25] == 7'd0;
            alu_funct[0].fencei = op[`MISC_MEM] & ir[14:12] == 3'b001;
            alu_funct[0].sfence = op[`SYSTEM] & ir[31:25] == 7'b0001001;
            alu_funct[0].ecall  = ir == 32'h00000073;
            alu_funct[0].ebreak = ir == 32'h00100073;
            alu_funct[0].eret = (ir & ~(32'd3 << 28)) == 32'h00200073 ? {1'b1, ir[29:28]} : 0;
            alu_funct[0].wfi = ir == 32'h10500073;
            if (|alu_funct[0]) begin
                alu_funct[0].iword =  op[`OP_32] | op[`OP_IMM_32];
                alu_funct[0].isign = (op[`OP_32] | op[`OP_IMM_32]) & ir[30];
                if (op[`BRANCH]) alu_funct[0].bmask = {ir[14:13] == 2'b00, ir[14:13] == 2'b10, ir[14:13] == 2'b11};
                if (op[`BRANCH]) alu_funct[0].bneg  = ir[12];
                alu_funct[0].j = op[`JAL] | op[`JALR];
            end
            if (fet_bundle[g].pf[0] | fet_bundle[g].pf[1] & &fet_bundle[g].ir[1:0]) begin
                alu_funct = 0;
                alu_funct[0].pf = fet_bundle[g].pf;
            end
            if (interrupt[6]) begin
                alu_funct = 0;
                alu_funct[0].interrupt = interrupt;
            end
            /* MUL/DIV operations */
            mul_funct[0].mul    = op[`OP]    & ir[14:12] == 3'b000 & ir[31:25] == 7'b1;
            mul_funct[0].mulh   = op[`OP]    & ir[14:12] == 3'b001 & ir[31:25] == 7'b1;
            mul_funct[0].mulhsu = op[`OP]    & ir[14:12] == 3'b010 & ir[31:25] == 7'b1;
            mul_funct[0].mulhu  = op[`OP]    & ir[14:12] == 3'b011 & ir[31:25] == 7'b1;
            mul_funct[0].mulw   = op[`OP_32] & ir[14:12] == 3'b000 & ir[31:25] == 7'b1;
            div_funct[0].div   = op[`OP]    & ir[14:12] == 3'b100 & ir[31:25] == 7'b1;
            div_funct[0].divu  = op[`OP]    & ir[14:12] == 3'b101 & ir[31:25] == 7'b1;
            div_funct[0].rem   = op[`OP]    & ir[14:12] == 3'b110 & ir[31:25] == 7'b1;
            div_funct[0].remu  = op[`OP]    & ir[14:12] == 3'b111 & ir[31:25] == 7'b1;
            div_funct[0].divw  = op[`OP_32] & ir[14:12] == 3'b100 & ir[31:25] == 7'b1;
            div_funct[0].divuw = op[`OP_32] & ir[14:12] == 3'b101 & ir[31:25] == 7'b1;
            div_funct[0].remw  = op[`OP_32] & ir[14:12] == 3'b110 & ir[31:25] == 7'b1;
            div_funct[0].remuw = op[`OP_32] & ir[14:12] == 3'b111 & ir[31:25] == 7'b1;
            /* FP operations */
            fpu_funct[0].fadd   = op[`OP_FP] & ir[31:26] == 6'b000000;
            fpu_funct[0].fsub   = op[`OP_FP] & ir[31:26] == 6'b000010;
            fpu_funct[0].fmul   = op[`OP_FP] & ir[31:26] == 6'b000100 | op[`MADD] | op[`MSUB];
            fpu_funct[0].fnmul  = op[`NMADD] | op[`NMSUB];
            fpu_funct[0].fdiv   = op[`OP_FP] & ir[31:26] == 6'b000110;
            fpu_funct[0].fsqrt  = op[`OP_FP] & ir[31:26] == 6'b010110 & ir[24:20] == 5'd0;
            fpu_funct[0].fsgnj  = op[`OP_FP] & ir[31:26] == 6'b001000 & ir[14:12] == 3'b000;
            fpu_funct[0].fsgnjn = op[`OP_FP] & ir[31:26] == 6'b001000 & ir[14:12] == 3'b001;
            fpu_funct[0].fsgnjx = op[`OP_FP] & ir[31:26] == 6'b001000 & ir[14:12] == 3'b010;
            fpu_funct[0].fmin   = op[`OP_FP] & ir[31:26] == 6'b001010 & ir[14:12] == 3'b000;
            fpu_funct[0].fmax   = op[`OP_FP] & ir[31:26] == 6'b001010 & ir[14:12] == 3'b001;
            fpu_funct[0].feq    = op[`OP_FP] & ir[31:26] == 6'b101000 & ir[14:12] == 3'b010;
            fpu_funct[0].flt    = op[`OP_FP] & ir[31:26] == 6'b101000 & ir[14:12] == 3'b001;
            fpu_funct[0].fle    = op[`OP_FP] & ir[31:26] == 6'b101000 & ir[14:12] == 3'b000;
            fpu_funct[0].fmvxf  = op[`OP_FP] & ir[31:26] == 6'b111000 & ir[14:12] == 3'b000 & ir[24:20] == 5'd0;
            fpu_funct[0].fclass = op[`OP_FP] & ir[31:26] == 6'b111000 & ir[14:12] == 3'b001 & ir[24:20] == 5'd0;
            fpu_funct[0].fmvfx  = op[`OP_FP] & ir[31:26] == 6'b111100 & ir[14:12] == 3'b000 & ir[24:20] == 5'd0;
            fpu_funct[0].fcvtif = op[`OP_FP] & ir[31:26] == 6'b110000;
            fpu_funct[0].fcvtfi = op[`OP_FP] & ir[31:26] == 6'b110100;
            fpu_funct[0].fcvtsd = op[`OP_FP] & ir[31:25] == 7'b0100000 & ir[24:20] == 5'd1;
            fpu_funct[0].fcvtds = op[`OP_FP] & ir[31:25] == 7'b0100001 & ir[24:20] == 5'd0;
            if (|fpu_funct[0]) begin
                fpu_funct[0].double = ir[25];
                fpu_funct[0].rm     = ir[14:12];
            end
            /* memory operations */
            lsu_funct[0].load  = op[`LOAD]  | op[`LOAD_FP]  | op[`AMO] & (ir[31:27] == 5'b00010 | |alu_funct[1]);
            lsu_funct[0].store = op[`STORE] | op[`STORE_FP] | op[`AMO] &  ir[31:27] == 5'b00011;
            lsu_funct[0].csr   = op[`SYSTEM] & |ir[13:12];
            lsu_funct[0].fence = op[`MISC_MEM] & ir[14:12] == 3'b000;
            if (lsu_funct[0].csr | lsu_funct[0].fence) lsu_funct[0].store = 1; // csrrw/fence will enter store queue
            if (|lsu_funct[0]) begin
                lsu_funct[0].bits = ir[14:12];
                if (op[`AMO]) lsu_funct[0].rsrv = {|alu_funct[1], ~|alu_funct[1]};
                if (op[`AMO]) lsu_funct[0].aqrl = ir[26:25];
                /* acquire bit can be used to block load instructions succeeding fence,
                   at P[IORW]-S[IR] fence (read after write and read after read), and
                   this may be coarse but easy to check consistency after translation */
                if (lsu_funct[0].fence) lsu_funct[0].aqrl = {|ir[27:24] & (ir[23] | ir[21]), 1'b0};
            end

            /* some invalid situation */
            /* failed to decompress the compressed instruction */
            if (ir[1:0] != 2'b11)
                {alu_funct, lsu_funct, fpu_funct, mul_funct, div_funct} = 0;
            /* FS bit in mstatus controls FP decoding */
            if ((op[`LOAD_FP] | op[`STORE_FP] | op[`MADD] | op[`MSUB] |
                 op[`NMSUB]   | op[`NMADD]    | op[`OP_FP]) & ~|mstatus[14:13])
                {alu_funct, lsu_funct, fpu_funct, mul_funct, div_funct} = 0;
            if (~|{alu_funct, lsu_funct, fpu_funct, mul_funct, div_funct}) alu_funct[0].inv = 1;
        end

        /* set oprands */
        always_comb
            if (fpu_funct[0].fcvtfi | fpu_funct[0].fmvfx)                                   // INT rs1
                a[0] = {1'd1, 59'd0, ir[19:15]};
            else a[0] = {~(op[`SYSTEM] & ir[14]), 59'd0, ir[19:15]} & {65{                  // INT rs1
                        op[`LOAD] | op[`LOAD_FP] | op[`OP_IMM] | op[`OP_IMM_32] | op[`STORE]    | op[`STORE_FP] |
                        op[`OP]   | op[`OP_32]   | op[`BRANCH] | op[`AMO]       | op[`SYSTEM]}} |
                    {1'd1, 59'd1, ir[19:15]} & {{65{                                        // FP rs1
                        op[`MADD] | op[`MSUB] | op[`NMSUB] | op[`NMADD] | op[`OP_FP]}}} |
                    {1'd0, fet_bundle[g].pc} & {65{op[`JALR] | op[`JAL] | op[`AUIPC]}};     // PC
        always_comb a[1] = {1'd1, 59'd2, 5'd0} & {65{~(op[`AMO] & ir[31:27] == 5'b00001)}}; // TEMP reg
        always_comb a[2] = {1'd1, 59'd0, ir[19:15]} & {65{op[`AMO]}};                       // INT rs1
        always_comb
            if (fpu_funct[0].fcvtif | fpu_funct[0].fcvtfi)
                b[0] = {60'd0, ir[24:20]}; // INT/FP conversion functional code
            else b[0] =
                {1'd1, 59'd0, ir[24:20]} & {65{op[`OP]   | op[`OP_32] | op[`OP_FP] | op[`BRANCH]}} | // INT rs2
                {1'd1, 59'd1, ir[24:20]} & {65{op[`MADD] | op[`MSUB]  | op[`NMSUB] | op[`NMADD] | op[`OP_FP]}} | // FP rs2
                {1'd0, imm} & {65{op[`SYSTEM]    | op[`MISC_MEM] | op[`LOAD] | op[`LOAD_FP] | op[`OP_IMM] |
                                  op[`OP_IMM_32] | op[`AUIPC]    | op[`LUI]  | op[`STORE]   | op[`STORE_FP]}} |
                {62'd0, delta} & {65{op[`JAL] | op[`JALR]}};
        always_comb b[1] = {1'd1, 59'd0, ir[24:20]} & {65{op[`AMO]}} | // INT rs2
                           {1'd1, 59'd1, ir[31:27]} & {65{op[`MADD] | op[`MSUB] | op[`NMSUB] | op[`NMADD]}}; // FP rs3
        always_comb b[2] = {1'd0, imm} & {65{op[`AMO]}};

        /* generate results */
        always_comb begin
            result[g] = 0;

            /* first result */
            result[g][0].opid[15] = fet_bundle[g].valid;
            result[g][0].pc    = fet_bundle[g].pc;
            result[g][0].pnpc  = fet_bundle[g].pnpc;
            result[g][0].pat   = fet_bundle[g].pat;
            result[g][0].call  = fet_bundle[g].call;
            result[g][0].ret   = fet_bundle[g].ret;
            result[g][0].ir    = oir;
            result[g][0].delta = delta;
            result[g][0].fu[0] = |alu_funct[0];
            result[g][0].fu[1] = |lsu_funct[0];
            result[g][0].fu[2] = |fpu_funct[0];
            result[g][0].fu[3] = |mul_funct[0];
            result[g][0].fu[4] = |div_funct[0];
            result[g][0].funct = 64'(alu_funct[0]) | 64'(lsu_funct[0]) | 64'(fpu_funct[0]) |
                                 64'(mul_funct[0]) | 64'(div_funct[0]);
            result[g][0].base = op[`JALR] ? {1'b1, 59'd0, ir[19:15]} : {1'b0, fet_bundle[g].pc};
            result[g][0].offset = imm & {64{op[`JAL] | op[`JALR] | op[`BRANCH]}};
            result[g][0].a = a[0];
            result[g][0].b = b[0];
            result[g][0].branch = fet_bundle[g].branch;
            result[g][0].jal    = fet_bundle[g].jal;
            result[g][0].jalr   = fet_bundle[g].jalr;
            if (~&result[g][0].ir[1:0]) result[g][0].ir[31:16] = 0;
            /* set register address */
            /* first source register address */
            if (a[0][64]) result[g][0].rsa[0] = a[0][6:0];               // normal situation
            else if (op[`JALR]) result[g][0].rsa[0] = {2'd0, ir[19:15]}; // JALR rs1 is not in `a` (`a` is PC)
            /* second source register address */
            if (b[0][64]) result[g][0].rsa[1] = b[0][6:0];                   // normal situation
            else if (op[`STORE])    result[g][0].rsa[1] = {2'b0, ir[24:20]}; // store rs2 is not in `b` (`b` is immediate)
            else if (op[`STORE_FP]) result[g][0].rsa[1] = {2'b1, ir[24:20]};
            else if (op[`AMO] & ir[31:27] == 5'b00011) result[g][0].rsa[1] = {2'b0, ir[24:20]}; // SC
            /* destination register address */
            if (fpu_funct[0].feq   | fpu_funct[0].flt    | fpu_funct[0].fle | // FP instructions but writing to INT rd
                fpu_funct[0].fmvxf | fpu_funct[0].fclass | fpu_funct[0].fcvtif)
                result[g][0].rda = {2'd0, ir[11:7]};
            else result[g][0].rda =
                {2'd0, ir[11:7]} & {7{
                    op[`LOAD] | op[`OP_IMM] | op[`AUIPC] | op[`OP_IMM_32] | // normal situation
                    op[`OP]   | op[`LUI]    | op[`OP_32] | op[`JALR]      |
                    op[`JAL]  | op[`SYSTEM] | op[`AMO] & ~|alu_funct[1]}} |
                {2'd1, ir[11:7]} & {7{op[`LOAD_FP] | op[`OP_FP]}} | // FP rd
                {2'd2, 5'd0} & {7{op[`MADD] | op[`MSUB] | op[`NMSUB] | op[`NMADD] | op[`AMO] & |alu_funct[1]}}; // TEMP rd

            /* second result */
            result[g][1].opid[15] = fet_bundle[g].valid &
                |{alu_funct[1], lsu_funct[1], fpu_funct[1], mul_funct[1], div_funct[1]};
            result[g][1].pc    = fet_bundle[g].pc;
            result[g][1].pnpc  = fet_bundle[g].pnpc;
            result[g][1].pat   = fet_bundle[g].pat;
            result[g][1].call  = fet_bundle[g].call;
            result[g][1].ret   = fet_bundle[g].ret;
            result[g][1].ir    = oir;
            result[g][1].delta = delta;
            result[g][1].fu[0] = |alu_funct[1];
            result[g][1].fu[1] = |lsu_funct[1];
            result[g][1].fu[2] = |fpu_funct[1];
            result[g][1].fu[3] = |mul_funct[1];
            result[g][1].fu[4] = |div_funct[1];
            result[g][1].funct = 64'(alu_funct[1]) | 64'(lsu_funct[1]) | 64'(fpu_funct[1]) |
                                 64'(mul_funct[1]) | 64'(div_funct[1]);
            result[g][1].base = {1'b0, fet_bundle[g].pc};
            result[g][1].a = a[1];
            result[g][1].b = b[1];
            result[g][1].rsa[0] = a[1][6:0];
            result[g][1].rsa[1] = b[1][6:0];
            result[g][1].rda =
                {2'd2, 5'd0} & {7{op[`AMO]}} |                                           // TEMP rd
                {2'd1, ir[11:7]} & {7{op[`MADD] | op[`MSUB] | op[`NMSUB] | op[`NMADD]}}; // FP rd

            /* third result */
            result[g][2].opid[15] = fet_bundle[g].valid &
                |{alu_funct[2], lsu_funct[2], fpu_funct[2], mul_funct[2], div_funct[2]};
            result[g][2].pc    = fet_bundle[g].pc;
            result[g][2].pnpc  = fet_bundle[g].pnpc;
            result[g][2].pat   = fet_bundle[g].pat;
            result[g][2].call  = fet_bundle[g].call;
            result[g][2].ret   = fet_bundle[g].ret;
            result[g][2].ir    = oir;
            result[g][2].delta = delta;
            result[g][2].fu[0] = |alu_funct[2];
            result[g][2].fu[1] = |lsu_funct[2];
            result[g][2].fu[2] = |fpu_funct[2];
            result[g][2].fu[3] = |mul_funct[2];
            result[g][2].fu[4] = |div_funct[2];
            result[g][2].funct = 64'(alu_funct[2]) | 64'(lsu_funct[2]) | 64'(fpu_funct[2]) |
                                 64'(mul_funct[2]) | 64'(div_funct[2]);
            result[g][2].base = {1'b0, fet_bundle[g].pc};
            result[g][2].a = a[2];
            result[g][2].b = b[2];
            result[g][2].rsa[0] = a[2][6:0];
            result[g][2].rsa[1] = {2'd2, 5'd0}; // TEMP rd
            result[g][2].rda = {2'd0, ir[11:7]};

            /* set PC delta of instruction with multiple operations */
            if (result[g][2].opid[15]) result[g][1].delta = 0;
            if (result[g][1].opid[15]) result[g][0].delta = 0;

            /* safety judgement */
            for (int i = 0; i < 3; i++)
            if  (|fpu_funct[i] | |mul_funct[i] | |div_funct[i] | |alu_funct[i] &
                    ~|alu_funct[i].bmask & ~|alu_funct[i].eret & ~alu_funct[i].j &
                    ~|alu_funct[i].pf & ~|alu_funct[i].interrupt & ~alu_funct[i].fencei &
                    ~alu_funct[i].sfence & ~alu_funct[i].ecall & ~alu_funct[i].ebreak &
                    ~alu_funct[i].wfi & ~alu_funct[i].inv
                ) result[g][i].safe = 1;
        end
        always_comb begin
            result_num  [g] = 0;
            result_ldnum[g] = 0;
            result_stnum[g] = 0;
            for (int i = 0; i < 3; i++) if (|result[g][i].fu) result_num  [g]++;
            for (int i = 0; i < 3; i++) if (|lsu_funct[i])
                if (lsu_funct[i].load) result_ldnum[g]++; else result_stnum[g]++;
            /* some instructions that may cause redirection require snapshots of renaming states */
            /* other redirection should use rollback */
            result_brnum[g] = |alu_funct[0].bmask | alu_funct[0].j ? 1 : 0;
        end
    end

    /* ID generation */
    logic redir;
    logic [$clog2(opsz)-1:0] opid;    // operation ID
    logic [$clog2(brsz)-1:0] brid;    // branch ID
    logic [$clog2(ldsz)-1:0] ldid;    // load ID
    logic [$clog2(stsz)-1:0] stid;    // store ID
    logic [15:0] opnum, opcom, opred; // numbers of operation IDs
    logic [15:0] brnum, brcom, brred; // numbers of branch operation IDs
    logic [15:0] ldnum, ldcom, ldred; // numbers of load operation IDs
    logic [15:0] stnum, stcom, stred; // numbers of store operation IDs
    always_comb redir = red_bundle.opid[15];
    always_comb begin
        opcom = 0; brcom = 0; ldcom = 0; stcom = 0;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15]) opcom++;
        for (int i = 0; i < cwd; i++) if (com_bundle[i].opid[15] & com_bundle[i].brid[7]) brcom++;
        for (int i = 0; i < ewd; i++) if (com_bundle[i].opid[15] & com_bundle[i].ldid[7]) ldcom++;
        for (int i = 0; i < ewd; i++) if (com_bundle[i].opid[15] & com_bundle[i].stid[7]) stcom++;
    end
    always_comb begin
        opred = 0; brred = 0; ldred = 0; stred = 0;
        opred[$clog2(opsz)-1:0] = opid - $clog2(opsz)'(red_bundle.opid) - $clog2(opsz)'(1);
        brred[$clog2(brsz)-1:0] = brid - $clog2(brsz)'(red_bundle.brid) - $clog2(brsz)'(red_bundle.brid[7]);
        ldred[$clog2(ldsz)-1:0] = ldid - $clog2(ldsz)'(red_bundle.ldid) - $clog2(ldsz)'(red_bundle.ldid[7]);
        stred[$clog2(stsz)-1:0] = stid - $clog2(stsz)'(red_bundle.stid) - $clog2(stsz)'(red_bundle.stid[7]);
    end
    always_ff @(posedge clk) if (rst) opid <= 0;
        else if (redir) opid <= $clog2(opsz)'(red_bundle.opid) + $clog2(opsz)'(1);
        else            opid <= opid + $clog2(opsz)'(dq_in);
    always_ff @(posedge clk) if (rst) brid <= 0;
        else if (redir) brid <= $clog2(brsz)'(red_bundle.brid) + $clog2(brsz)'(red_bundle.brid[7]);
        else            brid <= brid + $clog2(brsz)'(dq_brin);
    always_ff @(posedge clk) if (rst) ldid <= 0;
        else if (redir) ldid <= $clog2(ldsz)'(red_bundle.ldid) + $clog2(ldsz)'(red_bundle.ldid[7]);
        else            ldid <= ldid + $clog2(ldsz)'(dq_ldin);
    always_ff @(posedge clk) if (rst) stid <= 0;
        else if (redir) stid <= $clog2(stsz)'(red_bundle.stid) + $clog2(stsz)'(red_bundle.stid[7]);
        else            stid <= stid + $clog2(stsz)'(dq_stin);
    always_ff @(posedge clk) if (rst) opnum <= 0;
        else if (redir) opnum <= opnum - opred - opcom; else opnum <= opnum - opcom + 16'(dq_in);
    always_ff @(posedge clk) if (rst) brnum <= 0;
        else if (redir) brnum <= brnum - brred - brcom; else brnum <= brnum - brcom + 16'(dq_brin);
    always_ff @(posedge clk) if (rst) ldnum <= 0;
        else if (redir) ldnum <= ldnum - ldred - ldcom; else ldnum <= ldnum - ldcom + 16'(dq_ldin);
    always_ff @(posedge clk) if (rst) stnum <= 0;
        else if (redir) stnum <= stnum - stred - stcom; else stnum <= stnum - stcom + 16'(dq_stin);

    /* flatten results */
    lsu_funct_t [dwd-1:0][2:0] f;
    always_comb for (int i = 0; i < dwd; i++)
        for (int j = 0; j < 3; j++) f[i][j] = $bits(lsu_funct_t)'(result[i][j].funct);
    always_comb begin
        ready = 0; dq_wvalue = 0; // `dq_wvalue` is the flattened result array
        dq_in = 0; dq_brin = 0; dq_ldin = 0; dq_stin = 0;
        for (int i = 0; i < fwd; i++) begin
            if (32'(dq_in) + 32'(result_num[i]) > dqsz - 32'(dq_num) |
                32'(dq_in) + 32'(result_num[i]) > 32'(dwdin) |
                16'(dq_in)   + 16'(result_num[i])   > opsz - opnum - 1 |
                16'(dq_brin) + 16'(result_brnum[i]) > brsz - brnum - 1 |
                16'(dq_ldin) + 16'(result_ldnum[i]) > ldsz - ldnum - 1 |
                16'(dq_stin) + 16'(result_stnum[i]) > stsz - stnum - 1) break;
            for (int j = 0; j < 3; j++)
                if (result[i][j].opid[15]) begin
                    dq_wvalue[32'(dq_in)] = result[i][j];
                    dq_wvalue[32'(dq_in)].opid[14:0] = 0;
                    dq_wvalue[32'(dq_in)].opid[$clog2(opsz)-1:0] = opid + $clog2(opsz)'(dq_in);
                    /* MSB indicates types, lower bits indicate latest LQ/SQ/BR index */
                    dq_wvalue[32'(dq_in)].ldid[$clog2(ldsz)-1:0] = ldid + $clog2(ldsz)'(dq_ldin);
                    dq_wvalue[32'(dq_in)].stid[$clog2(stsz)-1:0] = stid + $clog2(stsz)'(dq_stin);
                    dq_wvalue[32'(dq_in)].brid[$clog2(brsz)-1:0] = brid + $clog2(brsz)'(dq_brin);
                    if (result_brnum[i] == 1) begin
                        dq_wvalue[32'(dq_in)].brid[7] = 1;
                        dq_brin++;
                    end
                    if (result[i][j].fu[1] & f[i][j].load) begin
                        dq_wvalue[32'(dq_in)].ldid[7] = 1;
                        dq_ldin++;
                    end
                    if (result[i][j].fu[1] & f[i][j].store) begin
                        dq_wvalue[32'(dq_in)].stid[7] = 1;
                        dq_stin++;
                    end
                    dq_in++;
                end
            ready[i] = 1;
        end
    end

    /* decoder queue operation */
    always_comb begin
        dec_bundle = dq_rvalue;
        /* redirection will invalidate output, for map table will not be
           simply flushed and making output clean here is convenient */
        for (int i = 0; i < dwd; i++) if (i >= dq_num | redir) dec_bundle[i].opid = 0;
    end
    always_comb begin
        dq_out = 0;
        for (int i = 0; i < dwd; i++)
            if (decode[i] & dec_bundle[i].opid[15]) dq_out++;
    end
    always_ff @(posedge clk) if (rst | redir) dq_front <= 0; else dq_front <= dq_front + $clog2(dqsz)'(dq_out);
    always_ff @(posedge clk) if (rst | redir) dq_num   <= 0; else dq_num   <= dq_num - dq_out + dq_in;
endmodule
