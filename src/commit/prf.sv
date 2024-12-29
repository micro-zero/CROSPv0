/**
 * prf.sv:
 *   This file includes physical register file module,
 *   including register data and busy table.
 */

`include "types.sv"
import types::*;

module prf #(
    parameter prnum = 96,  // number of physical registers
    parameter rwd   = 4,   // rename width
    parameter iwd   = 4,   // issue width
    parameter ewd   = 4,   // execute width
    parameter cwd   = 4    // commit width
)(
    input  logic clk,
    input  logic rst,
    input  ren_bundle_t [rwd-1:0]            ren_bundle, // for reading busy table
    input  iss_bundle_t [iwd-1:0]            iss_bundle, // for reading registers
    input  exe_bundle_t [ewd-1:0]            exe_bundle,
    input  com_bundle_t [cwd-1:0]            com_bundle,
    output logic        [rwd-1:0][1:0]       busy_resp,
    output logic        [iwd-1:0][1:0][63:0] reg_resp
);
    /* pipeline redirect */
    logic redir;
    always_comb redir = com_bundle[0].redir;

    /* busy table */
    logic [prnum-1:0] busy;
    always_comb for (int i = 0; i < rwd; i++) begin
        busy_resp[i][0] = busy[32'(ren_bundle[i].prsa[0])];
        busy_resp[i][1] = busy[32'(ren_bundle[i].prsa[1])];
        for (int j = 0; j < rwd; j++) if (j < i) begin // forward previous instructions
            if (ren_bundle[i].prsa[0] == ren_bundle[j].prda[1]) busy_resp[i][0] = 1;
            if (ren_bundle[i].prsa[1] == ren_bundle[j].prda[1]) busy_resp[i][1] = 1;
        end
        for (int j = 0; j < ewd; j++) begin // forward current write-back registers
            if (ren_bundle[i].prsa[0] == exe_bundle[j].prda) busy_resp[i][0] = 0;
            if (ren_bundle[i].prsa[1] == exe_bundle[j].prda) busy_resp[i][1] = 0;
        end
    end
    always_ff @(posedge clk) if (rst | redir) busy <= 0;
        else begin
            /* set busy after renaming */
            for (int i = 0; i < rwd; i++)
                if (ren_bundle[i].opid[15] & |ren_bundle[i].prda[1])
                    busy[32'(ren_bundle[i].prda[1])] <= 1;
            /* unset busy after execution */
            for (int i = 0; i < ewd; i++)
                if (exe_bundle[i].opid[15])
                    busy[32'(exe_bundle[i].prda)] <= 0;
        end

    /* register file */
    logic [iwd-1:0][1:0][$clog2(prnum)-1:0] raddr;
    logic [ewd-1:0]     [$clog2(prnum)-1:0] waddr;
    logic [ewd-1:0][1:0]             [63:0] rvalue;
    logic [ewd-1:0]                  [63:0] wvalue;
    logic [ewd-1:0]                         wena;
    always_comb for (int i = 0; i < iwd; i++) for (int j = 0; j < 2; j++)
        raddr[i][j] = $clog2(prnum)'(iss_bundle[i].prsa[j]);
    always_comb for (int i = 0; i < ewd; i++) waddr [i] = $clog2(prnum)'(exe_bundle[i].prda);
    always_comb for (int i = 0; i < ewd; i++) wvalue[i] = exe_bundle[i].prdv;
    always_comb for (int i = 0; i < ewd; i++) wena  [i] = exe_bundle[i].opid[15] & ~exe_bundle[i].cause[7] & |waddr[i];
    always_comb for (int i = 0; i < ewd; i++) for (int j = 0; j < 2; j++)
        if (raddr[i][j] == 0) reg_resp[i][j] = 0;
        else begin
            reg_resp[i][j] = rvalue[i][j];
            for (int k = 0; k < ewd; k++)
                if (raddr[i][j] == waddr[k]) reg_resp[i][j] = wvalue[k];
        end
    mwpram #(.width(64), .depth(prnum), .rports(2 * iwd), .wports(ewd))
        regfile_inst(.clk(clk), .rst(rst),
            .raddr(raddr), .rvalue(rvalue),
            .waddr(waddr), .wvalue(wvalue), .wena(wena));
endmodule
