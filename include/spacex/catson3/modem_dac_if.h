/*
 * #############################################################################
 * # DO NOT EDIT THIS FILE!   DO NOT EDIT THIS FILE!   DO NOT EDIT THIS FILE!  #
 * #############################################################################
 *  This file was automatically generated using the following command:
 *    sxra c_header --namespace CatsonVersion1Registers -o modem_dac_if.h ../../catson_registers_secure_without_sxips_ASSY4.6_modified_amykyta.xml --set-top MAP_CATSON.MODEM_DAC_IF_SYSCFG_DAC_INTERFACE
 * -----------------------------------------------------------------------------
 */
#ifndef MODEM_DAC_IF__H
#define MODEM_DAC_IF__H

#ifndef __KERNEL__
#include <stdint.h>
#endif

#ifdef __cplusplus
    namespace CatsonVersion1Registers {
#endif

/*
 * Register: SYSTEM_CONFIG0
 *   Offset is absolute
 */
#define SYSTEM_CONFIG0_REG_OFFSET    0x00000000u

#define SYSTEM_CONFIG0__DACPLL_EN_bp    0u
#define SYSTEM_CONFIG0__DACPLL_EN_bm    0x00000001u
#define SYSTEM_CONFIG0__DACPLL_EN_bc    1u

/*
 * Register: RESERVED1
 *   Offset is absolute
 */
#define RESERVED1_REG_OFFSET    0x00000004u


/*
 * Register: SYSTEM_CONFIG2
 *   Offset is absolute
 */
#define SYSTEM_CONFIG2_REG_OFFSET    0x00000008u

#define SYSTEM_CONFIG2__PLL_BIST_CMP_COUNT_VAL_bp    0u
#define SYSTEM_CONFIG2__PLL_BIST_CMP_COUNT_VAL_bm    0x0000FFFFu
#define SYSTEM_CONFIG2__PLL_BIST_CMP_COUNT_VAL_bc    16u
#define SYSTEM_CONFIG2__PLL_BIST_REF_COUNT_VAL_bp    16u
#define SYSTEM_CONFIG2__PLL_BIST_REF_COUNT_VAL_bm    0xFFFF0000u
#define SYSTEM_CONFIG2__PLL_BIST_REF_COUNT_VAL_bc    16u

/*
 * Register: SYSTEM_CONFIG3
 *   Offset is absolute
 */
#define SYSTEM_CONFIG3_REG_OFFSET    0x0000000Cu

#define SYSTEM_CONFIG3__PLL_BIST_CLK_SEL_bp    0u
#define SYSTEM_CONFIG3__PLL_BIST_CLK_SEL_bm    0x00000003u
#define SYSTEM_CONFIG3__PLL_BIST_CLK_SEL_bc    2u
#define SYSTEM_CONFIG3__PLL_BIST_SELECT_bp    4u
#define SYSTEM_CONFIG3__PLL_BIST_SELECT_bm    0x00000010u
#define SYSTEM_CONFIG3__PLL_BIST_SELECT_bc    1u
#define SYSTEM_CONFIG3__PLL_BIST_CMP_MASK_VAL_bp    5u
#define SYSTEM_CONFIG3__PLL_BIST_CMP_MASK_VAL_bm    0x00000060u
#define SYSTEM_CONFIG3__PLL_BIST_CMP_MASK_VAL_bc    2u
#define SYSTEM_CONFIG3__DAC_CLK_IO_EN_bp    8u
#define SYSTEM_CONFIG3__DAC_CLK_IO_EN_bm    0x00000100u
#define SYSTEM_CONFIG3__DAC_CLK_IO_EN_bc    1u
#define SYSTEM_CONFIG3__DAC_CLK_IO_RATIO_bp    9u
#define SYSTEM_CONFIG3__DAC_CLK_IO_RATIO_bm    0x00000600u
#define SYSTEM_CONFIG3__DAC_CLK_IO_RATIO_bc    2u

/*
 * Register: SYSTEM_CONFIG4
 *   Offset is absolute
 */
#define SYSTEM_CONFIG4_REG_OFFSET    0x00000010u

#define SYSTEM_CONFIG4__PWRDN_bp    0u
#define SYSTEM_CONFIG4__PWRDN_bm    0x00000001u
#define SYSTEM_CONFIG4__PWRDN_bc    1u
#define SYSTEM_CONFIG4__STNDBYI_bp    2u
#define SYSTEM_CONFIG4__STNDBYI_bm    0x00000004u
#define SYSTEM_CONFIG4__STNDBYI_bc    1u
#define SYSTEM_CONFIG4__STNDBYQ_bp    3u
#define SYSTEM_CONFIG4__STNDBYQ_bm    0x00000008u
#define SYSTEM_CONFIG4__STNDBYQ_bc    1u
#define SYSTEM_CONFIG4__IFS6TO3_bp    4u
#define SYSTEM_CONFIG4__IFS6TO3_bm    0x00000010u
#define SYSTEM_CONFIG4__IFS6TO3_bc    1u
#define SYSTEM_CONFIG4__CLKEN_bp    8u
#define SYSTEM_CONFIG4__CLKEN_bm    0x00000100u
#define SYSTEM_CONFIG4__CLKEN_bc    1u
#define SYSTEM_CONFIG4__START_CAL_bp    12u
#define SYSTEM_CONFIG4__START_CAL_bm    0x00001000u
#define SYSTEM_CONFIG4__START_CAL_bc    1u
#define SYSTEM_CONFIG4__CALMODE_bp    13u
#define SYSTEM_CONFIG4__CALMODE_bm    0x00002000u
#define SYSTEM_CONFIG4__CALMODE_bc    1u

/*
 * Register: RESERVED5
 *   Offset is absolute
 */
#define RESERVED5_REG_OFFSET    0x00000014u


/*
 * Register: SYSTEM_CONFIG6
 *   Offset is absolute
 */
#define SYSTEM_CONFIG6_REG_OFFSET    0x00000018u

#define SYSTEM_CONFIG6__WSI_bp    0u
#define SYSTEM_CONFIG6__WSI_bm    0x00000001u
#define SYSTEM_CONFIG6__WSI_bc    1u
#define SYSTEM_CONFIG6__WRCK_bp    8u
#define SYSTEM_CONFIG6__WRCK_bm    0x00000100u
#define SYSTEM_CONFIG6__WRCK_bc    1u
#define SYSTEM_CONFIG6__WRSTN_bp    16u
#define SYSTEM_CONFIG6__WRSTN_bm    0x00010000u
#define SYSTEM_CONFIG6__WRSTN_bc    1u
#define SYSTEM_CONFIG6__SELECTWIR_bp    24u
#define SYSTEM_CONFIG6__SELECTWIR_bm    0x01000000u
#define SYSTEM_CONFIG6__SELECTWIR_bc    1u
#define SYSTEM_CONFIG6__SHIFTWR_bp    25u
#define SYSTEM_CONFIG6__SHIFTWR_bm    0x02000000u
#define SYSTEM_CONFIG6__SHIFTWR_bc    1u
#define SYSTEM_CONFIG6__UPDATEWR_bp    26u
#define SYSTEM_CONFIG6__UPDATEWR_bm    0x04000000u
#define SYSTEM_CONFIG6__UPDATEWR_bc    1u
#define SYSTEM_CONFIG6__CAPTUREWR_bp    27u
#define SYSTEM_CONFIG6__CAPTUREWR_bm    0x08000000u
#define SYSTEM_CONFIG6__CAPTUREWR_bc    1u

/*
 * Register: RESERVED7
 *   Offset is absolute
 */
#define RESERVED7_REG_OFFSET    0x0000001Cu


/*
 * Register: SYSTEM_CONFIG8
 *   Offset is absolute
 */
#define SYSTEM_CONFIG8_REG_OFFSET    0x00000020u

#define SYSTEM_CONFIG8__MODESEL_I_bp    0u
#define SYSTEM_CONFIG8__MODESEL_I_bm    0x00000007u
#define SYSTEM_CONFIG8__MODESEL_I_bc    3u
#define SYSTEM_CONFIG8__MODESEL_Q_bp    3u
#define SYSTEM_CONFIG8__MODESEL_Q_bm    0x00000038u
#define SYSTEM_CONFIG8__MODESEL_Q_bc    3u
#define SYSTEM_CONFIG8__DITHER_DISABLE_bp    6u
#define SYSTEM_CONFIG8__DITHER_DISABLE_bm    0x00000040u
#define SYSTEM_CONFIG8__DITHER_DISABLE_bc    1u
#define SYSTEM_CONFIG8__DATA_TYPE_bp    7u
#define SYSTEM_CONFIG8__DATA_TYPE_bm    0x00000080u
#define SYSTEM_CONFIG8__DATA_TYPE_bc    1u
#define SYSTEM_CONFIG8__AMP_SEL_bp    8u
#define SYSTEM_CONFIG8__AMP_SEL_bm    0x00003F00u
#define SYSTEM_CONFIG8__AMP_SEL_bc    6u
#define SYSTEM_CONFIG8__RAMP_STEP_bp    14u
#define SYSTEM_CONFIG8__RAMP_STEP_bm    0x0000C000u
#define SYSTEM_CONFIG8__RAMP_STEP_bc    2u
#define SYSTEM_CONFIG8__TUNER1_bp    16u
#define SYSTEM_CONFIG8__TUNER1_bm    0x007F0000u
#define SYSTEM_CONFIG8__TUNER1_bc    7u
#define SYSTEM_CONFIG8__TUNER2_bp    24u
#define SYSTEM_CONFIG8__TUNER2_bm    0x7F000000u
#define SYSTEM_CONFIG8__TUNER2_bc    7u

/*
 * Register: SYSTEM_CONFIG9
 *   Offset is absolute
 */
#define SYSTEM_CONFIG9_REG_OFFSET    0x00000024u

#define SYSTEM_CONFIG9__SIGGEN_EN_bp    0u
#define SYSTEM_CONFIG9__SIGGEN_EN_bm    0x00000001u
#define SYSTEM_CONFIG9__SIGGEN_EN_bc    1u

/*
 * Register: RESERVED10
 *   Offset is absolute
 */
#define RESERVED10_REG_OFFSET    0x00000028u


/*
 * Register: RESERVED11
 *   Offset is absolute
 */
#define RESERVED11_REG_OFFSET    0x0000002Cu


/*
 * Register: SYSTEM_CONFIG12
 *   Offset is absolute
 */
#define SYSTEM_CONFIG12_REG_OFFSET    0x00000030u

#define SYSTEM_CONFIG12__SWAP_IQ_bp    1u
#define SYSTEM_CONFIG12__SWAP_IQ_bm    0x00000002u
#define SYSTEM_CONFIG12__SWAP_IQ_bc    1u
#define SYSTEM_CONFIG12__CORR_EN_bp    2u
#define SYSTEM_CONFIG12__CORR_EN_bm    0x00000004u
#define SYSTEM_CONFIG12__CORR_EN_bc    1u
#define SYSTEM_CONFIG12__CORR_LD_bp    3u
#define SYSTEM_CONFIG12__CORR_LD_bm    0x00000008u
#define SYSTEM_CONFIG12__CORR_LD_bc    1u
#define SYSTEM_CONFIG12__IPL_EN_bp    4u
#define SYSTEM_CONFIG12__IPL_EN_bm    0x00000030u
#define SYSTEM_CONFIG12__IPL_EN_bc    2u
#define SYSTEM_CONFIG12__FD8_0_bp    6u
#define SYSTEM_CONFIG12__FD8_0_bm    0x00007FC0u
#define SYSTEM_CONFIG12__FD8_0_bc    9u
#define SYSTEM_CONFIG12__FD9_bp    15u
#define SYSTEM_CONFIG12__FD9_bm    0x00008000u
#define SYSTEM_CONFIG12__FD9_bc    1u
#define SYSTEM_CONFIG12__FIFO_EN_bp    16u
#define SYSTEM_CONFIG12__FIFO_EN_bm    0x00010000u
#define SYSTEM_CONFIG12__FIFO_EN_bc    1u
#define SYSTEM_CONFIG12__PTR_AUTO_bp    18u
#define SYSTEM_CONFIG12__PTR_AUTO_bm    0x00040000u
#define SYSTEM_CONFIG12__PTR_AUTO_bc    1u
#define SYSTEM_CONFIG12__PTR_DLY_bp    19u
#define SYSTEM_CONFIG12__PTR_DLY_bm    0x00180000u
#define SYSTEM_CONFIG12__PTR_DLY_bc    2u
#define SYSTEM_CONFIG12__TST_EN_I_bp    22u
#define SYSTEM_CONFIG12__TST_EN_I_bm    0x00400000u
#define SYSTEM_CONFIG12__TST_EN_I_bc    1u
#define SYSTEM_CONFIG12__TST_EN_Q_bp    23u
#define SYSTEM_CONFIG12__TST_EN_Q_bm    0x00800000u
#define SYSTEM_CONFIG12__TST_EN_Q_bc    1u

/*
 * Register: SYSTEM_CONFIG13
 *   Offset is absolute
 */
#define SYSTEM_CONFIG13_REG_OFFSET    0x00000034u

#define SYSTEM_CONFIG13__OFF_I_bp    0u
#define SYSTEM_CONFIG13__OFF_I_bm    0x00000FFFu
#define SYSTEM_CONFIG13__OFF_I_bc    12u
#define SYSTEM_CONFIG13__OFF_Q_bp    16u
#define SYSTEM_CONFIG13__OFF_Q_bm    0x0FFF0000u
#define SYSTEM_CONFIG13__OFF_Q_bc    12u

/*
 * Register: SYSTEM_CONFIG14
 *   Offset is absolute
 */
#define SYSTEM_CONFIG14_REG_OFFSET    0x00000038u

#define SYSTEM_CONFIG14__MCORR0_bp    0u
#define SYSTEM_CONFIG14__MCORR0_bm    0x00001FFFu
#define SYSTEM_CONFIG14__MCORR0_bc    13u
#define SYSTEM_CONFIG14__MCORR1_bp    16u
#define SYSTEM_CONFIG14__MCORR1_bm    0x1FFF0000u
#define SYSTEM_CONFIG14__MCORR1_bc    13u

/*
 * Register: SYSTEM_CONFIG15
 *   Offset is absolute
 */
#define SYSTEM_CONFIG15_REG_OFFSET    0x0000003Cu

#define SYSTEM_CONFIG15__MCORR2_bp    0u
#define SYSTEM_CONFIG15__MCORR2_bm    0x00001FFFu
#define SYSTEM_CONFIG15__MCORR2_bc    13u
#define SYSTEM_CONFIG15__MCORR3_bp    16u
#define SYSTEM_CONFIG15__MCORR3_bm    0x1FFF0000u
#define SYSTEM_CONFIG15__MCORR3_bc    13u

/*
 * Register: SYSTEM_CONFIG16
 *   Offset is absolute
 */
#define SYSTEM_CONFIG16_REG_OFFSET    0x00000040u

#define SYSTEM_CONFIG16__AWGC_EN_bp    0u
#define SYSTEM_CONFIG16__AWGC_EN_bm    0x00000001u
#define SYSTEM_CONFIG16__AWGC_EN_bc    1u
#define SYSTEM_CONFIG16__ECC_DISABLE_bp    1u
#define SYSTEM_CONFIG16__ECC_DISABLE_bm    0x00000002u
#define SYSTEM_CONFIG16__ECC_DISABLE_bc    1u
#define SYSTEM_CONFIG16__REPAIR_DISABLE_bp    2u
#define SYSTEM_CONFIG16__REPAIR_DISABLE_bm    0x00000004u
#define SYSTEM_CONFIG16__REPAIR_DISABLE_bc    1u
#define SYSTEM_CONFIG16__TVEC_EN_FCE_bp    3u
#define SYSTEM_CONFIG16__TVEC_EN_FCE_bm    0x00000008u
#define SYSTEM_CONFIG16__TVEC_EN_FCE_bc    1u
#define SYSTEM_CONFIG16__MODE_bp    4u
#define SYSTEM_CONFIG16__MODE_bm    0x00000030u
#define SYSTEM_CONFIG16__MODE_bc    2u
#define SYSTEM_CONFIG16__RUN_bp    8u
#define SYSTEM_CONFIG16__RUN_bm    0x00000300u
#define SYSTEM_CONFIG16__RUN_bc    2u
#define SYSTEM_CONFIG16__CRC_RUN_bp    10u
#define SYSTEM_CONFIG16__CRC_RUN_bm    0x00000C00u
#define SYSTEM_CONFIG16__CRC_RUN_bc    2u
#define SYSTEM_CONFIG16__IT_STA_bp    24u
#define SYSTEM_CONFIG16__IT_STA_bm    0x01000000u
#define SYSTEM_CONFIG16__IT_STA_bc    1u
#define SYSTEM_CONFIG16__ITE_bp    25u
#define SYSTEM_CONFIG16__ITE_bm    0x02000000u
#define SYSTEM_CONFIG16__ITE_bc    1u

/*
 * Register: SYSTEM_CONFIG17
 *   Offset is absolute
 */
#define SYSTEM_CONFIG17_REG_OFFSET    0x00000044u

#define SYSTEM_CONFIG17__BASE_ADD0_bp    0u
#define SYSTEM_CONFIG17__BASE_ADD0_bm    0x00007FFFu
#define SYSTEM_CONFIG17__BASE_ADD0_bc    15u

/*
 * Register: SYSTEM_CONFIG18
 *   Offset is absolute
 */
#define SYSTEM_CONFIG18_REG_OFFSET    0x00000048u

#define SYSTEM_CONFIG18__LOOP_BASE_ADD0_bp    0u
#define SYSTEM_CONFIG18__LOOP_BASE_ADD0_bm    0x00007FFFu
#define SYSTEM_CONFIG18__LOOP_BASE_ADD0_bc    15u

/*
 * Register: SYSTEM_CONFIG19
 *   Offset is absolute
 */
#define SYSTEM_CONFIG19_REG_OFFSET    0x0000004Cu

#define SYSTEM_CONFIG19__LOOP_TOP_ADD0_bp    0u
#define SYSTEM_CONFIG19__LOOP_TOP_ADD0_bm    0x00007FFFu
#define SYSTEM_CONFIG19__LOOP_TOP_ADD0_bc    15u

/*
 * Register: SYSTEM_CONFIG20
 *   Offset is absolute
 */
#define SYSTEM_CONFIG20_REG_OFFSET    0x00000050u

#define SYSTEM_CONFIG20__TOP_ADD0_bp    0u
#define SYSTEM_CONFIG20__TOP_ADD0_bm    0x00007FFFu
#define SYSTEM_CONFIG20__TOP_ADD0_bc    15u

/*
 * Register: SYSTEM_CONFIG21
 *   Offset is absolute
 */
#define SYSTEM_CONFIG21_REG_OFFSET    0x00000054u

#define SYSTEM_CONFIG21__LOOP_CNT0_bp    0u
#define SYSTEM_CONFIG21__LOOP_CNT0_bm    0x00FFFFFFu
#define SYSTEM_CONFIG21__LOOP_CNT0_bc    24u

/*
 * Register: SYSTEM_CONFIG22
 *   Offset is absolute
 */
#define SYSTEM_CONFIG22_REG_OFFSET    0x00000058u

#define SYSTEM_CONFIG22__DATA0_bp    0u
#define SYSTEM_CONFIG22__DATA0_bm    0x00FFFFFFu
#define SYSTEM_CONFIG22__DATA0_bc    24u

/*
 * Register: RESERVED23
 *   Offset is absolute
 */
#define RESERVED23_REG_OFFSET    0x0000005Cu


/*
 * Register: RESERVED24
 *   Offset is absolute
 */
#define RESERVED24_REG_OFFSET    0x00000060u


/*
 * Register: SYSTEM_CONFIG25
 *   Offset is absolute
 */
#define SYSTEM_CONFIG25_REG_OFFSET    0x00000064u

#define SYSTEM_CONFIG25__BASE_ADD1_bp    0u
#define SYSTEM_CONFIG25__BASE_ADD1_bm    0x00007FFFu
#define SYSTEM_CONFIG25__BASE_ADD1_bc    15u

/*
 * Register: SYSTEM_CONFIG26
 *   Offset is absolute
 */
#define SYSTEM_CONFIG26_REG_OFFSET    0x00000068u

#define SYSTEM_CONFIG26__LOOP_BASE_ADD1_bp    0u
#define SYSTEM_CONFIG26__LOOP_BASE_ADD1_bm    0x00007FFFu
#define SYSTEM_CONFIG26__LOOP_BASE_ADD1_bc    15u

/*
 * Register: SYSTEM_CONFIG27
 *   Offset is absolute
 */
#define SYSTEM_CONFIG27_REG_OFFSET    0x0000006Cu

#define SYSTEM_CONFIG27__LOOP_TOP_ADD1_bp    0u
#define SYSTEM_CONFIG27__LOOP_TOP_ADD1_bm    0x00007FFFu
#define SYSTEM_CONFIG27__LOOP_TOP_ADD1_bc    15u

/*
 * Register: SYSTEM_CONFIG28
 *   Offset is absolute
 */
#define SYSTEM_CONFIG28_REG_OFFSET    0x00000070u

#define SYSTEM_CONFIG28__TOP_ADD1_bp    0u
#define SYSTEM_CONFIG28__TOP_ADD1_bm    0x00007FFFu
#define SYSTEM_CONFIG28__TOP_ADD1_bc    15u

/*
 * Register: SYSTEM_CONFIG29
 *   Offset is absolute
 */
#define SYSTEM_CONFIG29_REG_OFFSET    0x00000074u

#define SYSTEM_CONFIG29__LOOP_CNT1_bp    0u
#define SYSTEM_CONFIG29__LOOP_CNT1_bm    0x00FFFFFFu
#define SYSTEM_CONFIG29__LOOP_CNT1_bc    24u

/*
 * Register: SYSTEM_CONFIG30
 *   Offset is absolute
 */
#define SYSTEM_CONFIG30_REG_OFFSET    0x00000078u

#define SYSTEM_CONFIG30__DATA1_bp    0u
#define SYSTEM_CONFIG30__DATA1_bm    0x00FFFFFFu
#define SYSTEM_CONFIG30__DATA1_bc    24u

/*
 * Register: RESERVED31
 *   Offset is absolute
 */
#define RESERVED31_REG_OFFSET    0x0000007Cu


/*
 * Register: SYSTEM_STATUS32
 *   Offset is absolute
 */
#define SYSTEM_STATUS32_REG_OFFSET    0x00000080u

#define SYSTEM_STATUS32__DACPLL_LOCKP_bp    0u
#define SYSTEM_STATUS32__DACPLL_LOCKP_bm    0x00000001u
#define SYSTEM_STATUS32__DACPLL_LOCKP_bc    1u

/*
 * Register: SYSTEM_STATUS33
 *   Offset is absolute
 */
#define SYSTEM_STATUS33_REG_OFFSET    0x00000084u

#define SYSTEM_STATUS33__PLL_BIST_COUNT_VAL_bp    0u
#define SYSTEM_STATUS33__PLL_BIST_COUNT_VAL_bm    0x0000FFFFu
#define SYSTEM_STATUS33__PLL_BIST_COUNT_VAL_bc    16u
#define SYSTEM_STATUS33__PLL_BIST_BEND_bp    16u
#define SYSTEM_STATUS33__PLL_BIST_BEND_bm    0x00010000u
#define SYSTEM_STATUS33__PLL_BIST_BEND_bc    1u
#define SYSTEM_STATUS33__PLL_BIST_BAD_bp    17u
#define SYSTEM_STATUS33__PLL_BIST_BAD_bm    0x00020000u
#define SYSTEM_STATUS33__PLL_BIST_BAD_bc    1u

/*
 * Register: RESERVED34
 *   Offset is absolute
 */
#define RESERVED34_REG_OFFSET    0x00000088u


/*
 * Register: RESERVED35
 *   Offset is absolute
 */
#define RESERVED35_REG_OFFSET    0x0000008Cu


/*
 * Register: SYSTEM_STATUS36
 *   Offset is absolute
 */
#define SYSTEM_STATUS36_REG_OFFSET    0x00000090u

#define SYSTEM_STATUS36__FINISH_CAL_bp    0u
#define SYSTEM_STATUS36__FINISH_CAL_bm    0x00000001u
#define SYSTEM_STATUS36__FINISH_CAL_bc    1u

/*
 * Register: SYSTEM_STATUS37
 *   Offset is absolute
 */
#define SYSTEM_STATUS37_REG_OFFSET    0x00000094u

#define SYSTEM_STATUS37__WSO_bp    0u
#define SYSTEM_STATUS37__WSO_bm    0x00000001u
#define SYSTEM_STATUS37__WSO_bc    1u

/*
 * Register: RESERVED38
 *   Offset is absolute
 */
#define RESERVED38_REG_OFFSET    0x00000098u


/*
 * Register: RESERVED39
 *   Offset is absolute
 */
#define RESERVED39_REG_OFFSET    0x0000009Cu


/*
 * Register: RESERVED40
 *   Offset is absolute
 */
#define RESERVED40_REG_OFFSET    0x000000A0u


/*
 * Register: RESERVED41
 *   Offset is absolute
 */
#define RESERVED41_REG_OFFSET    0x000000A4u


/*
 * Register: RESERVED42
 *   Offset is absolute
 */
#define RESERVED42_REG_OFFSET    0x000000A8u


/*
 * Register: RESERVED43
 *   Offset is absolute
 */
#define RESERVED43_REG_OFFSET    0x000000ACu


/*
 * Register: SYSTEM_STATUS44
 *   Offset is absolute
 */
#define SYSTEM_STATUS44_REG_OFFSET    0x000000B0u

#define SYSTEM_STATUS44__FIFO_ERR_bp    0u
#define SYSTEM_STATUS44__FIFO_ERR_bm    0x00000001u
#define SYSTEM_STATUS44__FIFO_ERR_bc    1u

/*
 * Register: RESERVED45
 *   Offset is absolute
 */
#define RESERVED45_REG_OFFSET    0x000000B4u


/*
 * Register: RESERVED46
 *   Offset is absolute
 */
#define RESERVED46_REG_OFFSET    0x000000B8u


/*
 * Register: RESERVED47
 *   Offset is absolute
 */
#define RESERVED47_REG_OFFSET    0x000000BCu


/*
 * Register: SYSTEM_STATUS48
 *   Offset is absolute
 */
#define SYSTEM_STATUS48_REG_OFFSET    0x000000C0u

#define SYSTEM_STATUS48__RUNNING_bp    0u
#define SYSTEM_STATUS48__RUNNING_bm    0x00000003u
#define SYSTEM_STATUS48__RUNNING_bc    2u
#define SYSTEM_STATUS48__SINGLE_ERR0_bp    2u
#define SYSTEM_STATUS48__SINGLE_ERR0_bm    0x00000004u
#define SYSTEM_STATUS48__SINGLE_ERR0_bc    1u
#define SYSTEM_STATUS48__DOUBLE_ERR0_bp    3u
#define SYSTEM_STATUS48__DOUBLE_ERR0_bm    0x00000008u
#define SYSTEM_STATUS48__DOUBLE_ERR0_bc    1u
#define SYSTEM_STATUS48__SINGLE_ERR1_bp    4u
#define SYSTEM_STATUS48__SINGLE_ERR1_bm    0x00000010u
#define SYSTEM_STATUS48__SINGLE_ERR1_bc    1u
#define SYSTEM_STATUS48__DOUBLE_ERR1_bp    5u
#define SYSTEM_STATUS48__DOUBLE_ERR1_bm    0x00000020u
#define SYSTEM_STATUS48__DOUBLE_ERR1_bc    1u

/*
 * Register: RESERVED49
 *   Offset is absolute
 */
#define RESERVED49_REG_OFFSET    0x000000C4u


/*
 * Register: SYSTEM_STATUS50
 *   Offset is absolute
 */
#define SYSTEM_STATUS50_REG_OFFSET    0x000000C8u

#define SYSTEM_STATUS50__PTR0_bp    0u
#define SYSTEM_STATUS50__PTR0_bm    0x00007FFFu
#define SYSTEM_STATUS50__PTR0_bc    15u

/*
 * Register: SYSTEM_STATUS51
 *   Offset is absolute
 */
#define SYSTEM_STATUS51_REG_OFFSET    0x000000CCu

#define SYSTEM_STATUS51__CRC_REM0_bp    0u
#define SYSTEM_STATUS51__CRC_REM0_bm    0x00FFFFFFu
#define SYSTEM_STATUS51__CRC_REM0_bc    24u

/*
 * Register: RESERVED52
 *   Offset is absolute
 */
#define RESERVED52_REG_OFFSET    0x000000D0u


/*
 * Register: RESERVED53
 *   Offset is absolute
 */
#define RESERVED53_REG_OFFSET    0x000000D4u


/*
 * Register: SYSTEM_STATUS54
 *   Offset is absolute
 */
#define SYSTEM_STATUS54_REG_OFFSET    0x000000D8u

#define SYSTEM_STATUS54__PTR1_bp    0u
#define SYSTEM_STATUS54__PTR1_bm    0x00007FFFu
#define SYSTEM_STATUS54__PTR1_bc    15u

/*
 * Register: SYSTEM_STATUS55
 *   Offset is absolute
 */
#define SYSTEM_STATUS55_REG_OFFSET    0x000000DCu

#define SYSTEM_STATUS55__CRC_REM1_bp    0u
#define SYSTEM_STATUS55__CRC_REM1_bm    0x00FFFFFFu
#define SYSTEM_STATUS55__CRC_REM1_bc    24u

/*
 * Top-level struct
 */
typedef struct {
    uint32_t SYSTEM_CONFIG0;
    uint32_t RESERVED1;
    uint32_t SYSTEM_CONFIG2;
    uint32_t SYSTEM_CONFIG3;
    uint32_t SYSTEM_CONFIG4;
    uint32_t RESERVED5;
    uint32_t SYSTEM_CONFIG6;
    uint32_t RESERVED7;
    uint32_t SYSTEM_CONFIG8;
    uint32_t SYSTEM_CONFIG9;
    uint32_t RESERVED10;
    uint32_t RESERVED11;
    uint32_t SYSTEM_CONFIG12;
    uint32_t SYSTEM_CONFIG13;
    uint32_t SYSTEM_CONFIG14;
    uint32_t SYSTEM_CONFIG15;
    uint32_t SYSTEM_CONFIG16;
    uint32_t SYSTEM_CONFIG17;
    uint32_t SYSTEM_CONFIG18;
    uint32_t SYSTEM_CONFIG19;
    uint32_t SYSTEM_CONFIG20;
    uint32_t SYSTEM_CONFIG21;
    uint32_t SYSTEM_CONFIG22;
    uint32_t RESERVED23;
    uint32_t RESERVED24;
    uint32_t SYSTEM_CONFIG25;
    uint32_t SYSTEM_CONFIG26;
    uint32_t SYSTEM_CONFIG27;
    uint32_t SYSTEM_CONFIG28;
    uint32_t SYSTEM_CONFIG29;
    uint32_t SYSTEM_CONFIG30;
    uint32_t RESERVED31;
    uint32_t SYSTEM_STATUS32;
    uint32_t SYSTEM_STATUS33;
    uint32_t RESERVED34;
    uint32_t RESERVED35;
    uint32_t SYSTEM_STATUS36;
    uint32_t SYSTEM_STATUS37;
    uint32_t RESERVED38;
    uint32_t RESERVED39;
    uint32_t RESERVED40;
    uint32_t RESERVED41;
    uint32_t RESERVED42;
    uint32_t RESERVED43;
    uint32_t SYSTEM_STATUS44;
    uint32_t RESERVED45;
    uint32_t RESERVED46;
    uint32_t RESERVED47;
    uint32_t SYSTEM_STATUS48;
    uint32_t RESERVED49;
    uint32_t SYSTEM_STATUS50;
    uint32_t SYSTEM_STATUS51;
    uint32_t RESERVED52;
    uint32_t RESERVED53;
    uint32_t SYSTEM_STATUS54;
    uint32_t SYSTEM_STATUS55;
    uint8_t reserved_0xe0_0xff[0x20];
} MODEM_DAC_IF_SYSCFG_DAC_INTERFACE_t;

#ifdef __cplusplus
} /* namespace CatsonVersion1Registers */
#endif

#endif /* MODEM_DAC_IF__H */