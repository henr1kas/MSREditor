#pragma once

#include <cstdint>

enum class MSRRegister : std::uint8_t {
    MSR10,
    MSR17,
    MSR35,
    MSR8B,
    MSRCE,
    OCMAILBOX,
    MSR194,
    MSR198,
    MSR199,
    MSR19C,
    MSR1A0,
    MSR1A2,
    MSR1AA,
    MSR1AD,
    MSR1B1,
    MSR1FC,
    MSR30A,
    MSR30B,
    MSR38D,
    MSR38F,
    MSR606,
    MSR610,
    MSR611,
    MSR614,
    RINGRATIOLIMIT,
    MSR621,
    MSR639,
    MSR641,
    MSR64C,
    MSR64F,
    MSR6B0,
    MSR770,
    MSR774,
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
    UNK14_0,
    UNK16_0,
    UNK16_1,
    UNK16_2,
    MISCTURBOCONTROL,
    AVXRATIOOFFSET,
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

constexpr std::uint8_t ocMailboxCommands[static_cast<std::uint64_t>(OCMailboxCommand::SIZE)][4] = {
    {0x1, 0x0, 0x0, 0x0},
    {0x1, 0x0, 0x1, 0x0},
    {0x1, 0x0, 0x2, 0x0},
    {0x1, 0x0, 0x3, 0x0},
    {0x1, 0x0, 0x4, 0x0},
    {0x2, 0x0, 0x0, 0x0},
    {0x2, 0x0, 0x1, 0x0},
    {0x4, 0x0, 0x0, 0x0},
    {0x5, 0x0, 0x0, 0x0},
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
