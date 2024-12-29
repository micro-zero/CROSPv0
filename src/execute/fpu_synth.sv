/**
 * fpu_synth.sv:
 *   Synthesizable fake FPU.
 */

`include "types.sv"
import types::*;

module fpu #(
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
    output exe_bundle_t [ewd-1:0] resp   // execution results
);
    /* register read buffer */
    logic [$clog2(eqsz)-1:0] rr_front;
    logic [$clog2(eqsz):0] rr_num, rr_in, rr_out;
    logic        [ewd-1:0][$clog2(eqsz)-1:0] rr_raddr, rr_waddr;
    reg_bundle_t [ewd-1:0]                   rr_rvalue, rr_wvalue;
    logic        [ewd-1:0]                   rr_wena;
    always_comb begin
        rr_in = 0; rr_wvalue = 0;
        for (int i = 0; i < iwd; i++)
            if (req[i].opid[15] & req[i].fu[2]) begin // select FPU requests and flatten them
                rr_wvalue[rr_in] = req[i];
                rr_in++;
            end
    end
    always_comb for (int i = 0; i < ewd; i++) rr_raddr[i] = rr_front + $clog2(eqsz)'(i);
    always_comb for (int i = 0; i < ewd; i++) rr_waddr[i] = rr_raddr[i] + $clog2(eqsz)'(rr_num);
    always_comb for (int i = 0; i < ewd; i++) rr_wena [i] = i < 32'(rr_in);
    always_ff @(posedge clk) if (rst | flush) rr_front <= 0; else rr_front <= rr_front + $clog2(eqsz)'(rr_out);
    always_ff @(posedge clk) if (rst | flush) rr_num <= 0; else rr_num <= rr_num + rr_in - rr_out;
    mwpram #(.width($bits(reg_bundle_t)), .depth(eqsz), .rports(ewd), .wports(ewd))
        rr_inst(.clk(clk), .rst(rst),
            .raddr(rr_raddr), .rvalue(rr_rvalue),
            .waddr(rr_waddr), .wvalue(rr_wvalue), .wena(rr_wena));

`define FPULAT 5

    /* FPU pipeline */
    exe_bundle_t [`FPULAT-1:0] rq; // result queue
    exe_bundle_t result;
    always_comb begin
        result = 0;
        if (|rr_num) result.opid = rr_rvalue[0].opid;
        result.npc = rr_rvalue[0].base[63:0] + 64'(rr_rvalue[0].delta);
        result.prda = rr_rvalue[0].prda[1];
        result.prdv = 64'hffffffff00000000;
    end
    always_comb rr_out = |rr_num & (claim[0] | ~rq[0].opid[15]) ? 1 : 0;
    always_ff @(posedge clk) if (rst | flush) rq <= 0;
        else if (claim[0] | ~rq[0].opid[15]) rq <= {result, rq[`FPULAT-1:1]};

    /* assign response */
    always_comb ready = ewd <= eqsz - rr_num + rr_out; // ready when able to holding `ewd` operations
    always_comb begin
        resp = 0;
        resp[0] = rq[0];
    end
endmodule
