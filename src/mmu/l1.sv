/**
 * l1.sv:
 *   This file includes an implementation of level-1 memory
 *   composed of SRAM cache and TLB. The module also converts
 *   native interface to AXI. Beyond-block fetch and unaligned
 *   load/store are not supported.
 */

module l1 #(
    parameter init   = 1,           // initialize RAM
    parameter ishrsz = 8,           // size of ISHR
    parameter dshrsz = 4,           // size of DSHR
    parameter memwd  = 2,           // memory access width
    parameter tohost = 64'h0,       // bypassed tohost address
    parameter frhost = 64'h0,       // bypassed fromhost address
    parameter dcbase = 64'h80000000 // base address of cacheable memory
)(
    input  logic clk,
    input  logic rst,
    /* native interface with pipeline */
    /* global channel */
    input  logic                   s_global_fnci, // fence.i committed
    input  logic                   s_global_fncv, // sfence.vma committed
    /* synchronization channel */
    input  logic                   s_synchr_rqst, // synchronize cache lines
    input  logic                   s_synchr_invl, // invalidate cache lines
    output logic                   s_synchr_done, // synchronization finished signal
    /* instruction cache channel */
    input  logic            [63:0] s_icache_satp, // CSR SATP for instruction fetch
    input  logic             [7:0] s_icache_rqst, // ICACHE request ID
    input  logic                   s_icache_flsh, // ICACHE buffer flush signal
    input  logic            [63:0] s_icache_addr, // ICACHE address
    output logic             [7:0] s_icache_done, // ICACHE done signal
    output logic                   s_icache_pgft, // ICACHE page fault
    output logic            [63:0] s_icache_data, // ICACHE read data
    /* data cache channel */
    input  logic            [63:0] s_dcache_satp, // CSR SATP for data access
    input  logic                   s_dcache_flsh, // DCACHE flush signal
    input  logic             [7:0] s_dcache_cfrm, // DCACHE store confirmation ID
    input  logic [memwd-1:0] [7:0] s_dcache_rqst, // DCACHE request ID
    input  logic [memwd-1:0]       s_dcache_fnce, // fence committed
    input  logic [memwd-1:0] [1:0] s_dcache_aqrl, // DCACHE acquire/release access
    input  logic [memwd-1:0] [1:0] s_dcache_rsrv, // DCACHE reservation bits
    input  logic [memwd-1:0] [2:0] s_dcache_bits, // DCACHE functional bits
    input  logic [memwd-1:0]       s_dcache_wena, // DCACHE write enable signal
    input  logic [memwd-1:0][63:0] s_dcache_addr, // DCACHE address
    input  logic [memwd-1:0][63:0] s_dcache_wdat, // DCACHE write data
    output logic [memwd-1:0] [7:0] s_dcache_done, // DCACHE response ID
    output logic [memwd-1:0] [7:0] s_dcache_excp, // DCACHE page fault bits
    output logic [memwd-1:0][63:0] s_dcache_rdat, // DCACHE read data
    /* AXI interface */
    /* write address channel */
    output logic  [7:0] m_axi_awid,
    output logic [63:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awlock,
    output logic  [3:0] m_axi_awcache,
    output logic  [2:0] m_axi_awprot,
    output logic  [3:0] m_axi_awqos,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    /* write data channel */
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    /* write response channel */
    input  logic  [7:0] m_axi_bid,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    /* read address channel */
    output logic  [7:0] m_axi_arid,
    output logic [63:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arlock,
    output logic  [3:0] m_axi_arcache,
    output logic  [2:0] m_axi_arprot,
    output logic  [3:0] m_axi_arqos,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    /* read data channel */
    input  logic  [7:0] m_axi_rid,
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready
);
    /*----------------------------------------------------------------*\
    |     L1 memory structure:                                         |
    |       SHR (status holding register):                             |
    |         structure to buffer requests and hold status             |
    |       cache:                                                     |
    |         register array to store data                             |
    |       TLB (translation lookaside buffer):                        |
    |         register array to store physical addresses               |
    \*----------------------------------------------------------------*/


    /*----------------------------------------------------------------*\
    |                           Global Info                            |
    \*----------------------------------------------------------------*/

    /* memory parameters */
    localparam itway = 16;                         // way number of ITLB
    localparam dtway = 16;                         // way number of DTLB
    localparam stset =  64, stway = 4;             // parameters of STLB
    localparam icset = 128, icway = 4, icblk = 64; // parameters of ICACHE
    localparam dcset =  64, dcway = 8, dcblk = 64; // parameters of DCACHE
    /* communication signals between modules */
    logic  [7:0] itlb_done;          // request ID       of ITLB translation result, ITLB -> ISHR
    logic [64:0] itlb_padd;          // physical address of ITLB translation result
    logic  [7:0] dtlb_done;          // request ID       of DTLB translation result, DTLB -> DSHR
    logic [64:0] dtlb_padd;          // physical address of DTLB translation result
    logic        dtlb_bypc;          // cache bypassing  of DTLB translation result
    logic  [1:0] stlb_done;          // request ID       of STLB translation result, STLB -> [0]ITLB/[1]DTLB
    logic [52:0] stlb_padd;          // physical address of STLB translation result
    logic  [7:0] stlb_perm;          // permission       of STLB translation result
    logic            [9:0] dc_done;  // request ID      of DCACHE access result, DCACHE -> [9]ICACHE/[8]TLB/DSHR
    logic           [63:0] dc_padd;  // address         of DCACHE access result
    logic            [2:0] dc_bits;  // functional bits of DCACHE access result
    logic                  dc_wena;  // write enable    of DCACHE access result
    logic                  dc_miss;  // miss bit        of DCACHE access result
    logic [dcblk-1:0][7:0] dc_data;  // DCACHE data     of DCACHE access result
    logic           [63:0] dc_rdat;  // read data       of DCACHE access result requested from DSHR
    logic            [9:0] axi_done; // AXI response, AXI port -> DCACHE
    logic [dcblk-1:0][7:0] axi_data; // data of AXI response
    logic                  axi_dcr;  // DCACHE read access bit from AXI
    logic                  axi_dcw;  // DCACHE write access bit from AXI
    logic           [63:0] axi_dca;  // DCACHE access address from AXI
    logic iset_miss, ptw_miss;       // miss status of DCACHE from ICACHE and STLB
    logic stlb_itlb, stlb_dtlb;      // STLB accessing on ITLB/DTLB
    logic synchr_pend;               // synchronization pending


    /*----------------------------------------------------------------*\
    |                  Instruction Memory Structures                   |
    \*----------------------------------------------------------------*/

    /* ISHR */
    logic  [7:0] ishr_rqst[ishrsz-1:0];                   // request IDs
    logic [63:0] ishr_vadd[ishrsz-1:0];                   // virtual addresses
    logic [64:0] ishr_padd[ishrsz-1:0];                   // physical addresses, MSB is pagefault bit
    logic  [7:0] ishr_tptr_rqst;                          // request ID      of translation pointer
    logic [63:0] ishr_tptr_vadd;                          // virtual address of translation pointer
    logic  [7:0] ishr_cptr_rqst;                          // request ID       of cache access pointer
    logic [64:0] ishr_cptr_padd;                          // physical address of cache access pointer
    logic [$clog2(ishrsz)-1:0] ishr_wptr, ishr_wptr_next; // writing pointer
    logic [$clog2(ishrsz)-1:0] ishr_tptr, ishr_tptr_next; // untranslated pointer
    logic [$clog2(ishrsz)-1:0] ishr_cptr, ishr_cptr_next; // access-unhandled pointer
    /* the pointers are redundant with numbers provided */
    logic   [$clog2(ishrsz):0] ishr_tnum, ishr_tnum_next; // number of untranslated entries (from tptr)
    logic   [$clog2(ishrsz):0] ishr_cnum, ishr_cnum_next; // number of unaccessed entries   (from cptr)
    always_comb ishr_wptr_next = ishr_wptr + (s_icache_rqst[7] ? 1 : 0);
    always_comb ishr_tptr_next = ishr_tptr + (    itlb_done[7] ? 1 : 0);
    always_comb ishr_cptr_next = ishr_cptr + (s_icache_done[7] ? 1 : 0);
    always_comb begin
        {ishr_tptr_rqst, ishr_tptr_vadd} = {ishr_rqst[ishr_tptr_next], ishr_vadd[ishr_tptr_next]};
        {ishr_cptr_rqst, ishr_cptr_padd} = {ishr_rqst[ishr_cptr_next], ishr_padd[ishr_cptr_next]};
        if (ishr_tnum == (    itlb_done[7] ? 1 : 0)) ishr_tptr_rqst = 0; // all translated
        if (ishr_cnum == (s_icache_done[7] ? 1 : 0)) ishr_cptr_rqst = 0; // all accessed
        if (s_icache_rqst[7] & ishr_wptr == ishr_tptr_next)
            {ishr_tptr_rqst, ishr_tptr_vadd} = {s_icache_rqst, s_icache_addr};
        if (itlb_done[7] & ishr_tptr == ishr_cptr_next)
            {ishr_cptr_rqst, ishr_cptr_padd} = {itlb_done, itlb_padd};
        if (rst | s_icache_flsh) {ishr_tptr_rqst, ishr_cptr_rqst} = 0;
    end
    always_comb ishr_tnum_next = ishr_tnum + (s_icache_rqst[7] ? 1 : 0) - (itlb_done[7] ? 1 : 0);
    always_comb ishr_cnum_next = ishr_cnum + (s_icache_rqst[7] ? 1 : 0) - (s_icache_done[7] ? 1 : 0);
    always_ff @(posedge clk) if (rst | s_icache_flsh) ishr_wptr <= 0; else ishr_wptr <= ishr_wptr_next;
    always_ff @(posedge clk) if (rst | s_icache_flsh) ishr_tptr <= 0; else ishr_tptr <= ishr_tptr_next;
    always_ff @(posedge clk) if (rst | s_icache_flsh) ishr_cptr <= 0; else ishr_cptr <= ishr_cptr_next;
    always_ff @(posedge clk) if (rst | s_icache_flsh) ishr_tnum <= 0; else ishr_tnum <= ishr_tnum_next;
    always_ff @(posedge clk) if (rst | s_icache_flsh) ishr_cnum <= 0; else ishr_cnum <= ishr_cnum_next;
    always_ff @(posedge clk) begin
        if (s_icache_done[7]) ishr_rqst[ishr_cptr] <= 0;
        if (s_icache_rqst[7]) ishr_rqst[ishr_wptr] <= s_icache_rqst;
    end
    always_ff @(posedge clk) if (s_icache_rqst[7]) ishr_vadd[ishr_wptr] <= s_icache_addr;
    always_ff @(posedge clk) if     (itlb_done[7]) ishr_padd[ishr_tptr] <= itlb_padd;

    /* ITLB */
    logic [51:0] itlb_va[itway-1:0], itlb_pa[itway-1:0]; // virtual and physical addresses in ITLB entries
    logic [15:0] itlb_asid[itway-1:0];                   // address space ID of ITLB entry
    logic  [7:0] itlb_perm[itway-1:0];                   // ITLB PTE permission
    logic [itway-1:0] itlb_valid;                        // ITLB valid bits
    logic [$clog2(itway)-1:0] itlb_ptr;                  // pointer in FIFO replacement policy
    logic  [7:0] itlb_rqst;                              // ITLB hit request
    logic [11:0] itlb_offset;                            // ITLB hit offset
    logic [52:0] itlb_hitpa;                             // ITLB hit physical address, MSB is hit bit
    always_ff @(posedge clk) if (rst | s_global_fncv | s_icache_flsh) itlb_rqst <= 0;
        else begin
            itlb_rqst   <= ishr_tptr_rqst; // the source holds before being done
            itlb_offset <= ishr_tptr_vadd[11:0];
            itlb_hitpa  <= 0;
            for (int i = 0; i < itway; i++)
                if (itlb_valid[i] & itlb_va[i] == ishr_tptr_vadd[63:12] & itlb_asid[i] == s_icache_satp[59:44]) begin
                    itlb_hitpa <= {1'b1, itlb_pa[i]};
                    if (~itlb_perm[i][3] | ~itlb_perm[i][6]) itlb_hitpa <= 0;
                    else break;
                end
            if (~|s_icache_satp[63:60]) itlb_hitpa <= {1'b1, ishr_tptr_vadd[63:12]}; // bare
        end
    always_ff @(posedge clk) if (rst | s_global_fncv | s_synchr_invl) {itlb_ptr, itlb_valid} <= 0;
        else if (itlb_rqst[7] & ~itlb_done[7])       // ITLB miss
            if (stlb_done[0] & ~stlb_padd[52]) begin // ITLB fill
                itlb_valid[itlb_ptr] <= 1;
                itlb_va   [itlb_ptr] <= ishr_tptr_vadd[63:12];
                itlb_asid [itlb_ptr] <= sset_satp[59:44];
                itlb_pa   [itlb_ptr] <= stlb_padd[51:0];
                itlb_perm [itlb_ptr] <= stlb_perm;
                itlb_ptr <= itlb_ptr + 1;
            end
    always_comb itlb_done = |ishr_tnum & (itlb_hitpa[52] | stlb_done[0] & stlb_padd[52]) ? itlb_rqst : 0;
    always_comb itlb_padd = {stlb_done[0] & stlb_padd[52], itlb_hitpa[51:0], itlb_offset};

    /* ICACHE */
    logic    [icway*icblk*8-1:0] icache_dat[icset-1:0];   // cache data
    logic         [icway*64-1:0] icache_tag[icset-1:0];   // cache tag of each block
    logic [icset-1:0][icway-1:0] icache_valid;            // cache flags of each block
    logic    [$clog2(icway)-1:0] icache_ptr[icset-1:0];   // pointers in FIFO replacement policy
    logic                       [7:0] iset_rqst;          // request ID of input address
    logic                      [64:0] iset_padd;          // requested physical address, MSB is page fault bit
    logic         [$clog2(icset)-1:0] iset_index;         // index of input address
    logic [icway-1:0][icblk-1:0][7:0] iset_dat, irep_dat; // data in related set of ICACHE
    logic [icway-1:0]          [63:0] iset_tag, irep_tag; // tags in related set of ICACHE
    logic         [$clog2(icway)-1:0] iset_ptr;           // current pointer in related set
    logic [icway-1:0]                 iset_valid;         // valid bits in related set
    logic [icway-1:0]                 iset_hit;           // hit bits in related set
    logic           [$clog2(icway):0] iset_hitpos;        // hit position in related set
    logic            [icblk-1:0][7:0] iset_hitdat;        // hit data in related set
    always_comb begin
        irep_tag = iset_tag;
        irep_dat = iset_dat;
        irep_tag[iset_ptr] = iset_padd[63:0] >> $clog2(icblk);
        if (~dc_miss & dc_done[9]) irep_dat[iset_ptr] =  dc_data[icblk-1:0];
        else if (axi_done[9])      irep_dat[iset_ptr] = axi_data[icblk-1:0];
    end
    always_comb iset_index = $clog2(icset)'(ishr_cptr_padd[63:0] >> $clog2(icblk));
    always_ff @(posedge clk) if (rst | s_global_fnci | s_synchr_invl) {iset_miss, icache_valid} <= 0;
        else if (s_icache_flsh) iset_miss <= 0;
        else if (iset_rqst[7] & ~s_icache_done[7])         // ICACHE miss
            if (~dc_miss & dc_done[9] | axi_done[9]) begin // ICACHE fill
                iset_miss                          <= 0;
                icache_valid[iset_index][iset_ptr] <= 1;
                icache_dat  [iset_index]           <= irep_dat;
                icache_tag  [iset_index]           <= irep_tag;
                icache_ptr  [iset_index]           <= iset_ptr + 1;
            end else if (dc_done[9] & dc_miss) iset_miss <= 1;
    always_ff @(posedge clk) if (rst | s_icache_flsh) iset_rqst <= 0;
        else if (ishr_cnum_next != ishr_tnum_next)    iset_rqst <= ishr_cptr_rqst;
        else if (s_icache_done[7])                    iset_rqst <= 0;
    always_ff @(posedge clk) iset_padd  <= ishr_cptr_padd;
    always_ff @(posedge clk) iset_dat   <= icache_dat  [iset_index];
    always_ff @(posedge clk) iset_tag   <= icache_tag  [iset_index];
    always_ff @(posedge clk) iset_ptr   <= icache_ptr  [iset_index];
    always_ff @(posedge clk) iset_valid <= icache_valid[iset_index];
    firstk #(.width(icway), .k(1)) ihit_pos_inst(.bits(iset_hit), .pos(iset_hitpos));
    always_comb for (int i = 0; i < icway; i++)
        iset_hit[i] = iset_valid[i] & iset_tag[i] == iset_padd[63:0] >> $clog2(icblk);
    always_comb iset_hitdat = iset_dat[$clog2(icway)'(iset_hitpos)];
    always_comb s_icache_done = iset_padd[64] | iset_hitpos[$clog2(icway)] ? iset_rqst : 0;
    always_comb s_icache_pgft = iset_padd[64];
    always_comb s_icache_data = iset_hitdat[$clog2(icblk)'(iset_padd)+7-:8];


    /*----------------------------------------------------------------*\
    |                      Data Memory Structures                      |
    \*----------------------------------------------------------------*/

    typedef struct packed {
        logic  [7:0] rqst; // request ID
        logic  [1:0] rsrv; // reservation bits
        logic  [1:0] aqrl; // [1]acquire/[0]release access
        logic        fnce; // fence instruction
        logic  [2:0] bits; // functional bits
        logic [64:0] vadd; // virtual address, MSB is translated bit
        logic [64:0] padd; // physical address, MSB is page fault bit
        logic [64:0] wdat; // write data, MSB is write enable bit
        logic [63:0] rdat; // read data
        logic        hit;  // hit signal
        logic  [7:0] miss; // miss ID, which is first missed entry position
        logic        cfrm; // confirmation for write
        logic        bypc; // bypassing cache
        logic        misa; // address misaligned
    } dshr_entry_t;

    /* DCACHE request packing */
    dshr_entry_t [memwd-1:0]  dreqs;
    logic [$clog2(memwd)-1:0] dreqs_num;
    always_comb begin
        dreqs_num = 0;
        dreqs = 0;
        for (int i = 0; i < memwd; i++) if (s_dcache_rqst[i][7]) begin
            dreqs[dreqs_num].rqst = s_dcache_rqst[i];
            dreqs[dreqs_num].aqrl = s_dcache_aqrl[i];
            dreqs[dreqs_num].fnce = s_dcache_fnce[i];
            dreqs[dreqs_num].rsrv = s_dcache_rsrv[i];
            dreqs[dreqs_num].bits = s_dcache_bits[i];
            dreqs[dreqs_num].vadd = {s_dcache_fnce[i], s_dcache_addr[i]};
            dreqs[dreqs_num].wdat = {s_dcache_wena[i], s_dcache_wdat[i]};
            dreqs[dreqs_num].cfrm = ~s_dcache_wena[i] | s_dcache_fnce[i];
            dreqs[dreqs_num].hit  = s_dcache_fnce[i];
            dreqs[dreqs_num].misa = s_dcache_bits[i][1:0] == 2'b01 & |s_dcache_addr[i][0:0] |
                                    s_dcache_bits[i][1:0] == 2'b10 & |s_dcache_addr[i][1:0] |
                                    s_dcache_bits[i][1:0] == 2'b11 & |s_dcache_addr[i][2:0];
            dreqs_num++;
        end
    end

    /* DSHR */
    dshr_entry_t  [dshrsz-1:0] dshr, dshr_next;  // DSHR entries
    logic         [dshrsz-1:0] dshr_outmask;     // DSHR out bit
    logic   [$clog2(dshrsz):0] dshr_o0, dshr_o1; // DSHR output number
    logic    [$clog2(memwd):0] dreqs_index;      // request index for input
    logic  [7:0] dshr_tptr_rqst;                 // request ID at translation pointer
    logic [63:0] dshr_tptr_vadd;                 // virtual address at translation pointer
    logic        dshr_tptr_wena;                 // write enable bit at translation pointer
    logic  [9:0] dshr_cptr_rqst;                 // request ID at cache access pointer
    logic [63:0] dshr_cptr_padd;                 // physical address at cache access pointer
    logic  [2:0] dshr_cptr_bits;                 // request functional bits at cache access pointer
    logic  [1:0] dshr_cptr_rsrv;                 // request reservation at cache access pointer
    logic [64:0] dshr_cptr_wdat;                 // write data at cache access pointer
    logic        dshr_cptr_excp;                 // exception at cache access pointer
    logic        dshr_cptr_bypc;                 // signal of bypassing cache request
    logic  [9:0] dshr_mptr_rqst;                 // request ID at missed entry pointer
    logic [63:0] dshr_mptr_padd;                 // physical address at missed entry pointer
    logic [64:0] dshr_fwd;                       // forwarding data, MSB is valid bit
    logic  [7:0] dshr_mum;                       // miss-under-miss signal
    logic        dshr_ovlp, dshr_ovlp_i;         // address overlapping
    logic        dshr_prec_i;                    // precedence in DSHR
    always_comb begin
        /* calculate next dshr registers */
        dshr_next = dshr;
        for (int i = 0; i < dshrsz; i++) begin
            if (dtlb_done[7] & dshr_next[i].rqst == dtlb_done) begin
                dshr_next[i].vadd[64] = 1;
                dshr_next[i].padd     = dtlb_padd;
                dshr_next[i].bypc     = dtlb_bypc;
                dshr_next[i].hit      = 0;
                dshr_next[i].miss     = 0;
            end
            if (dshr_next[i].rqst == dc_done[7:0]) begin
                dshr_next[i].miss = dshr_fwd[64] ? 0 : dshr_mum;
                dshr_next[i].hit  = dshr_fwd[64] ? 1'b1 : ~dc_miss;
                dshr_next[i].rdat = dshr_fwd[64] ? dshr_fwd[63:0] : dc_rdat;
                if (dshr_ovlp & ~dshr_fwd[64]) {dshr_next[i].hit, dshr_next[i].aqrl[0]} = 1;
            end
            if (dshr_next[i].miss == axi_done[7:0])
                dshr_next[i].miss = 0;
            if (dshr_next[i].bypc & dshr_next[i].rqst == axi_done[7:0]) begin
                dshr_next[i].hit  = 1;
                dshr_next[i].bypc = 0;
                dshr_next[i].rdat = axi_data[7:0];
            end
        end
        if (dshr[0].rqst == s_dcache_cfrm & ~dshr[0].bypc) dshr_next[0].hit = 0;
        if (dshr[0].rqst == s_dcache_cfrm) dshr_next[0].cfrm = 1;
        dshr_o0 = 0;
        dreqs_index = 0;
        for (int i = 0; i < dshrsz; i++)
            for (int j = 0; j <= memwd; j++) if (j == 32'(dshr_o0)) begin
                if (i + j < dshrsz & dshr_outmask[i + j]) dshr_o0++;
                dshr_next[i] = i + j < dshrsz ? dshr_next[i + j] : 0;
                if (~dshr_next[i].rqst[7] & 32'(dreqs_index) < memwd & dreqs[dreqs_index].rqst[7]) begin
                    dshr_next[i] = dreqs[dreqs_index]; // vacant position and valid input
                    dreqs_index++;
                end
            end
    end
    always_comb begin
        dshr_mum    = dc_miss ? dc_done[7:0] : 0;
        dshr_fwd    = 0;
        dshr_ovlp   = 0;
        dshr_ovlp_i = 0;
        dshr_prec_i = 1;
        for (int i = 0; i < dshrsz; i++) if (dc_done[7])
            if (dshr[i].padd[63:$clog2(dcblk)] == dc_padd[63:$clog2(dcblk)]) begin
                /* in same cache block */
                if (dshr[i].rqst == dc_done[7:0]) dshr_prec_i = 0; // reach current request
                else if (dshr[i].miss[7]) dshr_mum = dshr[i].miss;
                if (~dshr_prec_i) continue;
                /* miss-under-miss situation is judged for all entries,
                   while overlap and forwarding is for all previous entries */
                case (dshr[i].bits[1:0] > dc_bits[1:0] ? dshr[i].bits[1:0] : dc_bits[1:0])
                    2'b00: dshr_ovlp_i = dshr[i].padd[$clog2(dcblk):0] == dc_padd[$clog2(dcblk):0];
                    2'b01: dshr_ovlp_i = dshr[i].padd[$clog2(dcblk):1] == dc_padd[$clog2(dcblk):1];
                    2'b10: dshr_ovlp_i = dshr[i].padd[$clog2(dcblk):2] == dc_padd[$clog2(dcblk):2];
                    2'b11: dshr_ovlp_i = dshr[i].padd[$clog2(dcblk):3] == dc_padd[$clog2(dcblk):3];
                endcase
                if (dshr_ovlp_i) dshr_ovlp = 1;
                if (dshr_ovlp_i) dshr_fwd  = 0;
                if (dshr_ovlp_i & ~dc_wena & dshr[i].wdat[64] & ~dshr[i].rsrv[0]) // load after store
                    if (dc_bits[1:0] <= dshr[i].bits[1:0]) begin
                        dshr_fwd[64] = 1;
                        dshr_fwd[63:0] = dshr[i].wdat[63:0] >> ((32'(dshr[i].padd[3:0]) ^ 32'(dc_padd[3:0])) << 3);
                        case (dc_bits)
                            3'b000: dshr_fwd[63:0] = {{56{dshr_fwd [7]}}, dshr_fwd [7:0]};
                            3'b100: dshr_fwd[63:0] = {             56'd0, dshr_fwd [7:0]};
                            3'b001: dshr_fwd[63:0] = {{48{dshr_fwd[15]}}, dshr_fwd[15:0]};
                            3'b101: dshr_fwd[63:0] = {             48'd0, dshr_fwd[15:0]};
                            3'b010: dshr_fwd[63:0] = {{32{dshr_fwd[31]}}, dshr_fwd[31:0]};
                            3'b110: dshr_fwd[63:0] = {             32'd0, dshr_fwd[31:0]};
                            default: dshr_fwd = dshr_fwd;
                        endcase
                    end
            end
        /* todo: add RVWMO check */
    end
    always_ff @(posedge clk) if (rst | s_dcache_flsh) dshr <= 0; else dshr <= dshr_next;

    /* DTLB */
    logic [51:0] dtlb_va[dtway-1:0], dtlb_pa[dtway-1:0]; // virtual and physical addresses in DTLB entries
    logic [15:0] dtlb_asid[dtway-1:0];                   // address space ID of DTLB entry
    logic  [7:0] dtlb_perm[itway-1:0];                   // DTLB PTE permission
    logic [dtway-1:0] dtlb_valid;                        // DTLB valid bits
    logic [$clog2(dtway)-1:0] dtlb_ptr;                  // pointer in FIFO replacement policy
    logic  [7:0] dtlb_rqst;                              // DTLB hit request
    logic [11:0] dtlb_offset;                            // DTLB hit offset
    logic [52:0] dtlb_hitpa;                             // DTLB hit physical address, MSB is hit bit
    always_ff @(posedge clk) if (rst | s_global_fncv | s_dcache_flsh) dtlb_rqst <= 0;
        else begin
            dtlb_rqst   <= dshr_tptr_rqst; // the source holds before being done
            dtlb_offset <= dshr_tptr_vadd[11:0];
            dtlb_hitpa  <= 0;
            for (int i = 0; i < dtway; i++)
                if (dtlb_valid[i] & dtlb_va[i] == dshr_tptr_vadd[63:12] & dtlb_asid[i] == s_dcache_satp[59:44]) begin
                    dtlb_hitpa <= {1'b1, dtlb_pa[i]};
                    if (~dtlb_perm[i][6] | dshr_tptr_wena & ~dtlb_perm[i][7]) dtlb_hitpa <= 0;
                    if (~dtlb_perm[i][1] | dshr_tptr_wena & ~dtlb_perm[i][2]) dtlb_hitpa <= 0;
                    else break;
                end
            if (~|s_dcache_satp[63:60]) dtlb_hitpa <= {1'b1, dshr_tptr_vadd[63:12]}; // bare
        end
    always_ff @(posedge clk)
        if (rst | s_global_fncv | s_synchr_invl) {dtlb_ptr, dtlb_valid} <= 0;
        else if (dtlb_rqst[7] & ~dtlb_done[7])       // DTLB miss
            if (stlb_done[1] & ~stlb_padd[52]) begin // DTLB fill
                dtlb_valid[dtlb_ptr] <= 1;
                dtlb_va   [dtlb_ptr] <= dshr_tptr_vadd[63:12];
                dtlb_asid [dtlb_ptr] <= sset_satp[59:44];
                dtlb_pa   [dtlb_ptr] <= stlb_padd[51:0];
                dtlb_perm [dtlb_ptr] <= stlb_perm;
                dtlb_ptr <= dtlb_ptr + 1;
            end
    always_comb dtlb_done = dtlb_hitpa[52] | stlb_done[1] & stlb_padd[52] ? dtlb_rqst : 0;
    always_comb dtlb_padd = {stlb_done[1] & stlb_padd[52], dtlb_hitpa[51:0], dtlb_offset};
    always_comb dtlb_bypc = ~dtlb_padd[64] & dtlb_padd[63:0] < dcbase |
        dtlb_padd[63:0] == tohost | dtlb_padd[63:0] == frhost;

    /* STLB */
    logic         [stway*52-1:0] stlb_dat[stset-1:0]; // cache data
    logic         [stway*68-1:0] stlb_tag[stset-1:0]; // cache tag of each block, [67:52]ASID/[51:0]PADDR
    logic          [stway*8-1:0] stlb_prm[stset-1:0]; // access permission of each block
    logic [stset-1:0][stway-1:0] stlb_valid;          // cache flags of each block
    logic    [$clog2(stway)-1:0] stlb_ptr[stset-1:0]; // pointers in FIFO replacement policy
    logic                  [1:0] sset_rqst;           // request ID of input address, [0]ITLB/[1]DTLB
    logic                 [51:0] sset_vadd;           // requested virtual address
    logic                 [63:0] sset_satp;           // CSR SATP for translation
    logic                  [7:0] sset_perm;           // requested permission
    logic      [stway-1:0][51:0] sset_dat, srep_dat;  // data in related set of STLB
    logic      [stway-1:0][67:0] sset_tag, srep_tag;  // tags in related set of STLB
    logic      [stway-1:0] [7:0] sset_prm, srep_prm;  // tags in related set of STLB
    logic    [$clog2(stway)-1:0] sset_ptr;            // current pointer in related set
    logic            [stway-1:0] sset_valid;          // valid bits in related set
    logic            [stway-1:0] sset_hit;            // hit bits in related set
    logic      [$clog2(stway):0] sset_hitpos;         // hit position in related set
    logic                        ptw_done;            // page table walk done
    logic                  [7:0] ptw_perm;            // page table walk result permission
    logic                 [52:0] ptw_padd;            // page table walk result, MSB is page fault bit
    logic                        stlb_flush;          // STLB request flush signal
    always_comb begin
        srep_tag = sset_tag;
        srep_dat = sset_dat;
        srep_prm = sset_prm;
        srep_tag[sset_ptr] = {sset_satp[59:44], sset_vadd};
        srep_dat[sset_ptr] = ptw_padd[51:0];
        srep_prm[sset_ptr] = ptw_perm;
    end
    always_comb {stlb_dtlb, stlb_itlb} = sset_rqst |
        {sset_rqst[1] | ~sset_rqst[0] & dtlb_rqst[7] & ~dtlb_done[7],
         sset_rqst[0] | ~sset_rqst[1] & itlb_rqst[7] & ~itlb_done[7]};
    always_comb stlb_flush = stlb_itlb & s_icache_flsh | stlb_dtlb & s_dcache_flsh;
    always_ff @(posedge clk) if (rst | s_global_fncv | s_synchr_invl) stlb_valid <= 0;
        else if (|sset_rqst & ~|stlb_done)      // STLB miss
            if (ptw_done & ~ptw_padd[52]) begin // STLB fill
                stlb_valid[$clog2(stset)'(sset_vadd)][sset_ptr] <= 1;
                stlb_dat  [$clog2(stset)'(sset_vadd)]           <= srep_dat;
                stlb_tag  [$clog2(stset)'(sset_vadd)]           <= srep_tag;
                stlb_prm  [$clog2(stset)'(sset_vadd)]           <= srep_prm;
                stlb_ptr  [$clog2(stset)'(sset_vadd)]           <= sset_ptr + 1;
            end
    always_ff @(posedge clk) if (rst | s_global_fncv | stlb_flush) sset_rqst <= 0;
        else if (|stlb_done) sset_rqst <= 0;
        else if (sset_rqst[1] | ~sset_rqst[0] & dtlb_rqst[7] & ~dtlb_done[7]) begin // DTLB miss
            sset_rqst  <= 2'b10;
            sset_satp  <= s_dcache_satp;
            sset_vadd  <= dshr_tptr_vadd[63:12];
            sset_perm  <= (8'd1 << 1) | (8'(dshr_tptr_wena) << 2); // read/write permission
            sset_dat   <= stlb_dat  [$clog2(stset)'(dshr_tptr_vadd[63:12])];
            sset_tag   <= stlb_tag  [$clog2(stset)'(dshr_tptr_vadd[63:12])];
            sset_prm   <= stlb_prm  [$clog2(stset)'(dshr_tptr_vadd[63:12])];
            sset_ptr   <= stlb_ptr  [$clog2(stset)'(dshr_tptr_vadd[63:12])];
            sset_valid <= stlb_valid[$clog2(stset)'(dshr_tptr_vadd[63:12])];
        end
        else if (sset_rqst[0] | ~sset_rqst[1] & itlb_rqst[7] & ~itlb_done[7]) begin // ITLB miss
            sset_rqst  <= 2'b01;
            sset_satp  <= s_icache_satp;
            sset_vadd  <= ishr_tptr_vadd[63:12];
            sset_perm  <= 1 << 3; // execution permission
            sset_dat   <= stlb_dat  [$clog2(stset)'(ishr_tptr_vadd[63:12])];
            sset_tag   <= stlb_tag  [$clog2(stset)'(ishr_tptr_vadd[63:12])];
            sset_prm   <= stlb_prm  [$clog2(stset)'(ishr_tptr_vadd[63:12])];
            sset_ptr   <= stlb_ptr  [$clog2(stset)'(ishr_tptr_vadd[63:12])];
            sset_valid <= stlb_valid[$clog2(stset)'(ishr_tptr_vadd[63:12])];
        end
    firstk #(.width(stway), .k(1)) shit_pos_inst(.bits(sset_hit), .pos(sset_hitpos));
    always_comb begin
        sset_hit = 0;
        for (int i = 0; i < stway; i++) if (sset_valid[i] & sset_tag[i] == {sset_satp[59:44], sset_vadd})
            if (sset_prm[i][6] & (~sset_perm[2] | sset_prm[i][7]) &            // A/D bit
                (sset_prm[i][3:0] | sset_perm[3:0]) == sset_prm[i][3:0]) begin // VRWX bit
                sset_hit[i] = 1;
                break;
            end
    end
    always_comb stlb_done = sset_hitpos[$clog2(stway)] | ptw_padd[52] ? sset_rqst : 0;
    always_comb stlb_padd = {ptw_padd[52], sset_dat[$clog2(stway)'(sset_hitpos)]};
    always_comb stlb_perm = sset_prm[$clog2(stway)'(sset_hitpos)];

    /* page table walk */
    logic        ptw_pf;   // page fault
    logic  [7:0] ptw_stt;  // state of page table walk
    logic  [2:0] ptw_num;  // page table walk number
    logic [63:0] ptw_add;  // page table walk address
    logic [4:0][8:0] vpn;  // virtual page numbers
    logic [43:0] ppn;      // physical page number
    logic [63:0] pte;      // physical page number and page table entry
    always_comb ptw_done = ptw_stt == 3;
    always_comb ptw_padd = {ptw_done & ptw_pf, 52'(ppn)};
    always_comb ptw_perm = pte[7:0];
    always_ff @(posedge clk) if (rst | s_global_fncv | stlb_flush) {ptw_miss, ptw_stt, ptw_num} <= 7;
        else if (|sset_rqst & ~|stlb_done)
            if (ptw_num > 4) begin
                ptw_pf  <= 0;
                ptw_stt <= 0;
                if      (sset_satp[63:60] == 4'd8)  ptw_num <= 2;
                else if (sset_satp[63:60] == 4'd9)  ptw_num <= 3;
                else if (sset_satp[63:60] == 4'd10) ptw_num <= 4;
                else begin ptw_pf <= 1; ptw_stt <= 3; end
                vpn <= sset_vadd[44:0];
                ppn <= sset_satp[43:0];
            end else case (ptw_stt)
                0: begin // setting address
                    ptw_add <= {8'd0, ppn, vpn[ptw_num], 3'd0};
                    ptw_stt <= 1;
                end
                1: // address set, waiting for response
                    if (dc_done[8] & dc_miss) ptw_miss <= 1;
                    else if (dc_done[8] | axi_done[8]) begin
                        ptw_stt  <= 2;
                        ptw_miss <= 0;
                        if (axi_done[8]) pte <= axi_data[$clog2(dcblk)'(ptw_add)+7-:8];
                        else             pte <=  dc_data[$clog2(dcblk)'(ptw_add)+7-:8];
                    end
                2: begin // response received, checking PTE
                    ppn <= pte[53:10];
                    ptw_stt <= ptw_num == 0 ? 3 : 0;
                    if (pte[1] | pte[3]) begin // leaf node
                        ptw_stt <= 3;
                        for (int i = 0; i < 4 & i < ptw_num; i++)
                            if (~|pte[i*9+18-:9]) ppn[i*9+8-:9] <= vpn[i];               // super page
                            else begin ptw_pf <= 1; ptw_stt <= 3; end                    // misaligned super page
                        if (~pte[6]) begin ptw_pf <= 1; ptw_stt <= 3; end                // access unaccessed page
                        if (~pte[7] & sset_perm[2]) begin ptw_pf <= 1; ptw_stt <= 3; end // write to clean page
                        if ((pte[3:0] | sset_perm[3:0]) != pte[3:0])                     // permission violation
                            begin ptw_pf <= 1; ptw_stt <= 3; end
                    end
                    if (~pte[0]) begin ptw_pf <= 1; ptw_stt <= 3; end // invalid bit
                    ptw_num <= ptw_num - 1;
                end
                3: ptw_stt <= 3; // page table walk done, waiting for TLB fill
            endcase
        else {ptw_miss, ptw_stt, ptw_num} <= 7;

    /* reservation set */
    logic [63:0] lr_addr;   // reservation address
    logic  [2:0] lr_size;   // reservation size, MSB is reserved bit
    logic sc_succ, sc_fail; // SC instruction succeeds or fails on accessing cache
    always_ff @(posedge clk) if (rst) lr_size <= 0;
        else if (s_dcache_done[0] == dshr[0].rqst & ~s_dcache_flsh)
            if (dshr[0].rsrv[0] & ~dshr[0].wdat[64]) begin // committing an LR instruction
                lr_addr <= dshr[0].padd[63:0];
                lr_size <= {1'b1, dshr[0].bits[1:0]};
            end else if (dshr[0].rsrv[0] & dshr[0].wdat[64]) // committing an SC instruction
                lr_size <= 0;

    /* DCACHE */
    logic    [dcway*dcblk*8-1:0] dcache_dat[dcset-1:0];   // cache data
    logic         [dcway*64-1:0] dcache_tag[dcset-1:0];   // cache tag of each block
    logic [dcset-1:0][dcway-1:0] dcache_valid;            // cache valid flag of each block
    logic [dcset-1:0][dcway-1:0] dcache_dirty;            // cache dirty flag of each block
    logic    [$clog2(dcway)-1:0] dcache_ptr[dcset-1:0];   // pointers in FIFO replacement policy
    logic                       [9:0] dset_rqst;          // request ID of input address
    logic                      [63:0] dset_padd;          // requested physical address
    logic                       [2:0] dset_bits;          // requested functional bits
    logic                             dset_excp;          // requested exception bit
    logic                      [64:0] dset_wdat;          // requested write data, MSB is enable bit
    logic         [$clog2(dcset)-1:0] dset_index;         // index of input address
    logic [dcway-1:0][dcblk-1:0][7:0] dset_dat, dnew_dat; // data in related set of DCACHE
    logic [dcway-1:0]          [63:0] dset_tag, dnew_tag; // tags in related set of DCACHE
    logic         [$clog2(dcway)-1:0] dset_ptr;           // current pointer in related set
    logic [dcway-1:0]                 dset_valid;         // valid bits in related set
    logic [dcway-1:0]                 dset_dirty;         // dirty bits in related set
    logic [dcway-1:0]                 dset_hit;           // hit bits in related set
    logic           [$clog2(dcway):0] dset_hitpos;        // hit position in related set
    logic            [dcblk-1:0][7:0] dset_hitrdat;       // hit data in related set
    logic            [dcblk-1:0][7:0] dset_hitmask;       // write mask in related set
    logic            [dcblk-1:0][7:0] dset_hitwdat;       // write data in related set
    always_comb begin
        /* find first untranslated entry in DSHR and incoming DCACHE requests */
        dshr_tptr_rqst = 0;
        dshr_tptr_vadd = 0;
        dshr_tptr_wena = 0;
        for (int i = 0; i < dshrsz; i++)
            if (dshr[i].rqst[7] & ~dshr[i].vadd[64] & dshr[i].rqst != dtlb_done) begin
                dshr_tptr_rqst = dshr[i].rqst; // first untranslated entry
                dshr_tptr_vadd = dshr[i].vadd[63:0];
                dshr_tptr_wena = dshr[i].wdat[64] | dshr[i].rsrv[1];
                break;
            end
        if (dshr_tptr_rqst == 0) // all entry translated
            for (int i = 0; i < memwd; i++) if (dreqs[i].rqst[7] & ~dreqs[i].vadd[64]) begin
                dshr_tptr_rqst = dreqs[i].rqst;
                dshr_tptr_vadd = dreqs[i].vadd[63:0];
                dshr_tptr_wena = dreqs[i].wdat[64] | dreqs[i].rsrv[1];
                break;
            end
    end
    always_comb begin
        /* find first translated but not accessed entry in DSHR and incoming DTLB results */
        dshr_cptr_rqst = 0;
        dshr_cptr_padd = 0;
        dshr_cptr_bits = 0;
        dshr_cptr_rsrv = 0;
        dshr_cptr_wdat = 0;
        dshr_cptr_excp = 0;
        dshr_cptr_bypc = 0;
        if (iset_rqst[7] & ~s_icache_done[7] & ~iset_miss & ~(iset_rqst[7] & dc_done[9])) begin
            dshr_cptr_rqst = {2'b10, 8'd0};
            dshr_cptr_padd = iset_padd[63:0];
        end else if (ptw_stt == 1 & ~ptw_miss & ~(|sset_rqst & dc_done[8])) begin
            dshr_cptr_rqst = {2'b01, 8'd0};
            dshr_cptr_padd = ptw_add;
        end
        /* DSHR has highest priority for its non-atomic cache operation (write after read) */
        for (int i = 0; i < dshrsz; i++)
            if (dshr[i].rqst[7] & ~dshr[i].hit & ~dshr[i].miss[7] &
                (dshr[i].vadd[64] | dshr[i].rqst == dtlb_done)) begin
                dshr_cptr_rqst = {2'b00, dshr[i].rqst};
                dshr_cptr_padd = dshr[i].vadd[64] ? dshr[i].padd[63:0] : dtlb_padd[63:0];
                dshr_cptr_bits = dshr[i].bits;
                dshr_cptr_rsrv = dshr[i].rsrv;
                dshr_cptr_bypc = dshr[i].vadd[64] ? dshr[i].bypc : dtlb_bypc;
                dshr_cptr_excp = dshr[i].misa | (dshr[i].vadd[64] ? dshr[i].padd[64] : dtlb_padd[64]);
                dshr_cptr_wdat = 0;
                if (i == 0 | i == 1 & dshr[0].rqst == s_dcache_done[0]) // front of DSHR
                    if (dshr[i].rqst == s_dcache_cfrm | dshr[i].cfrm) dshr_cptr_wdat = dshr[i].wdat;
                    else if (dshr_cptr_bypc) dshr_cptr_rqst = 0;
                    else dshr_cptr_wdat = 0;
                else if (dshr[i].rsrv[0]) // soft reservation changes memory status
                    dshr_cptr_rqst = 0;
                else if (dshr[i].aqrl[0]) // release access cannot be issued before previous requests
                    dshr_cptr_rqst = 0;
                else if (dshr_cptr_bypc)
                    dshr_cptr_rqst = 0;
                if (synchr_pend)    dshr_cptr_rqst = 0;
                if (dshr[i].rqst == dc_done[7:0]) dshr_cptr_rqst = 0;
                if (dshr_cptr_excp) dshr_cptr_wdat = 0;
                if (dshr[i].aqrl[1]) break; // acquire access suppress succeeding requests
                if (dshr_cptr_rqst != 0) break;
            end
    end
    always_comb begin
        /* find first accessed but missed entry in DSHR and incoming DCACHE results */
        dshr_mptr_rqst = 0;
        dshr_mptr_padd = 0;
        if (iset_miss) begin
            dshr_mptr_rqst = {2'b10, 8'd0};
            dshr_mptr_padd = iset_padd[63:0] >> $clog2(dcblk) << $clog2(dcblk);
        end else if (ptw_miss) begin
            dshr_mptr_rqst = {2'b01, 8'd0};
            dshr_mptr_padd = ptw_add >> $clog2(dcblk) << $clog2(dcblk);
        end
        for (int i = 0; i < dshrsz; i++) if (dshr[i].rqst[7])
            if (dshr[i].miss[7] | dshr[i].rqst == dc_done[7:0] & dc_miss) begin
                if (i == 0 | i == 1 & dshr[0].rqst == s_dcache_done[0])
                    dshr_mptr_rqst = {2'b00, dshr[i].miss};
                else dshr_mptr_rqst = 0;
                dshr_mptr_padd = dshr[i].padd[63:0] >> $clog2(dcblk) << $clog2(dcblk);
                if (dshr[i].miss == axi_done[7:0]) dshr_mptr_rqst = 0;
                if (dshr_mptr_rqst != 0) break;
            end
    end
    always_comb begin
        /* find first finished entry in DSHR and incoming DCACHE results */
        s_dcache_done = 0;
        s_dcache_excp = 0;
        s_dcache_rdat = 0;
        dshr_outmask  = 0;
        dshr_o1       = 0;
        for (int i = 0; i < dshrsz; i++)
            if (dshr[i].rqst[7] & dshr[i].cfrm &
                (dshr[i].hit | dshr[i].rqst == dc_done[7:0] & ~dshr_ovlp & ~dc_miss)) begin
                dshr_outmask[i] = 1;
                s_dcache_done[dshr_o1] = dshr[i].rqst;
                s_dcache_rdat[dshr_o1] = dshr[i].hit ? dshr[i].rdat : dc_rdat;
                if (dshr[i].misa)
                    s_dcache_excp[dshr_o1] = {2'b10, dshr[i].wdat[64] | dshr[i].rsrv[1] ? 6'd6 : 6'd4};
                if (dshr[i].padd[64]) // page fault
                    s_dcache_excp[dshr_o1] = {2'b10, dshr[i].wdat[64] | dshr[i].rsrv[1] ? 6'd15 : 6'd13};
                if (dshr[i].fnce) s_dcache_excp[dshr_o1] = 0;
                dshr_o1++;
                // if (dshr_o1 == memwd) break; // this would require handling `memwd` output forwarding
                if (dshr_o1 == 1) break;
            end
    end
    always_comb begin
        dnew_tag = dset_tag;
        dnew_dat = dset_dat;
        if (axi_dcw) dnew_tag[dset_ptr] = axi_dca >> $clog2(dcblk);
        if (axi_dcw) dnew_dat[dset_ptr] = axi_data;
        else dnew_dat[$clog2(dcway)'(dset_hitpos)] = dset_hitrdat & ~dset_hitmask | dset_hitwdat;
    end
    always_ff @(posedge clk) if (rst | s_synchr_invl) dcache_valid <= 0;
        else if (axi_dcw) begin
            dcache_valid[dset_index][dset_ptr] <= 1;
            dcache_dirty[dset_index][dset_ptr] <= 0;
            dcache_dat  [dset_index]           <= dnew_dat;
            dcache_tag  [dset_index]           <= dnew_tag;
            dcache_ptr  [dset_index]           <= dset_ptr + 1;
        end else if (~axi_dcr & dset_rqst[7] & dset_hitpos[$clog2(dcway)] & dset_wdat[64]) begin
            dcache_dirty[dset_index][$clog2(dcway)'(dset_hitpos)] <= 1;
            dcache_dat  [dset_index]                              <= dnew_dat;
        end
    always_comb dset_index  = $clog2(dcset)'((axi_dcr | axi_dcw ? axi_dca : dshr_cptr_padd) >> $clog2(dcblk));
    always_ff @(posedge clk) if (rst | axi_dcr | axi_dcw | s_dcache_flsh | s_synchr_invl) dset_rqst <= 0;
        else if (~|dset_rqst[9:7] | |dc_done[9:7]) begin
            dset_rqst <= dshr_cptr_bypc ? 0 : dshr_cptr_rqst;
            dset_padd <= dshr_cptr_padd;
            dset_bits <= dshr_cptr_bits;
            dset_wdat <= dshr_cptr_wdat;
            dset_excp <= dshr_cptr_excp;
            sc_succ   <= 0;
            sc_fail   <= 0;
            if (dshr_cptr_rsrv[0] & dshr_cptr_wdat[64]) // SC check
                if (dshr_cptr_padd == lr_addr & dshr_cptr_bits[1:0] == lr_size[1:0] & lr_size[2])
                    sc_succ <= 1;
                else {dset_wdat, sc_fail} <= 1; // failed, cancelling writing
        end else if (|dc_done[9:7]) dset_rqst <= 0;
        else if (dset_wdat[64]) dset_wdat[64] <= 0;
    always_ff @(posedge clk) begin
        dset_tag   <= dcache_tag  [dset_index];
        dset_dat   <= dcache_dat  [dset_index];
        dset_ptr   <= dcache_ptr  [dset_index];
        dset_valid <= dcache_valid[dset_index];
        dset_dirty <= dcache_dirty[dset_index];
    end
    firstk #(.width(dcway), .k(1)) dhit_pos_inst(.bits(dset_hit), .pos(dset_hitpos));
    always_comb for (int i = 0; i < dcway; i++)
        dset_hit[i] = dset_valid[i] & dset_tag[i] == dset_padd >> $clog2(dcblk);
    always_comb dset_hitrdat = dset_dat[$clog2(dcway)'(dset_hitpos)];
    always_comb begin
        dset_hitwdat = 0;
        dset_hitmask = 0;
        for (int i = 0; i < 8; i++) if (i < (1 << dset_bits[1:0])) begin
            dset_hitmask[$clog2(dcblk)'(dset_padd) + $clog2(dcblk)'(i)] = 8'hff;
            dset_hitwdat[$clog2(dcblk)'(dset_padd) + $clog2(dcblk)'(i)] = 8'(dset_wdat >> 8 * i);
        end
        if (dset_bits[1:0] == 2'b01 & |dset_padd[0:0] | // address misaligned
            dset_bits[1:0] == 2'b10 & |dset_padd[1:0] |
            dset_bits[1:0] == 2'b11 & |dset_padd[2:0]) dset_hitmask = 0;
    end
    always_comb dc_done = dset_hitpos[$clog2(dcway)] & dset_wdat[64] ? 0 : dset_rqst;
    always_comb dc_padd = dset_padd;
    always_comb dc_bits = dset_bits;
    always_comb dc_wena = dset_wdat[64];
    always_comb dc_miss = |dset_rqst[9:7] & ~dset_hitpos[$clog2(dcway)] & ~dset_excp;
    always_comb dc_data = dset_hitrdat;
    always_comb begin
        dc_rdat = dc_data[$clog2(dcblk)'(dset_padd)+7-:8];
        case (dset_bits)
            3'b000: dc_rdat = {{56{dc_rdat [7]}}, dc_rdat [7:0]};
            3'b100: dc_rdat = {            56'd0, dc_rdat [7:0]};
            3'b001: dc_rdat = {{48{dc_rdat[15]}}, dc_rdat[15:0]};
            3'b101: dc_rdat = {            48'd0, dc_rdat[15:0]};
            3'b010: dc_rdat = {{32{dc_rdat[31]}}, dc_rdat[31:0]};
            3'b110: dc_rdat = {            32'd0, dc_rdat[31:0]};
            default: dc_rdat = dc_rdat;
        endcase
        if (sc_succ) dc_rdat = 0;
        if (sc_fail) dc_rdat = 1;
    end


    /*----------------------------------------------------------------*\
    |                          AXI connection                          |
    \*----------------------------------------------------------------*/

    logic                       [7:0] axi_stt, axi_cnt; // AXI state and counter
    logic                       [9:0] axi_req;          // AXI request ID
    logic            [dcblk-1:0][7:0] axi_buf;          // buffer of cache line
    logic                             axi_flush;        // held DCACHE flush signal
    logic                             syn_req;          // synchronization request detected
    logic         [$clog2(dcset)-1:0] syn_set;          // synchronization set counter
    logic         [$clog2(dcway)-1:0] syn_way;          // synchronization way counter
    logic [dcway-1:0][dcblk-1:0][7:0] syn_dat;          // synchronization set data
    logic [dcway-1:0]          [63:0] syn_tag;          // synchronization set tag
    logic [dcway-1:0]                 syn_valid;        // synchronization valid bits
    logic [dcway-1:0]                 syn_dirty;        // synchronization dirty bits
    always_comb axi_dcr = axi_stt == 2 & m_axi_rvalid & (m_axi_rlast | 32'(axi_cnt) == dcblk - 8) | axi_stt == 16;
    always_comb axi_dcw = axi_stt == 3 & ~axi_flush;
    always_comb axi_dca = axi_stt == 16 ? 64'(syn_set) << $clog2(dcblk) : m_axi_araddr;
    always_comb axi_done = axi_stt == 7 & ~axi_flush ? axi_req : 0;
    always_comb   synchr_pend = axi_stt >= 16 & axi_stt <= 22;
    always_comb s_synchr_done = axi_stt == 22;
    always_ff @(posedge clk) if (rst) syn_req <= 0;
        else if (s_synchr_rqst)       syn_req <= 1;
        else if (s_synchr_done)       syn_req <= 0;
    always_ff @(posedge clk) if (rst) axi_flush <= 0;
        else if (|axi_stt & s_dcache_flsh)              axi_flush <= 1;
        else if (|axi_stt & stlb_flush & axi_req[8])    axi_flush <= 1;
        else if (|axi_stt & s_icache_flsh & axi_req[9]) axi_flush <= 1;
        else if (~|axi_stt)                             axi_flush <= 0;
    always_ff @(posedge clk) if (rst) begin
        axi_stt       <= 0;
        m_axi_arvalid <= 0;
        m_axi_awvalid <= 0;
        m_axi_rready  <= 0;
        m_axi_wvalid  <= 0;
        m_axi_bready  <= 0;
    end else case (axi_stt)
        0: // idle state
            if (syn_req) begin
                axi_stt <= 16; // DCACHE synchronization
                syn_set <= 0;
                syn_way <= 0;
            end else if (s_dcache_flsh) axi_stt <= 0;
            else if (|dshr_cptr_rqst[9:7] & dshr_cptr_bypc) begin
                axi_stt <= 32; // bypased DCACHE request handling
                axi_req <= dshr_cptr_rqst;
                m_axi_arvalid <= 1;
                m_axi_araddr  <= dshr_cptr_padd;
                m_axi_arlen   <= 0;
            end else if (stlb_flush & dshr_mptr_rqst[8]) axi_stt <= 0;
            else if (s_icache_flsh  & dshr_mptr_rqst[9]) axi_stt <= 0;
            else if (|dshr_mptr_rqst[9:7]) begin
                axi_stt <= 1; // missing DCACHE request handling
                axi_cnt <= 0;
                axi_req <= dshr_mptr_rqst;
                m_axi_arvalid <= 1;
                m_axi_araddr  <= dshr_mptr_padd;
                m_axi_arlen   <= (dcblk >> 3) - 1;
            end
        1: // DCACHE miss detected, waiting for read address handshake
            if (m_axi_arready) begin
                axi_stt <= 2;
                m_axi_arvalid <= 0;
                m_axi_rready  <= 1;
            end
        2: begin // read address sent, waiting for response
            if (m_axi_rvalid) begin
                axi_data[axi_cnt+7-:8] <= m_axi_rdata[63:0];
                axi_cnt <= axi_cnt + 8;
            end
            if (axi_dcr) {m_axi_rready, axi_stt} <= 3;
        end
        3: // replacing cache line fetched, checking valid bit
            if (dset_valid[dset_ptr] & dset_dirty[dset_ptr]) begin
                axi_stt <= 4;
                axi_cnt <= 0;
                axi_buf <= dset_dat[dset_ptr];
                m_axi_awvalid <= 1;
                m_axi_awlen   <= (dcblk >> 3) - 1;
                m_axi_awaddr  <= dset_tag[dset_ptr] << $clog2(dcblk);
            end else axi_stt <= 7;
        4: if (m_axi_awready) begin // dirty line replaced, waiting for write address handshake
            axi_stt <= 5;
            m_axi_awvalid <= 0;
            m_axi_wvalid  <= 1;
            m_axi_wdata   <= axi_buf[7:0];
            m_axi_wlast   <= 0;
            m_axi_wstrb   <= 8'hff;
            axi_cnt       <= axi_cnt + 8;
        end
        5: if (m_axi_wready) begin // address sent, transferring data
            axi_cnt <= axi_cnt + 8;
            m_axi_wdata <= axi_buf[axi_cnt+7-:8];
            if (32'(axi_cnt) == dcblk - 8) m_axi_wlast <= 1;
            if (32'(axi_cnt) == dcblk) begin
                m_axi_wvalid <= 0;
                m_axi_wdata  <= 0;
                m_axi_wlast  <= 0;
                m_axi_bready <= 1;
                axi_stt <= 6;
            end
        end
        6: if (m_axi_bvalid) {m_axi_bready, axi_stt} <= 7; // waiting for handshake
        7: axi_stt <= 0;   // data replacement done
        16: axi_stt <= 17; // synchronization request detected, reading synchronizing cache set
        17: begin          // cache set read, resetting write way and recording data
            axi_stt   <= 18;
            syn_way   <= 0;
            syn_dat   <= dset_dat;
            syn_tag   <= dset_tag;
            syn_valid <= dset_valid;
            syn_dirty <= dset_dirty;
        end
        18: // checking dirtiness and setting AXI write address
            if (syn_valid[syn_way] & syn_dirty[syn_way]) begin
                axi_stt <= 19;
                axi_cnt <= 0;
                m_axi_awvalid <= 1;
                m_axi_awlen   <= (dcblk >> 3) - 1;
                m_axi_awaddr  <= syn_tag[syn_way] << $clog2(dcblk);
            end else axi_stt <= 21;
        19: if (m_axi_awready) begin // waiting for write address handshake
            axi_stt <= 20;
            m_axi_awvalid <= 0;
            m_axi_wvalid  <= 1;
            m_axi_wdata   <= syn_dat[syn_way][7:0];
            m_axi_wlast   <= 0;
            m_axi_wstrb   <= 8'hff;
            axi_cnt       <= axi_cnt + 8;
        end
        20: if (m_axi_wready) begin // transferring data
            axi_cnt <= axi_cnt + 8;
            m_axi_wdata <= syn_dat[syn_way][axi_cnt+7-:8];
            if (32'(axi_cnt) == dcblk - 8) m_axi_wlast <= 1;
            if (32'(axi_cnt) == dcblk) begin
                m_axi_wvalid <= 0;
                m_axi_wdata  <= 0;
                m_axi_wlast  <= 0;
                axi_stt      <= 21;
            end
        end
        21: begin // transferring done, increase index
            syn_way <= syn_way + 1;
            axi_stt <= 18;
            if (32'(syn_way) == dcway - 1) begin
                syn_set <= syn_set + 1;
                axi_stt <= 16;
                if (32'(syn_set) == dcset - 1) axi_stt <= 22;
            end
        end
        22: // synchronization done
            axi_stt <= 0;
        32: // non-cachable requests detected, waiting for handshake
            if (m_axi_arready) begin
                axi_stt <= 33;
                m_axi_arvalid <= 0;
                m_axi_rready  <= 1;
            end
        33: // read address sent, waiting for response
            if (m_axi_rvalid) begin
                axi_stt <= 7;
                case (dshr_cptr_bits)
                    3'b000: axi_data[7:0] <= {{56{m_axi_rdata [7]}}, m_axi_rdata [7:0]};
                    3'b100: axi_data[7:0] <= {                56'd0, m_axi_rdata [7:0]};
                    3'b001: axi_data[7:0] <= {{48{m_axi_rdata[15]}}, m_axi_rdata[15:0]};
                    3'b101: axi_data[7:0] <= {                48'd0, m_axi_rdata[15:0]};
                    3'b010: axi_data[7:0] <= {{32{m_axi_rdata[31]}}, m_axi_rdata[31:0]};
                    3'b110: axi_data[7:0] <= {                32'd0, m_axi_rdata[31:0]};
                    default: axi_data[7:0] <= m_axi_rdata[63:0];
                endcase
                m_axi_rready <= 0;
                if (dshr_cptr_wdat[64]) begin // non-cacheable store
                    axi_stt <= 34;
                    m_axi_awvalid <= 1;
                    m_axi_awaddr  <= dshr_cptr_padd;
                    m_axi_awlen   <= 0;
                    m_axi_wvalid  <= 1;
                    m_axi_wdata   <= dshr_cptr_wdat[63:0];
                    m_axi_wlast   <= 1;
                    case (dshr_cptr_bits[1:0])
                        2'b00: m_axi_wstrb <= 8'h01;
                        2'b01: m_axi_wstrb <= 8'h03;
                        2'b10: m_axi_wstrb <= 8'h0f;
                        2'b11: m_axi_wstrb <= 8'hff;
                    endcase
                end
            end
        34: begin // non-cacheable write requests detected, waiting for handshake
            if ((m_axi_awready | ~m_axi_awvalid) & (m_axi_wready | ~m_axi_wvalid)) begin
                axi_stt <= 35;
                m_axi_bready <= 1;
            end
            if (m_axi_awready) m_axi_awvalid <= 0;
            if (m_axi_wready)  m_axi_wvalid  <= 0;
        end
        35: // write address and data sent, waiting for handshake
            if (m_axi_bvalid) {m_axi_bready, axi_stt} <= 7;
    endcase
    /* constant signals */
    always_comb m_axi_arid    = 0;
    always_comb m_axi_arburst = 'b01;  // INCR burst
    always_comb m_axi_arsize  = 'b011; // 8 bytes
    always_comb m_axi_arlock  = 0;
    always_comb m_axi_arcache = 0;
    always_comb m_axi_arprot  = 0;
    always_comb m_axi_arqos   = 0;
    always_comb m_axi_awid    = 0;
    always_comb m_axi_awburst = 'b01;  // INCR burst
    always_comb m_axi_awsize  = 'b011; // 8 bytes
    always_comb m_axi_awlock  = 0;
    always_comb m_axi_awcache = 0;
    always_comb m_axi_awprot  = 0;
    always_comb m_axi_awqos   = 0;

    if (init) begin
        initial for (int i = 0; i < stset; i++) stlb_ptr[i] = 0;
        initial for (int i = 0; i < icset; i++) icache_ptr[i] = 0;
        initial for (int i = 0; i < dcset; i++) dcache_ptr[i] = 0;
    end
endmodule
