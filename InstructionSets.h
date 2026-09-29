/* TODO: with other instruction bases and extensions.
enum InstructionBase {
    RiscV64I,
    RiscV64E,
    RiscV32I,
    RiscV32E,
};

enum Extension {
    M,
    A,
    C,
};
*/

// 5 bits
enum RiscV32IMAC_opcode {
        // R-Type / Register-Register Logical & Arithmetic (ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND)
        OPCODE_OP = 0b0110011,

        // I-Type / Register-Immediate Operations (ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI)
        OPCODE_OP_IMM = 0b0010011,

        // I-Type / Load Operations (LB, LH, LW, LBU, LHU)
        OPCODE_LOAD = 0b0000011,

        // S-Type / Store Operations (SB, SH, SW)
        OPCODE_STORE = 0b0100011,

        // B-Type / Branch Operations (BEQ, BNE, BLT, BGE, BLTU, BGEU)
        OPCODE_BRANCH = 0b1100011,

        // J-Type / Jump and Link
        OPCODE_JAL = 0b1101101,

        // I-Type / Jump and Link Register
        OPCODE_JALR = 0b1100111,

        // U-Type / Load Upper Immediate
        OPCODE_LUI = 0b0110111,

        // U-Type / Add Upper Immediate to PC
        OPCODE_AUIPC = 0b0010111,

        // I-Type / Environment Calls & Breakpoints (ECALL, EBREAK)
        OPCODE_SYSTEM = 0b1110011,

        // I-Type / Memory Ordering Fence (FENCE, FENCE.TSO)
        OPCODE_MISC_MEM = 0b0001111
};
