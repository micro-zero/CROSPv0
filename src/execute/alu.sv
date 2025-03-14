/**
 * alu.sv:
 *   This is the integer/system execution module.
 *   The operations take execution width of instructions in one
 *   cycle and write execution results to execution queue.
 */

`include "types.sv"
import types::*;

module alu #(
    parameter iwd = 4,  // issue width
    parameter ewd = 4,  // execution width
    parameter eqsz = 8  // execution queue size
)(
    input  logic clk,
    input  logic rst,
    input  logic flush,
    output logic ready,                  // ready for receiving at most `iwd` requests
    input  reg_bundle_t [iwd-1:0] req,   // requests after register read
    input  logic        [ewd-1:0] claim, // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] resp,  // execution results
    input  logic [1:0] level             // privilege level
);
    /* request selector */
    reg_bundle_t [ewd-1:0] req_alu;
    logic [$clog2(eqsz):0] num_alu;
    always_comb begin
        req_alu = 0;
        num_alu = 0;
        for (int i = 0; i < iwd; i++)
            if (req[i].opid[15] & req[i].fu[0]) begin // select ALU requests and flatten them
                req_alu[num_alu] = req[i];
                num_alu++;
            end
    end

    /* execution */
    exe_bundle_t [ewd-1:0] result;
    for (genvar g = 0; g < ewd; g++) begin : execution_units
        /* aliases and results of g-th common execution unit */
        reg_bundle_t in; // g-th input after register read
        alu_funct_t f;   // ALU functional code
        always_comb in = req_alu[g].opid[15] ? req_alu[g] : 0;
        always_comb f = $bits(alu_funct_t)'(in.funct);

        /* assign oprands */
        logic [63:0] a, b;
        always_comb begin
            a = in.a[64] ? req_alu[g].prs[0] : in.a[63:0]; // choose from registers or immediates
            b = in.b[64] ? req_alu[g].prs[1] : in.b[63:0];
            if (f.iword) a = {{32{a[31] & f.isign}}, a[31:0]}; // instructions with W suffix
            if (f.iword) b = {{32{b[31] & f.isign}}, b[31:0]};
            if (f.iword & (f.sll | f.srl | f.sra)) b[5] = 0;
        end

        /* execute single-cycle operations */
        logic [63:0] add, res, jpc;
        logic lt, ltu, jump;
        logic [2:0] bflag; // branch result flag
        always_comb add = a + b;
        always_comb lt = $signed(a) < $signed(b);
        always_comb ltu = a < b;
        always_comb bflag = {a == b, lt, ltu}; // zero, negative, carry
        always_comb begin
            res = {64{f.add}}  & add |
                  {64{f.sub}}  & (a - b) |
                  {64{f.sll}}  & (a << b[5:0]) |
                  {64{f.srl}}  & (a >> b[5:0]) |
                  {64{f.sra}}  & ($signed($signed(a) >>> b[5:0])) |
                  {64{f.slt}}  & 64'(lt) |
                  {64{f.sltu}} & 64'(ltu) |
                  {64{f.ixor}} & (a ^ b) |
                  {64{f.ior}}  & (a | b) |
                  {64{f.iand}} & (a & b) |
                  {64{f.min}}  & ((f.isign ? lt : ltu) ? a : b) |
                  {64{f.max}}  & ((f.isign ? lt : ltu) ? b : a);
            if (f.iword) res[63:0] = {{32{res[31]}}, res[31:0]};
        end
        always_comb jpc = (in.base[64] ? req_alu[g].prs[0] : in.base[63:0]) + in.offset;
        always_comb jump = f.j | |f.bmask & f.bneg != |(f.bmask & bflag);
        always_comb begin
            result[g]       = 0;
            result[g].opid  = in.opid;
            result[g].npc   = jump ? jpc : in.base[63:0] + 63'(in.delta); // `base` is PC in common instructions
            result[g].ret   = f.ret;
            result[g].flush = f.fencei | f.sfence;
            result[g].misp  = (f.j | |f.bmask) & in.pnpc != result[g].npc;
            result[g].prda  = in.prda[1];
            result[g].prdv  = res;
            /* some exception caused by instructions */
            if (f.ecall)        result[g].cause = {2'b10, 4'd2, level};
            if (f.ebreak)       result[g].cause = {2'b10, 6'd3};
            if (f.inv)          result[g].cause = {2'b10, 6'd2};
            if (f.interrupt[6]) result[g].cause = {2'b11, f.interrupt[5:0]};
            if (f.inv)    result[g].tval  = 64'(in.ir);
            if (f.pf[0] | f.pf[1] & &in.ir[1:0]) begin
                result[g].cause = {2'b10, 6'd12};
                result[g].tval  = 64'(in.base) + (f.pf[0] ? 0 : 2);
            end
        end
    end

    /* execution output queue */
    logic [$clog2(eqsz)-1:0] eq_front;
    logic [$clog2(eqsz):0] eq_num, eq_in, eq_out;
    logic [ewd-1:0][$clog2(eqsz)-1:0] eq_raddr, eq_waddr;
    logic [ewd-1:0]                   eq_wena;
    exe_bundle_t [ewd-1:0] eq_rvalue;
    always_comb for (int i = 0; i < ewd; i++) eq_raddr[i] = eq_front + $clog2(eqsz)'(i);
    always_comb for (int i = 0; i < ewd; i++) eq_waddr[i] = eq_raddr[i] + $clog2(eqsz)'(eq_num);
    always_comb for (int i = 0; i < ewd; i++) eq_wena [i] = i < 32'(eq_in);
    always_ff @(posedge clk) if (rst | flush) eq_front <= 0; else eq_front <= eq_front + $clog2(eqsz)'(eq_out);
    always_ff @(posedge clk) if (rst | flush) eq_num <= 0; else eq_num <= eq_num + eq_in - eq_out;
    mwpram #(.width($bits(exe_bundle_t)), .depth(eqsz), .rports(ewd), .wports(ewd))
        eq_inst(.clk(clk), .rst(rst), .raddr(eq_raddr), .rvalue(eq_rvalue),
            .waddr(eq_waddr), .wvalue(result), .wena(eq_wena));
    always_comb ready = ewd <= eqsz - 32'(eq_num); // ready when able to holding `ewd` operations
    always_comb for (int i = 0; i < ewd; i++) begin
        resp[i] = eq_rvalue[i];
        if (i >= 32'(eq_num)) resp[i].opid = 0;
    end
    always_comb eq_in = num_alu;
    always_comb begin
        eq_out = 0;
        for (int i = 0; i < ewd; i++)
            if (i < eq_num & claim[i]) eq_out++;
    end
endmodule
