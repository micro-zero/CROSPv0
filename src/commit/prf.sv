/**
 * prf.sv:
 *   This file includes physical register file module,
 *   including register data and busy table.
 */

`include "types.sv"
import types::*;

module prf #(
    parameter prnum, // number of physical registers
    parameter rwd,   // rename width
    parameter ewd,   // execute width
    parameter cwd,   // commit width
    parameter opsz   // operation ID size
)(
    input  logic clk,
    input  logic rst,
    input  ren_bundle_t [rwd-1:0]            ren_bundle, // for reading busy table
    input  exe_bundle_t [ewd-1:0]            exe_bundle,
    input  red_bundle_t                      red_bundle,
    input  logic        [rwd-1:0]            rename,
    output logic        [rwd-1:0][1:0]       busy_resp,
    output logic        [rwd-1:0][1:0][63:0] reg_resp
);
    /* pipeline redirect */
    function logic succeed(input logic [15:0] opid);
        succeed = red_bundle.opid[15] & opid[15] &
            $clog2(opsz)'(opid)            - $clog2(opsz)'(red_bundle.topid) >=
            $clog2(opsz)'(red_bundle.opid) - $clog2(opsz)'(red_bundle.topid) + $clog2(opsz)'(1);
    endfunction

    /* busy table */
    logic [prnum-1:0] busy;
    always_comb for (int i = 0; i < rwd; i++) begin
        busy_resp[i][0] = busy[32'(ren_bundle[i].prsa[0])];
        busy_resp[i][1] = busy[32'(ren_bundle[i].prsa[1])];
        for (int j = 0; j < rwd; j++) if (j < i) begin // forward previous instructions
            if (ren_bundle[i].prsa[0] == ren_bundle[j].prda[1]) busy_resp[i][0] = 1;
            if (ren_bundle[i].prsa[1] == ren_bundle[j].prda[1]) busy_resp[i][1] = 1;
        end
        if (~|ren_bundle[i].prsa[0]) busy_resp[i][0] = 0; // except zero forwarding
        if (~|ren_bundle[i].prsa[1]) busy_resp[i][1] = 0;
        for (int j = 0; j < ewd; j++) begin // forward current write-back registers
            if (ren_bundle[i].prsa[0] == exe_bundle[j].prda) busy_resp[i][0] = 0;
            if (ren_bundle[i].prsa[1] == exe_bundle[j].prda) busy_resp[i][1] = 0;
        end
    end
    always_ff @(posedge clk) if (rst) busy <= 0;
        else begin
            /* set busy after renaming */
            for (int i = 0; i < rwd; i++)
                if (ren_bundle[i].opid[15] & |ren_bundle[i].prda[1] & rename[i])
                    busy[32'(ren_bundle[i].prda[1])] <= 1;
            /* unset busy after execution */
            for (int i = 0; i < ewd; i++)
                if (exe_bundle[i].opid[15])
                    busy[32'(exe_bundle[i].prda)] <= 0;
            /* there is no need for busy table to act with redirection because in-flight busy
               physical registers will be free and unmapped after redirection and unmapped busy
               bits are meaningless, so that even there is no need to clear busy table on reset */
        end

    /* register file */
    logic [rwd-1:0][1:0][$clog2(prnum)-1:0] raddr;
    logic [ewd-1:0]     [$clog2(prnum)-1:0] waddr;
    logic [rwd-1:0][1:0]             [63:0] rvalue;
    logic [ewd-1:0]                  [63:0] wvalue;
    logic [ewd-1:0]                         wena;
    always_comb for (int i = 0; i < rwd; i++) for (int j = 0; j < 2; j++)
        raddr[i][j] = $clog2(prnum)'(ren_bundle[i].prsa[j]);
    always_comb for (int i = 0; i < ewd; i++) begin
        waddr [i] = $clog2(prnum)'(exe_bundle[i].prda);
        wvalue[i] = exe_bundle[i].prdv;
        wena  [i] = exe_bundle[i].opid[15] & |waddr[i];
    end
    always_comb for (int i = 0; i < rwd; i++) for (int j = 0; j < 2; j++)
        if (raddr[i][j] == 0) reg_resp[i][j] = 0;
        else begin
            reg_resp[i][j] = rvalue[i][j];
            for (int k = 0; k < ewd; k++)
                if (wena[k] & raddr[i][j] == waddr[k]) reg_resp[i][j] = wvalue[k];
        end
    mwpram #(.width(64), .depth(prnum), .rports(2 * rwd), .wports(ewd))
        regfile_inst(.clk(clk), .rst(rst),
            .raddr(raddr), .rvalue(rvalue),
            .waddr(waddr), .wvalue(wvalue), .wena(wena));
endmodule
