/**
 * div.sv:
 *   This is the divider module.
 */

`include "types.sv"
import types::*;

module div #(
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
            if (req[i].opid[15] & req[i].fu[4]) begin // select DIV requests and flatten them
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
    always_ff @(posedge clk) if (rst) rr_num   <= 0; else rr_num   <= rr_num + rr_in - rr_out;

    /* divider (not pipelined) */
    exe_bundle_t bundle;
    logic [63:0] a, b, r; // dividend, divisor and quotient
    logic  [6:0] c;       // counter
    logic ov, dz, an, bn; // flags: overflow, divided-by-zero, a-negative, b-negative
    logic d, u, w;        // flags: div-or-rem, unsigned-or-signed, words-or-double-words
    logic [1:0][63:0] o;  // oprands
    div_funct_t f;        // function code of input
    logic  [6:0] topone;  // basic optimization of finding most significant one
    logic [63:0] a_rev;   // reverse of a
    firstk #(.width(64), .k(1)) firstk_inst(.bits(a_rev), .pos(topone));
    always_comb o = rr_rvalue.prs;
    always_comb f = div_funct_t'(rr_rvalue.funct);
    always_comb rr_out = c == 64 & |rr_num ? 1 : 0;
    always_comb for (int i = 0; i < 64; i++) a_rev[i] = a[63 - i];
    always_ff @(posedge clk) if (rst) {bundle, a, b, r, c} <= 64;
        else if (|rr_out) begin
            bundle        <= 0;
            bundle.opid   <= rr_rvalue.opid;
            bundle.brid   <= rr_rvalue.brid;
            bundle.ldid   <= rr_rvalue.ldid;
            bundle.stid   <= rr_rvalue.stid;
            bundle.npc    <= rr_rvalue.base[63:0] + 63'(rr_rvalue.delta);
            bundle.delta  <= rr_rvalue.delta;
            bundle.prda   <= rr_rvalue.prda[1];
            bundle.pc     <= rr_rvalue.pc;
            /* prepare for calculation */
            if (f.divw | f.remw | f.divuw | f.remuw) begin
                a[31:0] <= (f.divw | f.remw) & o[0][31] ? -o[0][31:0] : o[0][31:0];
                b[31:0] <= (f.divw | f.remw) & o[1][31] ? -o[1][31:0] : o[1][31:0];
                a[63:32] <= 0;
                b[63:32] <= 0;
                c <= 31;
            end else begin
                a <= (f.div | f.rem) & o[0][63] ? -o[0] : o[0];
                b <= (f.div | f.rem) & o[1][63] ? -o[1] : o[1];
                c <= 63;
            end
            r <= 0;
            if (f.divw | f.remw | f.divuw | f.remuw) {an, bn} <= {o[0][31], o[1][31]};
            else                                     {an, bn} <= {o[0][63], o[1][63]};
            d <= f.div  | f.divu | f.divw  | f.divuw;
            u <= f.divu | f.remu | f.divuw | f.remuw;
            w <= f.divw | f.remw | f.divuw | f.remuw;
            ov <= 0; dz <= 0;
            if ((f.divw | f.remw) & o[0][31:0] == 32'h80000000   & o[1][31:0] == 32'hffffffff |
                (f.div  | f.rem)  & o[0] == 64'h8000000000000000 & o[1] == 64'hffffffffffffffff) begin
                ov <= 1;
                a <= o[0];
                c <= -7'd2;
            end
            if ((f.divw | f.remw | f.divuw | f.remuw) & ~|o[1][31:0] |
               ~(f.divw | f.remw | f.divuw | f.remuw) & ~|o[1][63:0]) begin
                dz <= 1;
                a <= o[0];
                c <= -7'd2;
            end
            if (succeed(rr_opid[rr_front]) | rr_bubble[rr_front]) c <= 64;
        end else if (succeed(bundle.opid)) c <= 64;
        else if (~c[6]) begin
            /* calcualting */
            if      (~topone[6])                       c <= -7'd1;
            else if (c > 0 & 63 - topone[5:0] < c - 1) c <= 63 - topone[5:0];
            else                                       c <= c - 1;
            if ((a >> c[5:0]) >= b) begin
                r[c[5:0]] <= 1;
                a <= a - (b << c[5:0]);
            end
        end else if (c == -7'd1) begin
            /* handle signed operation */
            case ({w, u, d})
                3'b000: r <= an      ? -a : a;                                            // REM
                3'b001: r <= an ^ bn ? -r : r;                                            // DIV
                3'b010: r <= a;                                                           // REMU
                3'b011: r <= r;                                                           // DIVU
                3'b100: r <= an      ? {{32{~a[31]}}, -a[31:0]} : {{32{a[31]}}, a[31:0]}; // REMW
                3'b101: r <= an ^ bn ? {{32{~r[31]}}, -r[31:0]} : {{32{r[31]}}, r[31:0]}; // DIVW
                3'b110: r <= {{32{a[31]}}, a[31:0]};                                      // REMUW
                3'b111: r <= {{32{r[31]}}, r[31:0]};                                      // DIVUW
            endcase
            c <= -2;
        end else if (c == -7'd2)
            /* calculation done, waiting for claim */
            if (claim[0]) c <= 7'd64;

    /* assign response */
    always_comb ready = ewd <= eqsz - 32'(rr_num); // ready when able to holding `ewd` operations
    always_comb begin
        resp         = 0;
        resp[0]      = bundle;
        resp[0].prdv = w ? {{32{r[31]}}, r[31:0]} : r;
        if (ov &  d) resp[0].prdv = w ? {{32{a[31]}}, a[31:0]} : a;
        if (ov & ~d) resp[0].prdv = 0;
        if (dz &  d) resp[0].prdv = -64'd1;
        if (dz & ~d) resp[0].prdv = w ? {{32{a[31]}}, a[31:0]} : a;
        if (c != -7'd2) resp[0].opid = 0;
    end
endmodule
