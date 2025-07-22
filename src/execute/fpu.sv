/**
 * fpu.sv:
 *   This is the floating-point module.
 */

`include "types.sv"
import types::*;

module fpu #(
    parameter ewd,  // execution width
    parameter opsz  // operation ID size
)(
    input  logic clk,
    input  logic rst,
    input  red_bundle_t redir,           // redirect bundle
    output logic ready,                  // ready for receiving at most `ewd` requests
    input  iss_bundle_t [ewd-1:0] req,   // requests after register read
    input  logic        [ewd-1:0] claim, // claim signals (fetch execution results)
    output exe_bundle_t [ewd-1:0] resp   // execution results
);
    /*----------------------- 64-bit mantissa -----------------------*\
    |    m[  0  0 ...  1 .  x  x ... x G R S ] * 2 ^ (e - 2047)       |
    |     [ 63 62 ... 55 . 54 53 ... 3 2 1 0 ]                        |
    |  = m[  0  0 ...  1    x  x ... 0 0 0 0 ] * 2 ^ (e - 2047 - 55)  |
    |  the LSB is for rounding                                        |
    |  for 64-bit integer, exponent is 55 + 2047                      |
    \*---------------------------------------------------------------*/
    `define EINF 3967                    // infinity exponent (padding with 128-bit to avoid overflow)
    `define EZR  128                     // zero exponent
    `define CNAN 77'hfff0040000000000000 // canonical NaN

    /* order calculation function */
    function logic succeed(input logic [15:0] opid);
        succeed = redir.opid[15] & opid[15] &
            $clog2(opsz)'(opid)       - $clog2(opsz)'(redir.topid) >=
            $clog2(opsz)'(redir.opid) - $clog2(opsz)'(redir.topid) + $clog2(opsz)'(1);
    endfunction

    /* calculation with sticky bit */
    function logic [63:0] srs(input logic [63:0] mantissa, input logic [11:0] shamt);
        srs     =   mantissa >> shamt[5:0];
        srs[0] |= |(mantissa & (64'd1 << shamt[5:0]) - 1);
        if (shamt >= 64) srs = |mantissa ? 1 : 0; // underflow
    endfunction
    function logic [127:0] srs128(input logic [127:0] mantissa, input logic [11:0] shamt);
        srs128     =   mantissa >> shamt[6:0];
        srs128[0] |= |(mantissa & (128'd1 << shamt[6:0]) - 1);
        if (shamt >= 128) srs128 = |mantissa ? 1 : 0;
    endfunction
    function logic [63:0] adds(input logic [63:0] ma, input logic [63:0] mb);
        adds    = ma + mb;
        adds[0] = ma[0] | mb[0];
    endfunction
    function logic [63:0] subs(input logic [63:0] ma, input logic [63:0] mb);
        subs    = ma - mb;
        subs[0] = ma[0] | mb[0];
    endfunction

    /* assembly function */
    function logic [63:0] asm(
        input logic s, input logic [11:0] e, logic [63:0] m,
        input logic double, input logic [2:0] rm
    );
        if (double) begin
            asm = m;
            if      (rm == 0) asm += asm[2] & (|asm[1:0] | asm[3]) ? 8 : 0; // RNE
            else if (rm == 1) asm += 0;                                     // RTZ
            else if (rm == 2) asm +=  s & |asm[3:0] ? 8 : 0;                // RDN
            else if (rm == 3) asm += ~s & |asm[3:0] ? 8 : 0;                // RUP
            else if (rm == 4) asm += asm[2] ? 8 : 0;                        // RMM
            /* mantissa may be overflowed after rounding */
            if (asm[56]) e++;
            if (asm[56]) asm >>= 1;
            if (e < 1024) asm = e > 960 ? asm >> 1025 - e : 0; // subnormal or underflow
            if (e < 1024) e = 1024;
            asm = {s, e[10:0] + 11'd1024, asm[54:3]};
            if (e >= 3071) asm = {s, -11'd1, 52'd0};   // infinity or overflow
            if (e == 4095) asm = {s, -11'd1, m[54:3]}; // NaN
        end else begin // single
            asm = m;
            if      (rm == 0) asm += asm[31] & (|asm[30:0] | asm[32]) ? 1 << 32 : 0; // RNE
            else if (rm == 1) asm += 0;                                              // RTZ
            else if (rm == 2) asm +=  s & |asm[32:0] ? 1 << 32 : 0;                  // RDN
            else if (rm == 3) asm += ~s & |asm[32:0] ? 1 << 32 : 0;                  // RUP
            else if (rm == 4) asm += asm[31] ? 1 << 32 : 0;                          // RMM
            if (asm[56]) e++;
            if (asm[56]) asm >>= 1;
            if (e < 1920) asm = e > 1856 ? asm >> 1921 - e : 0; // subnormal or underflow
            if (e < 1920) e = 1920;                             // minimum as 8-bit zero
            asm = {-32'd1, s, e[7:0] + 8'd128, asm[54:32]};
            if (e >= 2175) asm = {-32'd1, s, -8'd1, 23'd0};    // infinity or overflow
            if (e == 4095) asm = {-32'd1, s, -8'd1, m[54:32]}; // NaN
        end
    endfunction
    function logic nx(
        input logic s, input logic [11:0] e, logic [63:0] m,
        input logic double, input logic [2:0] rm
    );
        nx = 0;
        if (double) begin
            if      (rm == 0) m += m[2] & (|m[1:0] | m[3]) ? 8 : 0; // RNE
            else if (rm == 1) m += 0;                               // RTZ
            else if (rm == 2) m +=  s & |m[3:0] ? 8 : 0;            // RDN
            else if (rm == 3) m += ~s & |m[3:0] ? 8 : 0;            // RUP
            else if (rm == 4) m += m[2] ? 8 : 0;                    // RMM
            if (m[56]) e++;
            if (m[56]) m = srs(m, 1);
            if (e < 1024) m = e > 960 ? srs(m, 1025 - e) : 0;
            nx = |m[2:0];
            if (e >= 3071) nx = 0; // NaN or infinity
        end else begin // single
            if      (rm == 0) m += m[31] & (|m[30:0] | m[32]) ? 1 << 32 : 0; // RNE
            else if (rm == 1) m += 0;                                        // RTZ
            else if (rm == 2) m +=  s & |m[32:0] ? 1 << 32 : 0;              // RDN
            else if (rm == 3) m += ~s & |m[32:0] ? 1 << 32 : 0;              // RUP
            else if (rm == 4) m += m[31] ? 1 << 32 : 0;                      // RMM
            if (m[56]) e++;
            if (m[56]) m = srs(m, 1);
            if (e < 1920) m = e > 1856 ? srs(m, 1921 - e) : 0;
            nx |= |m[31:0];
            if (e >= 2175) nx = 0;
        end
    endfunction

    /* register read buffer */
    localparam eqsz = (1 << $clog2(3 * ewd));
    logic [$clog2(eqsz)-1:0] rr_front;
    logic [$clog2(eqsz):0] rr_num, rr_in, rr_out;
    logic [eqsz-1:0][15:0] rr_opid;
    logic [eqsz-1:0]       rr_bubble;
    iss_bundle_t           rr_rvalue;
    logic        [ewd-1:0][$clog2(eqsz)-1:0] rr_waddr;
    iss_bundle_t [ewd-1:0]                   rr_wvalue;
    logic        [ewd-1:0]                   rr_wena;
    mwpram #(.width($bits(iss_bundle_t)), .depth(eqsz), .rports(1), .wports(ewd))
        rr_inst(.clk(clk), .rst(rst),
            .raddr(rr_front), .rvalue(rr_rvalue),
            .waddr(rr_waddr), .wvalue(rr_wvalue), .wena(rr_wena));
    always_comb begin
        rr_in = 0; rr_wvalue = 0;
        for (int i = 0; i < ewd; i++)
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
    |  pipelined FPU operations includes:      |
    |    1. fadd  fsub                         |
    |    2. fsgnj fsgnjn fsgnjx                |
    |    3. fmin  fmax                         |
    |    4. feq   flt    fle                   |
    |    5. fmv   fclass fcvt                  |
    |    6. fmul  fnmul                        |
    |  non-pipelined FPU operations includes:  |
    |    1. fdiv                               |
    |    2. fsqrt                              |
    \*----------------------------------------*/

    /* FPU pipeline */
    `define NST 5               // normal stage number
    fpu_funct_t f;              // functional code of RR buffer front
    logic stuck_pip, stuck_mul; // pipeline stuck
    logic [63:0] a, b;          // oprands of RR buffer front
    always_comb begin
        a = rr_rvalue.prsv[0];
        b = rr_rvalue.b[64] ? rr_rvalue.prsv[1] : rr_rvalue.b[63:0];
        if (f.fcvtfi & ~b[1]) // 32-bit integer to 64-bit integer
            a = {b[0] ? 0 : {32{a[31]}}, a[31:0]};
    end
    always_comb f = $bits(fpu_funct_t)'(rr_rvalue.funct);

    /* stage 1: split */
    iss_bundle_t [`NST:1] r_split; // buffer of register read bundle
    fpu_funct_t  [`NST:1] f_split; // buffer of functional code
    logic [`NST:1]       as_split, bs_split;
    logic [`NST:1][11:0] ae_split, be_split;
    logic [`NST:1][63:0] am_split, bm_split;
    logic [63:0] am_rev, bm_rev; // used for subnormal split
    logic  [6:0] am_pos, bm_pos;
    logic  [5:0] ah    , bh;
    firstk #(.width(64), .k(1)) ah_inst(.bits(am_rev), .pos(am_pos));
    firstk #(.width(64), .k(1)) bh_inst(.bits(bm_rev), .pos(bm_pos));
    always_comb if (f.double) begin
        am_rev = 0; bm_rev = 0;
        for (int i = 4; i < 56; i++) am_rev[63 - i] = a[i - 4];
        for (int i = 4; i < 56; i++) bm_rev[63 - i] = b[i - 4];
    end else begin
        am_rev = 0; bm_rev = 0;
        for (int i = 33; i < 56; i++) am_rev[63 - i] = a[i - 33];
        for (int i = 33; i < 56; i++) bm_rev[63 - i] = b[i - 33];
    end
    always_comb ah = 63 - am_pos[5:0];
    always_comb bh = 63 - bm_pos[5:0];
    always_ff @(posedge clk) if (rst) r_split <= 0; else if (~stuck_pip) begin
        for (int i = 2; i <= `NST; i++)
            r_split[i] <= succeed(r_split[i - 1].opid) ? 0 : r_split[i - 1];
        r_split[1] <= succeed(rr_opid[rr_front]) | rr_bubble[rr_front] | ~|rr_out ? 0 : rr_rvalue;
        if (f_split[1].fmul | f_split[1].fnmul) r_split[2].opid <= 0;
        if (f_split[1].fdiv | f_split[1].fsqrt) r_split[2].opid <= 0;
    end
    always_ff @(posedge clk) if (~stuck_pip) f_split <= {f_split[`NST-1:1], f};
    always_ff @(posedge clk) if (~stuck_pip) begin
        as_split[`NST:2] <= as_split[`NST-1:1];
        bs_split[`NST:2] <= bs_split[`NST-1:1];
        ae_split[`NST:2] <= ae_split[`NST-1:1];
        be_split[`NST:2] <= be_split[`NST-1:1];
        am_split[`NST:2] <= am_split[`NST-1:1];
        bm_split[`NST:2] <= bm_split[`NST-1:1];
        if (f.fcvtfi) begin // as 64-bit integer
            as_split[1] <= a[63] & ~b[0];
            ae_split[1] <= 12'd2047 + 12'd55;
            am_split[1] <= a[63] & ~b[0] ? ~a + 1 : a;
        end else if (f.fcvtsd | ~f.fcvtds & f.double) begin // as double
            as_split[1] <= a[63]; am_split[1] <= {9'd1, a[51:0], 3'd0};
            bs_split[1] <= b[63]; bm_split[1] <= {9'd1, b[51:0], 3'd0};
            ae_split[1] <= {1'b0, a[62:52]} - 12'd1023 + 12'd2047;
            be_split[1] <= {1'b0, b[62:52]} - 12'd1023 + 12'd2047;
            /* subnormal */
            if (a[62:52] == 0) ae_split[1] <= 12'd1024 - 12'd55 + 12'(ah);
            if (b[62:52] == 0) be_split[1] <= 12'd1024 - 12'd55 + 12'(bh);
            if (a[62:52] == 0) am_split[1] <= {9'd0, a[51:0], 3'd0} << 1 << 55 - ah;
            if (b[62:52] == 0) bm_split[1] <= {9'd0, b[51:0], 3'd0} << 1 << 55 - bh;
            /* zero */
            if (a[62:0] == 0) {am_split[1], ae_split[1]} <= `EZR;
            if (b[62:0] == 0) {bm_split[1], be_split[1]} <= `EZR;
            /* infinity */
            if (a[62:52] == -11'd1) ae_split[1] <= `EINF;
            if (b[62:52] == -11'd1) be_split[1] <= `EINF;
            /* NaN */
            if (a[62:52] == -11'd1 & |a[51:0]) ae_split[1] <= 4095;
            if (b[62:52] == -11'd1 & |b[51:0]) be_split[1] <= 4095;
        end else begin // as single
            as_split[1] <= a[31]; am_split[1] <= {9'd1, a[22:0], 32'd0};
            bs_split[1] <= b[31]; bm_split[1] <= {9'd1, b[22:0], 32'd0};
            ae_split[1] <= {3'd0, a[30:23]} - 12'd127 + 12'd2047;
            be_split[1] <= {3'd0, b[30:23]} - 12'd127 + 12'd2047;
            /* subnormal */
            if (a[30:23] == 0) ae_split[1] <= 12'd1920 - 12'd55 + 12'(ah);
            if (b[30:23] == 0) be_split[1] <= 12'd1920 - 12'd55 + 12'(bh);
            if (a[30:23] == 0) am_split[1] <= {9'd0, a[22:0], 32'd0} << 1 << 55 - ah;
            if (b[30:23] == 0) bm_split[1] <= {9'd0, b[22:0], 32'd0} << 1 << 55 - bh;
            /* zero */
            if (a[30:0] == 0) {am_split[1], ae_split[1]} <= `EZR;
            if (b[30:0] == 0) {bm_split[1], be_split[1]} <= `EZR;
            /* infinity */
            if (a[30:23] == -8'd1) ae_split[1] <= `EINF;
            if (b[30:23] == -8'd1) be_split[1] <= `EINF;
            /* NaN */
            if (a[30:23] == -8'd1 & |a[22:0]) ae_split[1] <= 4095;
            if (b[30:23] == -8'd1 & |b[22:0]) be_split[1] <= 4095;
            if (~&a[63:32]) {as_split[1], ae_split[1], am_split[1]} <= `CNAN; // check NaN boxing
            if (~&b[63:32]) {bs_split[1], be_split[1], bm_split[1]} <= `CNAN;
        end
    end

    /* stage 2: oprands alignment */
    logic [11:0] me;     // maximum exponent
    logic [63:0] a2, b2; // 2's complement
    logic [`NST:2][63:0] a2_align, b2_align;
    logic [`NST:2][11:0] me_align;
    logic [`NST:2]       nv_align;
    logic                snan_align;
    always_comb me = ae_split[1] > be_split[1] ? ae_split[1] : be_split[1];
    always_comb begin
        a2 = srs(am_split[1], me - ae_split[1]);
        b2 = srs(bm_split[1], me - be_split[1]);
        if (as_split[1]) a2 = ~a2 + 1;
        if (bs_split[1]) b2 = ~b2 + 1;
    end
    always_comb snan_align =
        r_split[1].a[64] & r_split[1].a[5] & ae_split[1] == 4095 & ~am_split[1][54] |
        r_split[1].b[64] & r_split[1].b[5] & be_split[1] == 4095 & ~bm_split[1][54];
    always_ff @(posedge clk) if (~stuck_pip) a2_align <= {a2_align[`NST-1:2], a2};
    always_ff @(posedge clk) if (~stuck_pip) b2_align <= {b2_align[`NST-1:2], b2};
    always_ff @(posedge clk) if (~stuck_pip) me_align <= {me_align[`NST-1:2], me};
    always_ff @(posedge clk) if (~stuck_pip) nv_align <= {nv_align[`NST-1:2], snan_align};

    /* stage 3: calculation */
    logic         rs;
    logic  [11:0] re, ezr, esub, einf;
    logic  [63:0] pip;
    logic [127:0] ints; // integer result with stick bits
    logic [`NST:3]       rs_calc;
    logic [`NST:3][11:0] re_calc;
    logic [`NST:3][63:0] rm_calc;
    logic [`NST:3]       nx_calc, nv_calc;
    always_comb esub = f_split[2].double ? 1024 : 1920; // for fclass calculation
    always_comb ezr  = `EZR;
    always_comb einf = `EINF;
    always_comb if (f_split[2].fcvtif) begin
        rs = as_split[2]; re = 0; // integer as 1's complement
        if (2047 + 53 > ae_split[2])
            ints = srs128(128'(am_split[2]), 12'd2047 + 12'd53 - 12'(ae_split[2]));
        else if (ae_split[2] - 2047 > 125) // out of 128-bit range (highest 1 at 55)
            ints = -128'd1;
        else ints = 128'(am_split[2]) << ae_split[2] - 2047 - 53;
        if (2047 + 53 > ae_split[2]) // right-shift rounding
            if      (f_split[2].rm == 0) ints += ints[1] & (ints[0] | ints[2]) ? 4 : 0; // RNE
            else if (f_split[2].rm == 1) ints += 0;                                     // RTZ
            else if (f_split[2].rm == 2) ints +=  rs & |ints[2:0] ? 4 : 0;              // RDN
            else if (f_split[2].rm == 3) ints += ~rs & |ints[2:0] ? 4 : 0;              // RUP
            else if (f_split[2].rm == 4) ints += ints[1] ? 4 : 0;                       // RMM
        pip = ints[65:2];
    end else begin
        if      (f_split[2].fadd) pip = adds(a2_align[2], b2_align[2]); // temporary 2's complement
        else if (f_split[2].fsub) pip = subs(a2_align[2], b2_align[2]);
        else                      pip = 0;
        rs = pip[63];
        re = me_align[2];
        if (rs) pip = ~pip + 1;
        ints = 0;
    end
    always_ff @(posedge clk) if (~stuck_pip) begin
        rs_calc[`NST:4] <= rs_calc[`NST-1:3];
        re_calc[`NST:4] <= re_calc[`NST-1:3];
        rm_calc[`NST:4] <= rm_calc[`NST-1:3];
        nx_calc[`NST:4] <= nx_calc[`NST-1:3];
        nv_calc[`NST:4] <= nv_calc[`NST-1:3];
        nx_calc[3] <= 0; // accumulative
        nv_calc[3] <= 0;
        /* result as floating point (default as first oprand: fcvtfi fcvtsd fcvtds) */
        {rs_calc[3], re_calc[3], rm_calc[3]} <= {as_split[2], ae_split[2], am_split[2]};
        if (f_split[2].fadd)   {rs_calc[3], re_calc[3], rm_calc[3]} <= {rs, re, pip};
        if (f_split[2].fsub)   {rs_calc[3], re_calc[3], rm_calc[3]} <= {rs, re, pip};
        if (f_split[2].fsgnj)  {rs_calc[3], rm_calc[3]} <= {bs_split[2], am_split[2]};
        if (f_split[2].fsgnjn) {rs_calc[3], rm_calc[3]} <= {~bs_split[2], am_split[2]};
        if (f_split[2].fsgnjx) {rs_calc[3], rm_calc[3]} <= {as_split[2] ^ bs_split[2], am_split[2]};
        if (f_split[2].fmin)   {rs_calc[3], re_calc[3], rm_calc[3]} <=
            as_split[2] & ~bs_split[2] | $signed(a2_align[2]) < $signed(b2_align[2]) ?
                {as_split[2], ae_split[2], am_split[2]} : {bs_split[2], be_split[2], bm_split[2]};
        if (f_split[2].fmax)   {rs_calc[3], re_calc[3], rm_calc[3]} <=
            ~as_split[2] & bs_split[2] | $signed(a2_align[2]) > $signed(b2_align[2]) ?
                {as_split[2], ae_split[2], am_split[2]} : {bs_split[2], be_split[2], bm_split[2]};
        if (f_split[2].fsub & ae_split[2] == `EINF && be_split[2] == `EINF) // inf - inf
            {nv_calc[3], rs_calc[3], re_calc[3], rm_calc[3]} <= {1'b1, `CNAN};
        if (f_split[2].fmin | f_split[2].fmax)
            if (ae_split[2] == 4095 && be_split[2] == 4095) // both NaN
                {rs_calc[3], re_calc[3], rm_calc[3]} <= `CNAN;
            else if (be_split[2] == 4095) // b NaN
                {rs_calc[3], re_calc[3], rm_calc[3]} <= {as_split[2], ae_split[2], am_split[2]};
            else if (ae_split[2] == 4095) // a NaN
                {rs_calc[3], re_calc[3], rm_calc[3]} <= {bs_split[2], be_split[2], bm_split[2]};
        /* result as integer */
        if (f_split[2].feq)    rm_calc[3] <= 64'($signed(a2_align[2]) == $signed(b2_align[2]));
        if (f_split[2].flt)    rm_calc[3] <= 64'($signed(a2_align[2]) <  $signed(b2_align[2]));
        if (f_split[2].fle)    rm_calc[3] <= 64'($signed(a2_align[2]) <= $signed(b2_align[2]));
        if ((f_split[2].feq | f_split[2].flt | f_split[2].fle) & ae_split[2] == 4095) // NaN
            rm_calc[3] <= 0;
        if ((f_split[2].flt | f_split[2].fle) & ae_split[2] == 4095) // unordered comparison
            nv_calc[3] <= 1;
        if (f_split[2].fmvxf)
            if (~f_split[2].double)
                rm_calc[3] <= {{32{r_split[2].prsv[0][31]}}, r_split[2].prsv[0][31:0]};
            else rm_calc[3] <= r_split[2].prsv[0];
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 0) // to word
            if (ae_split[2] == 4095) rm_calc[3] <= 64'h7fff_ffff;
            else if  (|ints[127:33]) rm_calc[3] <= rs ? 64'hffff_ffff_8000_0000 : 64'h7fff_ffff;
            else if             (rs) rm_calc[3] <= ~pip + 1;
            else                     rm_calc[3] <= {{32{pip[31]}}, pip[31:0]};
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 1) // to unsigned word
            if (ae_split[2] == 4095) rm_calc[3] <= 64'hffff_ffff_ffff_ffff;
            else if             (rs) rm_calc[3] <= 0;
            else if  (|ints[127:34]) rm_calc[3] <= 64'hffff_ffff_ffff_ffff;
            else                     rm_calc[3] <= {{32{pip[31]}}, pip[31:0]};
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 2) // to long
            if (ae_split[2] == 4095) rm_calc[3] <= 64'h7fff_ffff_ffff_ffff;
            else if  (|ints[127:65]) rm_calc[3] <= rs ? 64'h8000_0000_0000_0000 : 64'h7fff_ffff_ffff_ffff;
            else if             (rs) rm_calc[3] <= ~pip + 1;
            else                     rm_calc[3] <=  pip;
        if (f_split[2].fcvtif & r_split[2].b[1:0] == 3) // to unsigned long
            if (ae_split[2] == 4095) rm_calc[3] <= 64'hffff_ffff_ffff_ffff;
            else if             (rs) rm_calc[3] <= 0;
            else if  (|ints[127:66]) rm_calc[3] <= 64'hffff_ffff_ffff_ffff;
            else                     rm_calc[3] <= pip;
        if (f_split[2].fcvtif & |ints[1:0]) nx_calc[3] <= 1;
        if (f_split[2].fcvtif & (
            r_split[2].b[1:0] == 0 & |ints[127:33] | // overflow
            r_split[2].b[1:0] == 1 & |ints[127:34] |
            r_split[2].b[1:0] == 2 & |ints[127:65] |
            r_split[2].b[1:0] == 3 & |ints[127:66] |
            r_split[2].b[1:0] == 1 & rs & pip != 0 |
            r_split[2].b[1:0] == 3 & rs & pip != 0)) nv_calc[3] <= 1;
        if (f_split[2].fclass) rm_calc[3] <= {
            54'd0,
            ae_split[2] == 4095 & am_split[2][54] == 1,                      // qnan
            ae_split[2] == 4095 & am_split[2][54] == 0,                      // snan
            as_split[2] == 0 & ae_split[2] >= einf & am_split[2][54:3] == 0, // +inf
            as_split[2] == 0 & ae_split[2] >  esub & ae_split[2] < einf,     // +x
            as_split[2] == 0 & ae_split[2] <= esub & am_split[2][54:3] != 0, // +sub
            as_split[2] == 0 & ae_split[2] == ezr  & am_split[2][54:3] == 0, // +0
            as_split[2] == 1 & ae_split[2] == ezr  & am_split[2][54:3] == 0, // -0
            as_split[2] == 1 & ae_split[2] <= esub & am_split[2][54:3] != 0, // -sub
            as_split[2] == 1 & ae_split[2] >  esub & ae_split[2] < einf,     // -x
            as_split[2] == 1 & ae_split[2] >= einf & am_split[2][54:3] == 0  // -inf
        };
    end

    /* stage 4: uniforming */
    logic [63:0] rm_rev;
    logic  [6:0] rm_pos;
    logic  [5:0] rh; // position of highest one
    logic [`NST:4]       rs_uni;
    logic [`NST:4][11:0] re_uni;
    logic [`NST:4][63:0] rm_uni;
    firstk #(.width(64), .k(1)) rh_inst(.bits(rm_rev), .pos(rm_pos));
    always_comb for (int i = 0; i < 64; i++) rm_rev[i] = rm_calc[3][63 - i];
    always_comb rh = 63 - rm_pos[5:0];
    always_ff @(posedge clk) if (~stuck_pip) begin
        rs_uni[`NST:5] <= rs_uni[`NST-1:4];
        re_uni[`NST:5] <= re_uni[`NST-1:4];
        rm_uni[`NST:5] <= rm_uni[`NST-1:4];
        if (f_split[3].feq   | f_split[3].flt    | f_split[3].fle |
            f_split[3].fmvxf | f_split[3].fcvtif | f_split[3].fclass) // integer result
            rm_uni[4] <= rm_calc[3];
        else begin // floating-point result
            rs_uni[4] <= rs_calc[3];
            re_uni[4] <= re_calc[3] + 12'(rh) - 12'd55;
            rm_uni[4] <= rh > 55 ? srs(rm_calc[3], 12'(rh) - 55) : rm_calc[3] << 12'd55 - 12'(rh);
            if (13'(re_calc[3]) + 13'(rh) < 13'd55)         re_uni[4] <= 0;     // underflow
            if (13'(re_calc[3]) + 13'(rh) > 13'd55 + `EINF) re_uni[4] <= `EINF; // overflow
            if (~rm_pos[6]) {re_uni[4], rm_uni[4]} <= 0;                        // zero mantissa
            if (re_calc[3] == 4095) begin                                       // NaN
                {rs_uni[4], re_uni[4], rm_uni[4]} <= {rs_calc[3], re_calc[3], rm_calc[3]};
                if (f_split[3].fcvtds | f_split[3].fcvtsd) rm_uni[4] <= 1 << 54; // to qNaN
            end
        end
    end

    /* stage 5: conversion */
    logic [63:0] r;
    logic        nx_conv;
    exe_bundle_t r_pip;
    always_comb begin
        nx_conv = 0;
        if (f_split[4].feq   | f_split[4].flt    | f_split[4].fle |
            f_split[4].fmvxf | f_split[4].fcvtif | f_split[4].fclass) // integer
            r = rm_uni[4];
        else if (f_split[4].fmvfx) // fmvfx does not modify original bits
            r = f_split[4].double ? r_split[4].prsv[0] : {-32'd1, r_split[4].prsv[0][31:0]};
        else begin // floating-point
            r       = asm(rs_uni[4], re_uni[4], rm_uni[4], f_split[4].double, f_split[4].rm);
            nx_conv =  nx(rs_uni[4], re_uni[4], rm_uni[4], f_split[4].double, f_split[4].rm);
        end
    end
    always_ff @(posedge clk) if (~stuck_pip) begin
        r_pip           <= 0;
        r_pip.opid      <= succeed(r_split[4].opid) ? 0 : r_split[4].opid;
        r_pip.brid      <= r_split[4].brid;
        r_pip.ldid      <= r_split[4].ldid;
        r_pip.stid      <= r_split[4].stid;
        r_pip.delta     <= r_split[4].delta;
        r_pip.pc        <= r_split[4].pc;
        r_pip.npc       <= r_split[4].base[63:0] + 63'(r_split[4].delta);
        r_pip.prda      <= r_split[4].prda[1];
        r_pip.prdv      <= r;
        r_pip.fflags[0] <= nx_conv     | nx_calc[4]; // NX
        r_pip.fflags[4] <= nv_align[4] | nv_calc[4]; // NV
    end

    /*------------------------------------ multiplier -------------------------------------*\
    |    s1*m1 [ 00---1.xx---x00 ]*2^(e1-2047)   *s2*m2 [ 00---1.xx---x00 ]*2^(e2-2047)     |
    |  = s1*m1'[ 00---1 xx---x00 ]*2^(e1-2047-55)*s2*m2'[ 00---1 xx---x00 ]*2^(e2-2047-55)  |
    |  = s1*s2*m1'*m2'*2^(e1+e2-4094-110)                                                   |
    |  there maybe a chance to reuse the integer multiplier and divider                     |
    \*-------------------------------------------------------------------------------------*/
    `define MST 5 // multiplier stage number
    exe_bundle_t [`MST:1]        r_mul;
    fpu_funct_t  [`MST:1]        f_mul;
    logic        [`MST:1]        s_mul;
    logic        [`MST:1] [11:0] e_mul;
    logic        [`MST:1][127:0] m_mul;
    logic   [7:0] pos_mul;
    logic [127:0] rev_mul;
    logic  [11:0] rh_mul; // highest one position in m1' * m2'
    logic  [63:0] srs_mulh, srs_mul;
    firstk #(.width(128), .k(1)) rh_mul_inst(.bits(rev_mul), .pos(pos_mul));
    always_comb for (int i = 0; i < 128; i++) rev_mul[i] = m_mul[`MST-1][127 - i];
    always_comb rh_mul = 127 - 12'(pos_mul[6:0]);
    always_comb {srs_mulh, srs_mul} = srs128(m_mul[`MST-1], 12'(rh_mul) - 55);
    always_ff @(posedge clk) if (rst) r_mul <= 0; else if (~stuck_mul) begin
        /* uniform of [MST-1] to [MST] */
        r_mul[`MST]      <= r_mul[`MST-1];
        if (~pos_mul[7]) r_mul[`MST].prdv <= f_mul[`MST-1].double ? 0 : 64'hffff_ffff_0000_0000;
        else             r_mul[`MST].prdv <=
            asm(s_mul[`MST-1], e_mul[`MST-1] + rh_mul, srs_mul, f_mul[`MST-1].double, f_mul[`MST-1].rm);
        r_mul[`MST].fflags[0] <=
            nx (s_mul[`MST-1], e_mul[`MST-1] + rh_mul, srs_mul, f_mul[`MST-1].double, f_mul[`MST-1].rm);
        /* shift of [1 .. MST-2] to [2 .. MST-1] */
        for (int i = 2; i < `MST; i++)
            r_mul[i] <= succeed(r_mul[i - 1].opid) ? 0 : r_mul[i - 1];
        f_mul[`MST-1:2] <= f_mul[`MST-2:1];
        s_mul[`MST-1:2] <= s_mul[`MST-2:1];
        e_mul[`MST-1:2] <= e_mul[`MST-2:1];
        m_mul[`MST-1:2] <= m_mul[`MST-2:1];
        /* push-in of [1] */
        if (f_split[1].fmul | f_split[1].fnmul)
            r_mul[1].opid  <= succeed(r_split[1].opid) ? 0 : r_split[1].opid;
        else r_mul[1].opid <= 0;
        r_mul[1].brid      <= r_split[1].brid;
        r_mul[1].ldid      <= r_split[1].ldid;
        r_mul[1].stid      <= r_split[1].stid;
        r_mul[1].delta     <= r_split[1].delta;
        r_mul[1].pc        <= r_split[1].pc;
        r_mul[1].npc       <= r_split[1].base[63:0] + 63'(r_split[1].delta);
        r_mul[1].prda      <= r_split[1].prda[1];
        r_mul[1].fflags[4] <= snan_align;
        f_mul[1] <= f_split[1];
        s_mul[1] <= as_split[1] ^ bs_split[1] ^ f_split[1].fnmul;
        e_mul[1] <= ae_split[1] + be_split[1] - 12'd2047 - 12'd110;
        m_mul[1] <= {64'd0, am_split[1]} * {64'd0, bm_split[1]};
        if (13'(ae_split[1]) + 13'(be_split[1]) < 13'd2047 + 13'd110)         e_mul[1] <= 0;     // underflow
        if (13'(ae_split[1]) + 13'(be_split[1]) > 13'd2047 + 13'd110 + `EINF) e_mul[1] <= `EINF; // overflow
        if (ae_split[1] == `EINF | be_split[1] == `EINF)                      e_mul[1] <= `EINF; // infinity
    end

    /*------------------------------ divider ------------------------------*\
    |    s1*m1[ 00---1.xx---x000 ]*2^(e1-2047)     s1     m1                |
    |   --------------------------------------- = ---- * ---- * 2^(e1-e2)   |
    |    s2*m2[ 00---1.xx---x000 ]*2^(e2-2047)     s2     m2                |
    |         [     55.54   3210 ]                                          |
    |  fixed-point divider uses repeated subtraction (same as integer)      |
    \*---------------------------------------------------------------------*/
    exe_bundle_t r_div;
    fpu_funct_t  f_div;
    logic        s_div, borrow;
    logic [11:0] e_div;
    logic [63:0] m_div, a_div, b_div;
    logic  [6:0] c_div;
    always_comb borrow = am_split[1] < bm_split[1];
    always_ff @(posedge clk)
        if      (rst | succeed(r_div.opid))                               {r_div, c_div} <= 64;
        else if ( r_div.opid[15] & r_div.opid == resp[0].opid & claim[0]) {r_div, c_div} <= 64;
        else if (~r_div.opid[15] & r_split[1].opid[15] & f_split[1].fdiv) begin
            s_div <= as_split[1] ^ bs_split[1];
            e_div <= ae_split[1] - be_split[1] + 12'd2047 - 12'(borrow);
            m_div <= 0;
            if (13'(ae_split[1]) + 13'd2047 < 13'(be_split[1]) + 13'(borrow)) e_div <= 0; // underflow
            if (13'(ae_split[1]) + 13'd2047 > 13'(be_split[1]) + 13'(borrow) + `EINF)     // overflow
                e_div <= `EINF;
            a_div           <= am_split[1] << 6'(borrow);
            b_div           <= bm_split[1];
            c_div           <= succeed(r_split[1].opid) ? 64 : 55;
            f_div           <= f_split[1];
            r_div.opid      <= succeed(r_split[1].opid) ? 0 : r_split[1].opid;
            r_div.brid      <= r_split[1].brid;
            r_div.ldid      <= r_split[1].ldid;
            r_div.stid      <= r_split[1].stid;
            r_div.delta     <= r_split[1].delta;
            r_div.pc        <= r_split[1].pc;
            r_div.npc       <= r_split[1].base[63:0] + 63'(r_split[1].delta);
            r_div.prda      <= r_split[1].prda[1];
            r_div.fflags[4] <= snan_align;
        end else if (~c_div[6]) begin // calculating
            c_div             <= c_div - 1;
            a_div             <= (a_div >= b_div ? subs(a_div, b_div) : a_div) << 1;
            m_div[c_div[5:0]] <=  a_div >= b_div;
        end else if (c_div == -7'd1) begin // rounding
            c_div           <= -7'd2;
            r_div.prdv      <= asm(s_div, e_div, m_div | (|a_div ? 1 : 0), f_div.double, f_div.rm);
            r_div.fflags[0] <=  nx(s_div, e_div, m_div | (|a_div ? 1 : 0), f_div.double, f_div.rm);
        end

    /*---------------------- square root calculation ----------------------*\
    |                           +- sqrt(m1)  *2^[(e1-2047)/2], e1 is odd    |
    |    sqrt(m1*2^(e1-2047)) = |                                           |
    |                           +- sqrt(m1*2)*2^[(e1-2048)/2], e1 is even   |
    |  m1 and 2*m1 will lay in [1, 4), so that there is no need to uniform  |
    \*---------------------------------------------------------------------*/
    `define RST 4
    exe_bundle_t r_sqr;
    fpu_funct_t  f_sqr;
    logic        s_sqr, rest;
    logic [11:0] e_sqr;
    logic [63:0] m_sqr, a_sqr;
    logic  [6:0] c_sqr, n_sqr;   // counters
    logic [`RST:1][127:0] p_sqr; // product
    always_ff @(posedge clk)
        if      (rst | succeed(r_sqr.opid))                               {r_sqr, c_sqr} <= 64;
        else if ( r_sqr.opid[15] & r_sqr.opid == resp[1].opid & claim[1]) {r_sqr, c_sqr} <= 64;
        else if (~r_sqr.opid[15] & r_split[1].opid[15] & f_split[1].fsqrt) begin
            s_sqr           <= 0;
            e_sqr           <= (ae_split[1] - 2047 >> 1) + 2047;
            a_sqr           <= ae_split[1][0] ? am_split[1] : am_split[1] << 1;
            m_sqr           <= 1 << 55;
            c_sqr           <= succeed(r_split[1].opid) ? 64 : 55; // next trial bit position
            n_sqr           <= 0;  // inner multiplier stage number
            f_sqr           <= f_split[1];
            rest            <= 1;
            r_sqr.opid      <= succeed(r_split[1].opid) ? 0 : r_split[1].opid;
            r_sqr.brid      <= r_split[1].brid;
            r_sqr.ldid      <= r_split[1].ldid;
            r_sqr.stid      <= r_split[1].stid;
            r_sqr.delta     <= r_split[1].delta;
            r_sqr.pc        <= r_split[1].pc;
            r_sqr.npc       <= r_split[1].base[63:0] + 63'(r_split[1].delta);
            r_sqr.prda      <= r_split[1].prda[1];
            r_sqr.fflags[4] <= snan_align | as_split[1];
            if (~am_split[1][55])   {e_sqr, m_sqr, c_sqr} <= {12'd0, 64'd0, -7'd1}; // zero
            if (as_split[1]) {s_sqr, e_sqr, m_sqr, c_sqr} <= {`CNAN, -7'd1};        // negative
        end else if (~c_sqr[6]) begin // calculating
            n_sqr <= n_sqr + 1;
            p_sqr[`RST:2] <= p_sqr[`RST-1:1];
            if (n_sqr == 0) p_sqr[1] <= {64'd0, m_sqr} * {64'd0, m_sqr};
            if (n_sqr == `RST) begin
                if (c_sqr[5:0] > 1) m_sqr[c_sqr[5:0] - 1] <= 1;
                c_sqr <= c_sqr - 1;
                n_sqr <= 0;
                if (p_sqr[`RST] >  {64'd0, a_sqr} << 55) m_sqr[c_sqr[5:0]] <= 0;
                if (p_sqr[`RST] == {64'd0, a_sqr} << 55) rest <= 0; // perfect square
            end
        end else if (c_sqr == -7'd1) begin // rounding
            c_sqr           <= -7'd2;
            r_sqr.prdv      <= asm(s_sqr, e_sqr, m_sqr | 64'(rest), f_sqr.double, f_sqr.rm);
            r_sqr.fflags[0] <= nx (s_sqr, e_sqr, m_sqr | 64'(rest), f_sqr.double, f_sqr.rm);
        end

    /* assign response */
    always_comb ready = ewd <= eqsz - 32'(rr_num); // ready when able to holding `ewd` operations
    always_comb stuck_mul =       r_mul[`MST].opid[15] & ~claim[1] | r_sqr.opid[15];
    always_comb stuck_pip = stuck_mul | r_pip.opid[15] & ~claim[0] | r_div.opid[15];
    always_comb rr_out = |rr_num & ~stuck_pip ? 1 : 0;
    always_comb begin
        resp = 0;
        if (r_div.opid[15]) resp[0] = c_div == -7'd2 ? r_div : 0;
        else                resp[0] = r_pip;
        if (r_sqr.opid[15]) resp[1] = c_sqr == -7'd2 ? r_sqr : 0;
        else                resp[1] = r_mul[`MST];
    end
endmodule
