/**
 * cache.sv:
 *   Generic cache module.
 */

module cache #(
    parameter chn    = 1,  // request channel width
    parameter set    = 64, // number of sets
    parameter way    = 8,  // number of ways
    parameter blk    = 64, // block size in bytes
    parameter mshrsz = 4   // number of MSHRs
)(
    input  logic clk,
    input  logic rst,
    input  logic flush,
    /* slave interface */
    input  logic [chn-1:0]         [7:0] s_rqst, // request ID
    input  logic [chn-1:0][blk-1:0]      s_strb, // write strobe
    input  logic [chn-1:0]        [63:0] s_addr, // physical address
    input  logic [chn-1:0][blk-1:0][7:0] s_wdat, // write data
    output logic [chn-1:0]         [7:0] s_resp, // response ID
    output logic [chn-1:0]         [7:0] s_miss, // miss ID
    output logic [chn-1:0][blk-1:0][7:0] s_rdat, // read data
    /* master interface */
    output logic          [7:0] m_rqst, // request ID
    output logic [blk-1:0]      m_strb, // write strobe
    output logic         [63:0] m_addr, // physical address
    output logic [blk-1:0][7:0] m_wdat, // write data
    input  logic          [7:0] m_resp, // response ID
    input  logic          [7:0] m_miss, // miss ID
    input  logic [blk-1:0][7:0] m_rdat  // read data
);
    /* buffered and forwarded requests for each channel */
    logic [chn-1:0]         [7:0] b_rqst, f_rqst;
    logic [chn-1:0][blk-1:0]      b_strb, f_strb;
    logic [chn-1:0]        [63:0] b_addr, f_addr;
    logic [chn-1:0][blk-1:0][7:0] b_wdat, f_wdat;
    logic [chn-1:0]               b_ready;
    always_comb for (int i = 0; i < chn; i++) b_ready[i] = ~|b_rqst[i] | |s_resp[i];
    always_comb for (int i = 0; i < chn; i++) begin
        f_rqst[i] = b_ready[i] ? s_rqst[i] : b_rqst[i];
        f_strb[i] = b_ready[i] ? s_strb[i] : b_strb[i];
        f_addr[i] = b_ready[i] ? s_addr[i] : b_addr[i];
        f_wdat[i] = b_ready[i] ? s_wdat[i] : b_wdat[i];
    end
    always_ff @(posedge clk) if (rst | flush) b_rqst <= 0;
        else for (int i = 0; i < chn; i++) begin
            if (|s_resp[i]) b_rqst[i] <= 0;
            else if (|b_strb[i]) b_strb[i] <= 0;
            /* only one request can be buffered until response */
            if (|s_rqst[i] & b_ready[i]) begin
                b_rqst[i] <= s_rqst[i];
                b_strb[i] <= s_strb[i];
                b_addr[i] <= s_addr[i];
                b_wdat[i] <= s_wdat[i];
            end
        end

    /* MSHR */
    logic          [7:0] mshr_rqst[mshrsz-1:0];
    logic          [7:0] mshr_miss[mshrsz-1:0]; // callback handle from NEXT level
    logic [blk-1:0]      mshr_strb[mshrsz-1:0];
    logic         [63:0] mshr_addr[mshrsz-1:0];
    logic [blk-1:0][7:0] mshr_wdat[mshrsz-1:0]; // todo: need to be changed into mwpram??
    logic [blk-1:0][7:0] mshr_rdat[mshrsz-1:0];
    logic [mshrsz-1:0] mshr_valid, mshr_ready, mshr_pend_bits;
    logic [chn-1:0][$clog2(mshrsz):0] mshr_in;
    logic          [$clog2(mshrsz):0] mshr_pend;
    logic          [$clog2(mshrsz):0] mshr_out;
    logic miss_under_miss;
    firstk #(.width(mshrsz), .k(chn)) mshr_i_inst(.bits(~mshr_valid), .pos(mshr_in));
    firstk #(.width(mshrsz), .k(1))   mshr_p_inst(.bits(mshr_pend_bits), .pos(mshr_pend));
    firstk #(.width(mshrsz), .k(1))   mshr_o_inst(.bits(mshr_valid & mshr_ready), .pos(mshr_out));
    always_comb begin
        mshr_pend_bits = mshr_valid & ~mshr_ready;
        for (int i = 0; i < mshrsz; i++)
            if (~|m_miss & mshr_rqst[i] == m_resp) mshr_pend_bits[i] = 0;
    end
    always_ff @(posedge clk) if (rst | flush) mshr_valid <= 0;
        else begin
            for (int i = 0; i < chn; i++) if (|s_resp[i] & |s_miss[i] & ~miss_under_miss) begin
                mshr_valid[$clog2(mshrsz)'(mshr_in[i])] <= 1;
                mshr_ready[$clog2(mshrsz)'(mshr_in[i])] <= 0;
                mshr_rqst[$clog2(mshrsz)'(mshr_in[i])] <= b_rqst[i];
                mshr_miss[$clog2(mshrsz)'(mshr_in[i])] <= 0;
                mshr_strb[$clog2(mshrsz)'(mshr_in[i])] <= b_strb[i];
                mshr_addr[$clog2(mshrsz)'(mshr_in[i])] <= b_addr[i];
                mshr_wdat[$clog2(mshrsz)'(mshr_in[i])] <= b_wdat[i];
            end
            if (mshr_out[$clog2(mshrsz)]) mshr_valid[$clog2(mshrsz)'(mshr_out)] <= 0;
            for (int i = 0; i < mshrsz; i++) if (mshr_valid[i] & |m_resp) begin
                if (~|m_miss & (mshr_rqst[i] == m_resp | mshr_miss[i] == m_resp))
                    {mshr_ready[i], mshr_rdat[i]} <= {1'b1, m_rdat};
                if (|m_miss & mshr_rqst[i] == m_resp) mshr_miss[i] <= m_miss;
            end
        end

    /* cache entity */
    logic [set-1:0][way-1:0] valid;        // cache valid flag of each block
    logic [set-1:0][way-1:0] dirty;        // cache dirty flag of each block
    logic    [way*blk*8-1:0] dat[set-1:0]; // cache data
    logic       [way*64-1:0] tag[set-1:0]; // cache tag of each block
    logic  [$clog2(way)-1:0] ptr[set-1:0]; // pointers in FIFO replacement policy
    /* selected set */
    logic [chn-1:0]      [$clog2(set)-1:0] index;       // index of input address
    logic [chn-1:0][way-1:0][blk-1:0][7:0] set_dat;     // data in selected set
    logic          [way-1:0][blk-1:0][7:0] new_dat;     // data in selected set
    logic [chn-1:0][way-1:0]        [63:0] set_tag;     // tags in selected set
    logic          [way-1:0]        [63:0] new_tag;     // tags in selected set
    logic [chn-1:0]      [$clog2(way)-1:0] set_ptr;     // current pointer in selected set
    logic [chn-1:0][way-1:0]               set_valid;   // valid bits in selected set
    logic [chn-1:0][way-1:0]               set_dirty;   // dirty bits in selected set
    logic [chn-1:0][way-1:0]               set_hit;     // hit bits in selected set
    logic [chn-1:0]        [$clog2(way):0] set_hitpos;  // hit position in selected set
    logic [chn-1:0]         [blk-1:0][7:0] set_hitrdat; // hit data in selected set
    logic                   [blk-1:0][7:0] set_hitmask; // write mask in selected set  
    logic                   [blk-1:0][7:0] set_hitwdat; // write data in selected set
    always_comb begin
        for (int i = 0; i < chn; i++) index[i] = $clog2(set)'(f_addr[i] >> $clog2(blk));
        new_tag = set_tag[0];
        new_dat = set_dat[0];
        if (mshr_out[$clog2(mshrsz)]) begin
            index[0] = $clog2(set)'(mshr_addr[$clog2(mshrsz)'(mshr_out)] >> $clog2(blk));
            new_tag[set_ptr[0]] = mshr_addr[$clog2(mshrsz)'(mshr_out)] >> $clog2(blk);
            new_dat[set_ptr[0]] = mshr_rdat[$clog2(mshrsz)'(mshr_out)] & ~set_hitmask | set_hitwdat;
        end else new_dat[$clog2(way)'(set_hitpos[0])] = set_hitrdat[0] & ~set_hitmask | set_hitwdat;
    end
    always_ff @(posedge clk) if (rst) valid <= 0;
        else if (mshr_out[$clog2(mshrsz)]) begin
            valid[index[0]][set_ptr] <= 1;
            dirty[index[0]][set_ptr] <= |mshr_strb[$clog2(mshrsz)];
            dat  [index[0]]          <= new_dat;
            tag  [index[0]]          <= new_tag;
            ptr  [index[0]]          <= set_ptr[0] + 1;
        end else if (|b_rqst[0] & set_hitpos[0][$clog2(way)] & |b_strb[0]) begin
            dirty[index[0]][$clog2(way)'(set_hitpos[0])] <= 1;
            dat  [index[0]]                              <= new_dat;
        end
    always_ff @(posedge clk) for (int i = 0; i < chn; i++) begin
        set_tag  [i] <= tag  [index[i]];
        set_dat  [i] <= dat  [index[i]];
        set_ptr  [i] <= ptr  [index[i]];
        set_valid[i] <= valid[index[i]];
        set_dirty[i] <= dirty[index[i]];
    end
    firstk #(.width(way), .k(1)) hit_pos_inst[chn-1:0](.bits(set_hit), .pos(set_hitpos));
    always_comb for (int i = 0; i < chn; i++)
        for (int j = 0; j < way; j++)
            set_hit[i][j] = set_valid[i][j] & set_tag[i][j] == b_addr[i] >> $clog2(blk);
    always_comb for (int i = 0; i < chn; i++)
        set_hitrdat[i] = set_dat[i][$clog2(way)'(set_hitpos[i])];
    always_comb begin
        set_hitwdat = 0;
        set_hitmask = 0;
        if (mshr_out[$clog2(mshrsz)])
            for (int i = 0; i < blk; i++) if (mshr_strb[$clog2(mshrsz)'(mshr_out)][i]) begin
                set_hitmask[$clog2(blk)'(i)] = 8'hff;
                set_hitwdat[$clog2(blk)'(i)] = mshr_wdat[$clog2(mshrsz)'(mshr_out)][i];
            end
        if (~mshr_out[$clog2(mshrsz)])
            for (int i = 0; i < blk; i++) if (b_strb[0][i]) begin
                set_hitmask[$clog2(blk)'(i)] = 8'hff;
                set_hitwdat[$clog2(blk)'(i)] = b_wdat[0][i];
            end
    end

    /* master interface */
    always_comb m_rqst = mshr_pend[$clog2(mshrsz)] ? mshr_rqst[$clog2(mshrsz)'(mshr_pend)] : 0;
    always_comb m_strb = mshr_strb[$clog2(mshrsz)'(mshr_pend)];
    always_comb m_addr = mshr_addr[$clog2(mshrsz)'(mshr_pend)];
    always_comb m_wdat = mshr_wdat[$clog2(mshrsz)'(mshr_pend)];

    /* slave interface */
    always_comb begin
        miss_under_miss = 0;
        for (int i = 0; i < chn; i++) begin
            s_resp[i] = b_rqst[i];
            s_miss[i] = set_hitpos[i][$clog2(way)] ? 0 : b_rqst[i];
            s_rdat[i] = set_hitrdat[i];
            for (int j = 0; j < mshrsz; j++)
                if (mshr_valid[j] & mshr_addr[j][63:$clog2(blk)] == b_addr[i][63:$clog2(blk)])
                    {miss_under_miss, s_miss[i]} = {1'b1, mshr_rqst[j]};                  // miss-under-miss
            if (set_hitpos[i][$clog2(way)] & |b_strb[i]) s_resp[i] = 0;                   // write request
            if (~set_hitpos[i][$clog2(way)] & ~mshr_in[i][$clog2(mshrsz)]) s_resp[i] = 0; // MSHR full
        end
        if (mshr_out[$clog2(mshrsz)]) begin
            s_resp[0] = mshr_rqst[$clog2(mshrsz)'(mshr_out)];
            s_rdat[0] = mshr_rdat[$clog2(mshrsz)'(mshr_out)];
            s_miss[0] = 0;
        end
    end
endmodule
