/**
 * mul.sv:
 *   This is the multiplier module.
 */

`include "types.sv"
import types::*;

`define MULLAT 6

module mul #(
    parameter ewd,  // execution width
    parameter opsz  // operation ID size
)(
    input  logic clk,
    input  logic rst,
    input  red_bundle_t redir,           // redirect bundle
    output logic ready,                  // ready for receiving at most `ewd` requests
    input  iss_bundle_t [ewd-1:0] req,   // requests after register read
    input  logic        [ewd-1:0] claim, // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] resp   // execution results
);
    /* order calculation function */
    function logic succeed(input logic [15:0] opid);
        succeed = redir.opid[15] & opid[15] &
            $clog2(opsz)'(opid)       - $clog2(opsz)'(redir.topid) >=
            $clog2(opsz)'(redir.opid) - $clog2(opsz)'(redir.topid) + $clog2(opsz)'(1);
    endfunction

    /* register read buffer */
    localparam eqsz = (1 << $clog2(3 * ewd));
    logic [$clog2(eqsz)-1:0] rr_front;
    logic [$clog2(eqsz):0] rr_num, rr_in, rr_out;
    logic [eqsz-1:0][15:0] rr_opid;
    logic [eqsz-1:0]       rr_bubble;
    iss_bundle_t           rr_rvalue;
    logic        [ewd-1:0][$clog2(eqsz)-1:0] rr_waddr;
    iss_bundle_t [ewd-1:0]                   rr_wvalue;
    logic        [ewd-1:0]                   rr_wena;
    mwpram #(.width($bits(iss_bundle_t)), .depth(eqsz), .rports(1), .wports(ewd))
        rr_inst(.clk(clk), .rst(rst),
            .raddr(rr_front), .rvalue(rr_rvalue),
            .waddr(rr_waddr), .wvalue(rr_wvalue), .wena(rr_wena));
    always_comb begin
        rr_in = 0; rr_wvalue = 0;
        for (int i = 0; i < ewd; i++)
            if (req[i].opid[15] & req[i].fu[3]) begin // select MUL requests and flatten them
                rr_wvalue[rr_in] = req[i];
                rr_in++;
            end
    end
    always_comb for (int i = 0; i < ewd; i++) rr_waddr[i] = rr_front + $clog2(eqsz)'(rr_num) + $clog2(eqsz)'(i);
    always_comb for (int i = 0; i < ewd; i++) rr_wena [i] = i < 32'(rr_in);
    always_ff @(posedge clk) if (rst) rr_opid <= 0;
        else for (int i = 0; i < ewd; i++) if (rr_wena[i]) rr_opid[rr_waddr[i]] <= rr_wvalue[i].opid;
    always_ff @(posedge clk) if (rst) rr_bubble <= 0; else begin
        for (int i = 0; i < eqsz; i++) if (succeed(rr_opid[i])) rr_bubble[i] <= 1;
        for (int i = 0; i < ewd; i++) if (rr_wena[i]) rr_bubble[rr_waddr[i]] <= 0;
    end
    always_ff @(posedge clk) if (rst) rr_front <= 0; else rr_front <= rr_front + $clog2(eqsz)'(rr_out);
    always_ff @(posedge clk) if (rst) rr_num <= 0; else rr_num <= rr_num + rr_in - rr_out;

    /* multiplier pipeline */
    exe_bundle_t [`MULLAT-1:0] rq, rq_next; // result queue
    exe_bundle_t result;
    logic [127:0] r, a, b;
    mul_funct_t f;
    always_comb begin
        f = $bits(mul_funct_t)'(rr_rvalue.funct);
        a = 128'(rr_rvalue.prsv[0]);
        b = 128'(rr_rvalue.prsv[1]);
        if (f.mul | f.mulw | f.mulh | f.mulhsu) a[127:64] = {64{a[63]}};
        if (f.mul | f.mulw | f.mulh)            b[127:64] = {64{b[63]}};
        r = a * b;
        if (f.mulw) r[63:0] = {{32{r[31]}}, r[31:0]};
        if (f.mulh | f.mulhsu | f.mulhu) r[63:0] = r[127:64];
    end
    always_comb begin
        result = 0;
        if (|rr_num) result.opid = rr_rvalue.opid;
        if (succeed(rr_opid[rr_front]) | rr_bubble[rr_front]) result.opid = 0;
        result.brid = rr_rvalue.brid;
        result.ldid = rr_rvalue.ldid;
        result.stid = rr_rvalue.stid;
        result.delta = rr_rvalue.delta;
        result.pc = rr_rvalue.pc;
        result.npc = rr_rvalue.base[63:0] + 63'(rr_rvalue.delta);
        result.prda = rr_rvalue.prda[1];
        result.prdv = r[63:0];
    end
    always_comb rr_out = |rr_num & (claim[0] | ~rq[0].opid[15]) ? 1 : 0;
    always_comb begin
        rq_next = rq;
        if (claim[0] | ~rq[0].opid[15]) rq_next = {result, rq[`MULLAT-1:1]};
        for (int i = 0; i < `MULLAT; i++) if (succeed(rq_next[i].opid)) rq_next[i].opid = 0;
    end
    always_ff @(posedge clk) if (rst) rq <= 0; else rq <= rq_next;

    /* assign response */
    always_comb ready = ewd <= eqsz - 32'(rr_num); // ready when able to holding `ewd` operations
    always_comb begin
        resp = 0;
        resp[0] = rq[0];
    end
endmodule
