/**
 * pma.sv:
 *   PMA check functions, which are platform-specific.
 */

/* memory map:
 *   c000_0000h +----------------+
 *           1G |     Memory     | C/I
 *   8000_0000h +----------------+
 *         512M |      MMIO      | NC/NI --+
 *   6000_0000h +----------------+         |
 *              |                |         |
 *   1000_0000h +----------------+         |
 *          64M |      PLIC      | NC/NI   |
 *    c00_0000h +----------------+         |
 *              |                |         |
 *    201_0000h +----------------+         | NC/NI
 *          64K |      CLINT     | NC/I    |
 *    200_0000h +----------------+         |
 *              |                |         |
 *      2_0000h +----------------+         |
 *          64K |       ROM      | C/I     |
 *      1_0000h +----------------+         |
 *              |                |       --+
 *           0h +----------------+
 *
 * the logic should be as simple as possible, or
 * checker may require clock to satisfy timing
 */

/* cacheablility */
function logic pma_c(input logic [63:0] pa); pma_c = pa[31]; endfunction

/* idempotency */
function logic pma_i(input logic [63:0] pa); pma_i = pa[31]; endfunction
