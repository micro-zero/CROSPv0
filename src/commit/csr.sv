/**
 * csr.sv:
 *   This file includes control-status registers module.
 *   It handles reading/writing requsts and maintains
 *   privileged status.
 */

/*--------------------------------- CSR map -------------------------------------------*\
| User-level CSR:                                                                       |
|     0x000 -- 0x005:                                                                   |
|         0x000 -> ustatus    0x001 -> fflags    0x002 -> frm    0x003 -> fcsr          |
|         0x004 -> uie        0x005 -> utvec                                            |
|     0x040 -- 0x044:                                                                   |
|         0x040 -> uscratch    0x041 -> uepc    0x042 -> ucause    0x043 -> utval       |
|         0x044 -> uip                                                                  |
|     0xc00 -- 0xc1f:                                                                   |
|         0xc00 -> cycle    0xc01 -> time    0xc02 -> instret                           |
|         0xc03-0xc1f -> hpmcounter                                                     |
| Supervisor-level CSR:                                                                 |
|     0x100 -- 0x106:                                                                   |
|         0x100 -> sstatus    0x102 -> sedeleg    0x103 -> sideleg    0x104 -> sie      |
|         0x105 -> stvec      0x106 -> scounteren                                       |
|     0x140 -- 0x144:                                                                   |
|         0x140 -> sscratch    0x141 -> sepc    0x142 -> scause    0x143 -> stval       |
|         0x144 -> sip                                                                  |
|     0x180 -- 0x180:                                                                   |
|         0x180 -> satp                                                                 |
| Machine-level CSR:                                                                    |
|     0x300 -- 0x306:                                                                   |
|         0x300 -> mstatus    0x301 -> misa     0x302 -> medeleg    0x303 -> mideleg    |
|         0x304 -> mie        0x305 -> mtvec    0x306 -> mcounteren                     |
|     0x320 -- 0x33f:                                                                   |
|         0x320 -> mcountinhibit    0x323-0x33f -> mhpmevent                            |
|     0x340 -- 0x344:                                                                   |
|         0x340 -> mscratch    0x341 -> mepc    0x342 -> mcause    0x343 -> mtval       |
|         0x344 -> mip                                                                  |
|     0x3a0 -- 0x3bf:                                                                   |
|         0x3a0,0x3a2 -> pmpcfg    0x3b0-0x3bf -> pmpaddr                               |
|     0x7a0 -- 0x7a3:                                                                   |
|         0x7a0 -> tselect    0x7a1-0x7a3 -> tdata                                      |
|     0x7b0 -- 0x7b3:                                                                   |
|         0x7b0 -> dcsr       0x7b1 -> dpc    0x7b2-0x7b3 -> dscratch                   |
|     0xb00 -- 0xb1f:                                                                   |
|         0xb00 -> mcycle    0xb02 -> minstret    0xb03-0xb1f -> mhpmcounter            |
|     0xf11 -- 0xf14:                                                                   |
|         0xf11 -> mvendorid    0xf12 -> marchid    0xf13 -> mimpid    0xf14 -> mhartid |
\*-------------------------------------------------------------------------------------*/

module csr(
    input  logic clk,
    input  logic rst,
    /* CSRRW request */
    input  logic        rqst,  // CSRRW request signal
    input  logic  [2:0] func,  // CSRRW functional code (funct3)
    input  logic [11:0] addr,  // CSRRW address
    input  logic [63:0] wdat,  // CSRRW writing data
    output logic [63:0] rdat,  // CSRRW reading data
    /* take exception */
    input  logic        ein,   // encounter an exception
    input  logic [63:0] epc,   // exception PC
    input  logic [63:0] tval,  // trap value
    input  logic [63:0] cause, // exception cause
    /* return from exception */
    input  logic  [2:0] ret,
    /* exception caused by CSR module */
    output logic        eout,  // raise exception
    output logic        intl,  // local interrupt detected (for halting wfi)
    output logic  [6:0] intg,  // raise global interrupt
    output logic        flush, // cause pipeline flush
    /* input and output not from instructions */
    input  logic [63:0] in_ip,      // interrupt pending
    input  logic [63:0] in_time,    // CSR `mtime` mapped in memory
    input  logic [63:0] in_instret, // instruction retired (delta)
    output logic [63:0] out_status, // CSR `mstatus`
    output logic [63:0] out_tvec,   // CSR `mtvec` or `stvec` according to current privilege level
    output logic [63:0] out_mepc,   // CSR `mepc`
    output logic [63:0] out_sepc,   // CSR `sepc`
    output logic [63:0] out_isatp,  // CSR `satp` for instruction fetch
    output logic [63:0] out_dsatp   // CSR `satp` for data access
);
    logic [1:0] level; // 00 -> U  01 -> S  11 -> M
    logic [63:0] wres; // write result according to writing data and functional code
    logic [64:0] val;  // direct value of input address
    logic trapintos;   // trap into S mode according to current level and delegation registers
    logic we;          // write enable signal for CSRRW
    /* control and status registers */
    logic [63:0] misa, mvendorid, marchid, mimpid, mhartid;
    logic [63:0] mstatus, mtvec, medeleg, mideleg, mip, mip_base, mie;
    logic [63:0] mcycle, minstret, mhpmcounter[31:0], mhpmevent[31:0];
    logic [63:0] mcounteren, mcountinhibit, mscratch, mepc, mcause, mtval;
    logic [63:0] stvec, scounteren, sscratch;
    logic [63:0] satp, sepc, scause, stval;
    logic [63:0] fcsr, utvec;
    /* some auto-increment CSRs requires forwarding due to pre-execution before being top of ROB */
    logic [63:0] mcycle_fwd, minstret_fwd;
    /* trap into S mode when current level is S/U and delegated by M mode */
    always_comb if (cause[63]) trapintos = ~level[1] & mideleg[cause[5:0]];
        else trapintos = ~level[1] & medeleg[cause[5:0]];
    /* assign CSRRW values */
    always_comb case (func[1:0])
        2'b00: wres = rdat; // not write
        2'b01: wres = wdat;
        2'b10: wres = wdat | rdat;
        2'b11: wres = ~wdat & rdat;
    endcase
    always_comb if (addr > 12'hb02 & addr < 12'hb20)
        val = 65'(mhpmcounter[addr[4:0]]);
    else if (addr > 12'h322 & addr < 12'h340)
        val = 65'(mhpmevent[addr[4:0]]);
    else case (addr)
        /* M-mode */
        12'h301: val = 65'(misa);          12'hf11: val = 65'(mvendorid);
        12'hf12: val = 65'(marchid);       12'hf13: val = 65'(mimpid);
        12'hf14: val = 65'(mhartid);       12'h300: val = 65'(mstatus);
        12'h305: val = 65'(mtvec);         12'h302: val = 65'(medeleg);
        12'h303: val = 65'(mideleg);       12'h344: val = 65'(mip);
        12'h304: val = 65'(mie);           12'hb00: val = 65'(mcycle_fwd);
        12'hb02: val = 65'(minstret_fwd);  12'h306: val = 65'(mcounteren);
        12'h320: val = 65'(mcountinhibit); 12'h340: val = 65'(mscratch);
        12'h341: val = 65'(mepc);          12'h342: val = 65'(mcause);
        12'h343: val = 65'(mtval);
        /* S-mode */
        12'h180: val = 65'(satp);
        12'h100: val = 65'(mstatus);       12'h105: val = 65'(stvec);
        12'h144: val = 65'(mip);
        12'h104: val = 65'(mie);           12'h106: val = 65'(scounteren);
        12'h140: val = 65'(sscratch);      12'h141: val = 65'(sepc);
        12'h142: val = 65'(scause);        12'h143: val = 65'(stval);
        /* U-mode */
        12'h001: val = 65'(fcsr[4:0]);     12'h002: val = 65'(fcsr[7:5]);
        12'h003: val = 65'(fcsr);          12'h005: val = 65'(utvec);
        12'hc00: val = 65'(mcycle);        12'hc01: val = 65'(in_time);
        12'hc02: val = 65'(minstret_fwd);
        /* unimplemented CSRs */
        default: val = {1'b1, 64'd0};
    endcase
    always_comb rdat = val[63:0];
    always_comb eout = rqst & val[64]                                        | // unimplemented
                       rqst & addr[9:8] > level                              | // violate privilege
                       rqst & addr >= 12'hc00 & addr < 12'hc20 & rdat != wres; // read-only
    always_comb we = rqst & ~eout;
    always_comb mcycle_fwd = mcycle + 1;
    always_comb minstret_fwd = minstret + (mcountinhibit[2] ? 0 : in_instret);
    always_ff @(posedge clk) begin
        /* switch privilege level */
        if (ret[2])
            if (ret[1:0] == 2'b11) begin    // MRET
                level <= mstatus[12:11];    // level -> MPP
                mstatus[12:11] <= 0;        // MPP   -> U
                mstatus[3] <= mstatus[7];   // MIE   -> MPIE
                mstatus[7] <= 1;            // MPIE  -> 1
            end else if (ret[1:0] == 2'b01) begin   // SRET
                level <= {1'b0, mstatus[8]};        // level -> SPP
                mstatus[8] <= 0;                    // SPP   -> U
                mstatus[1] <= mstatus[5];           // SIE   -> SPIE
                mstatus[5] <= 1;                    // SPIE  -> 1
            end else if (ret[1:0] == 2'b00) begin       // URET
                level <= 0;                             // level -> UPP
                mstatus[0] <= mstatus[4];               // UIE   -> UPIE
                mstatus[4] <= 1;                        // UPIE  -> 1
            end
        if (ein)
            if (trapintos) begin
                level <= 2'b01; // trap into S mode
                sepc <= epc;
                stval <= tval;
                scause <= cause;
                mstatus[8] <= level[0];   // SPP -> level
                mstatus[5] <= mstatus[1]; // SPIE -> SIE
                mstatus[1] <= 0;          // SIE -> 0
            end else begin
                level <= 2'b11; // trap into M mode
                mepc <= epc;
                mtval <= tval;
                mcause <= cause;
                mstatus[12:11] <= level;  // MPP -> level
                mstatus[7] <= mstatus[3]; // MPIE -> MIE
                mstatus[3] <= 0;          // MIE -> 0
            end
        if (rst) level <= 2'b11; // M mode on reset

        /* M-level CSR */
        if (rst) misa <= {2'h2, 36'h0, 26'b00_0001_0100_0001_0001_0010_1101};
        /* implemented extension:                U  S      M    I   F  DC A *\
        \*                                 ZY XWVU TSRQ PONM LKJI HGFE DCBA */
        if (rst) mvendorid <= 0; if (rst) marchid <= 0;
        if (rst) mimpid    <= 0; if (rst) mhartid <= 0;
        if (rst) mstatus <= {32'ha, 19'h1, 13'h0};
        else if (we & (addr == 12'h300 | addr == 12'h100)) begin // `sstatus` shared with `mstatus`
            mstatus <= wres;
            mstatus[35:32] <= 4'b1010;                                  // SXL/UXL
            mstatus[63] <= wres[16:15] == 2'b11 | wres[14:13] == 2'b11; // SD bit
            {mstatus[62:36], mstatus[31:23]} <= 0;
            {mstatus[10:9], mstatus[6], mstatus[2]} <= 0;
        end
        if (rst) mtvec <= 0; else if (we & addr == 12'h305) begin
            mtvec <= wres; mtvec[1:0] <= 0; end // not support vectored `mtvec`
        if (rst) medeleg <= 0; else if (we & addr == 12'h302) begin
            medeleg <= wres; medeleg[11] <= 0; end
        if (rst) mideleg <= 0; else if (we & addr == 12'h303) mideleg <= wres;
        if (rst) mip_base <= 0; else if (we & (addr == 12'h344 | addr == 12'h144)) // `sip` shared with `mip`
            mip_base <= wres;
        if (rst) mie <= 0; else if (we & (addr == 12'h304 | addr == 12'h104)) begin // `sie` shared with `mie`
            mie <= wres; mie[63:12] <= 0; mie[10] <= 0; mie[6] <= 0; mie[2] <= 0; end
        if (rst) mcycle   <= 0; else if (we & addr == 12'hb00) mcycle   <= wres; else mcycle   <= mcycle_fwd;
        if (rst) minstret <= 0; else if (we & addr == 12'hb02) minstret <= wres; else minstret <= minstret_fwd;
        for (int i = 3; i < 32; i++) if (rst) mhpmcounter[i] <= 0;
        for (int i = 3; i < 32; i++) if (rst) mhpmevent[i] <= 0;
        if (we & addr > 12'hb02 & addr < 12'hb20) mhpmcounter[addr[4:0]] <= wres;
        if (we & addr > 12'h322 & addr < 12'h340) mhpmevent[addr[4:0]] <= wres;
        if (rst) mcounteren <= 0; else if (we & addr == 12'h306) mcounteren <= wres;
        if (rst) mcountinhibit <= 0;
        else if (we & addr == 12'h320) mcountinhibit <= wres;
        if (rst) mscratch <= 0; else if (we & addr == 12'h340) mscratch <= wres;
        if (rst) mepc <= 0; else if (we & addr == 12'h341) mepc <= wres;
        if (rst) mcause <= 0; else if (we & addr == 12'h342) mcause <= wres;
        if (rst) mtval <= 0; else if (we & addr == 12'h343) mtval <= wres;
        // S-level CSR
        if (rst) stvec <= 0; else if (we & addr == 12'h105) begin
            stvec <= wres; stvec[1:0] <= 0; end
        if (rst) scounteren <= 0; else if (we & addr == 12'h106) scounteren <= wres;
        if (rst) sscratch <= 0; else if (we & addr == 12'h140) sscratch <= wres;
        if (rst) sepc <= 0; else if (we & addr == 12'h141) sepc <= wres;
        if (rst) scause <= 0; else if (we & addr == 12'h142) scause <= wres;
        if (rst) stval <= 0; else if (we & addr == 12'h143) stval <= wres;
        if (rst) satp <= 0; else if (we & addr == 12'h180) satp <= wres;
        if (we & addr == 12'h005) utvec <= wres;
    end
    always_comb mip = in_ip    & 64'b1010_1000_1000 | // MEIP/SEIP/MTIP/MSIP from external
                      mip_base & 64'b0001_0011_0011;
    always_comb begin
        intg = 0;
        intl = 0;
        /* an interrupt is generated when related `mip` and `mie` bit is set,
           and interrupt is globally enabled */
        for (int i = 0; i < 12; i++) if (mip[i] & mie[i]) begin
            intl = 1;
            if (~mideleg[i] & (level < 3 | level == 3 & mstatus[3]) |
                 mideleg[i] & (level < 1 | level == 1 & mstatus[1])) // globally enabled
                intg = {1'b1, 6'(i)};
        end
    end
    /* some CSRs change can cause pipeline flush */
    always_comb flush = we & (addr == 12'h300 | addr == 12'h100 | // [m|s]status
                              addr == 12'h180 |                   // satp
                              addr == 12'h305 | addr == 12'h105); // mtvec
    always_comb out_status = mstatus;
    always_comb out_tvec   = trapintos ? stvec : mtvec;
    always_comb out_mepc   = mepc;
    always_comb out_sepc   = sepc;
    always_comb out_isatp  = level == 2'b11 ? 64'd0 : satp;                     // M level disables address translation
    always_comb out_dsatp  = mstatus[17] & ~&mstatus[12:11] ? satp : out_isatp; // MRPV bit in mstatus
endmodule
