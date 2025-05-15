/**
 * issue.sv:
 *   This file include issue unit top module.
 */

`include "types.sv"
import types::*;

module issue #(
    parameter rwd,  // rename width
    parameter iwd,  // issue width
    parameter ewd,  // execution width
    parameter cwd,  // commit width
    parameter mwd,  // memory access width
    parameter opsz, // operation ID size
    parameter iqsz  // OoO issue queue size
)(
    input  logic clk,
    input  logic rst,
    input  logic          [4:0] fu_ready,     // function unit ready signals
    input  logic [rwd-1:0][1:0] busy_resp,    // busy table response
    input  exe_bundle_t [iwd-1:0] exe_bundle, // execute bundle
    input  red_bundle_t           red_bundle, // redirect bundle
    output logic        [rwd-1:0] ready,      // ready signal
    input  ren_bundle_t [rwd-1:0] ren_bundle, // rename bundle
    input  logic        [iwd-1:0] issue,      // issue signal, should be constantly set
    output iss_bundle_t [iwd-1:0] iss_bundle, // issue bundle
    input exe_unit_resp_t core_exe_iresp
);
    /* pipeline redirect */
    function logic succeed(input logic [15:0] opid);
        succeed = red_bundle.opid[15] & opid[15] &
            $clog2(opsz)'(opid)            - $clog2(opsz)'(red_bundle.topid) >=
            $clog2(opsz)'(red_bundle.opid) - $clog2(opsz)'(red_bundle.topid) + $clog2(opsz)'(1);
    endfunction

    /* classification */
    logic [$clog2(iqsz):0]      iq_in, iq_out, iq_num;
    iss_bundle_t [iwd-1:0]      iq_in_data;
    logic        [iwd-1:0][1:0] iq_in_busy; // bit in busy table
    always_comb begin
        iq_in = 0; ready = 0;
        iq_in_data = 0;
        iq_in_busy = 0;
        for (int i = 0; i < rwd; i++) if (ren_bundle[i].opid[15]) begin
            if (i >= iwd | i >= iqsz - 32'(iq_num)) break;
            iq_in_data[i].opid   = ren_bundle[i].opid;
            iq_in_data[i].brid   = ren_bundle[i].brid;
            iq_in_data[i].ldid   = ren_bundle[i].ldid;
            iq_in_data[i].stid   = ren_bundle[i].stid;
            iq_in_data[i].ir     = ren_bundle[i].ir;
            iq_in_data[i].pc     = ren_bundle[i].pc;
            iq_in_data[i].pnpc   = ren_bundle[i].pnpc;
            iq_in_data[i].delta  = ren_bundle[i].delta;
            iq_in_data[i].pat    = ren_bundle[i].pat;
            iq_in_data[i].fu     = ren_bundle[i].fu;
            iq_in_data[i].funct  = ren_bundle[i].funct;
            iq_in_data[i].base   = ren_bundle[i].base;
            iq_in_data[i].offset = ren_bundle[i].offset;
            iq_in_data[i].a      = ren_bundle[i].a;
            iq_in_data[i].b      = ren_bundle[i].b;
            iq_in_data[i].branch = ren_bundle[i].branch;
            iq_in_data[i].jal    = ren_bundle[i].jal;
            iq_in_data[i].jalr   = ren_bundle[i].jalr;
            iq_in_data[i].prsa   = ren_bundle[i].prsa;
            iq_in_data[i].prda   = ren_bundle[i].prda;
            iq_in_busy[i] = busy_resp[i];
            iq_in++;
            ready[i] = 1;
        end else break;
        if (red_bundle.opid[15]) {ready, iq_in} = 0;
    end

    /* default issue queue */
    logic [iqsz-1:0]                iq_occ, iq_ready;          // issue queue occupation and readiness
    logic [iqsz-1:0]                iq_out_mask;               // issue queue output mask (ready =/= out)
    logic [iqsz-1:0]                iq_resend;                 // issue queue needing resent
    logic [iqsz-1:0]                iq_flush;                  // flush bits
    logic [iqsz-1:0][15:0]          iq_opid;                   // operation ID
    logic [iqsz-1:0][1:0][15:0]     iq_prsa;                   // pending physical register addresses
    logic [iqsz-1:0][1:0]           iq_prsb, iq_prsb_fwd;      // pending physical register busy bits
    logic [iqsz-1:0][4:0]           iq_fu;                     // function unit mask
    logic [iqsz-1:0]                iq_mem;                    // memory type
    logic [iwd-1:0][$clog2(iqsz):0] iq_free_pos, iq_ready_pos; // positions within bitmap
    logic [ewd-1:0][$clog2(iqsz):0] iq_nrm_pos, iq_mem_pos;    // normal and memory instruction positions
    logic        [iwd-1:0][$clog2(iqsz)-1:0] iq_raddr, iq_waddr;
    iss_bundle_t [iwd-1:0]                   iq_rvalue;
    logic        [iwd-1:0]                   iq_wena;
    mwpram #(.width($bits(iss_bundle_t)), .depth(iqsz), .rports(iwd), .wports(iwd))
        iq_inst(.clk(clk), .rst(rst),
            .raddr(iq_raddr), .rvalue(iq_rvalue),
            .waddr(iq_waddr), .wvalue(iq_in_data), .wena(iq_wena));
    firstk #(.width(iqsz), .k(iwd)) free_pos_inst(.bits(~iq_occ), .pos(iq_free_pos));
    firstk #(.width(iqsz), .k(ewd)) nrm_pos_inst(.bits(iq_ready & ~iq_mem), .pos(iq_nrm_pos));
    firstk #(.width(iqsz), .k(ewd)) mem_pos_inst(.bits(iq_ready &  iq_mem), .pos(iq_mem_pos));
    always_comb for (int i = 0; i < iwd; i++) iq_raddr[i] = $clog2(iqsz)'(iq_ready_pos[i]);
    always_comb for (int i = 0; i < iwd; i++) iq_waddr[i] = $clog2(iqsz)'(iq_free_pos[i]);
    always_comb for (int i = 0; i < iwd; i++) iq_wena[i]  = i < 32'(iq_in);
    always_comb for (int i = 0; i < iqsz; i++) iq_mem[i] = iq_fu[i][1];
    always_comb for (int i = 0; i < iqsz; i++)
        iq_ready[i] = iq_occ[i] & ~iq_flush[i] & |(iq_fu[i] & fu_ready) &          // related FU ready
            ~iq_prsb_fwd[i][0] & (~iq_prsb_fwd[i][1] | iq_mem[i] & ~iq_resend[i]); // oprands ready
    always_comb begin
        iq_ready_pos = 0; // limit numbers of memory type and non-memory type within `ewd`
        for (int i = 0; i < ewd; i++) if (iq_nrm_pos[i][$clog2(iqsz)]) iq_ready_pos[i]       = iq_nrm_pos[i];
        for (int i = 0; i < ewd; i++) if (iq_mem_pos[i][$clog2(iqsz)]) iq_ready_pos[iwd-1-i] = iq_mem_pos[i];
    end
    always_comb begin
        iq_prsb_fwd = iq_prsb; // forwarding of wakeup
        for (int i = 0; i < iqsz; i++) begin
            for (int j = 0; j < iwd; j++) if (exe_bundle[j].opid[15]) begin
                if (iq_prsa[i][0] == exe_bundle[j].prda) iq_prsb_fwd[i][0] = 0;
                if (iq_prsa[i][1] == exe_bundle[j].prda) iq_prsb_fwd[i][1] = 0;
            end
            if (core_exe_iresp.valid & iq_prsa[i][0] == 16'(core_exe_iresp.uop.pdst)) iq_prsb_fwd[i][0] = 0;
            if (core_exe_iresp.valid & iq_prsa[i][1] == 16'(core_exe_iresp.uop.pdst)) iq_prsb_fwd[i][1] = 0;
        end
    end
    always_comb for (int i = 0; i < iqsz; i++) iq_flush[i] = iq_occ[i] & succeed(iq_opid[i]);
    always_ff @(posedge clk) if (rst) iq_occ <= 0; else begin
        iq_occ <= iq_occ & ~iq_out_mask;
        for (int i = 0; i < iwd; i++) if (iq_wena[i]) iq_occ[iq_waddr[i]] <= 1;
    end
    always_ff @(posedge clk) if (rst) iq_opid <= 0; else
        for (int i = 0; i < iwd; i++) if (iq_wena[i]) iq_opid[iq_waddr[i]] <= iq_in_data[i].opid;
    always_ff @(posedge clk) if (rst) iq_prsb <= 0; else begin
        iq_prsb <= iq_prsb_fwd;
        for (int i = 0; i < iwd; i++) if (iq_wena[i]) begin
            iq_prsa[iq_waddr[i]] <= iq_in_data[i].prsa;
            iq_prsb[iq_waddr[i]] <= iq_in_busy[i];
            iq_fu  [iq_waddr[i]] <= iq_in_data[i].fu;
        end
    end
    always_ff @(posedge clk) if (rst) iq_num <= 0; else iq_num <= iq_num + iq_in - iq_out;
    /* if second oprand is not ready in store instruction, it can be issued once and
       mark `iq_resend` to avoid duplication, and at last clear it when both ready */
    always_ff @(posedge clk) if (rst) iq_resend <= 0;
        else for (int i = 0; i < iwd; i++)
            if (iq_ready_pos[i][$clog2(iqsz)] & issue[i]) iq_resend[iq_raddr[i]] <= iss_bundle[i].prsb[1];

    /* issue arbiter */
    always_comb begin
        iss_bundle = 0;
        for (int i = 0; i < iwd; i++) begin
            if (iq_ready_pos[i][$clog2(iqsz)]) begin
                iss_bundle[i] = iq_rvalue[i];
                iss_bundle[i].prsb = iq_prsb_fwd[iq_raddr[i]];
            end
            if (iss_bundle[i].fu[1]) break;
        end
    end
    always_comb begin
        iq_out = $countones(iq_flush);
        iq_out_mask = iq_flush;
        for (int i = 0; i < iwd; i++) begin
            if (iq_ready_pos[i][$clog2(iqsz)] & ~iss_bundle[i].prsb[1] & issue[i]) begin
                iq_out++;
                iq_out_mask[iq_raddr[i]] = 1;
            end
            if (iss_bundle[i].fu[1]) break;
        end
    end
endmodule
