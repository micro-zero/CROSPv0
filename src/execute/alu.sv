/**
 * alu.sv:
 *   This is the integer/system execution module.
 *   The operations take execution width of instructions in one
 *   cycle and write execution results to execution queue.
 */

`include "types.sv"
import types::*;

module alu #(
    parameter iwd,  // issue width
    parameter ewd,  // execution width
    parameter opsz  // operation ID size
)(
    input  logic clk,
    input  logic rst,
    input  red_bundle_t redir,           // redirect bundle
    output logic ready,                  // ready for receiving at most `iwd` requests
    input  reg_bundle_t [iwd-1:0] req,   // requests after register read
    input  logic        [ewd-1:0] claim, // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] resp,  // execution results
    input  logic [1:0] level,            // privilege level
    input  logic       tvm,              // trap virtual memory
    input  logic       tsr               // trap SRET
);
    /* order calculation function */
    function logic succeed(input logic [15:0] opid);
        succeed = redir.opid[15] & opid[15] &
            $clog2(opsz)'(opid)       - $clog2(opsz)'(redir.topid) >=
            $clog2(opsz)'(redir.opid) - $clog2(opsz)'(redir.topid) + $clog2(opsz)'(1);
    endfunction

    /* request selector */
    localparam eqsz = 2 * (1 << $clog2(ewd));
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
        logic inv;       // invalid instruction
        always_comb in = req_alu[g].opid[15] ? req_alu[g] : 0;
        always_comb f = $bits(alu_funct_t)'(in.funct);

        /* assign oprands */
        logic [63:0] a, b;
        always_comb begin
            a = in.a[64] ? in.prs[0] : in.a[63:0]; // choose from registers or immediates
            b = in.b[64] ? in.prs[1] : in.b[63:0];
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
        always_comb jpc = (in.base[64] ? in.prs[0] : in.base[63:0]) + in.offset;
        always_comb jump = f.j | |f.bmask & f.bneg != |(f.bmask & bflag);
        always_comb inv = f.inv | f.sfence & tvm | f.eret == 3'b101 & tsr;
        always_comb begin
            result[g]        = 0;
            result[g].opid   = in.opid;
            result[g].brid   = in.brid;
            result[g].ldid   = in.ldid;
            result[g].stid   = in.stid;
            result[g].npc    = jump ? jpc : in.base[63:0] + 63'(in.delta); // `base` is PC in common instructions
            result[g].delta  = in.delta;
            result[g].pat    = in.pat;
            result[g].pc     = in.pc;
            result[g].branch = in.branch;
            result[g].jal    = in.jal;
            result[g].jalr   = in.jalr;
            result[g].eret   = inv ? 0 : f.eret;
            result[g].fencei = f.fencei;
            result[g].sfence = f.sfence ? {in.b[4:0] == 0, in.a[4:0] == 0, 1'b1} : 0;
            result[g].flush  = f.fencei | f.sfence;
            result[g].misp   = (f.j | |f.bmask) & in.pnpc != result[g].npc;
            result[g].prda   = in.prda[1];
            result[g].prdv   = res;
            /* for oprands of SFENCE.VMA, prdv field is vaddr, tval field is asid,
               and the MSB indicates whether source registers are zero i.e. x0 */
            if (f.sfence) result[g].prdv = in.prs[0];
            if (f.sfence) result[g].tval = in.prs[1];
            /* some exception caused by instructions */
            if (f.ecall)        result[g].cause = {2'b10, 4'd2, level};
            if (f.ebreak)       result[g].cause = {2'b10, 6'd3};
            if (f.interrupt[6]) result[g].cause = {2'b11, f.interrupt[5:0]};
            if (inv)            result[g].cause = {2'b10, 6'd2};
            if (inv)            result[g].tval  = 64'(in.ir);
            if (f.af[0] | f.af[1] & &in.ir[1:0]) begin
                result[g].prda  = 0;
                result[g].cause = {2'b10, 6'd1};
                result[g].tval  = 64'(in.base) + (f.af[0] ? 0 : 2);
            end
            if (f.pf[0] | f.pf[1] & &in.ir[1:0]) begin
                result[g].prda  = 0;
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
    logic [eqsz-1:0][15:0] eq_opid;   // operation ID of each entry
    logic [eqsz-1:0]       eq_bubble; // bubble marks
    mwpram #(.width($bits(exe_bundle_t)), .depth(eqsz), .rports(ewd), .wports(ewd))
        eq_inst(.clk(clk), .rst(rst), .raddr(eq_raddr), .rvalue(eq_rvalue),
            .waddr(eq_waddr), .wvalue(result), .wena(eq_wena));
    always_comb for (int i = 0; i < ewd; i++) eq_raddr[i] = eq_front + $clog2(eqsz)'(i);
    always_comb for (int i = 0; i < ewd; i++) eq_waddr[i] = eq_raddr[i] + $clog2(eqsz)'(eq_num);
    always_comb for (int i = 0; i < ewd; i++) eq_wena [i] = i < 32'(eq_in);
    always_comb ready = ewd <= eqsz - 32'(eq_num); // ready when able to holding `ewd` operations
    always_comb for (int i = 0; i < ewd; i++) begin
        resp[i] = eq_rvalue[i];
        /* at the cycle of flushing it will output without bubble mark,
           otherwise there will be circular combinational logic though
           `redir` so that modules accepting EXE bundles must consider
           redirection such as commit module and PRF or just solve this
           pseudo circular logic caused by packing up different signals */
        if (eq_bubble[eq_raddr[i]]) resp[i].opid = 0;
        if (i >= 32'(eq_num))       resp[i].opid = 0;
    end
    always_comb eq_in = num_alu;
    always_comb begin
        eq_out = 0;
        for (int i = 0; i < ewd; i++)
            if (i < 32'(eq_num) & (claim[i] | eq_bubble[eq_raddr[i]])) eq_out++; else break;
    end
    always_ff @(posedge clk) if (rst) eq_front <= 0; else eq_front <= eq_front + $clog2(eqsz)'(eq_out);
    always_ff @(posedge clk) if (rst) eq_num   <= 0; else eq_num   <= eq_num + eq_in - eq_out;
    always_ff @(posedge clk) if (rst) eq_opid <= 0;
        else for (int i = 0; i < ewd; i++) if (eq_wena[i]) eq_opid[eq_waddr[i]] <= result[i].opid;
    always_ff @(posedge clk) if (rst) eq_bubble <= 0; else begin
        for (int i = 0; i < eqsz; i++) if (succeed(eq_opid[i])) eq_bubble[i] <= 1;
        for (int i = 0; i < ewd; i++) if (eq_wena[i]) eq_bubble[eq_waddr[i]] <= 0;
    end
endmodule
