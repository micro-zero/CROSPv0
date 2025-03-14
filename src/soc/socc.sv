/**
 * socc.sv:
 *   This is SoC controller with AXI interface as master.
 */

module socc #(
    parameter initrd = 64'hbe000000, // initial RAM disk address
    parameter blsize = 64'h02000000, // ROM size
    parameter dcbase = 64'h80000000, // memory base address
    parameter dcsize = 64'h40000000  // memory size
)(
    input  logic clk, // 20MHz ~ 50MHz
    input  logic rst,
    output logic [31:0] dp0,
    output logic [31:0] dp1,
    /* control signals */
    input  logic ddr_init,
    output logic core_rst,
    /* SD card interface */
    input  logic       sd_cd,
    output logic       sd_cmd_t,
    input  logic       sd_cmd_i,
    output logic       sd_cmd_o,
    output logic       sd_dat_t,
    input  logic [3:0] sd_dat_i,
    output logic [3:0] sd_dat_o,
    output logic       sd_reset,
    output logic       sd_sclk,
    /* coherence interface */
    input  logic  [7:0] s_coh_rqst,
    input  logic  [7:0] s_coh_trsc,
    input  logic [63:0] s_coh_addr,
    output logic  [7:0] s_coh_resp,
    output logic  [7:0] s_coh_mesi,
    output logic  [7:0] m_coh_rqst,
    output logic  [7:0] m_coh_trsc,
    output logic [63:0] m_coh_addr,
    input  logic  [7:0] m_coh_resp,
    input  logic  [7:0] m_coh_mesi,
    /* master interface for SOCC */
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
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic  [7:0] m_axi_bid,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
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
    input  logic  [7:0] m_axi_rid,
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready
);
    /* SD reader */
    logic load_init, bl_ready;
    /* clocking configuration */
    logic [31:0] div, div_n;
    /*--------------------------------------------------*\
    |  clock control:    ________________                |
    |      sdclk = _____|                |_____________  |
    |      div_n = div  1  2  3  ...  div/2+1  ...  div  |
    |                         ^ on reset                 |
    |     at sdclk posedge ^                             |
    \*--------------------------------------------------*/
    always_ff @(posedge clk)
        if      (rst)          div_n <= 3;
        else if (div_n >= div) div_n <= 1;
        else                   div_n <= div_n + 1;
    /* signal connection */
    logic   [7:0] state_sd, ret;                // memory loading states
    logic  [31:0] index_cmd, index_dat;         // index of cmd and dat
    logic         start_cmd, start_dat;         // received start bit on cmd and dat lines
    logic  [31:0] cnt;                          // counter
    logic  [46:0] cmd_token;                    // SD command token
    logic   [5:0] cmd_command;                  // SD command
    logic  [31:0] cmd_content;                  // SD command content
    logic   [6:0] cmd_crc;                      // SD command CRC
    logic [134:0] resp_token;                   // SD response
    logic   [7:0] resp_buff, resp_byte;         // current received byte
    logic  [63:0] resp_addr;                    // address of current received byte
    logic         resp_wena;                    // write enable signal of current received byte
    logic  [15:0] rca;                          // SD card register RCA selection value
    always_comb sd_reset = rst;
    always_comb cmd_token = {1'b1, cmd_command, cmd_content, cmd_crc, 1'b1};
    /* common tasks */
    task send_cmd(input logic [5:0] arg_command, input logic [31:0] arg_content, input logic [7:0] arg_ret);
        sd_cmd_t    <= 0;
        sd_cmd_o    <= 0;
        cmd_command <= arg_command;
        cmd_content <= arg_content;
        cmd_crc     <= 0;
        index_cmd   <= 46;
        index_dat   <= -1;
        state_sd    <= 8'hf0;
        ret         <= arg_ret;
    endtask
    task wait_cmd(input logic [31:0] arg_cmd, input logic [31:0] arg_dat, input logic [7:0] arg_ret);
        resp_token <= 0;
        index_cmd  <= arg_cmd;
        index_dat  <= arg_dat;
        start_cmd  <= 0;
        start_dat  <= 0;
        state_sd   <= 8'hf1;
        ret        <= arg_ret;
    endtask
    task delay(input logic [31:0] arg_cnt, input logic [7:0] arg_ret);
        state_sd <= 8'hff;
        cnt      <= arg_cnt;
        ret      <= arg_ret;
    endtask
    /* loading process */
    always_ff @(posedge clk) begin
        if (resp_wena) resp_wena <= 0; // hold for only one cycle
        if (rst | ~load_init) begin
            div <= 125; // 50M -> 400k
            sd_sclk  <= 1;
            sd_cmd_t <= 1; sd_cmd_o <= 1;
            sd_dat_t <= 1; sd_dat_o <= 4'b1111;
            cmd_command <= 0; cmd_content <= 0; cmd_crc <= 0;
            resp_addr <= -1; resp_wena <= 0;
            delay(1000, 0);
        end else if (div_n == (div >> 1) + 1) sd_sclk <= 0;
        else if (div_n == 1) sd_sclk <= 1;
        else if (div_n == 2) case (state_sd)
            /* card identification mode */
            0:  send_cmd(0, 0, 1);             // send CMD0 after reset
            1:  delay(0, 2);                   // delay
            2:  send_cmd(8, 32'h196, 3);       // CMD0 sent, ready to send CMD8
            3:  wait_cmd(46, -1, 4);           // CMD8 sent, snooping the bus
            4:                                 // CMD8 response received, check it
                if (resp_token[19:8] == 12'h196) delay(0, 5);
                else state_sd <= 0;            // unsupport card, returning to initialization
            5:  send_cmd(55, 0, 6);            // CMD8 checked, sending CMD55 before ACMD41
            6:  wait_cmd(46, -1, 7);           // CMD55 sent, snooping the bus
            7:  delay(0, 8);                   // CMD55 response received
            8:  send_cmd(41, 32'h40100000, 9); // CMD55 checked, sending ACMD41
            9:  wait_cmd(46, -1, 10);          // ACMD41 sent, snooping the bus
            10:                                // response received, check ACMD41 response
                if (resp_token[39]) delay(0, 11);
                else delay(100, 5);            // busy, resend CMD55-ACMD41 after delay
            11: send_cmd(2, 0, 12);            // ACMD41 checked, sending CMD2
            12: wait_cmd(134, -1, 13);         // CMD2 sent, snooping the bus
            13: delay(0, 14);                  // CMD2 received
            14: send_cmd(3, 0, 15);            // CMD2 checked, sending CMD3
            15: wait_cmd(46, -1, 16);          // CMD3 sent, snooping the bus

            /* data transfer mode */
            16: begin                          // CMD3 received
                rca <= resp_token[39:24];      // record new published RCA
                div <= 4;                      // data transfer mode clock divider set, 50M -> 12.5M
                delay(1000, 17);
            end
            17: send_cmd(7, {rca, 16'd0}, 18); // sending CMD7 to select card
            18: wait_cmd(46, -1, 19);          // CMD7 sent, snooping ths bus
            19: delay(0, 20);                  // CMD7 received, into transfer state
            20: send_cmd(16, 512, 21);         // sending CMD16 to set block size as 512B
            21: wait_cmd(46, -1, 22);          // CMD16 sent, snooping the bus
            22: delay(0, 23);                  // CMD16 received, block size set
            23:                                // sending CMD17 to get block
                send_cmd(17, resp_addr[31:0] + 1 >> 9, 24);
            24: wait_cmd(46, 4112, 25);        // CMD17 sent, snooping the bus
            25: if (bl_ready) state_sd <= resp_addr + 1 < blsize ? 23 : 26;

            /* command send-receive states */
            8'hf0: // start bit sent, sending command bits
                if (index_cmd == -1) begin
                    state_sd <= ret;
                    index_cmd <= 0;
                    sd_cmd_t <= 1;
                    sd_cmd_o <= 1;
                end else begin
                    index_cmd <= index_cmd - 1;
                    sd_cmd_o <= cmd_token[index_cmd];
                    if (index_cmd > 7)
                        cmd_crc <= {cmd_crc[5:0], cmd_crc[6] ^ cmd_token[index_cmd]} ^
                                {3'd0, cmd_crc[6] ^ cmd_token[index_cmd], 3'd0};
                end
            8'hf1: begin // start bit detected, receiving data
                if (~start_cmd & ~sd_cmd_i)    start_cmd <= 1;
                if (~start_dat & ~sd_dat_i[0]) start_dat <= 1;
                if (start_cmd & index_cmd != -1) begin
                    resp_token[index_cmd] <= sd_cmd_i;
                    index_cmd <= index_cmd - 1;
                end
                if (start_dat & index_dat != -1) begin
                    resp_buff <= {resp_buff[6:0], sd_dat_i[0]};
                    if (index_dat >= 16 & index_dat <= 4104 & ((4104 - index_dat) & 'b111) == 0) begin
                        resp_wena <= 1;
                        resp_addr <= resp_addr + 1;
                        resp_byte <= resp_buff;
                    end
                    index_dat <= index_dat - 1;
                end
                if (index_cmd == -1 & index_dat == -1)
                    state_sd <= ret;
            end

            /* common states */
            8'hff: // delay
                if (|cnt) cnt <= cnt - 1; else state_sd <= ret;
        endcase
    end

    /* bootloader */
    /*-----------------------------------------------------------------*\
    |  initial RAM map:                                                 |
    |                  ___________________                              |
    |      0xbfffffff |                   |                             |
    |         ...     |   initrd image    |                             |
    |      0xbe000000 |___________________|                             |
    |                 |                   |     in SD card:             |
    |                 |                   |       ___________________   |
    |         ...     |                   |  64M |                   |  |
    |                 |                   |      |   code segment    |  |
    |                 |                   |      |___________________|  |
    |      0x82000000 |___________________|      |                   |  |
    |                 |                   |      |   initrd image    |  |
    |         ...     |   code segment    |    0 |___________________|  |
    |      0x80000000 |___________________|                             |
    |                                                                   |
    |  the bootloader will start loading from 0xbe000000                |
    \*-----------------------------------------------------------------*/
    logic    [7:0] bl_stt;
    logic   [31:0] bl_cnt;
    logic   [63:0] bl_add;
    logic [4095:0] buffer;
    always_comb load_init = bl_stt > 0;
    always_comb core_rst = bl_stt < 6;
    always_comb bl_ready  = bl_stt == 1;
    always_ff @(posedge clk) if (rst) begin
        bl_stt <= 0;
        m_axi_awvalid <= 0;
        m_axi_arvalid <= 0;
        m_axi_wvalid  <= 0;
        m_axi_rready  <= 0;
        m_axi_bready  <= 0;
    end else case (bl_stt)
        0: // initial state on reset, waiting for module initialization
            if (ddr_init) {bl_cnt, bl_stt} <= 1;
        1: // waiting for SD data
            if (state_sd == 26) bl_stt <= 6;
            else if (resp_wena) begin
                buffer[bl_cnt*8+7-:8] <= resp_byte;
                bl_cnt <= bl_cnt + 1;
                if (bl_cnt == 0)   bl_add <= resp_addr;
                if (bl_cnt == 511) bl_stt <= 2;
            end
        2: begin // SD data read, setting write address for memory
            m_axi_awvalid <= 1;
            m_axi_awaddr  <= dcbase + ((initrd - dcbase + bl_add) & (dcsize - 1));
            m_axi_awburst <= 1;  // INCR
            m_axi_awlen   <= 63; // 64 transmission
            m_axi_awsize  <= 3;  // 8 bytes
            m_axi_wvalid  <= 1;
            m_axi_wlast   <= 0;
            m_axi_wdata   <= buffer[63:0];
            m_axi_wstrb   <= 8'hff;
            bl_stt        <= 3;
            bl_cnt        <= 1;
        end
        3: begin // write address set, waiting for AW and W handshake
            if (m_axi_awready & m_axi_awvalid) m_axi_awvalid <= 0;
            if (m_axi_wready & m_axi_wvalid) begin
                m_axi_wlast <= bl_cnt == 63;
                m_axi_wdata <= buffer[bl_cnt*64+63-:64];
                bl_cnt <= bl_cnt + 1;
                if (bl_cnt == 64) m_axi_wvalid <= 0;
            end
            if (~m_axi_awvalid & ~m_axi_wvalid) begin
                m_axi_bready <= 1;
                bl_stt <= 4;
            end
        end
        4: // memory data written, waiting for B handshake
            if (m_axi_bready & m_axi_bvalid) {m_axi_bready, bl_stt} <= 5;
        5: // data transfer done, returning to waiting state
            {bl_cnt, bl_stt} <= 1;
        6: // bootloading finished, CPU running
            bl_stt <= 6;
    endcase

    /* coherence interface (not used in single core) */
    always_ff @(posedge clk) if (rst) s_coh_resp <= 0; else s_coh_resp <= s_coh_rqst;
    always_ff @(posedge clk) if (rst) s_coh_mesi <= 0; else s_coh_mesi <= 1;
    always_ff @(posedge clk) if (rst) m_coh_rqst <= 0; else m_coh_rqst <= 0;
    always_ff @(posedge clk) if (rst) m_coh_trsc <= 0; else m_coh_trsc <= 0;
    always_ff @(posedge clk) if (rst) m_coh_addr <= 0; else m_coh_addr <= 0;

    /* debug port */
    always_comb dp0 = 32'(bl_stt);
    always_comb dp1 = 32'(state_sd);
endmodule
