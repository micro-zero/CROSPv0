/**
 * lsu.sv:
 *   This is the load/store unit module, handling memory
 *   and CSR operations. It connects virtual memory.
 */

`include "types.sv"
import types::*;

module lsu #(
    parameter iwd  = 4, // issue width
    parameter mwd  = 2, // memory access width
    parameter ewd  = 4, // execution width
    parameter eqsz = 4  // execution queue size
)(
    input  logic clk,
    input  logic rst,
    input  logic flush,
    input  logic [7:0] nextlsid,         // next lsid to commmit
    output logic                  ready, // ready for receiving at most `mwd` requests
    input  reg_bundle_t [iwd-1:0] req,   // requests after register read
    input  logic        [ewd-1:0] claim, // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] resp,  // execution results
    /* CSR interface */
    output logic        csr_rqst, // CSR writing request
    output logic  [2:0] csr_func, // CSR writing functional code (funct3)
    output logic [11:0] csr_addr, // CSR writing address
    output logic [63:0] csr_wdat, // CSR writing data
    input  logic        csr_excp, // CSR exception
    input  logic [63:0] csr_rdat, // CSR reading data
    input  logic        csr_flsh, // CSR flush signal
    /* D-cache interface */
    output logic                 dcache_flsh, // flush signal
    output logic           [7:0] dcache_cfrm, // store confirmed id
    output logic [mwd-1:0] [7:0] dcache_rqst, // dcache request id (non-zero)
    output logic [mwd-1:0]       dcache_fnce, // fence signal
    output logic [mwd-1:0] [1:0] dcache_aqrl, // acquire/release access
    output logic [mwd-1:0] [1:0] dcache_rsrv, // reservation bits [hard, soft]
    output logic [mwd-1:0] [2:0] dcache_bits, // width and sign-extention bits (funct3)
    output logic [mwd-1:0]       dcache_wena, // write enable signal
    output logic [mwd-1:0][63:0] dcache_addr, // virtual address
    output logic [mwd-1:0][63:0] dcache_wdat, // writing data
    input  logic [mwd-1:0] [7:0] dcache_done, // D-cache response id (non-zero)
    input  logic [mwd-1:0] [7:0] dcache_excp, // page fault, [7]exception/[6]interrupt
    input  logic [mwd-1:0][63:0] dcache_rdat  // reading data
);
    /* request selector */
    reg_bundle_t [mwd-1:0] req_lsu;
    lsu_funct_t [mwd-1:0] f;
    logic [mwd-1:0][63:0] a;
    logic [$clog2(mwd):0] num_lsu;
    always_comb begin
        req_lsu = 0;
        num_lsu = 0;
        for (int i = 0; i < mwd; i++)
            if (req[i].opid[15] & req[i].fu[1]) begin // select LSU requests and flatten them
                req_lsu[num_lsu] = req[i];
                num_lsu++;
            end
    end

    /* address calculation queue */
    localparam acqsz = 2 * mwd;
    logic [$clog2(acqsz)-1:0] acq_front;
    logic [$clog2(acqsz):0] acq_num, acq_in, acq_out;
    logic [mwd-1:0][$clog2(acqsz)-1:0] acq_raddr, acq_waddr;
    exe_bundle_t [mwd-1:0] acq_rvalue, acq_wvalue;
    lsu_funct_t [mwd-1:0] acq_func_rvalue, acq_func_wvalue;
    logic [mwd-1:0][63:0] acq_addr_rvalue, acq_addr_wvalue;
    logic [mwd-1:0][63:0] acq_wdat_rvalue, acq_wdat_wvalue;
    logic [mwd-1:0] acq_wena;
    mwpram #(.width($bits(exe_bundle_t)), .depth(acqsz), .rports(mwd), .wports(mwd))
        acq_inst(.clk(clk), .rst(rst), .wena(acq_wena),
            .raddr(acq_raddr), .rvalue(acq_rvalue), .waddr(acq_waddr), .wvalue(acq_wvalue));
    mwpram #(.width($bits(lsu_funct_t)), .depth(acqsz), .rports(mwd), .wports(mwd))
        acq_func_inst(.clk(clk), .rst(rst), .wena(acq_wena),
            .raddr(acq_raddr), .rvalue(acq_func_rvalue), .waddr(acq_waddr), .wvalue(acq_func_wvalue));
    mwpram #(.width(64), .depth(acqsz), .rports(mwd), .wports(mwd))
        acq_addr_inst(.clk(clk), .rst(rst), .wena(acq_wena),
            .raddr(acq_raddr), .rvalue(acq_addr_rvalue), .waddr(acq_waddr), .wvalue(acq_addr_wvalue));
    mwpram #(.width(64), .depth(acqsz), .rports(mwd), .wports(mwd))
        acq_wdat_inst(.clk(clk), .rst(rst), .wena(acq_wena),
            .raddr(acq_raddr), .rvalue(acq_wdat_rvalue), .waddr(acq_waddr), .wvalue(acq_wdat_wvalue));
    always_comb for (int i = 0; i < mwd; i++) acq_raddr[i] = acq_front + $clog2(acqsz)'(i);
    always_comb for (int i = 0; i < mwd; i++) acq_waddr[i] = acq_raddr[i] + $clog2(acqsz)'(acq_num);
    always_comb for (int i = 0; i < mwd; i++) acq_wena[i] = i < 32'(acq_in);
    always_comb for (int i = 0; i < mwd; i++) begin
        acq_func_wvalue[i] = $bits(lsu_funct_t)'(req_lsu[i].funct);
        acq_addr_wvalue[i] = (acq_func_wvalue[i].csr ? 0 : req_lsu[i].prs[0]) + req_lsu[i].b[63:0];
        acq_wdat_wvalue[i] = req_lsu[i].prs[1];
        if (acq_func_wvalue[i].csr) // CSR write value is in `a`
            acq_wdat_wvalue[i] = req_lsu[i].a[64] ? req_lsu[i].prs[0] : req_lsu[i].a[63:0];
        acq_wvalue[i]      = 0;
        acq_wvalue[i].opid = req_lsu[i].opid;
        acq_wvalue[i].lsid = req_lsu[i].lsid;
        acq_wvalue[i].npc  = req_lsu[i].base[63:0] + 64'(req_lsu[i].delta);
        acq_wvalue[i].prda = req_lsu[i].prda[1];
        acq_wvalue[i].tval = acq_func_wvalue[i].csr ? 64'(req_lsu[i].ir) : acq_addr_wvalue[i];
        acq_wvalue[i].mem  = acq_func_wvalue[i].store & ~acq_func_wvalue[i].csr & ~acq_func_wvalue[i].fence;
        acq_wvalue[i].csr  = acq_func_wvalue[i].csr;
    end
    always_comb acq_in = ($clog2(acqsz)+1)'(num_lsu);
    always_comb ready = mwd <= acqsz - 32'(acq_num);
    always_ff @(posedge clk) if (rst | flush) acq_front <= 0; else acq_front <= acq_front + $clog2(acqsz)'(acq_out);
    always_ff @(posedge clk) if (rst | flush) acq_num <= 0; else acq_num <= acq_num + acq_in - acq_out;

    /* execution queue */
    logic [eqsz-1:0] eq_occ, eq_done, eq_ready;              // EQ occupation and busy/ready bits
    logic [mwd-1:0][$clog2(eqsz):0] eq_ready_pos;            // EQ ready positions
    logic [$clog2(eqsz):0] eq_in;                            // EQ input number
    logic      [2*mwd-1:0]                   eq_wena;        // EQ write enable signals
    logic      [2*mwd-1:0][$clog2(eqsz)-1:0] eq_waddr;       // EQ write addresses
    logic      [2*mwd-1:0]            [63:0] eq_rdat_wvalue; // EQ write values of read data
    logic      [2*mwd-1:0]             [7:0] eq_excp_wvalue; // EQ write values of exception cause
    logic        [mwd-1:0]                   eq_flsh_wvalue; // EQ write values of flush signal
    exe_bundle_t [mwd-1:0]                   eq_wvalue;      // EQ write values of output bundle
    logic        [mwd-1:0][$clog2(eqsz)-1:0] eq_raddr;       // EQ read addresses
    logic        [mwd-1:0]            [63:0] eq_rdat_rvalue; // EQ read values of read data
    logic        [mwd-1:0]             [7:0] eq_excp_rvalue; // EQ read values of exception cause
    logic        [mwd-1:0]                   eq_flsh_rvalue; // EQ read values of flush signal
    exe_bundle_t [mwd-1:0]                   eq_rvalue;      // EQ read values of output bundle
    firstk #(.width(eqsz), .k(mwd)) eq_ready_pos_inst(.bits(eq_ready), .pos(eq_ready_pos));
    mwpram #(.width($bits(exe_bundle_t)), .depth(eqsz), .rports(mwd), .wports(mwd))
        eq_inst(.clk(clk), .rst(rst), .wena(eq_wena[mwd-1:0]),
            .raddr(eq_raddr[mwd-1:0]), .rvalue(eq_rvalue), .waddr(eq_waddr[mwd-1:0]), .wvalue(eq_wvalue));
    mwpram #(.width(1), .depth(eqsz), .rports(mwd), .wports(mwd))
        eq_flsh_inst(.clk(clk), .rst(rst), .wena(eq_wena[mwd-1:0]),
            .raddr(eq_raddr[mwd-1:0]), .rvalue(eq_flsh_rvalue), .waddr(eq_waddr[mwd-1:0]), .wvalue(eq_flsh_wvalue));
    mwpram #(.width(64), .depth(eqsz), .rports(mwd), .wports(2 * mwd))
        eq_rdat_inst(.clk(clk), .rst(rst), .wena(eq_wena),
            .raddr(eq_raddr), .rvalue(eq_rdat_rvalue), .waddr(eq_waddr), .wvalue(eq_rdat_wvalue));
    mwpram #(.width(8), .depth(eqsz), .rports(mwd), .wports(2 * mwd))
        eq_excp_inst(.clk(clk), .rst(rst), .wena(eq_wena),
            .raddr(eq_raddr), .rvalue(eq_excp_rvalue), .waddr(eq_waddr), .wvalue(eq_excp_wvalue));
    always_comb begin
        eq_ready = eq_occ & eq_done; // do data cache response forwarding
        // for (int i = 0; i < mwd; i++) if (dcache_done[i][7]) eq_ready[$clog2(eqsz)'(dcache_done[i])] = 1;
    end
    always_comb for (int i = 0; i < mwd; i++) eq_raddr[i] = $clog2(eqsz)'(eq_ready_pos[i]);
    always_comb for (int i = 0; i < mwd; i++) begin
        eq_wena       [i] = i < 32'(eq_in);
        eq_waddr      [i] = $clog2(eqsz)'(acq_rvalue[i].lsid);
        eq_rdat_wvalue[i] = csr_rdat;
        eq_excp_wvalue[i] = csr_rqst & csr_excp ? {2'b10, 6'd2} : 8'd0;
        eq_flsh_wvalue[i] = csr_flsh;
        eq_wvalue     [i] = acq_rvalue[i];
        eq_wena       [mwd + i] = dcache_done[i][7];
        eq_waddr      [mwd + i] = $clog2(eqsz)'(dcache_done[i]);
        eq_rdat_wvalue[mwd + i] = dcache_rdat[i];
        eq_excp_wvalue[mwd + i] = dcache_excp[i];
    end
    always_comb begin
        eq_in = 0;
        for (int i = 0; i < mwd; i++) begin
            if (i >= 32'(acq_num)) break;
            if (acq_func_rvalue[i].csr & nextlsid != acq_rvalue[i].lsid) break;
            eq_in++;
        end
    end
    always_comb acq_out = ($clog2(acqsz)+1)'(eq_in);
    always_ff @(posedge clk) if (rst | flush) eq_occ <= 0; else begin
        for (int i = 0; i < mwd; i++) if (eq_ready_pos[i][$clog2(eqsz)] & claim[i])
            eq_occ[$clog2(eqsz)'(eq_ready_pos[i])] <= 0;
        for (int i = 0; i < mwd; i++) if (eq_wena[i]) eq_occ[eq_waddr[i]] <= 1;
    end
    always_ff @(posedge clk) begin
        for (int i = 0; i < mwd; i++) if (eq_wena[i])       eq_done[eq_waddr[i]] <= ~dcache_rqst[i][7];
        for (int i = 0; i < mwd; i++) if (eq_wena[mwd + i]) eq_done[eq_waddr[mwd + i]] <= 1;
    end

    /* interface output */
    always_comb csr_rqst = |acq_out & acq_func_rvalue[0].csr & ~flush;
    always_comb csr_func = acq_func_rvalue[0].bits;
    always_comb csr_addr = acq_addr_rvalue[0][11:0];
    always_comb csr_wdat = acq_wdat_rvalue[0];
    always_comb dcache_flsh = flush;
    always_comb dcache_cfrm = nextlsid;
    always_comb for (int i = 0; i < mwd; i++) begin
        dcache_rqst[i] = i < 32'(acq_out) & ~(i == 0 & csr_rqst) ? {1'b1, 7'(eq_waddr[i])} : 0;
        dcache_fnce[i] = acq_func_rvalue[i].fence;
        dcache_aqrl[i] = acq_func_rvalue[i].aqrl;
        dcache_rsrv[i] = acq_func_rvalue[i].rsrv;
        dcache_bits[i] = acq_func_rvalue[i].bits;
        dcache_wena[i] = acq_func_rvalue[i].store & ~acq_func_rvalue[i].fence;
        dcache_addr[i] = acq_addr_rvalue[i];
        dcache_wdat[i] = acq_wdat_rvalue[i];
    end

    /* assign response */
    always_comb begin
        resp = 0;
        for (int i = 0; i < ewd; i++) begin
            if (~eq_ready_pos[i][$clog2(eqsz)] | i >= mwd) break;
            resp[i]       = eq_rvalue[i];
            resp[i].prdv  = eq_rdat_rvalue[i];
            resp[i].cause = eq_excp_rvalue[i];
            resp[i].flush = eq_flsh_rvalue[i];
            // for (int j = 0; j < mwd; j++) // do D-cache response forwarding
            //     if (dcache_done[j][7] & $clog2(eqsz)'(dcache_done[j]) == eq_raddr[i]) begin
            //         resp[i].prdv  = dcache_rdat[j];
            //         resp[i].cause = dcache_excp[j];
            //         resp[i].flush = 1'b0;
            //     end
        end
    end
endmodule
