/**
 * types.sv:
 *   This file includes definition of types.
 */

`ifndef TYPES_DEFINED
`define TYPES_DEFINED

package types;

typedef struct packed {
    logic [7:0] id;        // FTQ id, MSB is valid bit
    logic [64:0] br;       // instruction flow break signal, MSB is valid bit, the rest is target
    logic [63:0] pc;       // program counter
    logic [7:0] num;       // fetch number in half-word
    logic [15:0][1:0] pat; // branch pattern
} pcg_bundle_t;

typedef struct packed {
    logic valid;           // valid signal
    logic [63:0] pc, pnpc; // program counter and predicted next PC
    logic [31:0] ir;       // instruction before uncompression
    logic [1:0] pat;       // branch pattern
    logic [1:0] pf;        // encountering instruction page fault
    logic call, ret;       // call/ret instruction (to update RAS)
    logic branch, jal, jalr; // jump/branch types (for debugging)
} fet_bundle_t;

typedef struct packed {
    /* common identification */
    logic [15:0] opid;       // instruction operation ID (MSB is valid bit)
    logic  [7:0] brid;       // branch ID (MSB is valid bit)
    logic  [7:0] ldid, stid; // load ID and store ID (MSB is valid bit)
    logic [1:0] pf;          // instruction page fault (per 16-bit)
    logic call, ret;         // call/return instruction
    logic [63:0] pc, pnpc;   // program counter and predicted next PC
    logic [31:0] ir;         // instruction
    logic [1:0] pat;         // branch pattern
    logic [2:0] delta;       // PC delta
    /* micro-operation */
    logic [4:0] fu;          // function unit mask, [4]div/[3]mul/[2]fpu/[1]lsu/[0]alu
    logic [63:0] funct;      // functional code
    logic safe;              // indication of safe instruction
    /* oprands */
    logic [64:0] base;       // branch and jump address base (MSB means reading from register)
    logic [63:0] offset;     // branch and jump address offset
    logic [64:0] a, b;       // arithmetic oprands (MSB means reading from register)
    /* register information */
    logic [1:0][6:0] rsa;    // source register number
    logic      [6:0] rda;    // destination register number
    /* register number:
        0 - 31: interger register
       32 - 63: floating pointer register
            64: temporary register */
    /* debug information */
    logic branch, jal, jalr; // jump/branch types
} dec_bundle_t;

typedef struct packed {
    /* propagation of decoder bundle */
    logic [15:0] opid;
    logic [7:0] brid;
    logic [7:0] ldid, stid;
    logic [1:0] pat;
    logic [63:0] pc, pnpc;
    logic [31:0] ir;
    logic [2:0] delta;
    logic [4:0] fu;
    logic [63:0] funct;
    logic [64:0] base;
    logic [63:0] offset;
    logic [64:0] a, b;
    /* newly added physical registers number */
    logic [1:0][15:0] prsa; // physical source register number (first and second)
    logic [1:0][15:0] prda; // physical destination register number (previous and current)
    logic branch, jal, jalr;
} ren_bundle_t;

typedef struct packed {
    /* propagation of decoder bundle */
    logic [15:0] opid;
    logic [7:0] brid;
    logic [7:0] ldid, stid;
    logic [1:0] pat;
    logic [63:0] pc, pnpc;
    logic [31:0] ir;
    logic [2:0] delta;
    logic [4:0] fu;
    logic [63:0] funct;
    logic [64:0] base;
    logic [63:0] offset;
    logic [64:0] a, b;
    logic [1:0][15:0] prsa;
    logic [1:0][15:0] prda;
    logic [1:0] prsb; // physical register busy bit
    logic branch, jal, jalr;
} iss_bundle_t;

typedef struct packed {
    /* propagation of issue bundle */
    logic [15:0] opid;
    logic [7:0] brid;
    logic [7:0] ldid, stid;
    logic [2:0] delta;
    logic [1:0] pat;
    logic [63:0] pc, pnpc;
    logic [31:0] ir;
    logic [4:0] fu;
    logic [63:0] funct;
    logic [64:0] base;
    logic [63:0] offset;
    logic [64:0] a, b;
    logic [1:0]       prsb;
    logic [1:0][63:0] prs; // convert register addresses to values
    logic [1:0][15:0] prda;
    logic branch, jal, jalr;
} reg_bundle_t;

typedef struct packed {
    logic [15:0] opid;      // operation ID
    logic [7:0] brid;       // branch ID
    logic [7:0] ldid, stid; // load and store ID
    logic [2:0] delta;      // PC delta, 2 or 4
    logic [63:0] pc, npc;   // PC and next PC
    logic [15:0] prda;      // physical destination register number
    logic [63:0] prdv;      // physical destination register value
    logic  [7:0] cause;     // exception cause, MSB is exception bit, the next is interrupt bit
    logic  [2:0] eret;      // exception return, MSB is valid bit
    logic [63:0] tval;      // exception trap value
    logic  [1:0] pat;       // branch pattern for updating frontend
    logic specul;           // speculative mark
    logic misp;             // misprediction of BRANCH and JALR instructions
    logic mem, csr;         // memory/CSR change
    logic flush, retry;     // force pipeline flush and retry
    logic branch, jal, jalr;
} exe_bundle_t;

typedef struct packed {
    logic [15:0] opid;      // operation ID
    logic [7:0] brid;       // branch ID
    logic [7:0] ldid, stid; // load/store ID
    logic [2:0] delta;      // compressed instruction
    logic call, ret;        // call/ret instruction
    logic [63:0] pc;        // PC and next PC
    logic rollback;         // rollback signal
    logic       [6:0] lrda; // rollback logical register number
    logic [1:0][15:0] prda; // old and new physical register number
} com_bundle_t;

typedef struct packed {
    logic [15:0] opid, topid;     // operation ID
    logic [7:0] brid, ldid, stid; // branch/load/store ID
    logic [2:0] delta;            // PC delta if not branch
    logic [1:0] pat;              // pattern of branch predictor
    logic [63:0] pc, npc;         // PC and next PC
    logic rollback;               // rollback signal
    logic branch, jal, jalr;      // jump type (for debugging)
} red_bundle_t;

typedef struct packed {
    logic [15:0] opid;
    logic [7:0] brid, ldid, stid;
    logic [63:0] pc;
    logic [31:0] ir;
    logic [2:0] delta;
    logic [1:0] pat;
    logic call, ret;
    logic [1:0][6:0] lrsa;
    logic [6:0] lrda;
} rob_dec_t;

typedef struct packed {
    logic [1:0][15:0] prda;
} rob_ren_t;

typedef struct packed {
    logic [7:0] cause;  // exception and cause (MSB is exception bit)
    logic [2:0] eret;   // exception return (MSB is return bit, `eret[1:0]` is privilege level)
    logic mem, csr;     // memory/CSR change
    logic flush, retry; // force pipeline flush
} rob_exe_t;

typedef struct packed {
    logic iword, isign;    // 32-bit integer operation mode
    logic [2:0] bmask;     // functional code and branch mask
    logic [2:0] eret;      // exception return bits (MSB is valid bit, the next is interrupt bit)
    logic bneg, j;         // branch negation and jump bit
    logic [1:0] pf;        // page fault HINT instruction
    logic [6:0] interrupt; // pending interrupt
    logic max, min, fencei, sfence, ecall, ebreak, wfi, inv;
    logic iand, ior, sra, srl, ixor, sltu, slt, sll, sub, add;
} alu_funct_t;

typedef struct packed {
    logic mulw, mulhu, mulhsu, mulh, mul;
} mul_funct_t;

typedef struct packed {
    logic remuw, remw, divuw, divw, remu, rem, divu, div;
} div_funct_t;

typedef struct packed {
    logic double;   // using IEEE double or single
    logic [2:0] rm; // rounding mode (funct3)
    logic fcvtds, fcvtsd, fcvtfi, fcvtif;       // conversion of FP bits
    logic fmvfx, fclass, fmvxf;                 // FP move and class operations
    logic fle, flt, feq, fmax, fmin;            // FP comparison
    logic fsgnjx, fsgnjn, fsgnj;                // FP sign injection
    logic fsqrt, fdiv, fnmul, fmul, fsub, fadd; // FP arithmetics
} fpu_funct_t;

typedef struct packed {
    logic [2:0] bits;       // L/S operation width and sign bits (funct3)
    logic [1:0] rsrv, aqrl; // reservation and ordering required
    logic csr, fence, store, load;
} lsu_funct_t;

endpackage

`endif
