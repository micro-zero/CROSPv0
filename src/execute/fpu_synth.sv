/**
 * fpu.sv:
 *   This is the floating-point module.
 */

`include "types.sv"
import types::*;

module fpu #(
    parameter iwd,  // issue width
    parameter ewd,  // execution width
    parameter opsz  // operation ID size
)(
    input  logic clk,
    input  logic rst,
    input  red_bundle_t redir,           // redirect bundle
    output logic ready,                  // ready for receiving at most `iwd` requests
    input  reg_bundle_t [iwd-1:0] req,   // requests after register read
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
    localparam eqsz = 2 * (1 << $clog2(ewd));
    logic [$clog2(eqsz)-1:0] rr_front;
    logic [$clog2(eqsz):0] rr_num, rr_in, rr_out;
    logic [eqsz-1:0][15:0] rr_opid;
    logic [eqsz-1:0]       rr_bubble;
    reg_bundle_t           rr_rvalue;
    logic        [ewd-1:0][$clog2(eqsz)-1:0] rr_waddr;
    reg_bundle_t [ewd-1:0]                   rr_wvalue;
    logic        [ewd-1:0]                   rr_wena;
    mwpram #(.width($bits(reg_bundle_t)), .depth(eqsz), .rports(1), .wports(ewd))
        rr_inst(.clk(clk), .rst(rst),
            .raddr(rr_front), .rvalue(rr_rvalue),
            .waddr(rr_waddr), .wvalue(rr_wvalue), .wena(rr_wena));
    always_comb begin
        rr_in = 0; rr_wvalue = 0;
        for (int i = 0; i < iwd; i++)
            if (req[i].opid[15] & req[i].fu[2]) begin // select FPU requests and flatten them
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

    /*------------ classification ------------*\
    |* pipelined FPU operations includes:      |
    |*   1. fadd  fsub                         |
    |*   2. fsgnj fsgnjn fsgnjx                |
    |*   3. fmin  fmax                         |
    |*   4. feq   flt    fle                   |
    |*   5. fmv   fclass fcvt                  |
    |*   6. fmul  fnmul                        |
    |* non-pipelined FPU operations includes:  |
    |*   1. fdiv                               |
    |*   2. fsqrt                              |
    \*----------------------------------------*/

    /* FPU pipeline */
    `define NSTAGE 5        // normal stage number
    fpu_funct_t f;          // functional code of RR buffer front
    logic stuck, stuck_mul; // pipeline stuck
    logic [63:0] a, b;      // oprands of RR buffer front
    always_comb begin
        a = rr_rvalue.prs[0];
        b = rr_rvalue.b[64] ? rr_rvalue.prs[1] : rr_rvalue.b[63:0];
        if (f.fcvtfi & ~b[1]) // 32-bit integer to 64-bit integer
            a = {b[0] ? 0 : {32{a[31]}}, a[31:0]};
    end
    always_comb f = $bits(fpu_funct_t)'(rr_rvalue.funct);

    /* stage 1: split */
    reg_bundle_t [`NSTAGE:1] r_split; // buffer of register read bundle
    fpu_funct_t  [`NSTAGE:1] f_split; // buffer of functional code
    logic [`NSTAGE:1]       as_split, bs_split;
    logic [`NSTAGE:1][10:0] ae_split, be_split;
    logic [`NSTAGE:1][63:0] am_split, bm_split;
    /* 64-bit mantissa:
     *   m[  0  0 ...  1 .  x  x ... x 0 0 ] * 2 ^ (e - 1023)
     *    [ 63 62 ... 54 . 53 52 ... 2 1 0 ]
     * = m[  0  0 ...  1    x  x ... x 0 0 ] * 2 ^ (e - 1023 - 54)
     * the LSB is for rounding
     * for 64-bit integer, exponent is 54 + 1023 */
    always_ff @(posedge clk) if (rst) r_split <= 0; else if (~stuck) begin
        for (int i = 2; i <= `NSTAGE; i++)
            r_split[i] <= succeed(r_split[i - 1].opid) ? 0 : r_split[i - 1];
        r_split[1] <= succeed(rr_opid[rr_front]) | rr_bubble[rr_front] | ~|rr_out ? 0 : rr_rvalue;
    end
    always_ff @(posedge clk) if (~stuck) f_split <= {f_split[`NSTAGE-1:1], f};
    always_ff @(posedge clk) if (~stuck) begin
        as_split[`NSTAGE:2] <= as_split[`NSTAGE-1:1];
        bs_split[`NSTAGE:2] <= bs_split[`NSTAGE-1:1];
        ae_split[`NSTAGE:2] <= ae_split[`NSTAGE-1:1];
        be_split[`NSTAGE:2] <= be_split[`NSTAGE-1:1];
        am_split[`NSTAGE:2] <= am_split[`NSTAGE-1:1];
        bm_split[`NSTAGE:2] <= bm_split[`NSTAGE-1:1];
        if (f.fcvtfi) begin // as 64-bit integer
            as_split[1] <= a[63] & ~b[0];
            ae_split[1] <= 11'd1023 + 11'd54;
            am_split[1] <= a[63] & ~b[0] ? ~a + 1 : a;
        end else if (f.fcvtsd | ~f.fcvtds & f.double) begin // as double
            as_split[1] <= a[63]; ae_split[1] <= a[62:52]; am_split[1] <= {10'd1, a[51:0], 2'b0};
            bs_split[1] <= b[63]; be_split[1] <= b[62:52]; bm_split[1] <= {10'd1, b[51:0], 2'b0};
        end else begin // as single
            as_split[1] <= a[31]; am_split[1] <= {10'd1, a[22:0], 31'b0};
            bs_split[1] <= b[31]; bm_split[1] <= {10'd1, b[22:0], 31'b0};
            ae_split[1] <= {3'd0, a[30:23]} - 11'd127 + 11'd1023;
            be_split[1] <= {3'd0, b[30:23]} - 11'd127 + 11'd1023;
        end
    end

    /* stage 2: oprands alignment */
    logic [10:0] me;     // maximum exponent
    logic [63:0] a2, b2; // 2's complement
    logic [`NSTAGE:2][63:0] a2_align, b2_align;
    logic [`NSTAGE:2][10:0] me_align;
    always_comb me = ae_split[1] > be_split[1] ? ae_split[1] : be_split[1];
    always_comb begin
        a2 = am_split[1] >> me - ae_split[1];
        b2 = bm_split[1] >> me - be_split[1];
        a2[0] |= |(am_split[1] & (64'd1 << me - ae_split[1]) - 1); // sticky bit
        b2[0] |= |(bm_split[1] & (64'd1 << me - be_split[1]) - 1);
        if (as_split[1]) a2 = ~a2 + 1;
        if (bs_split[1]) b2 = ~b2 + 1;
    end
    always_ff @(posedge clk) if (~stuck) a2_align <= {a2_align[`NSTAGE-1:2], a2};
    always_ff @(posedge clk) if (~stuck) b2_align <= {b2_align[`NSTAGE-1:2], b2};
    always_ff @(posedge clk) if (~stuck) me_align <= {me_align[`NSTAGE-1:2], me};

    /* stage 3: calculation */
    logic        rs;
    logic [10:0] re;
    logic [63:0] rm;
    logic [63:0] rt; // truncated bits
    logic [`NSTAGE:3]       rs_calc;
    logic [`NSTAGE:3][10:0] re_calc;
    logic [`NSTAGE:3][63:0] rm_calc;
    int ah; // shifted highest one of first oprand
    always_comb if (f_split[2].fcvtif) begin
        rs = as_split[2]; re = 0; // integer as 1's complement
        rm = 1023 + 54 > ae_split[2] ?
            am_split[2] >> 1023 + 54 - ae_split[2] : am_split[2] << ae_split[2] - 1023 - 54;
        rt = am_split[2] & (64'd1 << 1023 + 54 - ae_split[2]) - 1;
        if (1023 + 54 > ae_split[2]) // right-shift rounding
            if (f_split[2].rm == 0) // RNE
                if (rt == 64'd1 << 1023 + 54 - ae_split[2] - 1) // ties to even
                    rm = rm[0] ? rm + 1 : rm;
                else rm = rm + (rt >> 1023 + 54 - ae_split[2] - 1 == 1 ? 1 : 0);
            else if (f_split[2].rm == 1) rm = rm; // RTZ
            else if (f_split[2].rm == 2) rm = rm; // RDN
            else if (f_split[2].rm == 3) rm = rm; // RUP
            else if (f_split[2].rm == 4) rm = rm; // RMM
    end else begin
        if      (f_split[2].fadd)  rm = a2_align[2] + b2_align[2]; // temporary 2's complement
        else if (f_split[2].fsub)  rm = a2_align[2] - b2_align[2];
        else                       rm = 0;
        rs = rm[63];
        re = me_align[2];
        if (rs) rm = ~rm + 1;
        rt = 0;
    end
    always_comb ah = 32'(ae_split[2]) - 1023;
    always_ff @(posedge clk) if (~stuck) begin
        rs_calc[`NSTAGE:4] <= rs_calc[`NSTAGE-1:3];
        re_calc[`NSTAGE:4] <= re_calc[`NSTAGE-1:3];
        rm_calc[`NSTAGE:4] <= rm_calc[`NSTAGE-1:3];
        /* result as floating point (default as first oprand: fmvfx fcvtfi fcvtsd fcvtds) */
        {rs_calc[3], re_calc[3], rm_calc[3]} <= {as_split[2], ae_split[2], am_split[2]};
        if (f_split[2].fadd)   {rs_calc[3], re_calc[3], rm_calc[3]} <= {rs, re, rm};
        if (f_split[2].fsub)   {rs_calc[3], re_calc[3], rm_calc[3]} <= {rs, re, rm};
        if (f_split[2].fsgnj)  {rs_calc[3], rm_calc[3]} <= {bs_split[2], am_split[2]};
        if (f_split[2].fsgnjn) {rs_calc[3], rm_calc[3]} <= {~bs_split[2], am_split[2]};
        if (f_split[2].fsgnjx) {rs_calc[3], rm_calc[3]} <= {as_split[2] ^ bs_split[2], am_split[2]};
        if (f_split[2].fmin)   {rs_calc[3], re_calc[3], rm_calc[3]} <=
            $signed(a2_align[2]) < $signed(b2_align[2]) ?
                {as_split[2], ae_split[2], am_split[2]} : {bs_split[2], be_split[2], bm_split[2]};
        if (f_split[2].fmax)   {rs_calc[3], re_calc[3], rm_calc[3]} <=
            $signed(a2_align[2]) > $signed(b2_align[2]) ?
                {as_split[2], ae_split[2], am_split[2]} : {bs_split[2], be_split[2], bm_split[2]};
        /* result as integer */
        if (f_split[2].feq)    rm_calc[3] <= 64'($signed(a2_align[2]) == $signed(b2_align[2]));
        if (f_split[2].flt)    rm_calc[3] <= 64'($signed(a2_align[2]) <  $signed(b2_align[2]));
        if (f_split[2].fle)    rm_calc[3] <= 64'($signed(a2_align[2]) <= $signed(b2_align[2]));
        if (f_split[2].fmvxf)  rm_calc[3] <= r_split[2].prs[0];
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 0) // to word
            if (ah > 30) rm_calc[3] <= rs ? 64'hffff_ffff_8000_0000 : 64'h7fff_ffff;
            else if (rs) rm_calc[3] <= ~rm + 1;
            else         rm_calc[3] <=  rm;
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 1) // to unsigned word
            if           (rs) rm_calc[3] <= 0;
            else if (ah > 31) rm_calc[3] <= 64'hffff_ffff;
            else              rm_calc[3] <= rm;
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 2) // to long
            if (ah > 62) rm_calc[3] <= rs ? 64'h8000_0000_0000_0000 : 64'h7fff_ffff_ffff_ffff;
            else if (rs) rm_calc[3] <= ~rm + 1;
            else         rm_calc[3] <=  rm;
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 3) // to unsigned long
            if           (rs) rm_calc[3] <= 0;
            else if (ah > 63) rm_calc[3] <= 64'hffff_ffff_ffff_ffff;
            else              rm_calc[3] <= rm;
        if (f_split[2].fclass) rm_calc[3] <= {
            54'd0,
            ae_split[2] == -11'd1 & am_split[2][53] == 1,
            ae_split[2] == -11'd1 & am_split[2][53] == 0,
            ~as_split[2] & ae_split[2] == -11'd1 & am_split[2][53:2]  == 0,
            ~as_split[2] & ae_split[2] != -11'd1 & ae_split[2] != 0,
            ~as_split[2] & ae_split[2] == 0 & am_split[2][53:2] != 0,
            ~as_split[2] & {ae_split[2], am_split[2][53:2]} == 0,
            as_split[2] & {ae_split[2], am_split[2][53:2]} == 0,
            as_split[2] & ae_split[2] == 0 & am_split[2][53:2] != 0,
            as_split[2] & ae_split[2] != -11'd1 & ae_split[2] != 0,
            as_split[2] & ae_split[2] == -11'd1 & am_split[2][53:2]  == 0
        };
    end

    /* stage 4: uniforming */
    logic [63:0] rm_rev;
    logic  [6:0] rm_pos;
    logic  [5:0] rh; // position of highest one
    logic [`NSTAGE:4]       rs_uni;
    logic [`NSTAGE:4][10:0] re_uni;
    logic [`NSTAGE:4][63:0] rm_uni;
    firstk #(.width(64), .k(1)) rh_inst(.bits(rm_rev), .pos(rm_pos));
    always_comb for (int i = 0; i < 64; i++) rm_rev[i] = rm_calc[3][63 - i];
    always_comb rh = 63 - rm_pos[5:0];
    always_ff @(posedge clk) if (~stuck) begin
        rs_uni[`NSTAGE:5] <= rs_uni[`NSTAGE-1:4];
        re_uni[`NSTAGE:5] <= re_uni[`NSTAGE-1:4];
        rm_uni[`NSTAGE:5] <= rm_uni[`NSTAGE-1:4];
        if (f_split[3].feq   | f_split[3].flt    | f_split[3].fle |
            f_split[3].fmvxf | f_split[3].fcvtif | f_split[3].fclass) // integer result
            rm_uni[4] <= rm_calc[3];
        else begin // floating-point result
            rs_uni[4] <= rs_calc[3];
            re_uni[4] <= re_calc[3] + 11'(rh) - 11'd54;
            if (rh > 54) begin
                rm_uni[4] <= rm_calc[3] >> 11'(rh) - 11'd54;
                rm_uni[4][0] <= rm_calc[3][rh - 54] | |(rm_calc[3] & (64'd1 << 11'(rh) - 11'd54) - 1);
            end else rm_uni[4] <= rm_calc[3] << 11'd54 - 11'(rh);
        end
    end

    /* stage 5: conversion */
    logic [63:0] r;
    exe_bundle_t result;
    always_comb
        if (f_split[4].feq | f_split[4].flt | f_split[4].fle | f_split[4].fmvxf | f_split[4].fcvtif) // integer
            r = rm_uni[4];
        else if (f_split[4].double) begin // double
            r = {rs_uni[4], re_uni[4], rm_uni[4][53:2]};
            if (f_split[4].rm == 0) // RNE
                r[51:0] += rm_uni[4][1] & (rm_uni[4][0] | rm_uni[4][2]) ? 1 : 0;
        end else begin // single
            r = {-32'd1, rs_uni[4], re_uni[4][7:0] + 8'd128, rm_uni[4][53:31]};
            if (f_split[4].rm == 0) // RNE
                r[22:0] += rm_uni[4][30] & (|rm_uni[4][29:0] | rm_uni[4][31]) ? 1 : 0;
        end
    always_ff @(posedge clk) if (~stuck) begin
        result       <= 0;
        result.opid  <= r_split[4].opid;
        result.brid  <= r_split[4].brid;
        result.ldid  <= r_split[4].ldid;
        result.stid  <= r_split[4].stid;
        result.delta <= r_split[4].delta;
        result.pat   <= r_split[4].pat;
        result.pc    <= r_split[4].pc;
        result.npc   <= r_split[4].base[63:0] + 63'(r_split[4].delta);
        result.prda  <= r_split[4].prda[1];
        result.prdv  <= r;
        if (f_split[4].fmul | f_split[4].fnmul) result <= 0;
        if (f_split[4].fdiv | f_split[4].fsqrt) result <= 0;
    end

    /* multiplier:
     * s1 * m1[  0  0 ...  1 .  x  x ... x 0 0 ] * 2 ^ (e1 - 1023) *
     *     s2 * m2[  0  0 ...  1 .  x  x ... x 0 0 ] * 2 ^ (e2 - 1023) =
     * s1 * m1'[  0  0 ...  1  x  x ... x 0 0 ] * 2 ^ (e1 - 1023 - 54) *
     *     s2 * m2'[  0  0 ...  1  x  x ... x 0 0 ] * 2 ^ (e2 - 1023 - 54) =
     * s1 * s2 * m1' * m2' * 2 ^ (e1 + e2 - 2046 - 108)
     * there maybe a chance to reuse the integer multiplier and divider */
    `define MSTAGE 5 // multiplier stage number
    exe_bundle_t [`MSTAGE:1]        r_mul;
    fpu_funct_t  [`MSTAGE:1]        f_mul;
    logic        [`MSTAGE:0]        s_mul;
    logic        [`MSTAGE:0] [10:0] e_mul;
    logic        [`MSTAGE:0][127:0] m_mul;
    logic   [7:0] pos_mul;
    logic [127:0] rev_mul;
    logic  [10:0] rh_mul; // highest one position in m1' * m2'
    firstk #(.width(128), .k(1)) rh_mul_inst(.bits(rev_mul), .pos(pos_mul));
    always_comb for (int i = 0; i < 128; i++) rev_mul[i] = m_mul[`MSTAGE - 1][127 - i];
    always_comb rh_mul = 127 - 11'(pos_mul[6:0]);
    always_ff @(posedge clk) if (rst) r_mul <= 0; else if (~stuck_mul) begin
        /* uniform of [MSTAGE - 1] to [MSTAGE] */
        r_mul[`MSTAGE] <= r_mul[`MSTAGE - 1];
        if (f_mul[`MSTAGE - 1].double)
            r_mul[`MSTAGE].prdv <=
                {s_mul[`MSTAGE - 1], e_mul[`MSTAGE - 1] + rh_mul, 52'(m_mul[`MSTAGE - 1] >> 7'(rh_mul) - 52)};
        else r_mul[`MSTAGE].prdv <=
                {-32'd1, s_mul[`MSTAGE - 1], e_mul[`MSTAGE - 1][7:0] + 8'(rh_mul) + 8'd128,
                 23'(m_mul[`MSTAGE - 1] >> 7'(rh_mul) - 23)};
        /* shift of [1 .. MSTAGE - 2] to [2 .. MSTAGE - 1] */
        for (int i = 2; i < `MSTAGE; i++)
            r_mul[i] <= succeed(r_mul[i - 1].opid) ? 0 : r_mul[i - 1];
        f_mul[`MSTAGE-1:2] <= f_mul[`MSTAGE-2:1];
        s_mul[`MSTAGE-1:2] <= s_mul[`MSTAGE-2:1];
        e_mul[`MSTAGE-1:2] <= e_mul[`MSTAGE-2:1];
        m_mul[`MSTAGE-1:2] <= m_mul[`MSTAGE-2:1];
        /* push-in of [1] */
        r_mul[1].opid  <= succeed(r_split[1].opid) | ~f_split[1].fmul & ~f_split[1].fnmul ? 0 : r_split[1].opid;
        r_mul[1].brid  <= r_split[1].brid;
        r_mul[1].ldid  <= r_split[1].ldid;
        r_mul[1].stid  <= r_split[1].stid;
        r_mul[1].delta <= r_split[1].delta;
        r_mul[1].pat   <= r_split[1].pat;
        r_mul[1].pc    <= r_split[1].pc;
        r_mul[1].npc   <= r_split[1].base[63:0] + 63'(r_split[1].delta);
        r_mul[1].prda  <= r_split[1].prda[1];
        f_mul[1] <= f_split[1];
        s_mul[1] <= as_split[1] ^ bs_split[1] ^ f_split[1].fnmul;
        e_mul[1] <= ae_split[1] + be_split[1] - 11'd1023 - 11'd108;
        m_mul[1] <= {64'd0, am_split[1]} * {64'd0, bm_split[1]};
    end

    /* divider:
     *   s1 * m1[  0  0 ...  1 .  x  x ... x 0 0 ] * 2 ^ (e1 - 1023)     s1     m1
     *  ------------------------------------------------------------- = ---- * ---- * 2 ^ (e1 - e2)
     *   s2 * m2[  0  0 ...  1 .  x  x ... x 0 0 ] * 2 ^ (e2 - 1023)     s2     m2
     *          [ 63 62 ... 54 . 53 52 ... 2 1 0 ]
     * fixed-point divider uses repeated substraction (same as integer) */
    exe_bundle_t r_div;
    fpu_funct_t  f_div;
    logic        s_div;
    logic [10:0] e_div;
    logic [63:0] m_div, a_div, b_div;
    logic  [6:0] c_div;
    always_ff @(posedge clk)
        if      (rst | succeed(r_div.opid))                               {r_div, c_div} <= 64;
        else if ( r_div.opid[15] & r_div.opid == resp[0].opid & claim[0]) {r_div, c_div} <= 64;
        else if (~r_div.opid[15] & r_split[1].opid[15] & f_split[1].fdiv) begin
            s_div       <= as_split[1] ^ bs_split[1];
            e_div       <= ae_split[1] - be_split[1] + 11'd1023 - (am_split[1] < bm_split[1] ? 1 : 0);
            m_div       <= 0;
            a_div       <= am_split[1] < bm_split[1] ? am_split[1] << 1 : am_split[1];
            b_div       <= bm_split[1];
            c_div       <= 54;
            f_div       <= f_split[1];
            r_div.opid  <= succeed(r_split[1].opid) ? 0 : r_split[1].opid;
            r_div.brid  <= r_split[1].brid;
            r_div.ldid  <= r_split[1].ldid;
            r_div.stid  <= r_split[1].stid;
            r_div.delta <= r_split[1].delta;
            r_div.pat   <= r_split[1].pat;
            r_div.pc    <= r_split[1].pc;
            r_div.npc   <= r_split[1].base[63:0] + 63'(r_split[1].delta);
            r_div.prda  <= r_split[1].prda[1];
        end else if (~c_div[6]) begin // calculating
            c_div             <= c_div - 1;
            a_div             <= (a_div >= b_div ? a_div - b_div : a_div) << 1;
            m_div[c_div[5:0]] <=  a_div >= b_div;
        end else if (c_div == -7'd1) begin // rounding
            c_div <= -7'd2;
            if (f_div.double) r_div.prdv <= {s_div, e_div, m_div[53:2]};
            else              r_div.prdv <= {-32'd1, s_div, e_div[7:0] + 8'd128, m_div[53:31]};
        end

    /* square root calculation */
    exe_bundle_t r_sqr;
    always_ff @(posedge clk)
        if      (rst | succeed(r_sqr.opid)) r_sqr <= 0;
        else if ( r_sqr.opid[15] & r_sqr.opid == resp[1].opid & claim[0]) r_sqr <= 0;
        else if (~r_sqr.opid[15] & r_split[1].opid[15] & f_split[1].fsqrt) begin
            r_sqr.opid  <= succeed(r_split[1].opid) ? 0 : r_split[1].opid;
            r_sqr.brid  <= r_split[1].brid;
            r_sqr.ldid  <= r_split[1].ldid;
            r_sqr.stid  <= r_split[1].stid;
            r_sqr.delta <= r_split[1].delta;
            r_sqr.pat   <= r_split[1].pat;
            r_sqr.pc    <= r_split[1].pc;
            r_sqr.npc   <= r_split[1].base[63:0] + 63'(r_split[1].delta);
            r_sqr.prda  <= r_split[1].prda[1];
            r_sqr.prdv  <= r_split[1].prs[0];
        end

    /* assign response */
    always_comb ready = ewd <= eqsz - 32'(rr_num); // ready when able to holding `ewd` operations
    always_comb stuck = result.opid[15] & (~claim[0] | c_div == -7'd2);
    always_comb stuck_mul = r_mul[`MSTAGE].opid[15] & (~claim[0] | r_sqr.opid[15]);
    always_comb begin
        rr_out = |rr_num & ~stuck ? 1 : 0;
        if (f.fdiv & r_div.opid[15]) rr_out = 0;
    end
    always_comb begin
        resp = 0;
        resp[0] = c_div == -7'd2 ? r_div : result;
        resp[1] = r_sqr.opid[15] ? r_sqr : r_mul[`MSTAGE];
    end
endmodule
