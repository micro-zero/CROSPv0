/**
 * execute.sv:
 *   This file includes execution unit top module. It packs
 *   issue bundle with register value and sends to different
 *   function units. Execition unit also arbiters results from
 *   the function units and then send to ROB.
 */

`include "types.sv"
import types::*;

module execute #(
    parameter iwd   = 4,  // issue width
    parameter ewd   = 4,  // execute width
    parameter prnum = 96  // number of physical registers
)(
    input  logic clk,
    input  logic rst,
    input  logic [iwd-1:0][1:0][63:0] reg_resp, // register read response
    input  iss_bundle_t [iwd-1:0] iss_bundle,   // issue bundle
    output reg_bundle_t [iwd-1:0] reg_bundle,   // register read bundle
    input  logic        [ewd-1:0] execute,      // execute signal
    output exe_bundle_t [ewd-1:0] exe_bundle,   // execute bundle
    input  exe_bundle_t [4:0][ewd-1:0] fu_resp, // function units responses
    output logic        [4:0][ewd-1:0] fu_claim // claim signals for responses
);
    /* read registers and send to function units */
    always_comb for (int i = 0; i < iwd; i++) begin
        reg_bundle[i].opid   = iss_bundle[i].opid;
        reg_bundle[i].brid   = iss_bundle[i].brid;
        reg_bundle[i].ldid   = iss_bundle[i].ldid;
        reg_bundle[i].stid   = iss_bundle[i].stid;
        reg_bundle[i].ir     = iss_bundle[i].ir;
        reg_bundle[i].pc     = iss_bundle[i].pc;
        reg_bundle[i].pnpc   = iss_bundle[i].pnpc;
        reg_bundle[i].delta  = iss_bundle[i].delta;
        reg_bundle[i].pat    = iss_bundle[i].pat;
        reg_bundle[i].fu     = iss_bundle[i].fu;
        reg_bundle[i].funct  = iss_bundle[i].funct;
        reg_bundle[i].base   = iss_bundle[i].base;
        reg_bundle[i].offset = iss_bundle[i].offset;
        reg_bundle[i].a      = iss_bundle[i].a;
        reg_bundle[i].b      = iss_bundle[i].b;
        reg_bundle[i].branch = iss_bundle[i].branch;
        reg_bundle[i].jal    = iss_bundle[i].jal;
        reg_bundle[i].jalr   = iss_bundle[i].jalr;
        reg_bundle[i].prs    = reg_resp[i];
        reg_bundle[i].prda   = iss_bundle[i].prda;
        reg_bundle[i].prsb   = iss_bundle[i].prsb;
    end

    /* result arbiter */
    logic [$clog2(ewd):0] num_out;
    always_comb begin
        num_out = 0; fu_claim = 0; exe_bundle = 0;
        for (int i = 4; i >= 0; i--) for (int j = 0; j < ewd; j++)
            if (32'(num_out) < ewd & execute[$clog2(ewd)'(num_out)] & fu_resp[i][j].opid[15]) begin
                exe_bundle[num_out] = fu_resp[i][j];
                fu_claim[i][j] = 1;
                num_out++;
            end
    end
endmodule
