// NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
// This is an automatically generated file by joseph.rahmeh on Tue Oct 15 13:13:16 PDT 2019
//
// cmd:    swerv -snapshot=default -ahb_lite
//
#define RV_INST_ACCESS_MASK5 0xffffffff
#define RV_DATA_ACCESS_ENABLE4 0x0
#define RV_INST_ACCESS_ENABLE3 0x0
#define RV_INST_ACCESS_ENABLE0 0x0
#define RV_INST_ACCESS_MASK3 0xffffffff
#define RV_DATA_ACCESS_ENABLE5 0x0
#define RV_DATA_ACCESS_MASK5 0xffffffff
#define RV_DATA_ACCESS_ADDR3 0x00000000
#define RV_INST_ACCESS_ENABLE7 0x0
#define RV_DATA_ACCESS_ADDR6 0x00000000
#define RV_INST_ACCESS_MASK7 0xffffffff
#define RV_INST_ACCESS_ENABLE6 0x0
#define RV_INST_ACCESS_ENABLE5 0x0
#define RV_DATA_ACCESS_ADDR4 0x00000000
#define RV_DATA_ACCESS_ADDR7 0x00000000
#define RV_DATA_ACCESS_MASK3 0xffffffff
#define RV_INST_ACCESS_MASK4 0xffffffff
#define RV_DATA_ACCESS_ADDR1 0x00000000
#define RV_INST_ACCESS_ADDR4 0x00000000
#define RV_INST_ACCESS_ADDR3 0x00000000
#define RV_DATA_ACCESS_ENABLE1 0x0
#define RV_DATA_ACCESS_ADDR0 0x00000000
#define RV_DATA_ACCESS_MASK0 0xffffffff
#define RV_DATA_ACCESS_MASK6 0xffffffff
#define RV_INST_ACCESS_ADDR7 0x00000000
#define RV_INST_ACCESS_MASK0 0xffffffff
#define RV_DATA_ACCESS_ADDR5 0x00000000
#define RV_DATA_ACCESS_ADDR2 0x00000000
#define RV_DATA_ACCESS_MASK4 0xffffffff
#define RV_DATA_ACCESS_MASK1 0xffffffff
#define RV_INST_ACCESS_ADDR0 0x00000000
#define RV_INST_ACCESS_ADDR2 0x00000000
#define RV_DATA_ACCESS_ENABLE0 0x0
#define RV_DATA_ACCESS_ENABLE2 0x0
#define RV_DATA_ACCESS_ENABLE7 0x0
#define RV_INST_ACCESS_ENABLE4 0x0
#define RV_DATA_ACCESS_MASK7 0xffffffff
#define RV_INST_ACCESS_ADDR5 0x00000000
#define RV_INST_ACCESS_ENABLE1 0x0
#define RV_DATA_ACCESS_MASK2 0xffffffff
#define RV_INST_ACCESS_MASK6 0xffffffff
#define RV_DATA_ACCESS_ENABLE3 0x0
#define RV_INST_ACCESS_ADDR6 0x00000000
#define RV_INST_ACCESS_MASK2 0xffffffff
#define RV_INST_ACCESS_ENABLE2 0x0
#define RV_DATA_ACCESS_ENABLE6 0x0
#define RV_INST_ACCESS_ADDR1 0x00000000
#define RV_INST_ACCESS_MASK1 0xffffffff
#define RV_IFU_BUS_TAG 3
#define RV_LSU_BUS_TAG 4
#define RV_SB_BUS_TAG 1
#define RV_DMA_BUS_TAG 1
#define RV_DCCM_WIDTH_BITS 2
#define RV_DCCM_REGION 0xf
#define RV_DCCM_RESERVED 0x1000
#define RV_DCCM_SIZE 64
#define RV_DCCM_DATA_WIDTH 32
#define RV_DCCM_NUM_BANKS_8
#define RV_DCCM_FDATA_WIDTH 39
#define RV_DCCM_BYTE_WIDTH 4
#define RV_DCCM_DATA_CELL ram_2048x39
#define RV_DCCM_ENABLE 1
#define RV_DCCM_BITS 16
#define RV_DCCM_OFFSET 0x40000
#define RV_DCCM_ECC_WIDTH 7
#define RV_DCCM_SIZE_64
#define RV_DCCM_ROWS 2048
#define RV_DCCM_BANK_BITS 3
#define RV_DCCM_NUM_BANKS 8
#define RV_DCCM_INDEX_BITS 11
#define RV_LSU_SB_BITS 16
#define RV_DCCM_EADR 0xf004ffff
#define RV_DCCM_SADR 0xf0040000
#ifndef RV_RESET_VEC
#define RV_RESET_VEC 0x80000000
#endif
#define RV_XLEN 32
#define RV_TARGET default
#define RV_ICCM_NUM_BANKS 8
#define RV_ICCM_BITS 19
#define RV_ICCM_BANK_BITS 3
#define RV_ICCM_ROWS 16384
#define RV_ICCM_OFFSET 0xe000000
#define RV_ICCM_REGION 0xe
#define RV_ICCM_SADR 0xee000000
#define RV_ICCM_RESERVED 0x1000
#define RV_ICCM_DATA_CELL ram_16384x39
#define RV_ICCM_INDEX_BITS 14
#define RV_ICCM_NUM_BANKS_8
#define RV_ICCM_SIZE 512
#define RV_ICCM_EADR 0xee07ffff
#define RV_ICCM_SIZE_512
#define RV_EXTERNAL_PROG 0xb0000000
#define RV_EXTERNAL_DATA_1 0x00000000
#define RV_DEBUG_SB_MEM 0xb0580000
#define RV_EXTERNAL_DATA 0xc0580000
#define RV_SERIALIO 0xd0580000
#ifndef RV_NMI_VEC
#define RV_NMI_VEC 0x11110000
#endif
#define RV_PIC_BITS 15
#define RV_PIC_REGION 0xf
#define RV_PIC_INT_WORDS 1
#define RV_PIC_TOTAL_INT_PLUS1 9
#define RV_PIC_MEIP_OFFSET 0x1000
#define RV_PIC_BASE_ADDR 0xf00c0000
#define RV_PIC_MEIGWCTRL_OFFSET 0x4000
#define RV_PIC_MEIPL_OFFSET 0x0000
#define RV_PIC_TOTAL_INT 8
#define RV_PIC_SIZE 32
#define RV_PIC_MEIE_OFFSET 0x2000
#define RV_PIC_OFFSET 0xc0000
#define RV_PIC_MEIPT_OFFSET 0x3004
#define RV_PIC_MPICCFG_OFFSET 0x3000
#define RV_PIC_MEIGWCLR_OFFSET 0x5000
#define CLOCK_PERIOD 100
#define CPU_TOP `RV_TOP.swerv
#define TOP tb_top
#define RV_BUILD_AHB_LITE 1
#define RV_TOP `TOP.rvtop
#define DATAWIDTH 64
#define RV_STERR_ROLLBACK 0
#define RV_EXT_ADDRWIDTH 32
#define RV_EXT_DATAWIDTH 64
#define SDVT_AHB 1
#define RV_LDERR_ROLLBACK 1
#define ASSERT_ON
