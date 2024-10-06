#pragma once

#include <cstdint>

/* Extracted with BET 6.5.1.371 from i7-9750HF */

enum class MSRRegister : std::uint8_t {
    UNK10,
    UNK17,
    UNK35,
    UNK8B,
    UNKCE,
    OCMAILBOX,
    UNK194,
    UNK198,
    UNK199,
    UNK19C,
    UNK1A0,
    UNK1A2,
    UNK1AA,
    UNK1AD,
    UNK1B1,
    UNK1FC,
    UNK30A,
    UNK30B,
    UNK38D,
    UNK38F,
    UNK606,
    UNK610,
    UNK611,
    UNK614,
    UNK620,
    UNK621,
    UNK639,
    UNK641,
    UNK64C,
    UNK64F,
    UNK6B0,
    UNK770,
    UNK774,
    SIZE
};

constexpr std::uint32_t msrRegisters[static_cast<std::uint64_t>(MSRRegister::SIZE)]{
    0x10,
    0x17,
    0x35,
    0x8B,
    0xCE,
    0x150,
    0x194,
    0x198,
    0x199,
    0x19C,
    0x1A0,
    0x1A2,
    0x1AA,
    0x1AD,
    0x1B1,
    0x1FC,
    0x30A,
    0x30B,
    0x38D,
    0x38F,
    0x606,
    0x610,
    0x611,
    0x614,
    0x620,
    0x621,
    0x639,
    0x641,
    0x64C,
    0x64F,
    0x6B0,
    0x770,
    0x774};

enum class OCMailboxBits : std::uint64_t {
    DATA = 0, // std::uint32_t
    CMD = 32, // std::uint8_t
    PARAM1 = 40, // std::uint8_t
    PARAM2 = 48, // std::uint8_t
    RESERVED = 56, // std::uint8_t : 7
    RUNBUSY = 63 // std::uint8_t : 1
};

enum class OCMailboxCommand : std::uint8_t {
    UNK1_0,
    UNK1_1,
    UNK1_2,
    UNK1_3,
    UNK1_4,
    UNK2_0,
    UNK2_1,
    UNK4_0,
    UNK5_0,
    UNK10_0,
    UNK10_1,
    UNK10_2,
    UNK10_3,
    UNK10_4,
    UNK14_0,
    UNK16_0,
    UNK16_1,
    UNK16_2,
    UNK18_0,
    UNK1A_0,
    UNK1C_0,
    UNK1E_1,
    UNK1E_7,
    UNK1E_8,
    UNK1E_9,
    UNK1E_A,
    UNK1E_B,
    UNK1E_C,
    UNK1E_11,
    UNK1E_14,
    SIZE,
};

constexpr std::uint64_t ocMailboxCommands[static_cast<std::uint64_t>(OCMailboxCommand::SIZE)][4] = {
    {0x1, 0x0, 0x0, 0x0},
    {0x1, 0x0, 0x1, 0x0},
    {0x1, 0x0, 0x2, 0x0},
    {0x1, 0x0, 0x3, 0x0},
    {0x1, 0x0, 0x4, 0x0},
    {0x2, 0x0, 0x0, 0x0},
    {0x2, 0x0, 0x1, 0x0},
    {0x4, 0x0, 0x0, 0x0},
    {0x5, 0x0, 0x0, 0x0},
    {0x10, 0x11, 0x0, 0x0},
    {0x10, 0x11, 0x1, 0x0},
    {0x10, 0x11, 0x2, 0x0},
    {0x10, 0x11, 0x3, 0x0},
    {0x10, 0x11, 0x4, 0x0},
    {0x14, 0x15, 0x0, 0x0},
    {0x16, 0x17, 0x0, 0x0},
    {0x16, 0x17, 0x1, 0x0},
    {0x16, 0x17, 0x2, 0x0},
    {0x18, 0x19, 0x0, 0x0},
    {0x1A, 0x1B, 0x0, 0x0},
    {0x1C, 0x1D, 0x0, 0x0},
    {0x1E, 0x1F, 0x1, 0x0},
    {0x1E, 0x1F, 0x7, 0x0},
    {0x1E, 0x1F, 0x8, 0x0},
    {0x1E, 0x1F, 0x9, 0x0},
    {0x1E, 0x1F, 0xA, 0x0},
    {0x1E, 0x1F, 0xB, 0x0},
    {0x1E, 0x1F, 0xC, 0x0},
    {0x1E, 0x1F, 0x11, 0x0},
    {0x1E, 0x1F, 0x14, 0x0}};
