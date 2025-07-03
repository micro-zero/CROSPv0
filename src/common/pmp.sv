/**
 * pmp.sv:
 *   PMP check module.
 */

module pmp(
    input  logic        [1:0] level,   // privilege level
    input  logic [15:0] [7:0] pmpcfg,  // PMP configuration
    input  logic [15:0][53:0] pmpaddr, // PMP address
    input  logic       [63:0] addr,    // address to check
    output logic        [2:0] perm     // check result (XWR)
);
    logic [15:0]       match; // match result
    logic [15:0] [6:0] fz;    // first zero
    logic [15:0][63:0] mask;  // NAPOT mask
    firstk #(.width(54), .k(1)) fz_inst[15:0](.bits(~pmpaddr), .pos(fz));
    always_comb for (int i = 0; i < 16; i++) mask[i] = fz[i][6] ? (64'd1 << fz[i][5:0] + 1) - 1 : -63'd1;
    always_comb for (int i = 0; i < 16; i++)
        case (pmpcfg[i][4:3])
            0: match[i] = 0; // null region
            1:               // TOR (G = 1)
                if (i == 0) match[i] = addr[55:3] < pmpaddr[i][53:1];
                else        match[i] = addr[55:3] < pmpaddr[i][53:1] & addr[55:3] >= pmpaddr[i - 1][53:1];
            /* granularity is 8-bytes so that NA4 is disabled */
            2: match[i] = 0;                                                            // NA4
            3: match[i] = (addr[55:2] | mask[i][53:0]) == (pmpaddr[i] | mask[i][53:0]); // NAPOT
        endcase
    always_comb begin
        perm = level == 2'b11 ? 3'b111 : 0;         // default value
        for (int i = 15; i >= 0; i--) if (match[i]) // lowest match found
            if (level == 2'b11 & ~pmpcfg[i][7])
                perm = 3'b111;          // unlocked M mode
            else perm = pmpcfg[i][2:0]; // locked M mode or S/U mode
        if (|addr[63:56]) perm = 0;     // out of range
    end
endmodule
