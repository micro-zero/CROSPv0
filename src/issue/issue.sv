/**
 * issue.sv:
 *   This file include issue unit top module.
 */

`include "types.sv"
import types::*;

module issue #(
    parameter rwd  = 4, // rename width
    parameter iwd  = 4, // issue width
    parameter ewd  = 4, // execution width
    parameter cwd  = 4, // commit width
    parameter iqsz = 16 // OoO issue queue size
)(
    input  logic clk,
    input  logic rst,
    input  logic          [4:0] fu_ready,     // function unit ready signals
    input  logic [rwd-1:0][1:0] busy_resp,    // busy table response
    input  exe_bundle_t [ewd-1:0] exe_bundle, // execute bundle
    input  com_bundle_t [cwd-1:0] com_bundle, // commit bundle
    output logic        [rwd-1:0] ready,      // ready signal
    input  ren_bundle_t [rwd-1:0] ren_bundle, // rename bundle
    input  logic        [iwd-1:0] issue,      // issue signal, should be constantly set
    output iss_bundle_t [iwd-1:0] iss_bundle  // issue bundle
);
    /* pipeline redirect */
    logic redir;
    always_comb redir = com_bundle[0].redir;

    /* classification */
    logic [$clog2(iqsz):0]      iq_in, iq_out, iq_num;
    iss_bundle_t [iwd-1:0]      iq_in_data;
    logic        [iwd-1:0][1:0] iq_in_busy; // bit in busy table
    always_comb begin
        iq_in = 0; ready = 0;
        iq_in_data = 0;
        iq_in_busy = 0;
        for (int i = 0; i < rwd; i++) if (ren_bundle[i].opid[15]) begin
            begin
                /* for now all operations are sent to default issue queue */
                if (32'(iq_in) >= iwd | 32'(iq_in) >= iqsz - 32'(iq_num)) break;
                iq_in_data[32'(iq_in)] = ren_bundle[i];
                iq_in_busy[32'(iq_in)] = busy_resp[i];
                iq_in++;
            end
            ready[i] = 1;
        end else break;
    end

    /* default issue queue */
    logic [iqsz-1:0]              iq_occ, iq_ready;            // issue queue occupation and readiness
    logic [iqsz-1:0]              iq_out_mask;                 // issue queue output mask (ready =/= out)
    logic [iqsz-1:0][1:0][15:0]   iq_prsa;                     // pending physical register addresses
    logic [iqsz-1:0][1:0]         iq_prsb, iq_prsb_fwd;        // pending physical register busy bits
    logic [iqsz-1:0][4:0]         iq_fu;                       // function unit mask
    logic [iwd-1:0][$clog2(iqsz):0] iq_free_pos, iq_ready_pos; // positions within bitmap
    logic        [iwd-1:0][$clog2(iqsz)-1:0] iq_raddr, iq_waddr;
    iss_bundle_t [iwd-1:0]                   iq_rvalue;
    logic        [iwd-1:0]                   iq_wena;
    mwpram #(.width($bits(iss_bundle_t)), .depth(iqsz), .rports(iwd), .wports(iwd))
        iq_inst(.clk(clk), .rst(rst),
            .raddr(iq_raddr), .rvalue(iq_rvalue),
            .waddr(iq_waddr), .wvalue(iq_in_data), .wena(iq_wena));
    firstk #(.width(iqsz), .k(iwd)) free_pos_inst(.bits(~iq_occ | iq_out_mask/*todo:ok to delete?*/), .pos(iq_free_pos));
    firstk #(.width(iqsz), .k(iwd)) ready_pos_inst(.bits(iq_ready), .pos(iq_ready_pos));
    always_comb for (int i = 0; i < iwd; i++) iq_raddr[i]  = $clog2(iqsz)'(iq_ready_pos[i]);
    always_comb for (int i = 0; i < iwd; i++) iq_waddr[i]  = $clog2(iqsz)'(iq_free_pos[i]);
    always_comb for (int i = 0; i < iwd; i++) iq_wena[i]   = i < 32'(iq_in);
    always_comb for (int i = 0; i < iqsz; i++) iq_ready[i] = iq_occ[i] & ~|iq_prsb_fwd[i] & |(iq_fu[i] & fu_ready);
    always_comb begin
        iq_prsb_fwd = iq_prsb;
        for (int i = 0; i < iqsz; i++)
            for (int j = 0; j < ewd; j++) if (exe_bundle[j].opid[15]) begin
                if (iq_prsa[i][0] == exe_bundle[j].prda) iq_prsb_fwd[i][0] = 0; // wakeup
                if (iq_prsa[i][1] == exe_bundle[j].prda) iq_prsb_fwd[i][1] = 0;
            end
    end
    always_ff @(posedge clk) if (rst | redir) iq_occ <= 0; else begin
        iq_occ <= iq_occ & ~iq_out_mask;
        for (int i = 0; i < iwd; i++) if (i < iq_in) iq_occ[iq_waddr[i]] <= 1;
    end
    always_ff @(posedge clk) if (rst | redir) iq_prsb <= 0; else begin
        iq_prsb <= iq_prsb_fwd;
        for (int i = 0; i < iwd; i++) if (iq_wena[i]) begin
            iq_prsa[iq_waddr[i]] <= iq_in_data[i].prsa;
            iq_prsb[iq_waddr[i]] <= iq_in_busy[i];
            iq_fu  [iq_waddr[i]] <= iq_in_data[i].fu;
        end
    end
    always_ff @(posedge clk) if (rst | redir) iq_num <= 0; else iq_num <= iq_num + iq_in - iq_out;

    /* issue arbiter */
    lsu_funct_t lsu_funct;
    always_comb begin
        iss_bundle = 0;
        iq_out = 0; iq_out_mask = 0;
        for (int i = 0; i < iwd; i++)
            if (iq_ready_pos[i][$clog2(iqsz)]) begin
                iss_bundle[i] = iq_rvalue[i];
            if (issue[i])
                begin iq_out++; iq_out_mask[iq_raddr[i]] = 1; end
            if (iss_bundle[i].fu[1]) break;
        end
        /* verilator lint_off WIDTHEXPAND */
        /* verilator lint_off WIDTHTRUNC */
        lsu_funct = 0;
        for (int i = 0; i < iwd; i++) if(iss_bundle[i].fu[1]) begin
            lsu_funct = $bits(lsu_funct_t)'(iss_bundle[i].funct);
            lsu_funct.is_sta = lsu_funct.store;
            lsu_funct.is_std = lsu_funct.store;
            lsu_funct.is_amo = 0;
            lsu_funct.is_fence = 0;
            lsu_funct.rob_idx = 6'(iss_bundle[i].opid);
            lsu_funct.br_mask = 0;
            lsu_funct.br_tag = 0;
            lsu_funct.taken = 0;
            lsu_funct.pdst = iss_bundle[i].prda;
            lsu_funct.exception = 0;
            lsu_funct.ldq_idx = 6'(iss_bundle[i].ldid);
            lsu_funct.stq_idx = 6'(iss_bundle[i].stid);
            lsu_funct.mem_size = 0;
            iss_bundle[i].funct = 64'(lsu_funct);
        end
    end
endmodule
