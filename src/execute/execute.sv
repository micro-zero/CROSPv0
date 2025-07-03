/**
 * execute.sv:
 *   This file includes execution unit top module. It packs
 *   issue bundle with register value and sends to different
 *   function units. Execition unit also arbitrates results
 *   from the function units and then send to ROB.
 */

`include "types.sv"
import types::*;

module execute #(
    parameter ewd,  // execute width
    parameter opsz, // operation ID size
    parameter prnum // number of physical registers
)(
    input  logic clk,
    input  logic rst,
    output exe_bundle_t [ewd-1:0] exe_bundle,   // execute bundle
    input  exe_bundle_t [4:0][ewd-1:0] fu_resp, // function units responses
    output logic        [4:0][ewd-1:0] fu_claim // claim signals for responses
);
    /* result arbiter */
    logic [$clog2(ewd):0] num_out;
    always_comb begin
        num_out = 0; fu_claim = 0; exe_bundle = 0;
        for (int i = 4; i >= 0; i--) for (int j = 0; j < ewd; j++)
            if (32'(num_out) < ewd & fu_resp[i][j].opid[15]) begin
                exe_bundle[num_out] = fu_resp[i][j];
                fu_claim[i][j] = 1;
                num_out++;
            end
    end
endmodule
