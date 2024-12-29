/**
 * mwpram.sv:
 *   This file includes multi-write-ports RAM module, to be
 *   synthesized implicitly as RAM instead of FF.
 */

module mwpram #(parameter width = 64, parameter depth = 64,
    parameter rports = 2, parameter wports = 1) (
    input  logic clk,
    input  logic rst,
    input  logic [rports-1:0][$clog2(depth)-1:0] raddr,  // reading addresses
    output logic [rports-1:0]        [width-1:0] rvalue, // reading values
    input  logic [wports-1:0][$clog2(depth)-1:0] waddr,  // writing addresses
    input  logic [wports-1:0]        [width-1:0] wvalue, // writing values
    input  logic [wports-1:0]                    wena    // writing enable
);
    /* the basic idea is to use duplicate RAM controlled by
       fewer bits of selection, so that LUT and FF resources
       are reduced from `width` to selection width */
    logic [$clog2(wports)-1:0] sel[depth-1:0]; // the selections
    always_ff @(posedge clk)
        /* selection is set to related bank of RAM */
        for (int i = 0; i < wports; i++) if (wena[i]) sel[waddr[i]] <= $clog2(wports)'(i);
    for (genvar i = 0; i < wports; i++) begin : dupregs
        logic [width-1:0] regs[depth-1:0]; // the duplicated registers (RAM)
        always_ff @(posedge clk)
            if (wena[i]) regs[waddr[i]] <= wvalue[i]; // written by i-th writing port
    end
    for (genvar i = 0; i < rports; i++) begin
        logic [width-1:0] dupval[wports-1:0];
        for (genvar j = 0; j < wports; j++)
            always_comb dupval[j] = dupregs[j].regs[raddr[i]];
        always_comb rvalue[i] = dupval[sel[raddr[i]]]; // mux from banks
    end
endmodule
