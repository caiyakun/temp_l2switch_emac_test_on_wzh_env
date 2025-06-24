/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_SPI_MEM_REG_H_
#define _SOC_SPI_MEM_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define SPI_MEM_CMD_REG(i)          (REG_SPI_MEM_BASE(i) + 0x0)
/* SPI_MEM_FLASH_READ : R/W/SC ;bitpos:[31] ;default: 1'b0 ; */
/*description: Read flash enable. Read flash operation will be triggered when the bit is set. T
he bit will be cleared once the operation done. 1: enable 0: disable..*/
#define SPI_MEM_FLASH_READ    (BIT(31))
#define SPI_MEM_FLASH_READ_M  (BIT(31))
#define SPI_MEM_FLASH_READ_V  0x1
#define SPI_MEM_FLASH_READ_S  31
/* SPI_MEM_FLASH_WREN : R/W/SC ;bitpos:[30] ;default: 1'b0 ; */
/*description: Write flash enable.  Write enable command will be sent when the bit is set. The
bit will be cleared once the operation done. 1: enable 0: disable..*/
#define SPI_MEM_FLASH_WREN    (BIT(30))
#define SPI_MEM_FLASH_WREN_M  (BIT(30))
#define SPI_MEM_FLASH_WREN_V  0x1
#define SPI_MEM_FLASH_WREN_S  30
/* SPI_MEM_FLASH_WRDI : R/W/SC ;bitpos:[29] ;default: 1'b0 ; */
/*description: Write flash disable. Write disable command will be sent when the bit is set. The
 bit will be cleared once the operation done. 1: enable 0: disable..*/
#define SPI_MEM_FLASH_WRDI    (BIT(29))
#define SPI_MEM_FLASH_WRDI_M  (BIT(29))
#define SPI_MEM_FLASH_WRDI_V  0x1
#define SPI_MEM_FLASH_WRDI_S  29
/* SPI_MEM_FLASH_RDID : R/W/SC ;bitpos:[28] ;default: 1'b0 ; */
/*description: Read JEDEC ID . Read ID command will be sent when the bit is set. The bit will b
e cleared once the operation done. 1: enable 0: disable..*/
#define SPI_MEM_FLASH_RDID    (BIT(28))
#define SPI_MEM_FLASH_RDID_M  (BIT(28))
#define SPI_MEM_FLASH_RDID_V  0x1
#define SPI_MEM_FLASH_RDID_S  28
/* SPI_MEM_FLASH_RDSR : R/W/SC ;bitpos:[27] ;default: 1'b0 ; */
/*description: Read status register-1.  Read status operation will be triggered when the bit is
 set. The bit will be cleared once the operation done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_RDSR    (BIT(27))
#define SPI_MEM_FLASH_RDSR_M  (BIT(27))
#define SPI_MEM_FLASH_RDSR_V  0x1
#define SPI_MEM_FLASH_RDSR_S  27
/* SPI_MEM_FLASH_WRSR : R/W/SC ;bitpos:[26] ;default: 1'b0 ; */
/*description: Write status register enable.   Write status operation  will be triggered when t
he bit is set. The bit will be cleared once the operation done.1: enable 0: disa
ble..*/
#define SPI_MEM_FLASH_WRSR    (BIT(26))
#define SPI_MEM_FLASH_WRSR_M  (BIT(26))
#define SPI_MEM_FLASH_WRSR_V  0x1
#define SPI_MEM_FLASH_WRSR_S  26
/* SPI_MEM_FLASH_PP : R/W/SC ;bitpos:[25] ;default: 1'b0 ; */
/*description: Page program enable(1 byte ~256 bytes data to be programmed). Page program opera
tion  will be triggered when the bit is set. The bit will be cleared once the op
eration done .1: enable 0: disable..*/
#define SPI_MEM_FLASH_PP    (BIT(25))
#define SPI_MEM_FLASH_PP_M  (BIT(25))
#define SPI_MEM_FLASH_PP_V  0x1
#define SPI_MEM_FLASH_PP_S  25
/* SPI_MEM_FLASH_SE : R/W/SC ;bitpos:[24] ;default: 1'b0 ; */
/*description: Sector erase enable(4KB). Sector erase operation will be triggered when the bit
is set. The bit will be cleared once the operation done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_SE    (BIT(24))
#define SPI_MEM_FLASH_SE_M  (BIT(24))
#define SPI_MEM_FLASH_SE_V  0x1
#define SPI_MEM_FLASH_SE_S  24
/* SPI_MEM_FLASH_BE : R/W/SC ;bitpos:[23] ;default: 1'b0 ; */
/*description: Block erase enable(32KB) .  Block erase operation will be triggered when the bit
 is set. The bit will be cleared once the operation done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_BE    (BIT(23))
#define SPI_MEM_FLASH_BE_M  (BIT(23))
#define SPI_MEM_FLASH_BE_V  0x1
#define SPI_MEM_FLASH_BE_S  23
/* SPI_MEM_FLASH_CE : R/W/SC ;bitpos:[22] ;default: 1'b0 ; */
/*description: Chip erase enable. Chip erase operation will be triggered when the bit is set. T
he bit will be cleared once the operation done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_CE    (BIT(22))
#define SPI_MEM_FLASH_CE_M  (BIT(22))
#define SPI_MEM_FLASH_CE_V  0x1
#define SPI_MEM_FLASH_CE_S  22
/* SPI_MEM_FLASH_DP : R/W/SC ;bitpos:[21] ;default: 1'b0 ; */
/*description: Drive Flash into power down.  An operation will be triggered when the bit is set
. The bit will be cleared once the operation done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_DP    (BIT(21))
#define SPI_MEM_FLASH_DP_M  (BIT(21))
#define SPI_MEM_FLASH_DP_V  0x1
#define SPI_MEM_FLASH_DP_S  21
/* SPI_MEM_FLASH_RES : R/W/SC ;bitpos:[20] ;default: 1'b0 ; */
/*description: This bit combined with reg_resandres bit releases Flash from the power-down stat
e or high performance mode and obtains the devices ID. The bit will be cleared o
nce the operation done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_RES    (BIT(20))
#define SPI_MEM_FLASH_RES_M  (BIT(20))
#define SPI_MEM_FLASH_RES_V  0x1
#define SPI_MEM_FLASH_RES_S  20
/* SPI_MEM_FLASH_HPM : R/W/SC ;bitpos:[19] ;default: 1'b0 ; */
/*description: Drive Flash into high performance mode.  The bit will be cleared once the operat
ion done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_HPM    (BIT(19))
#define SPI_MEM_FLASH_HPM_M  (BIT(19))
#define SPI_MEM_FLASH_HPM_V  0x1
#define SPI_MEM_FLASH_HPM_S  19
/* SPI_MEM_USR : HRO ;bitpos:[18] ;default: 1'b0 ; */
/*description: SPI0 USR_CMD start bit, only used when SPI_MEM_AXI_REQ_EN is cleared.  An operat
ion will be triggered when the bit is set. The bit will be cleared once the oper
ation done.1: enable 0: disable..*/
#define SPI_MEM_USR    (BIT(18))
#define SPI_MEM_USR_M  (BIT(18))
#define SPI_MEM_USR_V  0x1
#define SPI_MEM_USR_S  18
/* SPI_MEM_FLASH_PE : R/W/SC ;bitpos:[17] ;default: 1'b0 ; */
/*description: In user mode, it is set to indicate that program/erase operation will be trigger
ed. The bit is combined with spi_mem_usr bit. The bit will be cleared once the o
peration done.1: enable 0: disable..*/
#define SPI_MEM_FLASH_PE    (BIT(17))
#define SPI_MEM_FLASH_PE_M  (BIT(17))
#define SPI_MEM_FLASH_PE_V  0x1
#define SPI_MEM_FLASH_PE_S  17
/* SPI_MEM_SLV_ST : RO ;bitpos:[7:4] ;default: 4'b0 ; */
/*description: The current status of SPI0 slave FSM: mspi_st. 0: idle state, 1: preparation sta
te, 2: send command state, 3: send address state, 4: wait state, 5: read data st
ate, 6:write data state, 7: done state, 8: read data end state..*/
#define SPI_MEM_SLV_ST    0x0000000F
#define SPI_MEM_SLV_ST_M  ((SPI_MEM_SLV_ST_V)<<(SPI_MEM_SLV_ST_S))
#define SPI_MEM_SLV_ST_V  0xF
#define SPI_MEM_SLV_ST_S  4
/* SPI_MEM_MST_ST : RO ;bitpos:[3:0] ;default: 4'b0 ; */
/*description: The current status of SPI0 master FSM: spi0_mst_st. 0: idle state, 1:SPI0_GRANT
, 2: program/erase suspend state, 3: SPI0 read data state, 4: wait cache/EDMA se
nt data is stored in SPI0 TX FIFO, 5: SPI0 write data state..*/
#define SPI_MEM_MST_ST    0x0000000F
#define SPI_MEM_MST_ST_M  ((SPI_MEM_MST_ST_V)<<(SPI_MEM_MST_ST_S))
#define SPI_MEM_MST_ST_V  0xF
#define SPI_MEM_MST_ST_S  0

#define SPI_MEM_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x4)
/* SPI_MEM_USR_ADDR_VALUE : HRO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: In SPI0 USR_CMD mode when SPI_MEM_USR is set, it is the memory address..*/
#define SPI_MEM_USR_ADDR_VALUE    0xFFFFFFFF
#define SPI_MEM_USR_ADDR_VALUE_M  ((SPI_MEM_USR_ADDR_VALUE_V)<<(SPI_MEM_USR_ADDR_VALUE_S))
#define SPI_MEM_USR_ADDR_VALUE_V  0xFFFFFFFF
#define SPI_MEM_USR_ADDR_VALUE_S  0

#define SPI_MEM_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x8)
/* SPI_MEM_DATA_IE_ALWAYS_ON : R/W ;bitpos:[31] ;default: 1'b1 ; */
/*description: When accesses to flash, 1: the IE signals of pads connected to SPI_IO[7:0] are a
lways 1. 0: Others..*/
#define SPI_MEM_DATA_IE_ALWAYS_ON    (BIT(31))
#define SPI_MEM_DATA_IE_ALWAYS_ON_M  (BIT(31))
#define SPI_MEM_DATA_IE_ALWAYS_ON_V  0x1
#define SPI_MEM_DATA_IE_ALWAYS_ON_S  31
/* SPI_MEM_DQS_IE_ALWAYS_ON : HRO ;bitpos:[30] ;default: 1'b0 ; */
/*description: When accesses to flash, 1: the IE signals of pads connected to SPI_DQS are alway
s 1. 0: Others..*/
#define SPI_MEM_DQS_IE_ALWAYS_ON    (BIT(30))
#define SPI_MEM_DQS_IE_ALWAYS_ON_M  (BIT(30))
#define SPI_MEM_DQS_IE_ALWAYS_ON_V  0x1
#define SPI_MEM_DQS_IE_ALWAYS_ON_S  30
/* SPI_MEM_FREAD_QIO : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: In the read operations address phase and read-data phase apply 4 signals. 1: ena
ble 0: disable..*/
#define SPI_MEM_FREAD_QIO    (BIT(24))
#define SPI_MEM_FREAD_QIO_M  (BIT(24))
#define SPI_MEM_FREAD_QIO_V  0x1
#define SPI_MEM_FREAD_QIO_S  24
/* SPI_MEM_FREAD_DIO : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: In the read operations address phase and read-data phase apply 2 signals. 1: ena
ble 0: disable..*/
#define SPI_MEM_FREAD_DIO    (BIT(23))
#define SPI_MEM_FREAD_DIO_M  (BIT(23))
#define SPI_MEM_FREAD_DIO_V  0x1
#define SPI_MEM_FREAD_DIO_S  23
/* SPI_MEM_WRSR_2B : R/W ;bitpos:[22] ;default: 1'b0 ; */
/*description: two bytes data will be written to status register when it is set. 1: enable 0: d
isable..*/
#define SPI_MEM_WRSR_2B    (BIT(22))
#define SPI_MEM_WRSR_2B_M  (BIT(22))
#define SPI_MEM_WRSR_2B_V  0x1
#define SPI_MEM_WRSR_2B_S  22
/* SPI_MEM_WP_REG : R/W ;bitpos:[21] ;default: 1'b1 ; */
/*description: Write protect signal output when SPI is idle.  1: output high, 0: output low..*/
#define SPI_MEM_WP_REG    (BIT(21))
#define SPI_MEM_WP_REG_M  (BIT(21))
#define SPI_MEM_WP_REG_V  0x1
#define SPI_MEM_WP_REG_S  21
/* SPI_MEM_FREAD_QUAD : R/W ;bitpos:[20] ;default: 1'b0 ; */
/*description: In the read operations read-data phase apply 4 signals. 1: enable 0: disable..*/
#define SPI_MEM_FREAD_QUAD    (BIT(20))
#define SPI_MEM_FREAD_QUAD_M  (BIT(20))
#define SPI_MEM_FREAD_QUAD_V  0x1
#define SPI_MEM_FREAD_QUAD_S  20
/* SPI_MEM_D_POL : R/W ;bitpos:[19] ;default: 1'b1 ; */
/*description: The bit is used to set MOSI line polarity, 1: high 0, low.*/
#define SPI_MEM_D_POL    (BIT(19))
#define SPI_MEM_D_POL_M  (BIT(19))
#define SPI_MEM_D_POL_V  0x1
#define SPI_MEM_D_POL_S  19
/* SPI_MEM_Q_POL : R/W ;bitpos:[18] ;default: 1'b1 ; */
/*description: The bit is used to set MISO line polarity, 1: high 0, low.*/
#define SPI_MEM_Q_POL    (BIT(18))
#define SPI_MEM_Q_POL_M  (BIT(18))
#define SPI_MEM_Q_POL_V  0x1
#define SPI_MEM_Q_POL_S  18
/* SPI_MEM_RESANDRES : R/W ;bitpos:[15] ;default: 1'b1 ; */
/*description: The Device ID is read out to SPI_MEM_RD_STATUS register,  this bit combine with
spi_mem_flash_res bit. 1: enable 0: disable..*/
#define SPI_MEM_RESANDRES    (BIT(15))
#define SPI_MEM_RESANDRES_M  (BIT(15))
#define SPI_MEM_RESANDRES_V  0x1
#define SPI_MEM_RESANDRES_S  15
/* SPI_MEM_FREAD_DUAL : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: In the read operations, read-data phase apply 2 signals. 1: enable 0: disable..*/
#define SPI_MEM_FREAD_DUAL    (BIT(14))
#define SPI_MEM_FREAD_DUAL_M  (BIT(14))
#define SPI_MEM_FREAD_DUAL_V  0x1
#define SPI_MEM_FREAD_DUAL_S  14
/* SPI_MEM_FASTRD_MODE : R/W ;bitpos:[13] ;default: 1'b1 ; */
/*description: This bit enable the bits: SPI_MEM_FREAD_QIO, SPI_MEM_FREAD_DIO, SPI_MEM_FREAD_QO
UT and SPI_MEM_FREAD_DOUT. 1: enable 0: disable..*/
#define SPI_MEM_FASTRD_MODE    (BIT(13))
#define SPI_MEM_FASTRD_MODE_M  (BIT(13))
#define SPI_MEM_FASTRD_MODE_V  0x1
#define SPI_MEM_FASTRD_MODE_S  13
/* SPI_MEM_TX_CRC_EN : HRO ;bitpos:[11] ;default: 1'b0 ; */
/*description: For SPI1,  enable crc32 when writing encrypted data to flash. 1: enable 0:disabl
e.*/
#define SPI_MEM_TX_CRC_EN    (BIT(11))
#define SPI_MEM_TX_CRC_EN_M  (BIT(11))
#define SPI_MEM_TX_CRC_EN_V  0x1
#define SPI_MEM_TX_CRC_EN_S  11
/* SPI_MEM_FCS_CRC_EN : HRO ;bitpos:[10] ;default: 1'b0 ; */
/*description: For SPI1,  initialize crc32 module before writing encrypted data to flash. Activ
e low..*/
#define SPI_MEM_FCS_CRC_EN    (BIT(10))
#define SPI_MEM_FCS_CRC_EN_M  (BIT(10))
#define SPI_MEM_FCS_CRC_EN_V  0x1
#define SPI_MEM_FCS_CRC_EN_S  10
/* SPI_MEM_FCMD_OCT : HRO ;bitpos:[9] ;default: 1'b0 ; */
/*description: Apply 8 signals during command phase 1:enable 0: disable.*/
#define SPI_MEM_FCMD_OCT    (BIT(9))
#define SPI_MEM_FCMD_OCT_M  (BIT(9))
#define SPI_MEM_FCMD_OCT_V  0x1
#define SPI_MEM_FCMD_OCT_S  9
/* SPI_MEM_FCMD_QUAD : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Apply 4 signals during command phase 1:enable 0: disable.*/
#define SPI_MEM_FCMD_QUAD    (BIT(8))
#define SPI_MEM_FCMD_QUAD_M  (BIT(8))
#define SPI_MEM_FCMD_QUAD_V  0x1
#define SPI_MEM_FCMD_QUAD_S  8
/* SPI_MEM_FADDR_OCT : HRO ;bitpos:[6] ;default: 1'b0 ; */
/*description: Apply 8 signals during address phase 1:enable 0: disable.*/
#define SPI_MEM_FADDR_OCT    (BIT(6))
#define SPI_MEM_FADDR_OCT_M  (BIT(6))
#define SPI_MEM_FADDR_OCT_V  0x1
#define SPI_MEM_FADDR_OCT_S  6
/* SPI_MEM_FDIN_OCT : HRO ;bitpos:[5] ;default: 1'b0 ; */
/*description: Apply 8 signals during read-data phase 1:enable 0: disable.*/
#define SPI_MEM_FDIN_OCT    (BIT(5))
#define SPI_MEM_FDIN_OCT_M  (BIT(5))
#define SPI_MEM_FDIN_OCT_V  0x1
#define SPI_MEM_FDIN_OCT_S  5
/* SPI_MEM_FDOUT_OCT : HRO ;bitpos:[4] ;default: 1'b0 ; */
/*description: Apply 8 signals during write-data phase 1:enable 0: disable.*/
#define SPI_MEM_FDOUT_OCT    (BIT(4))
#define SPI_MEM_FDOUT_OCT_M  (BIT(4))
#define SPI_MEM_FDOUT_OCT_V  0x1
#define SPI_MEM_FDOUT_OCT_S  4
/* SPI_MEM_FDUMMY_WOUT : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description: In an MSPI write data transfer when accesses to flash, the level of SPI_IO[7:0]
is output by the MSPI controller in the second half part of dummy phase. It is u
sed to pre-drive flash..*/
#define SPI_MEM_FDUMMY_WOUT    (BIT(3))
#define SPI_MEM_FDUMMY_WOUT_M  (BIT(3))
#define SPI_MEM_FDUMMY_WOUT_V  0x1
#define SPI_MEM_FDUMMY_WOUT_S  3
/* SPI_MEM_FDUMMY_RIN : R/W ;bitpos:[2] ;default: 1'b1 ; */
/*description: In an MSPI read data transfer when accesses to flash, the level of SPI_IO[7:0] i
s output by the MSPI controller in the first half part of dummy phase. It is use
d to mask invalid SPI_DQS in the half part of dummy phase..*/
#define SPI_MEM_FDUMMY_RIN    (BIT(2))
#define SPI_MEM_FDUMMY_RIN_M  (BIT(2))
#define SPI_MEM_FDUMMY_RIN_V  0x1
#define SPI_MEM_FDUMMY_RIN_S  2
/* SPI_MEM_WDUMMY_ALWAYS_OUT : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: In the dummy phase of an MSPI write data transfer when accesses to flash, the le
vel of SPI_IO[7:0] is output by the MSPI controller..*/
#define SPI_MEM_WDUMMY_ALWAYS_OUT    (BIT(1))
#define SPI_MEM_WDUMMY_ALWAYS_OUT_M  (BIT(1))
#define SPI_MEM_WDUMMY_ALWAYS_OUT_V  0x1
#define SPI_MEM_WDUMMY_ALWAYS_OUT_S  1
/* SPI_MEM_WDUMMY_DQS_ALWAYS_OUT : HRO ;bitpos:[0] ;default: 1'b0 ; */
/*description: In the dummy phase of an MSPI write data transfer when accesses to flash, the le
vel of SPI_DQS is output by the MSPI controller..*/
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT    (BIT(0))
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_M  (BIT(0))
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_V  0x1
#define SPI_MEM_WDUMMY_DQS_ALWAYS_OUT_S  0

#define SPI_MEM_CTRL1_REG(i)          (REG_SPI_MEM_BASE(i) + 0xC)
/* SPI_MEM_TXFIFO_RST : WT ;bitpos:[31] ;default: 1'b0 ; */
/*description: The synchronous reset signal for SPI0 TX AFIFO and all the AES_MSPI SYNC FIFO to
 send signals to AXI. Set this bit to reset these FIFO..*/
#define SPI_MEM_TXFIFO_RST    (BIT(31))
#define SPI_MEM_TXFIFO_RST_M  (BIT(31))
#define SPI_MEM_TXFIFO_RST_V  0x1
#define SPI_MEM_TXFIFO_RST_S  31
/* SPI_MEM_RXFIFO_RST : WT ;bitpos:[30] ;default: 1'b0 ; */
/*description: The synchronous reset signal for SPI0 RX AFIFO and all the AES_MSPI SYNC FIFO to
 receive signals from AXI.  Set this bit to reset these FIFO..*/
#define SPI_MEM_RXFIFO_RST    (BIT(30))
#define SPI_MEM_RXFIFO_RST_M  (BIT(30))
#define SPI_MEM_RXFIFO_RST_V  0x1
#define SPI_MEM_RXFIFO_RST_S  30
/* SPI_MEM_FAST_WRITE_EN : R/W ;bitpos:[29] ;default: 1'b1 ; */
/*description: Set this bit to write data faster, do not wait write data has been stored in tx_
bus_fifo_l2. It will wait 4*T_clk_ctrl to insure the write data has been stored
in  tx_bus_fifo_l2..*/
#define SPI_MEM_FAST_WRITE_EN    (BIT(29))
#define SPI_MEM_FAST_WRITE_EN_M  (BIT(29))
#define SPI_MEM_FAST_WRITE_EN_V  0x1
#define SPI_MEM_FAST_WRITE_EN_S  29
/* SPI_MEM_DUAL_RAM_EN : HRO ;bitpos:[28] ;default: 1'b0 ; */
/*description: Set this bit to enable DUAL-RAM mode, EXT_RAM0 and EXT_RAM1 will be accessed at
the same time..*/
#define SPI_MEM_DUAL_RAM_EN    (BIT(28))
#define SPI_MEM_DUAL_RAM_EN_M  (BIT(28))
#define SPI_MEM_DUAL_RAM_EN_V  0x1
#define SPI_MEM_DUAL_RAM_EN_S  28
/* SPI_MEM_RAM0_EN : HRO ;bitpos:[27] ;default: 1'b1 ; */
/*description: When SPI_MEM_DUAL_RAM_EN is 0 and SPI_MEM_RAM0_EN is 1, only EXT_RAM0 will be ac
cessed. When SPI_MEM_DUAL_RAM_EN is 0 and SPI_MEM_RAM0_EN is 0, only EXT_RAM1 wi
ll be accessed. When SPI_MEM_DUAL_RAM_EN is 1,  EXT_RAM0 and EXT_RAM1 will be ac
cessed at the same time..*/
#define SPI_MEM_RAM0_EN    (BIT(27))
#define SPI_MEM_RAM0_EN_M  (BIT(27))
#define SPI_MEM_RAM0_EN_V  0x1
#define SPI_MEM_RAM0_EN_S  27
/* SPI_MEM_AW_SPLICE_EN : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: Set this bit to enable AXI Write Splice-transfer..*/
#define SPI_MEM_AW_SPLICE_EN    (BIT(26))
#define SPI_MEM_AW_SPLICE_EN_M  (BIT(26))
#define SPI_MEM_AW_SPLICE_EN_V  0x1
#define SPI_MEM_AW_SPLICE_EN_S  26
/* SPI_MEM_AR_SPLICE_EN : R/W ;bitpos:[25] ;default: 1'b0 ; */
/*description: Set this bit to enable AXI Read Splice-transfer..*/
#define SPI_MEM_AR_SPLICE_EN    (BIT(25))
#define SPI_MEM_AR_SPLICE_EN_M  (BIT(25))
#define SPI_MEM_AR_SPLICE_EN_V  0x1
#define SPI_MEM_AR_SPLICE_EN_S  25
/* SPI_MEM_RRESP_ECC_ERR_EN : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: 1: RRESP is SLV_ERR when there is a ECC error in AXI read data. 0: RRESP is OKAY
 when there is a ECC error in AXI read data. The ECC error information is record
ed in SPI_MEM_ECC_ERR_ADDR_REG..*/
#define SPI_MEM_RRESP_ECC_ERR_EN    (BIT(24))
#define SPI_MEM_RRESP_ECC_ERR_EN_M  (BIT(24))
#define SPI_MEM_RRESP_ECC_ERR_EN_V  0x1
#define SPI_MEM_RRESP_ECC_ERR_EN_S  24
/* SPI_MEM_SPI_AW_SIZE0_1_SUPPORT_EN : R/W ;bitpos:[23] ;default: 1'b1 ; */
/*description: 1: MSPI supports AWSIZE 0~3. 0: When AWSIZE 0~1, MSPI reply SLV_ERR..*/
#define SPI_MEM_SPI_AW_SIZE0_1_SUPPORT_EN    (BIT(23))
#define SPI_MEM_SPI_AW_SIZE0_1_SUPPORT_EN_M  (BIT(23))
#define SPI_MEM_SPI_AW_SIZE0_1_SUPPORT_EN_V  0x1
#define SPI_MEM_SPI_AW_SIZE0_1_SUPPORT_EN_S  23
/* SPI_MEM_SPI_AR_SIZE0_1_SUPPORT_EN : R/W ;bitpos:[22] ;default: 1'b1 ; */
/*description: 1: MSPI supports ARSIZE 0~3. When ARSIZE =0~2, MSPI read address is 4*n and repl
y the real AXI read data back. 0: When ARSIZE 0~1, MSPI reply SLV_ERR..*/
#define SPI_MEM_SPI_AR_SIZE0_1_SUPPORT_EN    (BIT(22))
#define SPI_MEM_SPI_AR_SIZE0_1_SUPPORT_EN_M  (BIT(22))
#define SPI_MEM_SPI_AR_SIZE0_1_SUPPORT_EN_V  0x1
#define SPI_MEM_SPI_AR_SIZE0_1_SUPPORT_EN_S  22
/* SPI_MEM_CS_HOLD_DLY_PER : R/W ;bitpos:[21:12] ;default: 10'h3ff ; */
/*description: After PER command is sent, SPI1 waits (SPI_MEM_CS_HOLD_DLY_PER[9:0] * 128) SPI_C
LK cycles..*/
#define SPI_MEM_CS_HOLD_DLY_PER    0x000003FF
#define SPI_MEM_CS_HOLD_DLY_PER_M  ((SPI_MEM_CS_HOLD_DLY_PER_V)<<(SPI_MEM_CS_HOLD_DLY_PER_S))
#define SPI_MEM_CS_HOLD_DLY_PER_V  0x3FF
#define SPI_MEM_CS_HOLD_DLY_PER_S  12
/* SPI_MEM_CS_HOLD_DLY_RES : R/W ;bitpos:[11:2] ;default: 10'h3ff ; */
/*description: After RES/DP/HPM/PES command is sent, SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0]
 * 128) SPI_CLK cycles..*/
#define SPI_MEM_CS_HOLD_DLY_RES    0x000003FF
#define SPI_MEM_CS_HOLD_DLY_RES_M  ((SPI_MEM_CS_HOLD_DLY_RES_V)<<(SPI_MEM_CS_HOLD_DLY_RES_S))
#define SPI_MEM_CS_HOLD_DLY_RES_V  0x3FF
#define SPI_MEM_CS_HOLD_DLY_RES_S  2
/* SPI_MEM_CLK_MODE : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: SPI clock mode bits. 0: SPI clock is off when CS inactive 1: SPI clock is delaye
d one cycle after CS inactive 2: SPI clock is delayed two cycles after CS inacti
ve 3: SPI clock is alwasy on..*/
#define SPI_MEM_CLK_MODE    0x00000003
#define SPI_MEM_CLK_MODE_M  ((SPI_MEM_CLK_MODE_V)<<(SPI_MEM_CLK_MODE_S))
#define SPI_MEM_CLK_MODE_V  0x3
#define SPI_MEM_CLK_MODE_S  0

#define SPI_MEM_CTRL2_REG(i)          (REG_SPI_MEM_BASE(i) + 0x10)
/* SPI_MEM_SYNC_RESET : WT ;bitpos:[31] ;default: 1'b0 ; */
/*description: The spi0_mst_st and spi0_slv_st will be reset..*/
#define SPI_MEM_SYNC_RESET    (BIT(31))
#define SPI_MEM_SYNC_RESET_M  (BIT(31))
#define SPI_MEM_SYNC_RESET_V  0x1
#define SPI_MEM_SYNC_RESET_S  31
/* SPI_MEM_CS_HOLD_DELAY : R/W ;bitpos:[30:25] ;default: 6'd0 ; */
/*description: These bits are used to set the minimum CS high time tSHSL between SPI burst tran
sfer when accesses to flash. tSHSL is (SPI_MEM_CS_HOLD_DELAY[5:0] + 1) MSPI core
 clock cycles..*/
#define SPI_MEM_CS_HOLD_DELAY    0x0000003F
#define SPI_MEM_CS_HOLD_DELAY_M  ((SPI_MEM_CS_HOLD_DELAY_V)<<(SPI_MEM_CS_HOLD_DELAY_S))
#define SPI_MEM_CS_HOLD_DELAY_V  0x3F
#define SPI_MEM_CS_HOLD_DELAY_S  25
/* SPI_MEM_SPLIT_TRANS_EN : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: Set this bit to enable SPI0 split one AXI read flash transfer into two SPI trans
fers when one transfer will cross flash or EXT_RAM page corner, valid no matter
whether there is an ECC region or not..*/
#define SPI_MEM_SPLIT_TRANS_EN    (BIT(24))
#define SPI_MEM_SPLIT_TRANS_EN_M  (BIT(24))
#define SPI_MEM_SPLIT_TRANS_EN_V  0x1
#define SPI_MEM_SPLIT_TRANS_EN_S  24
/* SPI_MEM_ECC_16TO18_BYTE_EN : HRO ;bitpos:[14] ;default: 1'b0 ; */
/*description: Set this bit to enable SPI0 and SPI1 ECC 16 bytes data with 2 ECC bytes mode whe
n accesses flash..*/
#define SPI_MEM_ECC_16TO18_BYTE_EN    (BIT(14))
#define SPI_MEM_ECC_16TO18_BYTE_EN_M  (BIT(14))
#define SPI_MEM_ECC_16TO18_BYTE_EN_V  0x1
#define SPI_MEM_ECC_16TO18_BYTE_EN_S  14
/* SPI_MEM_ECC_SKIP_PAGE_CORNER : HRO ;bitpos:[13] ;default: 1'b1 ; */
/*description: 1: SPI0 and SPI1 skip page corner when accesses flash. 0: Not skip page corner w
hen accesses flash..*/
#define SPI_MEM_ECC_SKIP_PAGE_CORNER    (BIT(13))
#define SPI_MEM_ECC_SKIP_PAGE_CORNER_M  (BIT(13))
#define SPI_MEM_ECC_SKIP_PAGE_CORNER_V  0x1
#define SPI_MEM_ECC_SKIP_PAGE_CORNER_S  13
/* SPI_MEM_ECC_CS_HOLD_TIME : HRO ;bitpos:[12:10] ;default: 3'd3 ; */
/*description: SPI_MEM_CS_HOLD_TIME + SPI_MEM_ECC_CS_HOLD_TIME is the SPI0 CS hold cycle in ECC
 mode when accessed flash..*/
#define SPI_MEM_ECC_CS_HOLD_TIME    0x00000007
#define SPI_MEM_ECC_CS_HOLD_TIME_M  ((SPI_MEM_ECC_CS_HOLD_TIME_V)<<(SPI_MEM_ECC_CS_HOLD_TIME_S))
#define SPI_MEM_ECC_CS_HOLD_TIME_V  0x7
#define SPI_MEM_ECC_CS_HOLD_TIME_S  10
/* SPI_MEM_CS_HOLD_TIME : R/W ;bitpos:[9:5] ;default: 5'h1 ; */
/*description: SPI CS signal is delayed to inactive by SPI bus clock, this bits are combined wi
th SPI_MEM_CS_HOLD bit..*/
#define SPI_MEM_CS_HOLD_TIME    0x0000001F
#define SPI_MEM_CS_HOLD_TIME_M  ((SPI_MEM_CS_HOLD_TIME_V)<<(SPI_MEM_CS_HOLD_TIME_S))
#define SPI_MEM_CS_HOLD_TIME_V  0x1F
#define SPI_MEM_CS_HOLD_TIME_S  5
/* SPI_MEM_CS_SETUP_TIME : R/W ;bitpos:[4:0] ;default: 5'h1 ; */
/*description: (cycles-1) of prepare phase by SPI Bus clock, this bits are combined with SPI_ME
M_CS_SETUP bit..*/
#define SPI_MEM_CS_SETUP_TIME    0x0000001F
#define SPI_MEM_CS_SETUP_TIME_M  ((SPI_MEM_CS_SETUP_TIME_V)<<(SPI_MEM_CS_SETUP_TIME_S))
#define SPI_MEM_CS_SETUP_TIME_V  0x1F
#define SPI_MEM_CS_SETUP_TIME_S  0

#define SPI_MEM_CLOCK_REG(i)          (REG_SPI_MEM_BASE(i) + 0x14)
/* SPI_MEM_CLK_EQU_SYSCLK : R/W ;bitpos:[31] ;default: 1'b0 ; */
/*description: 1: 1-division mode, the frequency of SPI bus clock equals to that of MSPI module
 clock..*/
#define SPI_MEM_CLK_EQU_SYSCLK    (BIT(31))
#define SPI_MEM_CLK_EQU_SYSCLK_M  (BIT(31))
#define SPI_MEM_CLK_EQU_SYSCLK_V  0x1
#define SPI_MEM_CLK_EQU_SYSCLK_S  31
/* SPI_MEM_CLKCNT_N : R/W ;bitpos:[23:16] ;default: 8'h3 ; */
/*description: In the master mode it is the divider of spi_mem_clk. So spi_mem_clk frequency is
 system/(SPI_MEM_CLKCNT_N+1).*/
#define SPI_MEM_CLKCNT_N    0x000000FF
#define SPI_MEM_CLKCNT_N_M  ((SPI_MEM_CLKCNT_N_V)<<(SPI_MEM_CLKCNT_N_S))
#define SPI_MEM_CLKCNT_N_V  0xFF
#define SPI_MEM_CLKCNT_N_S  16
/* SPI_MEM_CLKCNT_H : R/W ;bitpos:[15:8] ;default: 8'h1 ; */
/*description: In the master mode it must be floor((SPI_MEM_CLKCNT_N+1)/2-1)..*/
#define SPI_MEM_CLKCNT_H    0x000000FF
#define SPI_MEM_CLKCNT_H_M  ((SPI_MEM_CLKCNT_H_V)<<(SPI_MEM_CLKCNT_H_S))
#define SPI_MEM_CLKCNT_H_V  0xFF
#define SPI_MEM_CLKCNT_H_S  8
/* SPI_MEM_CLKCNT_L : R/W ;bitpos:[7:0] ;default: 8'h3 ; */
/*description: In the master mode it must be equal to SPI_MEM_CLKCNT_N..*/
#define SPI_MEM_CLKCNT_L    0x000000FF
#define SPI_MEM_CLKCNT_L_M  ((SPI_MEM_CLKCNT_L_V)<<(SPI_MEM_CLKCNT_L_S))
#define SPI_MEM_CLKCNT_L_V  0xFF
#define SPI_MEM_CLKCNT_L_S  0

#define SPI_MEM_USER_REG(i)          (REG_SPI_MEM_BASE(i) + 0x18)
/* SPI_MEM_USR_COMMAND : R/W ;bitpos:[31] ;default: 1'b1 ; */
/*description: This bit enable the command phase of an operation..*/
#define SPI_MEM_USR_COMMAND    (BIT(31))
#define SPI_MEM_USR_COMMAND_M  (BIT(31))
#define SPI_MEM_USR_COMMAND_V  0x1
#define SPI_MEM_USR_COMMAND_S  31
/* SPI_MEM_USR_ADDR : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: This bit enable the address phase of an operation..*/
#define SPI_MEM_USR_ADDR    (BIT(30))
#define SPI_MEM_USR_ADDR_M  (BIT(30))
#define SPI_MEM_USR_ADDR_V  0x1
#define SPI_MEM_USR_ADDR_S  30
/* SPI_MEM_USR_DUMMY : R/W ;bitpos:[29] ;default: 1'b0 ; */
/*description: This bit enable the dummy phase of an operation..*/
#define SPI_MEM_USR_DUMMY    (BIT(29))
#define SPI_MEM_USR_DUMMY_M  (BIT(29))
#define SPI_MEM_USR_DUMMY_V  0x1
#define SPI_MEM_USR_DUMMY_S  29
/* SPI_MEM_USR_MISO : R/W ;bitpos:[28] ;default: 1'b0 ; */
/*description: This bit enable the read-data phase of an operation..*/
#define SPI_MEM_USR_MISO    (BIT(28))
#define SPI_MEM_USR_MISO_M  (BIT(28))
#define SPI_MEM_USR_MISO_V  0x1
#define SPI_MEM_USR_MISO_S  28
/* SPI_MEM_USR_MOSI : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: This bit enable the write-data phase of an operation..*/
#define SPI_MEM_USR_MOSI    (BIT(27))
#define SPI_MEM_USR_MOSI_M  (BIT(27))
#define SPI_MEM_USR_MOSI_V  0x1
#define SPI_MEM_USR_MOSI_S  27
/* SPI_MEM_USR_DUMMY_IDLE : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: spi clock is disable in dummy phase when the bit is enable..*/
#define SPI_MEM_USR_DUMMY_IDLE    (BIT(26))
#define SPI_MEM_USR_DUMMY_IDLE_M  (BIT(26))
#define SPI_MEM_USR_DUMMY_IDLE_V  0x1
#define SPI_MEM_USR_DUMMY_IDLE_S  26
/* SPI_MEM_USR_MOSI_HIGHPART : HRO ;bitpos:[25] ;default: 1'b0 ; */
/*description: write-data phase only access to high-part of the buffer spi_mem_w8~spi_mem_w15.
1: enable 0: disable..*/
#define SPI_MEM_USR_MOSI_HIGHPART    (BIT(25))
#define SPI_MEM_USR_MOSI_HIGHPART_M  (BIT(25))
#define SPI_MEM_USR_MOSI_HIGHPART_V  0x1
#define SPI_MEM_USR_MOSI_HIGHPART_S  25
/* SPI_MEM_USR_MISO_HIGHPART : HRO ;bitpos:[24] ;default: 1'b0 ; */
/*description: read-data phase only access to high-part of the buffer spi_mem_w8~spi_mem_w15. 1
: enable 0: disable..*/
#define SPI_MEM_USR_MISO_HIGHPART    (BIT(24))
#define SPI_MEM_USR_MISO_HIGHPART_M  (BIT(24))
#define SPI_MEM_USR_MISO_HIGHPART_V  0x1
#define SPI_MEM_USR_MISO_HIGHPART_S  24
/* SPI_MEM_FWRITE_QIO : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: In the write operations address phase and read-data phase apply 4 signals..*/
#define SPI_MEM_FWRITE_QIO    (BIT(15))
#define SPI_MEM_FWRITE_QIO_M  (BIT(15))
#define SPI_MEM_FWRITE_QIO_V  0x1
#define SPI_MEM_FWRITE_QIO_S  15
/* SPI_MEM_FWRITE_DIO : R/W ;bitpos:[14] ;default: 1'b0 ; */
/*description: In the write operations address phase and read-data phase apply 2 signals..*/
#define SPI_MEM_FWRITE_DIO    (BIT(14))
#define SPI_MEM_FWRITE_DIO_M  (BIT(14))
#define SPI_MEM_FWRITE_DIO_V  0x1
#define SPI_MEM_FWRITE_DIO_S  14
/* SPI_MEM_FWRITE_QUAD : R/W ;bitpos:[13] ;default: 1'b0 ; */
/*description: In the write operations read-data phase apply 4 signals.*/
#define SPI_MEM_FWRITE_QUAD    (BIT(13))
#define SPI_MEM_FWRITE_QUAD_M  (BIT(13))
#define SPI_MEM_FWRITE_QUAD_V  0x1
#define SPI_MEM_FWRITE_QUAD_S  13
/* SPI_MEM_FWRITE_DUAL : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: In the write operations read-data phase apply 2 signals.*/
#define SPI_MEM_FWRITE_DUAL    (BIT(12))
#define SPI_MEM_FWRITE_DUAL_M  (BIT(12))
#define SPI_MEM_FWRITE_DUAL_V  0x1
#define SPI_MEM_FWRITE_DUAL_S  12
/* SPI_MEM_CK_OUT_EDGE : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: The bit combined with SPI_MEM_CK_IDLE_EDGE bit to control SPI clock mode 0~3..*/
#define SPI_MEM_CK_OUT_EDGE    (BIT(9))
#define SPI_MEM_CK_OUT_EDGE_M  (BIT(9))
#define SPI_MEM_CK_OUT_EDGE_V  0x1
#define SPI_MEM_CK_OUT_EDGE_S  9
/* SPI_MEM_CS_SETUP : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: spi cs is enable when spi is in  prepare  phase. 1: enable 0: disable..*/
#define SPI_MEM_CS_SETUP    (BIT(7))
#define SPI_MEM_CS_SETUP_M  (BIT(7))
#define SPI_MEM_CS_SETUP_V  0x1
#define SPI_MEM_CS_SETUP_S  7
/* SPI_MEM_CS_HOLD : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: spi cs keep low when spi is in  done  phase. 1: enable 0: disable..*/
#define SPI_MEM_CS_HOLD    (BIT(6))
#define SPI_MEM_CS_HOLD_M  (BIT(6))
#define SPI_MEM_CS_HOLD_V  0x1
#define SPI_MEM_CS_HOLD_S  6

#define SPI_MEM_USER1_REG(i)          (REG_SPI_MEM_BASE(i) + 0x1C)
/* SPI_MEM_USR_ADDR_BITLEN : R/W ;bitpos:[31:26] ;default: 6'd23 ; */
/*description: The length in bits of address phase. The register value shall be (bit_num-1)..*/
#define SPI_MEM_USR_ADDR_BITLEN    0x0000003F
#define SPI_MEM_USR_ADDR_BITLEN_M  ((SPI_MEM_USR_ADDR_BITLEN_V)<<(SPI_MEM_USR_ADDR_BITLEN_S))
#define SPI_MEM_USR_ADDR_BITLEN_V  0x3F
#define SPI_MEM_USR_ADDR_BITLEN_S  26
/* SPI_MEM_USR_DBYTELEN : HRO ;bitpos:[11:6] ;default: 6'd1 ; */
/*description: SPI0 USR_CMD read or write data byte length -1.*/
#define SPI_MEM_USR_DBYTELEN    0x0000003F
#define SPI_MEM_USR_DBYTELEN_M  ((SPI_MEM_USR_DBYTELEN_V)<<(SPI_MEM_USR_DBYTELEN_S))
#define SPI_MEM_USR_DBYTELEN_V  0x3F
#define SPI_MEM_USR_DBYTELEN_S  6
/* SPI_MEM_USR_DUMMY_CYCLELEN : R/W ;bitpos:[5:0] ;default: 6'd7 ; */
/*description: The length in spi_mem_clk cycles of dummy phase. The register value shall be (cy
cle_num-1)..*/
#define SPI_MEM_USR_DUMMY_CYCLELEN    0x0000003F
#define SPI_MEM_USR_DUMMY_CYCLELEN_M  ((SPI_MEM_USR_DUMMY_CYCLELEN_V)<<(SPI_MEM_USR_DUMMY_CYCLELEN_S))
#define SPI_MEM_USR_DUMMY_CYCLELEN_V  0x3F
#define SPI_MEM_USR_DUMMY_CYCLELEN_S  0

#define SPI_MEM_USER2_REG(i)          (REG_SPI_MEM_BASE(i) + 0x20)
/* SPI_MEM_USR_COMMAND_BITLEN : R/W ;bitpos:[31:28] ;default: 4'd7 ; */
/*description: The length in bits of command phase. The register value shall be (bit_num-1).*/
#define SPI_MEM_USR_COMMAND_BITLEN    0x0000000F
#define SPI_MEM_USR_COMMAND_BITLEN_M  ((SPI_MEM_USR_COMMAND_BITLEN_V)<<(SPI_MEM_USR_COMMAND_BITLEN_S))
#define SPI_MEM_USR_COMMAND_BITLEN_V  0xF
#define SPI_MEM_USR_COMMAND_BITLEN_S  28
/* SPI_MEM_USR_COMMAND_VALUE : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: The value of  command..*/
#define SPI_MEM_USR_COMMAND_VALUE    0x0000FFFF
#define SPI_MEM_USR_COMMAND_VALUE_M  ((SPI_MEM_USR_COMMAND_VALUE_V)<<(SPI_MEM_USR_COMMAND_VALUE_S))
#define SPI_MEM_USR_COMMAND_VALUE_V  0xFFFF
#define SPI_MEM_USR_COMMAND_VALUE_S  0

#define SPI_MEM_MOSI_DLEN_REG(i)          (REG_SPI_MEM_BASE(i) + 0x24)
/* SPI_MEM_USR_MOSI_DBITLEN : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: The length in bits of write-data. The register value shall be (bit_num-1)..*/
#define SPI_MEM_USR_MOSI_DBITLEN    0x000003FF
#define SPI_MEM_USR_MOSI_DBITLEN_M  ((SPI_MEM_USR_MOSI_DBITLEN_V)<<(SPI_MEM_USR_MOSI_DBITLEN_S))
#define SPI_MEM_USR_MOSI_DBITLEN_V  0x3FF
#define SPI_MEM_USR_MOSI_DBITLEN_S  0

#define SPI_MEM_MISO_DLEN_REG(i)          (REG_SPI_MEM_BASE(i) + 0x28)
/* SPI_MEM_USR_MISO_DBITLEN : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: The length in bits of  read-data. The register value shall be (bit_num-1)..*/
#define SPI_MEM_USR_MISO_DBITLEN    0x000003FF
#define SPI_MEM_USR_MISO_DBITLEN_M  ((SPI_MEM_USR_MISO_DBITLEN_V)<<(SPI_MEM_USR_MISO_DBITLEN_S))
#define SPI_MEM_USR_MISO_DBITLEN_V  0x3FF
#define SPI_MEM_USR_MISO_DBITLEN_S  0

#define SPI_MEM_RD_STATUS_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2C)
/* SPI_MEM_WB_MODE_EN : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: Mode bits is valid while this bit is enable. 1: enable 0: disable..*/
#define SPI_MEM_WB_MODE_EN    (BIT(27))
#define SPI_MEM_WB_MODE_EN_M  (BIT(27))
#define SPI_MEM_WB_MODE_EN_V  0x1
#define SPI_MEM_WB_MODE_EN_S  27
/* SPI_MEM_WB_MODE_BITLEN : R/W ;bitpos:[26:24] ;default: 3'h0 ; */
/*description: Mode bits length for flash fast read mode..*/
#define SPI_MEM_WB_MODE_BITLEN    0x00000007
#define SPI_MEM_WB_MODE_BITLEN_M  ((SPI_MEM_WB_MODE_BITLEN_V)<<(SPI_MEM_WB_MODE_BITLEN_S))
#define SPI_MEM_WB_MODE_BITLEN_V  0x7
#define SPI_MEM_WB_MODE_BITLEN_S  24
/* SPI_MEM_WB_MODE : R/W ;bitpos:[23:16] ;default: 8'h00 ; */
/*description: Mode bits in the flash fast read mode  it is combined with spi_mem_fastrd_mode b
it..*/
#define SPI_MEM_WB_MODE    0x000000FF
#define SPI_MEM_WB_MODE_M  ((SPI_MEM_WB_MODE_V)<<(SPI_MEM_WB_MODE_S))
#define SPI_MEM_WB_MODE_V  0xFF
#define SPI_MEM_WB_MODE_S  16
/* SPI_MEM_STATUS : R/W/SS ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: The value is stored when set spi_mem_flash_rdsr bit and spi_mem_flash_res bit..*/
#define SPI_MEM_STATUS    0x0000FFFF
#define SPI_MEM_STATUS_M  ((SPI_MEM_STATUS_V)<<(SPI_MEM_STATUS_S))
#define SPI_MEM_STATUS_V  0xFFFF
#define SPI_MEM_STATUS_S  0

#define SPI_MEM_MISC_REG(i)          (REG_SPI_MEM_BASE(i) + 0x34)
/* SPI_MEM_CS_KEEP_ACTIVE : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: SPI_CS line keep low when the bit is set..*/
#define SPI_MEM_CS_KEEP_ACTIVE    (BIT(10))
#define SPI_MEM_CS_KEEP_ACTIVE_M  (BIT(10))
#define SPI_MEM_CS_KEEP_ACTIVE_V  0x1
#define SPI_MEM_CS_KEEP_ACTIVE_S  10
/* SPI_MEM_CK_IDLE_EDGE : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: 1: SPI_CLK line is high when idle     0: spi clk line is low when idle.*/
#define SPI_MEM_CK_IDLE_EDGE    (BIT(9))
#define SPI_MEM_CK_IDLE_EDGE_M  (BIT(9))
#define SPI_MEM_CK_IDLE_EDGE_V  0x1
#define SPI_MEM_CK_IDLE_EDGE_S  9
/* SPI_MEM_SSUB_PIN : HRO ;bitpos:[8] ;default: 1'b0 ; */
/*description: For SPI0,  sram is connected to SUBPINs..*/
#define SPI_MEM_SSUB_PIN    (BIT(8))
#define SPI_MEM_SSUB_PIN_M  (BIT(8))
#define SPI_MEM_SSUB_PIN_V  0x1
#define SPI_MEM_SSUB_PIN_S  8
/* SPI_MEM_FSUB_PIN : HRO ;bitpos:[7] ;default: 1'b0 ; */
/*description: For SPI0,  flash is connected to SUBPINs..*/
#define SPI_MEM_FSUB_PIN    (BIT(7))
#define SPI_MEM_FSUB_PIN_M  (BIT(7))
#define SPI_MEM_FSUB_PIN_V  0x1
#define SPI_MEM_FSUB_PIN_S  7
/* SPI_MEM_CS1_DIS : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: SPI_CS1 pin enable, 1: disable SPI_CS1, 0: SPI_CS1 pin is active to select SPI d
evice, such as flash, external RAM and so on..*/
#define SPI_MEM_CS1_DIS    (BIT(1))
#define SPI_MEM_CS1_DIS_M  (BIT(1))
#define SPI_MEM_CS1_DIS_V  0x1
#define SPI_MEM_CS1_DIS_S  1
/* SPI_MEM_CS0_DIS : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: SPI_CS0 pin enable, 1: disable SPI_CS0, 0: SPI_CS0 pin is active to select SPI d
evice, such as flash, external RAM and so on..*/
#define SPI_MEM_CS0_DIS    (BIT(0))
#define SPI_MEM_CS0_DIS_M  (BIT(0))
#define SPI_MEM_CS0_DIS_V  0x1
#define SPI_MEM_CS0_DIS_S  0

#define SPI_MEM_TX_CRC_REG(i)          (REG_SPI_MEM_BASE(i) + 0x38)
/* SPI_MEM_TX_CRC_DATA : RO ;bitpos:[31:0] ;default: 32'hffffffff ; */
/*description: For SPI1, the value of crc32..*/
#define SPI_MEM_TX_CRC_DATA    0xFFFFFFFF
#define SPI_MEM_TX_CRC_DATA_M  ((SPI_MEM_TX_CRC_DATA_V)<<(SPI_MEM_TX_CRC_DATA_S))
#define SPI_MEM_TX_CRC_DATA_V  0xFFFFFFFF
#define SPI_MEM_TX_CRC_DATA_S  0

#define SPI_MEM_CACHE_FCTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x3C)
/* SPI_MEM_SPI_CLOSE_AXI_INF_EN : R/W ;bitpos:[31] ;default: 1'b1 ; */
/*description: Set this bit to close AXI read/write transfer to MSPI, which means that only SLV
_ERR will be replied to BRESP/RRESP..*/
#define SPI_MEM_SPI_CLOSE_AXI_INF_EN    (BIT(31))
#define SPI_MEM_SPI_CLOSE_AXI_INF_EN_M  (BIT(31))
#define SPI_MEM_SPI_CLOSE_AXI_INF_EN_V  0x1
#define SPI_MEM_SPI_CLOSE_AXI_INF_EN_S  31
/* SPI_MEM_SPI_SAME_AW_AR_ADDR_CHK_EN : R/W ;bitpos:[30] ;default: 1'b1 ; */
/*description: Set this bit to check AXI read/write the same address region..*/
#define SPI_MEM_SPI_SAME_AW_AR_ADDR_CHK_EN    (BIT(30))
#define SPI_MEM_SPI_SAME_AW_AR_ADDR_CHK_EN_M  (BIT(30))
#define SPI_MEM_SPI_SAME_AW_AR_ADDR_CHK_EN_V  0x1
#define SPI_MEM_SPI_SAME_AW_AR_ADDR_CHK_EN_S  30
/* SPI_MEM_FADDR_QUAD : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: For SPI0 flash, address phase apply 4 signals. 1: enable 0: disable.  The bit is
 the same with spi_mem_fread_qio..*/
#define SPI_MEM_FADDR_QUAD    (BIT(8))
#define SPI_MEM_FADDR_QUAD_M  (BIT(8))
#define SPI_MEM_FADDR_QUAD_V  0x1
#define SPI_MEM_FADDR_QUAD_S  8
/* SPI_MEM_FDOUT_QUAD : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: For SPI0 flash, dout phase apply 4 signals. 1: enable 0: disable.  The bit is th
e same with spi_mem_fread_qio..*/
#define SPI_MEM_FDOUT_QUAD    (BIT(7))
#define SPI_MEM_FDOUT_QUAD_M  (BIT(7))
#define SPI_MEM_FDOUT_QUAD_V  0x1
#define SPI_MEM_FDOUT_QUAD_S  7
/* SPI_MEM_FDIN_QUAD : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: For SPI0 flash, din phase apply 4 signals. 1: enable 0: disable.  The bit is the
 same with spi_mem_fread_qio..*/
#define SPI_MEM_FDIN_QUAD    (BIT(6))
#define SPI_MEM_FDIN_QUAD_M  (BIT(6))
#define SPI_MEM_FDIN_QUAD_V  0x1
#define SPI_MEM_FDIN_QUAD_S  6
/* SPI_MEM_FADDR_DUAL : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: For SPI0 flash, address phase apply 2 signals. 1: enable 0: disable.  The bit is
 the same with spi_mem_fread_dio..*/
#define SPI_MEM_FADDR_DUAL    (BIT(5))
#define SPI_MEM_FADDR_DUAL_M  (BIT(5))
#define SPI_MEM_FADDR_DUAL_V  0x1
#define SPI_MEM_FADDR_DUAL_S  5
/* SPI_MEM_FDOUT_DUAL : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: For SPI0 flash, dout phase apply 2 signals. 1: enable 0: disable. The bit is the
 same with spi_mem_fread_dio..*/
#define SPI_MEM_FDOUT_DUAL    (BIT(4))
#define SPI_MEM_FDOUT_DUAL_M  (BIT(4))
#define SPI_MEM_FDOUT_DUAL_V  0x1
#define SPI_MEM_FDOUT_DUAL_S  4
/* SPI_MEM_FDIN_DUAL : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: For SPI0 flash, din phase apply 2 signals. 1: enable 0: disable. The bit is the
same with spi_mem_fread_dio..*/
#define SPI_MEM_FDIN_DUAL    (BIT(3))
#define SPI_MEM_FDIN_DUAL_M  (BIT(3))
#define SPI_MEM_FDIN_DUAL_V  0x1
#define SPI_MEM_FDIN_DUAL_S  3
/* SPI_MEM_CACHE_FLASH_USR_CMD : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: For SPI0,  cache  read flash for user define command, 1: enable, 0:disable..*/
#define SPI_MEM_CACHE_FLASH_USR_CMD    (BIT(2))
#define SPI_MEM_CACHE_FLASH_USR_CMD_M  (BIT(2))
#define SPI_MEM_CACHE_FLASH_USR_CMD_V  0x1
#define SPI_MEM_CACHE_FLASH_USR_CMD_S  2
/* SPI_MEM_CACHE_USR_ADDR_4BYTE : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: For SPI0,  cache  read flash with 4 bytes address, 1: enable, 0:disable..*/
#define SPI_MEM_CACHE_USR_ADDR_4BYTE    (BIT(1))
#define SPI_MEM_CACHE_USR_ADDR_4BYTE_M  (BIT(1))
#define SPI_MEM_CACHE_USR_ADDR_4BYTE_V  0x1
#define SPI_MEM_CACHE_USR_ADDR_4BYTE_S  1
/* SPI_MEM_AXI_REQ_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: For SPI0, AXI master access enable, 1: enable, 0:disable..*/
#define SPI_MEM_AXI_REQ_EN    (BIT(0))
#define SPI_MEM_AXI_REQ_EN_M  (BIT(0))
#define SPI_MEM_AXI_REQ_EN_V  0x1
#define SPI_MEM_AXI_REQ_EN_S  0

#define SPI_MEM_CACHE_SCTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x40)
/* SPI_MEM_SRAM_WDUMMY_CYCLELEN : HRO ;bitpos:[27:22] ;default: 6'b1 ; */
/*description: For SPI0, In the external RAM mode, it is the length in bits of write dummy phas
e. The register value shall be (bit_num-1)..*/
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN    0x0000003F
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN_M  ((SPI_MEM_SRAM_WDUMMY_CYCLELEN_V)<<(SPI_MEM_SRAM_WDUMMY_CYCLELEN_S))
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN_V  0x3F
#define SPI_MEM_SRAM_WDUMMY_CYCLELEN_S  22
/* SPI_MEM_SRAM_OCT : HRO ;bitpos:[21] ;default: 1'b0 ; */
/*description: reserved.*/
#define SPI_MEM_SRAM_OCT    (BIT(21))
#define SPI_MEM_SRAM_OCT_M  (BIT(21))
#define SPI_MEM_SRAM_OCT_V  0x1
#define SPI_MEM_SRAM_OCT_S  21
/* SPI_MEM_CACHE_SRAM_USR_WCMD : HRO ;bitpos:[20] ;default: 1'b1 ; */
/*description: For SPI0, In the external RAM mode cache write sram for user define command.*/
#define SPI_MEM_CACHE_SRAM_USR_WCMD    (BIT(20))
#define SPI_MEM_CACHE_SRAM_USR_WCMD_M  (BIT(20))
#define SPI_MEM_CACHE_SRAM_USR_WCMD_V  0x1
#define SPI_MEM_CACHE_SRAM_USR_WCMD_S  20
/* SPI_MEM_SRAM_ADDR_BITLEN : HRO ;bitpos:[19:14] ;default: 6'd23 ; */
/*description: For SPI0, In the external RAM mode, it is the length in bits of address phase. T
he register value shall be (bit_num-1)..*/
#define SPI_MEM_SRAM_ADDR_BITLEN    0x0000003F
#define SPI_MEM_SRAM_ADDR_BITLEN_M  ((SPI_MEM_SRAM_ADDR_BITLEN_V)<<(SPI_MEM_SRAM_ADDR_BITLEN_S))
#define SPI_MEM_SRAM_ADDR_BITLEN_V  0x3F
#define SPI_MEM_SRAM_ADDR_BITLEN_S  14
/* SPI_MEM_SRAM_RDUMMY_CYCLELEN : HRO ;bitpos:[11:6] ;default: 6'b1 ; */
/*description: For SPI0, In the external RAM mode, it is the length in bits of read dummy phase
. The register value shall be (bit_num-1)..*/
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN    0x0000003F
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN_M  ((SPI_MEM_SRAM_RDUMMY_CYCLELEN_V)<<(SPI_MEM_SRAM_RDUMMY_CYCLELEN_S))
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN_V  0x3F
#define SPI_MEM_SRAM_RDUMMY_CYCLELEN_S  6
/* SPI_MEM_CACHE_SRAM_USR_RCMD : HRO ;bitpos:[5] ;default: 1'b1 ; */
/*description: For SPI0, In the external RAM mode cache read external RAM for user define comma
nd..*/
#define SPI_MEM_CACHE_SRAM_USR_RCMD    (BIT(5))
#define SPI_MEM_CACHE_SRAM_USR_RCMD_M  (BIT(5))
#define SPI_MEM_CACHE_SRAM_USR_RCMD_V  0x1
#define SPI_MEM_CACHE_SRAM_USR_RCMD_S  5
/* SPI_MEM_USR_RD_SRAM_DUMMY : HRO ;bitpos:[4] ;default: 1'b1 ; */
/*description: For SPI0, In the external RAM mode, it is the enable bit of dummy phase for read
 operations..*/
#define SPI_MEM_USR_RD_SRAM_DUMMY    (BIT(4))
#define SPI_MEM_USR_RD_SRAM_DUMMY_M  (BIT(4))
#define SPI_MEM_USR_RD_SRAM_DUMMY_V  0x1
#define SPI_MEM_USR_RD_SRAM_DUMMY_S  4
/* SPI_MEM_USR_WR_SRAM_DUMMY : HRO ;bitpos:[3] ;default: 1'b0 ; */
/*description: For SPI0, In the external RAM mode, it is the enable bit of dummy phase for writ
e operations..*/
#define SPI_MEM_USR_WR_SRAM_DUMMY    (BIT(3))
#define SPI_MEM_USR_WR_SRAM_DUMMY_M  (BIT(3))
#define SPI_MEM_USR_WR_SRAM_DUMMY_V  0x1
#define SPI_MEM_USR_WR_SRAM_DUMMY_S  3
/* SPI_MEM_USR_SRAM_QIO : HRO ;bitpos:[2] ;default: 1'b0 ; */
/*description: For SPI0, In the external RAM mode, spi quad I/O mode enable, 1: enable, 0:disab
le.*/
#define SPI_MEM_USR_SRAM_QIO    (BIT(2))
#define SPI_MEM_USR_SRAM_QIO_M  (BIT(2))
#define SPI_MEM_USR_SRAM_QIO_V  0x1
#define SPI_MEM_USR_SRAM_QIO_S  2
/* SPI_MEM_USR_SRAM_DIO : HRO ;bitpos:[1] ;default: 1'b0 ; */
/*description: For SPI0, In the external RAM mode, spi dual I/O mode enable, 1: enable, 0:disab
le.*/
#define SPI_MEM_USR_SRAM_DIO    (BIT(1))
#define SPI_MEM_USR_SRAM_DIO_M  (BIT(1))
#define SPI_MEM_USR_SRAM_DIO_V  0x1
#define SPI_MEM_USR_SRAM_DIO_S  1
/* SPI_MEM_CACHE_USR_SADDR_4BYTE : HRO ;bitpos:[0] ;default: 1'b0 ; */
/*description: For SPI0, In the external RAM mode, cache read flash with 4 bytes command, 1: en
able, 0:disable..*/
#define SPI_MEM_CACHE_USR_SADDR_4BYTE    (BIT(0))
#define SPI_MEM_CACHE_USR_SADDR_4BYTE_M  (BIT(0))
#define SPI_MEM_CACHE_USR_SADDR_4BYTE_V  0x1
#define SPI_MEM_CACHE_USR_SADDR_4BYTE_S  0

#define SPI_MEM_SRAM_CMD_REG(i)          (REG_SPI_MEM_BASE(i) + 0x44)
/* SPI_MEM_SPI_SMEM_DATA_IE_ALWAYS_ON : HRO ;bitpos:[31] ;default: 1'b1 ; */
/*description: When accesses to external RAM, 1: the IE signals of pads connected to SPI_IO[7:0
] are always 1. 0: Others..*/
#define SPI_MEM_SPI_SMEM_DATA_IE_ALWAYS_ON    (BIT(31))
#define SPI_MEM_SPI_SMEM_DATA_IE_ALWAYS_ON_M  (BIT(31))
#define SPI_MEM_SPI_SMEM_DATA_IE_ALWAYS_ON_V  0x1
#define SPI_MEM_SPI_SMEM_DATA_IE_ALWAYS_ON_S  31
/* SPI_MEM_SPI_SMEM_DQS_IE_ALWAYS_ON : HRO ;bitpos:[30] ;default: 1'b1 ; */
/*description: When accesses to external RAM, 1: the IE signals of pads connected to SPI_DQS ar
e always 1. 0: Others..*/
#define SPI_MEM_SPI_SMEM_DQS_IE_ALWAYS_ON    (BIT(30))
#define SPI_MEM_SPI_SMEM_DQS_IE_ALWAYS_ON_M  (BIT(30))
#define SPI_MEM_SPI_SMEM_DQS_IE_ALWAYS_ON_V  0x1
#define SPI_MEM_SPI_SMEM_DQS_IE_ALWAYS_ON_S  30
/* SPI_MEM_SDOUT_HEX : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , dout phase apply 16 signals. 1: enable 0: disable..*/
#define SPI_MEM_SDOUT_HEX    (BIT(27))
#define SPI_MEM_SDOUT_HEX_M  (BIT(27))
#define SPI_MEM_SDOUT_HEX_V  0x1
#define SPI_MEM_SDOUT_HEX_S  27
/* SPI_MEM_SDIN_HEX : R/W ;bitpos:[26] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , din phase apply 16 signals. 1: enable 0: disable..*/
#define SPI_MEM_SDIN_HEX    (BIT(26))
#define SPI_MEM_SDIN_HEX_M  (BIT(26))
#define SPI_MEM_SDIN_HEX_V  0x1
#define SPI_MEM_SDIN_HEX_S  26
/* SPI_MEM_SPI_SMEM_WDUMMY_ALWAYS_OUT : HRO ;bitpos:[25] ;default: 1'b0 ; */
/*description: In the dummy phase of an MSPI write data transfer when accesses to external RAM,
 the level of SPI_IO[7:0] is output by the MSPI controller..*/
#define SPI_MEM_SPI_SMEM_WDUMMY_ALWAYS_OUT    (BIT(25))
#define SPI_MEM_SPI_SMEM_WDUMMY_ALWAYS_OUT_M  (BIT(25))
#define SPI_MEM_SPI_SMEM_WDUMMY_ALWAYS_OUT_V  0x1
#define SPI_MEM_SPI_SMEM_WDUMMY_ALWAYS_OUT_S  25
/* SPI_MEM_SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT : HRO ;bitpos:[24] ;default: 1'b0 ; */
/*description: In the dummy phase of an MSPI write data transfer when accesses to external RAM,
 the level of SPI_DQS is output by the MSPI controller..*/
#define SPI_MEM_SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT    (BIT(24))
#define SPI_MEM_SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_M  (BIT(24))
#define SPI_MEM_SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_V  0x1
#define SPI_MEM_SPI_SMEM_WDUMMY_DQS_ALWAYS_OUT_S  24
/* SPI_MEM_SDUMMY_WOUT : HRO ;bitpos:[23] ;default: 1'b0 ; */
/*description: In the dummy phase of a MSPI write data transfer when accesses to external RAM,
the signal level of SPI bus is output by the MSPI controller..*/
#define SPI_MEM_SDUMMY_WOUT    (BIT(23))
#define SPI_MEM_SDUMMY_WOUT_M  (BIT(23))
#define SPI_MEM_SDUMMY_WOUT_V  0x1
#define SPI_MEM_SDUMMY_WOUT_S  23
/* SPI_MEM_SDUMMY_RIN : R/W ;bitpos:[22] ;default: 1'b1 ; */
/*description: In the dummy phase of a MSPI read data transfer when accesses to external RAM, t
he signal level of SPI bus is output by the MSPI controller..*/
#define SPI_MEM_SDUMMY_RIN    (BIT(22))
#define SPI_MEM_SDUMMY_RIN_M  (BIT(22))
#define SPI_MEM_SDUMMY_RIN_V  0x1
#define SPI_MEM_SDUMMY_RIN_S  22
/* SPI_MEM_SCMD_OCT : HRO ;bitpos:[21] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , cmd phase apply 8 signals. 1: enable 0: disable..*/
#define SPI_MEM_SCMD_OCT    (BIT(21))
#define SPI_MEM_SCMD_OCT_M  (BIT(21))
#define SPI_MEM_SCMD_OCT_V  0x1
#define SPI_MEM_SCMD_OCT_S  21
/* SPI_MEM_SADDR_OCT : HRO ;bitpos:[20] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , address phase apply 4 signals. 1: enable 0: disable..*/
#define SPI_MEM_SADDR_OCT    (BIT(20))
#define SPI_MEM_SADDR_OCT_M  (BIT(20))
#define SPI_MEM_SADDR_OCT_V  0x1
#define SPI_MEM_SADDR_OCT_S  20
/* SPI_MEM_SDOUT_OCT : HRO ;bitpos:[19] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , dout phase apply 8 signals. 1: enable 0: disable..*/
#define SPI_MEM_SDOUT_OCT    (BIT(19))
#define SPI_MEM_SDOUT_OCT_M  (BIT(19))
#define SPI_MEM_SDOUT_OCT_V  0x1
#define SPI_MEM_SDOUT_OCT_S  19
/* SPI_MEM_SDIN_OCT : HRO ;bitpos:[18] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , din phase apply 8 signals. 1: enable 0: disable..*/
#define SPI_MEM_SDIN_OCT    (BIT(18))
#define SPI_MEM_SDIN_OCT_M  (BIT(18))
#define SPI_MEM_SDIN_OCT_V  0x1
#define SPI_MEM_SDIN_OCT_S  18
/* SPI_MEM_SCMD_QUAD : HRO ;bitpos:[17] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , cmd phase apply 4 signals. 1: enable 0: disable. The bit
 is the same with spi_mem_usr_sram_qio..*/
#define SPI_MEM_SCMD_QUAD    (BIT(17))
#define SPI_MEM_SCMD_QUAD_M  (BIT(17))
#define SPI_MEM_SCMD_QUAD_V  0x1
#define SPI_MEM_SCMD_QUAD_S  17
/* SPI_MEM_SADDR_QUAD : HRO ;bitpos:[16] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , address phase apply 4 signals. 1: enable 0: disable. The
 bit is the same with spi_mem_usr_sram_qio..*/
#define SPI_MEM_SADDR_QUAD    (BIT(16))
#define SPI_MEM_SADDR_QUAD_M  (BIT(16))
#define SPI_MEM_SADDR_QUAD_V  0x1
#define SPI_MEM_SADDR_QUAD_S  16
/* SPI_MEM_SDOUT_QUAD : HRO ;bitpos:[15] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , dout phase apply 4 signals. 1: enable 0: disable. The bi
t is the same with spi_mem_usr_sram_qio..*/
#define SPI_MEM_SDOUT_QUAD    (BIT(15))
#define SPI_MEM_SDOUT_QUAD_M  (BIT(15))
#define SPI_MEM_SDOUT_QUAD_V  0x1
#define SPI_MEM_SDOUT_QUAD_S  15
/* SPI_MEM_SDIN_QUAD : HRO ;bitpos:[14] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , din phase apply 4 signals. 1: enable 0: disable. The bit
 is the same with spi_mem_usr_sram_qio..*/
#define SPI_MEM_SDIN_QUAD    (BIT(14))
#define SPI_MEM_SDIN_QUAD_M  (BIT(14))
#define SPI_MEM_SDIN_QUAD_V  0x1
#define SPI_MEM_SDIN_QUAD_S  14
/* SPI_MEM_SADDR_DUAL : HRO ;bitpos:[12] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , address phase apply 2 signals. 1: enable 0: disable. The
 bit is the same with spi_mem_usr_sram_dio..*/
#define SPI_MEM_SADDR_DUAL    (BIT(12))
#define SPI_MEM_SADDR_DUAL_M  (BIT(12))
#define SPI_MEM_SADDR_DUAL_V  0x1
#define SPI_MEM_SADDR_DUAL_S  12
/* SPI_MEM_SDOUT_DUAL : HRO ;bitpos:[11] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , dout phase apply 2 signals. 1: enable 0: disable. The bi
t is the same with spi_mem_usr_sram_dio..*/
#define SPI_MEM_SDOUT_DUAL    (BIT(11))
#define SPI_MEM_SDOUT_DUAL_M  (BIT(11))
#define SPI_MEM_SDOUT_DUAL_V  0x1
#define SPI_MEM_SDOUT_DUAL_S  11
/* SPI_MEM_SDIN_DUAL : HRO ;bitpos:[10] ;default: 1'b0 ; */
/*description: For SPI0 external RAM , din phase apply 2 signals. 1: enable 0: disable. The bit
 is the same with spi_mem_usr_sram_dio..*/
#define SPI_MEM_SDIN_DUAL    (BIT(10))
#define SPI_MEM_SDIN_DUAL_M  (BIT(10))
#define SPI_MEM_SDIN_DUAL_V  0x1
#define SPI_MEM_SDIN_DUAL_S  10
/* SPI_MEM_SWB_MODE : HRO ;bitpos:[9:2] ;default: 8'b0 ; */
/*description: Mode bits in the external RAM fast read mode  it is combined with spi_mem_fastrd
_mode bit..*/
#define SPI_MEM_SWB_MODE    0x000000FF
#define SPI_MEM_SWB_MODE_M  ((SPI_MEM_SWB_MODE_V)<<(SPI_MEM_SWB_MODE_S))
#define SPI_MEM_SWB_MODE_V  0xFF
#define SPI_MEM_SWB_MODE_S  2
/* SPI_MEM_SCLK_MODE : HRO ;bitpos:[1:0] ;default: 2'd0 ; */
/*description: SPI clock mode bits. 0: SPI clock is off when CS inactive 1: SPI clock is delaye
d one cycle after CS inactive 2: SPI clock is delayed two cycles after CS inacti
ve 3: SPI clock is always on..*/
#define SPI_MEM_SCLK_MODE    0x00000003
#define SPI_MEM_SCLK_MODE_M  ((SPI_MEM_SCLK_MODE_V)<<(SPI_MEM_SCLK_MODE_S))
#define SPI_MEM_SCLK_MODE_V  0x3
#define SPI_MEM_SCLK_MODE_S  0

#define SPI_MEM_SRAM_DRD_CMD_REG(i)          (REG_SPI_MEM_BASE(i) + 0x48)
/* SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN : HRO ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: For SPI0,When cache mode is enable it is the length in bits of command phase for
 sram. The register value shall be (bit_num-1)..*/
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN    0x0000000F
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN_M  ((SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN_V)<<(SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN_S))
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN_V  0xF
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_BITLEN_S  28
/* SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE : HRO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: For SPI0,When cache mode is enable it is the read command value of command phase
 for sram..*/
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE    0x0000FFFF
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE_M  ((SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE_V)<<(SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE_S))
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE_V  0xFFFF
#define SPI_MEM_CACHE_SRAM_USR_RD_CMD_VALUE_S  0

#define SPI_MEM_SRAM_DWR_CMD_REG(i)          (REG_SPI_MEM_BASE(i) + 0x4C)
/* SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN : HRO ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: For SPI0,When cache mode is enable it is the in bits of command phase  for sram.
 The register value shall be (bit_num-1)..*/
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN    0x0000000F
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN_M  ((SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN_V)<<(SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN_S))
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN_V  0xF
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_BITLEN_S  28
/* SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE : HRO ;bitpos:[15:0] ;default: 16'h0 ; */
/*description: For SPI0,When cache mode is enable it is the write command value of command phas
e for sram..*/
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE    0x0000FFFF
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE_M  ((SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE_V)<<(SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE_S))
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE_V  0xFFFF
#define SPI_MEM_CACHE_SRAM_USR_WR_CMD_VALUE_S  0

#define SPI_MEM_SRAM_CLK_REG(i)          (REG_SPI_MEM_BASE(i) + 0x50)
/* SPI_MEM_SCLK_EQU_SYSCLK : HRO ;bitpos:[31] ;default: 1'b0 ; */
/*description: For SPI0 external RAM  interface, 1: spi_mem_clk is eqaul to system 0: spi_mem_c
lk is divided from system clock..*/
#define SPI_MEM_SCLK_EQU_SYSCLK    (BIT(31))
#define SPI_MEM_SCLK_EQU_SYSCLK_M  (BIT(31))
#define SPI_MEM_SCLK_EQU_SYSCLK_V  0x1
#define SPI_MEM_SCLK_EQU_SYSCLK_S  31
/* SPI_MEM_SCLKCNT_N : HRO ;bitpos:[23:16] ;default: 8'h3 ; */
/*description: For SPI0 external RAM  interface, it is the divider of spi_mem_clk. So spi_mem_c
lk frequency is system/(SPI_MEM_SCLKCNT_N+1).*/
#define SPI_MEM_SCLKCNT_N    0x000000FF
#define SPI_MEM_SCLKCNT_N_M  ((SPI_MEM_SCLKCNT_N_V)<<(SPI_MEM_SCLKCNT_N_S))
#define SPI_MEM_SCLKCNT_N_V  0xFF
#define SPI_MEM_SCLKCNT_N_S  16
/* SPI_MEM_SCLKCNT_H : HRO ;bitpos:[15:8] ;default: 8'h1 ; */
/*description: For SPI0 external RAM  interface, it must be floor((SPI_MEM_SCLKCNT_N+1)/2-1)..*/
#define SPI_MEM_SCLKCNT_H    0x000000FF
#define SPI_MEM_SCLKCNT_H_M  ((SPI_MEM_SCLKCNT_H_V)<<(SPI_MEM_SCLKCNT_H_S))
#define SPI_MEM_SCLKCNT_H_V  0xFF
#define SPI_MEM_SCLKCNT_H_S  8
/* SPI_MEM_SCLKCNT_L : HRO ;bitpos:[7:0] ;default: 8'h3 ; */
/*description: For SPI0 external RAM  interface, it must be equal to SPI_MEM_SCLKCNT_N..*/
#define SPI_MEM_SCLKCNT_L    0x000000FF
#define SPI_MEM_SCLKCNT_L_M  ((SPI_MEM_SCLKCNT_L_V)<<(SPI_MEM_SCLKCNT_L_S))
#define SPI_MEM_SCLKCNT_L_V  0xFF
#define SPI_MEM_SCLKCNT_L_S  0

#define SPI_MEM_FSM_REG(i)          (REG_SPI_MEM_BASE(i) + 0x54)
/* SPI_MEM_SRAM_LOCK_EN : R/W ;bitpos:[20] ;default: 1'h0 ; */
/*description: The lock enable for external RAM to lock spi0 trans req.1: Enable. 0: Disable..*/
#define SPI_MEM_SRAM_LOCK_EN    (BIT(20))
#define SPI_MEM_SRAM_LOCK_EN_M  (BIT(20))
#define SPI_MEM_SRAM_LOCK_EN_V  0x1
#define SPI_MEM_SRAM_LOCK_EN_S  20
/* SPI_MEM_FLASH_LOCK_EN : R/W ;bitpos:[19] ;default: 1'h0 ; */
/*description: The lock enable for FLASH to lock spi0 trans req.1: Enable. 0: Disable..*/
#define SPI_MEM_FLASH_LOCK_EN    (BIT(19))
#define SPI_MEM_FLASH_LOCK_EN_M  (BIT(19))
#define SPI_MEM_FLASH_LOCK_EN_V  0x1
#define SPI_MEM_FLASH_LOCK_EN_S  19
/* SPI_MEM_LOCK_DELAY_TIME : R/W ;bitpos:[18:7] ;default: 12'd4 ; */
/*description: The lock delay time of SPI0/1 arbiter by spi0_slv_st, after PER is sent by SPI1..*/
#define SPI_MEM_LOCK_DELAY_TIME    0x00000FFF
#define SPI_MEM_LOCK_DELAY_TIME_M  ((SPI_MEM_LOCK_DELAY_TIME_V)<<(SPI_MEM_LOCK_DELAY_TIME_S))
#define SPI_MEM_LOCK_DELAY_TIME_V  0xFFF
#define SPI_MEM_LOCK_DELAY_TIME_S  7

#define SPI_MEM_W0_REG(i)          (REG_SPI_MEM_BASE(i) + 0x58)
/* SPI_MEM_BUF0 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF0    0xFFFFFFFF
#define SPI_MEM_BUF0_M  ((SPI_MEM_BUF0_V)<<(SPI_MEM_BUF0_S))
#define SPI_MEM_BUF0_V  0xFFFFFFFF
#define SPI_MEM_BUF0_S  0

#define SPI_MEM_W1_REG(i)          (REG_SPI_MEM_BASE(i) + 0x5C)
/* SPI_MEM_BUF1 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF1    0xFFFFFFFF
#define SPI_MEM_BUF1_M  ((SPI_MEM_BUF1_V)<<(SPI_MEM_BUF1_S))
#define SPI_MEM_BUF1_V  0xFFFFFFFF
#define SPI_MEM_BUF1_S  0

#define SPI_MEM_W2_REG(i)          (REG_SPI_MEM_BASE(i) + 0x60)
/* SPI_MEM_BUF2 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF2    0xFFFFFFFF
#define SPI_MEM_BUF2_M  ((SPI_MEM_BUF2_V)<<(SPI_MEM_BUF2_S))
#define SPI_MEM_BUF2_V  0xFFFFFFFF
#define SPI_MEM_BUF2_S  0

#define SPI_MEM_W3_REG(i)          (REG_SPI_MEM_BASE(i) + 0x64)
/* SPI_MEM_BUF3 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF3    0xFFFFFFFF
#define SPI_MEM_BUF3_M  ((SPI_MEM_BUF3_V)<<(SPI_MEM_BUF3_S))
#define SPI_MEM_BUF3_V  0xFFFFFFFF
#define SPI_MEM_BUF3_S  0

#define SPI_MEM_W4_REG(i)          (REG_SPI_MEM_BASE(i) + 0x68)
/* SPI_MEM_BUF4 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF4    0xFFFFFFFF
#define SPI_MEM_BUF4_M  ((SPI_MEM_BUF4_V)<<(SPI_MEM_BUF4_S))
#define SPI_MEM_BUF4_V  0xFFFFFFFF
#define SPI_MEM_BUF4_S  0

#define SPI_MEM_W5_REG(i)          (REG_SPI_MEM_BASE(i) + 0x6C)
/* SPI_MEM_BUF5 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF5    0xFFFFFFFF
#define SPI_MEM_BUF5_M  ((SPI_MEM_BUF5_V)<<(SPI_MEM_BUF5_S))
#define SPI_MEM_BUF5_V  0xFFFFFFFF
#define SPI_MEM_BUF5_S  0

#define SPI_MEM_W6_REG(i)          (REG_SPI_MEM_BASE(i) + 0x70)
/* SPI_MEM_BUF6 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF6    0xFFFFFFFF
#define SPI_MEM_BUF6_M  ((SPI_MEM_BUF6_V)<<(SPI_MEM_BUF6_S))
#define SPI_MEM_BUF6_V  0xFFFFFFFF
#define SPI_MEM_BUF6_S  0

#define SPI_MEM_W7_REG(i)          (REG_SPI_MEM_BASE(i) + 0x74)
/* SPI_MEM_BUF7 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF7    0xFFFFFFFF
#define SPI_MEM_BUF7_M  ((SPI_MEM_BUF7_V)<<(SPI_MEM_BUF7_S))
#define SPI_MEM_BUF7_V  0xFFFFFFFF
#define SPI_MEM_BUF7_S  0

#define SPI_MEM_W8_REG(i)          (REG_SPI_MEM_BASE(i) + 0x78)
/* SPI_MEM_BUF8 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF8    0xFFFFFFFF
#define SPI_MEM_BUF8_M  ((SPI_MEM_BUF8_V)<<(SPI_MEM_BUF8_S))
#define SPI_MEM_BUF8_V  0xFFFFFFFF
#define SPI_MEM_BUF8_S  0

#define SPI_MEM_W9_REG(i)          (REG_SPI_MEM_BASE(i) + 0x7C)
/* SPI_MEM_BUF9 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF9    0xFFFFFFFF
#define SPI_MEM_BUF9_M  ((SPI_MEM_BUF9_V)<<(SPI_MEM_BUF9_S))
#define SPI_MEM_BUF9_V  0xFFFFFFFF
#define SPI_MEM_BUF9_S  0

#define SPI_MEM_W10_REG(i)          (REG_SPI_MEM_BASE(i) + 0x80)
/* SPI_MEM_BUF10 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF10    0xFFFFFFFF
#define SPI_MEM_BUF10_M  ((SPI_MEM_BUF10_V)<<(SPI_MEM_BUF10_S))
#define SPI_MEM_BUF10_V  0xFFFFFFFF
#define SPI_MEM_BUF10_S  0

#define SPI_MEM_W11_REG(i)          (REG_SPI_MEM_BASE(i) + 0x84)
/* SPI_MEM_BUF11 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF11    0xFFFFFFFF
#define SPI_MEM_BUF11_M  ((SPI_MEM_BUF11_V)<<(SPI_MEM_BUF11_S))
#define SPI_MEM_BUF11_V  0xFFFFFFFF
#define SPI_MEM_BUF11_S  0

#define SPI_MEM_W12_REG(i)          (REG_SPI_MEM_BASE(i) + 0x88)
/* SPI_MEM_BUF12 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF12    0xFFFFFFFF
#define SPI_MEM_BUF12_M  ((SPI_MEM_BUF12_V)<<(SPI_MEM_BUF12_S))
#define SPI_MEM_BUF12_V  0xFFFFFFFF
#define SPI_MEM_BUF12_S  0

#define SPI_MEM_W13_REG(i)          (REG_SPI_MEM_BASE(i) + 0x8C)
/* SPI_MEM_BUF13 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF13    0xFFFFFFFF
#define SPI_MEM_BUF13_M  ((SPI_MEM_BUF13_V)<<(SPI_MEM_BUF13_S))
#define SPI_MEM_BUF13_V  0xFFFFFFFF
#define SPI_MEM_BUF13_S  0

#define SPI_MEM_W14_REG(i)          (REG_SPI_MEM_BASE(i) + 0x90)
/* SPI_MEM_BUF14 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF14    0xFFFFFFFF
#define SPI_MEM_BUF14_M  ((SPI_MEM_BUF14_V)<<(SPI_MEM_BUF14_S))
#define SPI_MEM_BUF14_V  0xFFFFFFFF
#define SPI_MEM_BUF14_S  0

#define SPI_MEM_W15_REG(i)          (REG_SPI_MEM_BASE(i) + 0x94)
/* SPI_MEM_BUF15 : R/W/SS ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: data buffer.*/
#define SPI_MEM_BUF15    0xFFFFFFFF
#define SPI_MEM_BUF15_M  ((SPI_MEM_BUF15_V)<<(SPI_MEM_BUF15_S))
#define SPI_MEM_BUF15_V  0xFFFFFFFF
#define SPI_MEM_BUF15_S  0

#define SPI_MEM_FLASH_WAITI_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x98)
/* SPI_MEM_WAITI_CMD : R/W ;bitpos:[31:16] ;default: 16'h05 ; */
/*description: The command value to wait flash idle(RDSR)..*/
#define SPI_MEM_WAITI_CMD    0x0000FFFF
#define SPI_MEM_WAITI_CMD_M  ((SPI_MEM_WAITI_CMD_V)<<(SPI_MEM_WAITI_CMD_S))
#define SPI_MEM_WAITI_CMD_V  0xFFFF
#define SPI_MEM_WAITI_CMD_S  16
/* SPI_MEM_WAITI_DUMMY_CYCLELEN : R/W ;bitpos:[15:10] ;default: 6'h0 ; */
/*description: The dummy cycle length when wait flash idle(RDSR)..*/
#define SPI_MEM_WAITI_DUMMY_CYCLELEN    0x0000003F
#define SPI_MEM_WAITI_DUMMY_CYCLELEN_M  ((SPI_MEM_WAITI_DUMMY_CYCLELEN_V)<<(SPI_MEM_WAITI_DUMMY_CYCLELEN_S))
#define SPI_MEM_WAITI_DUMMY_CYCLELEN_V  0x3F
#define SPI_MEM_WAITI_DUMMY_CYCLELEN_S  10
/* SPI_MEM_WAITI_CMD_2B : R/W ;bitpos:[9] ;default: 1'h0 ; */
/*description: 1:The wait idle command bit length is 16. 0: The wait idle command bit length is
 8..*/
#define SPI_MEM_WAITI_CMD_2B    (BIT(9))
#define SPI_MEM_WAITI_CMD_2B_M  (BIT(9))
#define SPI_MEM_WAITI_CMD_2B_V  0x1
#define SPI_MEM_WAITI_CMD_2B_S  9
/* SPI_MEM_WAITI_ADDR_CYCLELEN : R/W ;bitpos:[4:3] ;default: 2'b0 ; */
/*description: When SPI_MEM_WAITI_ADDR_EN is set, the  cycle length of sent out address is (SPI
_MEM_WAITI_ADDR_CYCLELEN[1:0] + 1) SPI  bus clock cycles. It is not active when
SPI_MEM_WAITI_ADDR_EN is cleared..*/
#define SPI_MEM_WAITI_ADDR_CYCLELEN    0x00000003
#define SPI_MEM_WAITI_ADDR_CYCLELEN_M  ((SPI_MEM_WAITI_ADDR_CYCLELEN_V)<<(SPI_MEM_WAITI_ADDR_CYCLELEN_S))
#define SPI_MEM_WAITI_ADDR_CYCLELEN_V  0x3
#define SPI_MEM_WAITI_ADDR_CYCLELEN_S  3
/* SPI_MEM_WAITI_ADDR_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: 1: Output  address 0 in RDSR or read SUS command transfer. 0: Do not send out ad
dress in RDSR or read SUS command transfer..*/
#define SPI_MEM_WAITI_ADDR_EN    (BIT(2))
#define SPI_MEM_WAITI_ADDR_EN_M  (BIT(2))
#define SPI_MEM_WAITI_ADDR_EN_V  0x1
#define SPI_MEM_WAITI_ADDR_EN_S  2
/* SPI_MEM_WAITI_DUMMY : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: The dummy phase enable when wait flash idle (RDSR).*/
#define SPI_MEM_WAITI_DUMMY    (BIT(1))
#define SPI_MEM_WAITI_DUMMY_M  (BIT(1))
#define SPI_MEM_WAITI_DUMMY_V  0x1
#define SPI_MEM_WAITI_DUMMY_S  1
/* SPI_MEM_WAITI_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: 1: The hardware will wait idle after SE/PP/WRSR automatically, and hardware auto
 Suspend/Resume can be enabled. 0: The functions of hardware wait idle and auto
Suspend/Resume are not supported..*/
#define SPI_MEM_WAITI_EN    (BIT(0))
#define SPI_MEM_WAITI_EN_M  (BIT(0))
#define SPI_MEM_WAITI_EN_V  0x1
#define SPI_MEM_WAITI_EN_S  0

#define SPI_MEM_FLASH_SUS_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x9C)
/* SPI_MEM_SUS_TIMEOUT_CNT : R/W ;bitpos:[31:25] ;default: 7'h4 ; */
/*description: When SPI1 checks SUS/SUS1/SUS2 bits fail for SPI_MEM_SUS_TIMEOUT_CNT[6:0] times,
 it will be treated as check pass..*/
#define SPI_MEM_SUS_TIMEOUT_CNT    0x0000007F
#define SPI_MEM_SUS_TIMEOUT_CNT_M  ((SPI_MEM_SUS_TIMEOUT_CNT_V)<<(SPI_MEM_SUS_TIMEOUT_CNT_S))
#define SPI_MEM_SUS_TIMEOUT_CNT_V  0x7F
#define SPI_MEM_SUS_TIMEOUT_CNT_S  25
/* SPI_MEM_PES_END_EN : R/W ;bitpos:[24] ;default: 1'b0 ; */
/*description: 1: Both WIP and SUS/SUS1/SUS2 bits should be checked to insure the suspend statu
s of flash. 0: Only need to check WIP is 0..*/
#define SPI_MEM_PES_END_EN    (BIT(24))
#define SPI_MEM_PES_END_EN_M  (BIT(24))
#define SPI_MEM_PES_END_EN_V  0x1
#define SPI_MEM_PES_END_EN_S  24
/* SPI_MEM_PER_END_EN : R/W ;bitpos:[23] ;default: 1'b0 ; */
/*description: 1: Both WIP and SUS/SUS1/SUS2 bits should be checked to insure the resume status
 of flash. 0: Only need to check WIP is 0..*/
#define SPI_MEM_PER_END_EN    (BIT(23))
#define SPI_MEM_PER_END_EN_M  (BIT(23))
#define SPI_MEM_PER_END_EN_V  0x1
#define SPI_MEM_PER_END_EN_S  23
/* SPI_MEM_SPI_FMEM_RD_SUS_2B : R/W ;bitpos:[22] ;default: 1'b0 ; */
/*description: 1: Read two bytes when check flash SUS/SUS1/SUS2 status bit. 0:  Read one byte w
hen check flash SUS/SUS1/SUS2 status bit.*/
#define SPI_MEM_SPI_FMEM_RD_SUS_2B    (BIT(22))
#define SPI_MEM_SPI_FMEM_RD_SUS_2B_M  (BIT(22))
#define SPI_MEM_SPI_FMEM_RD_SUS_2B_V  0x1
#define SPI_MEM_SPI_FMEM_RD_SUS_2B_S  22
/* SPI_MEM_PESR_END_MSK : R/W ;bitpos:[21:6] ;default: 16'h80 ; */
/*description: The mask value when check SUS/SUS1/SUS2 status bit. If the read status value is
status_in[15:0](only status_in[7:0] is valid when only one byte of data is read
out, status_in[15:0] is valid when two bytes of data are read out), SUS/SUS1/SUS
2 = status_in[15:0]^ SPI_MEM_PESR_END_MSK[15:0]..*/
#define SPI_MEM_PESR_END_MSK    0x0000FFFF
#define SPI_MEM_PESR_END_MSK_M  ((SPI_MEM_PESR_END_MSK_V)<<(SPI_MEM_PESR_END_MSK_S))
#define SPI_MEM_PESR_END_MSK_V  0xFFFF
#define SPI_MEM_PESR_END_MSK_S  6
/* SPI_MEM_FLASH_PES_EN : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit to enable Auto-suspending function..*/
#define SPI_MEM_FLASH_PES_EN    (BIT(5))
#define SPI_MEM_FLASH_PES_EN_M  (BIT(5))
#define SPI_MEM_FLASH_PES_EN_V  0x1
#define SPI_MEM_FLASH_PES_EN_S  5
/* SPI_MEM_PES_PER_EN : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Set this bit to enable PES end triggers PER transfer option. If this bit is 0, a
pplication should send PER after PES is done..*/
#define SPI_MEM_PES_PER_EN    (BIT(4))
#define SPI_MEM_PES_PER_EN_M  (BIT(4))
#define SPI_MEM_PES_PER_EN_V  0x1
#define SPI_MEM_PES_PER_EN_S  4
/* SPI_MEM_FLASH_PES_WAIT_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 4 or *128) SPI_CLK cycles after
program erase suspend command is sent. 0: SPI1 does not wait after program erase
 suspend command is sent..*/
#define SPI_MEM_FLASH_PES_WAIT_EN    (BIT(3))
#define SPI_MEM_FLASH_PES_WAIT_EN_M  (BIT(3))
#define SPI_MEM_FLASH_PES_WAIT_EN_V  0x1
#define SPI_MEM_FLASH_PES_WAIT_EN_S  3
/* SPI_MEM_FLASH_PER_WAIT_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 4 or *128) SPI_CLK cycles after
program erase resume command is sent. 0: SPI1 does not wait after program erase
resume command is sent..*/
#define SPI_MEM_FLASH_PER_WAIT_EN    (BIT(2))
#define SPI_MEM_FLASH_PER_WAIT_EN_M  (BIT(2))
#define SPI_MEM_FLASH_PER_WAIT_EN_V  0x1
#define SPI_MEM_FLASH_PER_WAIT_EN_S  2
/* SPI_MEM_FLASH_PES : R/W/SC ;bitpos:[1] ;default: 1'b0 ; */
/*description: program erase suspend bit, program erase suspend operation will be triggered whe
n the bit is set. The bit will be cleared once the operation done.1: enable 0: d
isable..*/
#define SPI_MEM_FLASH_PES    (BIT(1))
#define SPI_MEM_FLASH_PES_M  (BIT(1))
#define SPI_MEM_FLASH_PES_V  0x1
#define SPI_MEM_FLASH_PES_S  1
/* SPI_MEM_FLASH_PER : R/W/SC ;bitpos:[0] ;default: 1'b0 ; */
/*description: program erase resume bit, program erase suspend operation will be triggered when
 the bit is set. The bit will be cleared once the operation done.1: enable 0: di
sable..*/
#define SPI_MEM_FLASH_PER    (BIT(0))
#define SPI_MEM_FLASH_PER_M  (BIT(0))
#define SPI_MEM_FLASH_PER_V  0x1
#define SPI_MEM_FLASH_PER_S  0

#define SPI_MEM_FLASH_SUS_CMD_REG(i)          (REG_SPI_MEM_BASE(i) + 0xA0)
/* SPI_MEM_WAIT_PESR_COMMAND : R/W ;bitpos:[31:16] ;default: 16'h05 ; */
/*description: Flash SUS/SUS1/SUS2 status bit read command. The command should be sent when SUS
/SUS1/SUS2 bit should be checked to insure the suspend or resume status of flash
..*/
#define SPI_MEM_WAIT_PESR_COMMAND    0x0000FFFF
#define SPI_MEM_WAIT_PESR_COMMAND_M  ((SPI_MEM_WAIT_PESR_COMMAND_V)<<(SPI_MEM_WAIT_PESR_COMMAND_S))
#define SPI_MEM_WAIT_PESR_COMMAND_V  0xFFFF
#define SPI_MEM_WAIT_PESR_COMMAND_S  16
/* SPI_MEM_FLASH_PES_COMMAND : R/W ;bitpos:[15:0] ;default: 16'h7575 ; */
/*description: Program/Erase suspend command..*/
#define SPI_MEM_FLASH_PES_COMMAND    0x0000FFFF
#define SPI_MEM_FLASH_PES_COMMAND_M  ((SPI_MEM_FLASH_PES_COMMAND_V)<<(SPI_MEM_FLASH_PES_COMMAND_S))
#define SPI_MEM_FLASH_PES_COMMAND_V  0xFFFF
#define SPI_MEM_FLASH_PES_COMMAND_S  0

#define SPI_MEM_SUS_STATUS_REG(i)          (REG_SPI_MEM_BASE(i) + 0xA4)
/* SPI_MEM_FLASH_PER_COMMAND : R/W ;bitpos:[31:16] ;default: 16'h7a7a ; */
/*description: Program/Erase resume command..*/
#define SPI_MEM_FLASH_PER_COMMAND    0x0000FFFF
#define SPI_MEM_FLASH_PER_COMMAND_M  ((SPI_MEM_FLASH_PER_COMMAND_V)<<(SPI_MEM_FLASH_PER_COMMAND_S))
#define SPI_MEM_FLASH_PER_COMMAND_V  0xFFFF
#define SPI_MEM_FLASH_PER_COMMAND_S  16
/* SPI_MEM_FLASH_PESR_CMD_2B : R/W ;bitpos:[15] ;default: 1'b0 ; */
/*description: 1: The bit length of Program/Erase Suspend/Resume command is 16. 0: The bit leng
th of Program/Erase Suspend/Resume command is 8..*/
#define SPI_MEM_FLASH_PESR_CMD_2B    (BIT(15))
#define SPI_MEM_FLASH_PESR_CMD_2B_M  (BIT(15))
#define SPI_MEM_FLASH_PESR_CMD_2B_V  0x1
#define SPI_MEM_FLASH_PESR_CMD_2B_S  15
/* SPI_MEM_SPI0_LOCK_EN : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: 1: Enable SPI0 lock SPI0/1 arbiter option. 0: Disable it..*/
#define SPI_MEM_SPI0_LOCK_EN    (BIT(7))
#define SPI_MEM_SPI0_LOCK_EN_M  (BIT(7))
#define SPI_MEM_SPI0_LOCK_EN_V  0x1
#define SPI_MEM_SPI0_LOCK_EN_S  7
/* SPI_MEM_FLASH_PES_DLY_128 : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Valid when SPI_MEM_FLASH_PES_WAIT_EN is 1. 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_
RES[9:0] * 128) SPI_CLK cycles after PES command is sent. 0: SPI1 waits (SPI_MEM
_CS_HOLD_DELAY_RES[9:0] * 4) SPI_CLK cycles after PES command is sent..*/
#define SPI_MEM_FLASH_PES_DLY_128    (BIT(6))
#define SPI_MEM_FLASH_PES_DLY_128_M  (BIT(6))
#define SPI_MEM_FLASH_PES_DLY_128_V  0x1
#define SPI_MEM_FLASH_PES_DLY_128_S  6
/* SPI_MEM_FLASH_PER_DLY_128 : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Valid when SPI_MEM_FLASH_PER_WAIT_EN is 1. 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_
RES[9:0] * 128) SPI_CLK cycles after PER command is sent. 0: SPI1 waits (SPI_MEM
_CS_HOLD_DELAY_RES[9:0] * 4) SPI_CLK cycles after PER command is sent..*/
#define SPI_MEM_FLASH_PER_DLY_128    (BIT(5))
#define SPI_MEM_FLASH_PER_DLY_128_M  (BIT(5))
#define SPI_MEM_FLASH_PER_DLY_128_V  0x1
#define SPI_MEM_FLASH_PER_DLY_128_S  5
/* SPI_MEM_FLASH_DP_DLY_128 : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 128) SPI_CLK cycles after DP com
mand is sent. 0: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 4) SPI_CLK cycles
after DP command is sent..*/
#define SPI_MEM_FLASH_DP_DLY_128    (BIT(4))
#define SPI_MEM_FLASH_DP_DLY_128_M  (BIT(4))
#define SPI_MEM_FLASH_DP_DLY_128_V  0x1
#define SPI_MEM_FLASH_DP_DLY_128_S  4
/* SPI_MEM_FLASH_RES_DLY_128 : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 128) SPI_CLK cycles after RES co
mmand is sent. 0: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 4) SPI_CLK cycles
 after RES command is sent..*/
#define SPI_MEM_FLASH_RES_DLY_128    (BIT(3))
#define SPI_MEM_FLASH_RES_DLY_128_M  (BIT(3))
#define SPI_MEM_FLASH_RES_DLY_128_V  0x1
#define SPI_MEM_FLASH_RES_DLY_128_S  3
/* SPI_MEM_FLASH_HPM_DLY_128 : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: 1: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 128) SPI_CLK cycles after HPM co
mmand is sent. 0: SPI1 waits (SPI_MEM_CS_HOLD_DELAY_RES[9:0] * 4) SPI_CLK cycles
 after HPM command is sent..*/
#define SPI_MEM_FLASH_HPM_DLY_128    (BIT(2))
#define SPI_MEM_FLASH_HPM_DLY_128_M  (BIT(2))
#define SPI_MEM_FLASH_HPM_DLY_128_V  0x1
#define SPI_MEM_FLASH_HPM_DLY_128_S  2
/* SPI_MEM_WAIT_PESR_CMD_2B : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: 1: SPI1 sends out SPI_MEM_WAIT_PESR_COMMAND[15:0] to check SUS/SUS1/SUS2 bit. 0:
 SPI1 sends out SPI_MEM_WAIT_PESR_COMMAND[7:0] to check SUS/SUS1/SUS2 bit..*/
#define SPI_MEM_WAIT_PESR_CMD_2B    (BIT(1))
#define SPI_MEM_WAIT_PESR_CMD_2B_M  (BIT(1))
#define SPI_MEM_WAIT_PESR_CMD_2B_V  0x1
#define SPI_MEM_WAIT_PESR_CMD_2B_S  1
/* SPI_MEM_FLASH_SUS : R/W/SS/SC ;bitpos:[0] ;default: 1'h0 ; */
/*description: The status of flash suspend, only used in SPI1..*/
#define SPI_MEM_FLASH_SUS    (BIT(0))
#define SPI_MEM_FLASH_SUS_M  (BIT(0))
#define SPI_MEM_FLASH_SUS_V  0x1
#define SPI_MEM_FLASH_SUS_S  0

#define SPI_MEM_FLASH_WAITI_CTRL1_REG(i)          (REG_SPI_MEM_BASE(i) + 0xAC)
/* SPI_MEM_WAITI_IDLE_DELAY_TIME_EN : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: Enable SPI1 wait idle gap time count functon. 1: Enable. 0: Disable..*/
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_EN    (BIT(10))
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_EN_M  (BIT(10))
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_EN_V  0x1
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_EN_S  10
/* SPI_MEM_WAITI_IDLE_DELAY_TIME : R/W ;bitpos:[9:0] ;default: 10'h0 ; */
/*description: SPI1 wait idle gap time configuration. SPI1 slv fsm will count during SPI1 IDLE..*/
#define SPI_MEM_WAITI_IDLE_DELAY_TIME    0x000003FF
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_M  ((SPI_MEM_WAITI_IDLE_DELAY_TIME_V)<<(SPI_MEM_WAITI_IDLE_DELAY_TIME_S))
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_V  0x3FF
#define SPI_MEM_WAITI_IDLE_DELAY_TIME_S  0

#define SPI_MEM_INT_ENA_REG(i)          (REG_SPI_MEM_BASE(i) + 0xC0)
/* SPI_MEM_NANDFLASH_ECC_ERR_INT_ENA : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_NANDFLASH_ECC_ERR_INT interrupt..*/
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ENA    (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ENA_M  (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ENA_V  0x1
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ENA_S  12
/* SPI_MEM_NANDFLASH_PE_FAIL_INT_ENA : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_NANDFLASH_PE_FAIL_INT interrupt..*/
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ENA    (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ENA_M  (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ENA_V  0x1
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ENA_S  11
/* SPI_MEM_BROWN_OUT_INT_ENA : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_BROWN_OUT_INT interrupt..*/
#define SPI_MEM_BROWN_OUT_INT_ENA    (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_ENA_M  (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_ENA_V  0x1
#define SPI_MEM_BROWN_OUT_INT_ENA_S  10
/* SPI_MEM_AXI_WADDR_ERR_INT_ENA : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt..*/
#define SPI_MEM_AXI_WADDR_ERR_INT_ENA    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_ENA_M  (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_ENA_V  0x1
#define SPI_MEM_AXI_WADDR_ERR_INT_ENA_S  9
/* SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt..*/
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_M  (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_V  0x1
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ENA_S  8
/* SPI_MEM_AXI_RADDR_ERR_INT_ENA : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt..*/
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA_M  (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA_V  0x1
#define SPI_MEM_AXI_RADDR_ERR_INT_ENA_S  7
/* SPI_MEM_PMS_REJECT_INT_ENA : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_PMS_REJECT_INT interrupt..*/
#define SPI_MEM_PMS_REJECT_INT_ENA    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_ENA_M  (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_ENA_V  0x1
#define SPI_MEM_PMS_REJECT_INT_ENA_S  6
/* SPI_MEM_ECC_ERR_INT_ENA : HRO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_ECC_ERR_INT interrupt..*/
#define SPI_MEM_ECC_ERR_INT_ENA    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_ENA_M  (BIT(5))
#define SPI_MEM_ECC_ERR_INT_ENA_V  0x1
#define SPI_MEM_ECC_ERR_INT_ENA_S  5
/* SPI_MEM_MST_ST_END_INT_ENA : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_MST_ST_END_INT interrupt..*/
#define SPI_MEM_MST_ST_END_INT_ENA    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_ENA_M  (BIT(4))
#define SPI_MEM_MST_ST_END_INT_ENA_V  0x1
#define SPI_MEM_MST_ST_END_INT_ENA_S  4
/* SPI_MEM_SLV_ST_END_INT_ENA : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_SLV_ST_END_INT interrupt..*/
#define SPI_MEM_SLV_ST_END_INT_ENA    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_ENA_M  (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_ENA_V  0x1
#define SPI_MEM_SLV_ST_END_INT_ENA_S  3
/* SPI_MEM_WPE_END_INT_ENA : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_WPE_END_INT interrupt..*/
#define SPI_MEM_WPE_END_INT_ENA    (BIT(2))
#define SPI_MEM_WPE_END_INT_ENA_M  (BIT(2))
#define SPI_MEM_WPE_END_INT_ENA_V  0x1
#define SPI_MEM_WPE_END_INT_ENA_S  2
/* SPI_MEM_PES_END_INT_ENA : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_PES_END_INT interrupt..*/
#define SPI_MEM_PES_END_INT_ENA    (BIT(1))
#define SPI_MEM_PES_END_INT_ENA_M  (BIT(1))
#define SPI_MEM_PES_END_INT_ENA_V  0x1
#define SPI_MEM_PES_END_INT_ENA_S  1
/* SPI_MEM_PER_END_INT_ENA : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: The enable bit for SPI_MEM_PER_END_INT interrupt..*/
#define SPI_MEM_PER_END_INT_ENA    (BIT(0))
#define SPI_MEM_PER_END_INT_ENA_M  (BIT(0))
#define SPI_MEM_PER_END_INT_ENA_V  0x1
#define SPI_MEM_PER_END_INT_ENA_S  0

#define SPI_MEM_INT_CLR_REG(i)          (REG_SPI_MEM_BASE(i) + 0xC4)
/* SPI_MEM_NANDFLASH_ECC_ERR_INT_CLR : WT ;bitpos:[12] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_NANDFLASH_ECC_ERR_INT interrupt..*/
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_CLR    (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_CLR_M  (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_CLR_V  0x1
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_CLR_S  12
/* SPI_MEM_NANDFLASH_PE_FAIL_INT_CLR : WT ;bitpos:[11] ;default: 1'b0 ; */
/*description: The  clear bit for SPI_MEM_NANDFLASH_PE_FAIL_INT interrupt..*/
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_CLR    (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_CLR_M  (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_CLR_V  0x1
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_CLR_S  11
/* SPI_MEM_BROWN_OUT_INT_CLR : WT ;bitpos:[10] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_BROWN_OUT_INT interrupt..*/
#define SPI_MEM_BROWN_OUT_INT_CLR    (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_CLR_M  (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_CLR_V  0x1
#define SPI_MEM_BROWN_OUT_INT_CLR_S  10
/* SPI_MEM_AXI_WADDR_ERR_INT_CLR : WT ;bitpos:[9] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt..*/
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR_M  (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR_V  0x1
#define SPI_MEM_AXI_WADDR_ERR_INT_CLR_S  9
/* SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR : WT ;bitpos:[8] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt..*/
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_M  (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_V  0x1
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_CLR_S  8
/* SPI_MEM_AXI_RADDR_ERR_INT_CLR : WT ;bitpos:[7] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt..*/
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR_M  (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR_V  0x1
#define SPI_MEM_AXI_RADDR_ERR_INT_CLR_S  7
/* SPI_MEM_PMS_REJECT_INT_CLR : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_PMS_REJECT_INT interrupt..*/
#define SPI_MEM_PMS_REJECT_INT_CLR    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_CLR_M  (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_CLR_V  0x1
#define SPI_MEM_PMS_REJECT_INT_CLR_S  6
/* SPI_MEM_ECC_ERR_INT_CLR : HRO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_ECC_ERR_INT interrupt..*/
#define SPI_MEM_ECC_ERR_INT_CLR    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_CLR_M  (BIT(5))
#define SPI_MEM_ECC_ERR_INT_CLR_V  0x1
#define SPI_MEM_ECC_ERR_INT_CLR_S  5
/* SPI_MEM_MST_ST_END_INT_CLR : WT ;bitpos:[4] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_MST_ST_END_INT interrupt..*/
#define SPI_MEM_MST_ST_END_INT_CLR    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_CLR_M  (BIT(4))
#define SPI_MEM_MST_ST_END_INT_CLR_V  0x1
#define SPI_MEM_MST_ST_END_INT_CLR_S  4
/* SPI_MEM_SLV_ST_END_INT_CLR : WT ;bitpos:[3] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_SLV_ST_END_INT interrupt..*/
#define SPI_MEM_SLV_ST_END_INT_CLR    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_CLR_M  (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_CLR_V  0x1
#define SPI_MEM_SLV_ST_END_INT_CLR_S  3
/* SPI_MEM_WPE_END_INT_CLR : WT ;bitpos:[2] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_WPE_END_INT interrupt..*/
#define SPI_MEM_WPE_END_INT_CLR    (BIT(2))
#define SPI_MEM_WPE_END_INT_CLR_M  (BIT(2))
#define SPI_MEM_WPE_END_INT_CLR_V  0x1
#define SPI_MEM_WPE_END_INT_CLR_S  2
/* SPI_MEM_PES_END_INT_CLR : WT ;bitpos:[1] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_PES_END_INT interrupt..*/
#define SPI_MEM_PES_END_INT_CLR    (BIT(1))
#define SPI_MEM_PES_END_INT_CLR_M  (BIT(1))
#define SPI_MEM_PES_END_INT_CLR_V  0x1
#define SPI_MEM_PES_END_INT_CLR_S  1
/* SPI_MEM_PER_END_INT_CLR : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: The clear bit for SPI_MEM_PER_END_INT interrupt..*/
#define SPI_MEM_PER_END_INT_CLR    (BIT(0))
#define SPI_MEM_PER_END_INT_CLR_M  (BIT(0))
#define SPI_MEM_PER_END_INT_CLR_V  0x1
#define SPI_MEM_PER_END_INT_CLR_S  0

#define SPI_MEM_INT_RAW_REG(i)          (REG_SPI_MEM_BASE(i) + 0xC8)
/* SPI_MEM_NANDFLASH_ECC_ERR_INT_RAW : R/WTC/SS ;bitpos:[12] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_NANDFLASH_ECC_ERR_INT interrupt. 1: Triggered when NAND
FLASH SPI SEQ found ECCS bits is err when RDSR. 0: Others..*/
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_RAW    (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_RAW_M  (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_RAW_V  0x1
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_RAW_S  12
/* SPI_MEM_NANDFLASH_PE_FAIL_INT_RAW : R/WTC/SS ;bitpos:[11] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_NANDFLASH_PE_FAIL_INT interrupt. 1: Triggered when NAND
FLASH SPI SEQ found P/E_FAIL bits is err when RDSR. 0: Others..*/
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_RAW    (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_RAW_M  (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_RAW_V  0x1
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_RAW_S  11
/* SPI_MEM_BROWN_OUT_INT_RAW : R/WTC/SS ;bitpos:[10] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_BROWN_OUT_INT interrupt. 1: Triggered condition is that
chip is loosing power and RTC module sends out brown out close flash request to
SPI1. After SPI1 sends out suspend command to flash, this interrupt is triggered
 and MSPI returns to idle state. 0: Others..*/
#define SPI_MEM_BROWN_OUT_INT_RAW    (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_RAW_M  (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_RAW_V  0x1
#define SPI_MEM_BROWN_OUT_INT_RAW_S  10
/* SPI_MEM_AXI_WADDR_ERR_INT_RAW : R/WTC/SS ;bitpos:[9] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt. 1: Triggered when AXI write
 address is invalid by compared to MMU configuration. 0: Others..*/
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW_M  (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW_V  0x1
#define SPI_MEM_AXI_WADDR_ERR_INT_RAW_S  9
/* SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW : R/WTC/SS ;bitpos:[8] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt. 1: Triggered when AXI wr
ite flash request is received. 0: Others..*/
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_M  (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_V  0x1
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_RAW_S  8
/* SPI_MEM_AXI_RADDR_ERR_INT_RAW : R/WTC/SS ;bitpos:[7] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt. 1: Triggered when AXI read
address is invalid by compared to MMU configuration. 0: Others..*/
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW_M  (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW_V  0x1
#define SPI_MEM_AXI_RADDR_ERR_INT_RAW_S  7
/* SPI_MEM_PMS_REJECT_INT_RAW : R/WTC/SS ;bitpos:[6] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_PMS_REJECT_INT interrupt. 1: Triggered when SPI1 access
is rejected. 0: Others..*/
#define SPI_MEM_PMS_REJECT_INT_RAW    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_RAW_M  (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_RAW_V  0x1
#define SPI_MEM_PMS_REJECT_INT_RAW_S  6
/* SPI_MEM_ECC_ERR_INT_RAW : HRO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_ECC_ERR_INT interrupt. When SPI_FMEM_ECC_ERR_INT_EN is s
et and  SPI_SMEM_ECC_ERR_INT_EN is cleared, this bit is triggered when the error
 times of SPI0/1 ECC read flash are equal or bigger than SPI_MEM_ECC_ERR_INT_NUM
. When SPI_FMEM_ECC_ERR_INT_EN is cleared and  SPI_SMEM_ECC_ERR_INT_EN is set, t
his bit is triggered when the error times of SPI0/1 ECC read external RAM are eq
ual or bigger than SPI_MEM_ECC_ERR_INT_NUM. When SPI_FMEM_ECC_ERR_INT_EN and  SP
I_SMEM_ECC_ERR_INT_EN are set, this bit is triggered when the total error times
of SPI0/1 ECC read external RAM and flash are equal or bigger than SPI_MEM_ECC_E
RR_INT_NUM. When SPI_FMEM_ECC_ERR_INT_EN and  SPI_SMEM_ECC_ERR_INT_EN are cleare
d, this bit will not be triggered..*/
#define SPI_MEM_ECC_ERR_INT_RAW    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_RAW_M  (BIT(5))
#define SPI_MEM_ECC_ERR_INT_RAW_V  0x1
#define SPI_MEM_ECC_ERR_INT_RAW_S  5
/* SPI_MEM_MST_ST_END_INT_RAW : R/WTC/SS ;bitpos:[4] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_MST_ST_END_INT interrupt. 1: Triggered when spi0_mst_st
is changed from non idle state to idle state. 0: Others..*/
#define SPI_MEM_MST_ST_END_INT_RAW    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_RAW_M  (BIT(4))
#define SPI_MEM_MST_ST_END_INT_RAW_V  0x1
#define SPI_MEM_MST_ST_END_INT_RAW_S  4
/* SPI_MEM_SLV_ST_END_INT_RAW : R/WTC/SS ;bitpos:[3] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_SLV_ST_END_INT interrupt. 1: Triggered when spi0_slv_st
is changed from non idle state to idle state. It means that SPI_CS raises high.
0: Others.*/
#define SPI_MEM_SLV_ST_END_INT_RAW    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_RAW_M  (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_RAW_V  0x1
#define SPI_MEM_SLV_ST_END_INT_RAW_S  3
/* SPI_MEM_WPE_END_INT_RAW : R/WTC/SS ;bitpos:[2] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_WPE_END_INT interrupt. 1: Triggered when WRSR/PP/SE/BE/C
E is sent and flash is already idle. 0: Others..*/
#define SPI_MEM_WPE_END_INT_RAW    (BIT(2))
#define SPI_MEM_WPE_END_INT_RAW_M  (BIT(2))
#define SPI_MEM_WPE_END_INT_RAW_V  0x1
#define SPI_MEM_WPE_END_INT_RAW_S  2
/* SPI_MEM_PES_END_INT_RAW : R/WTC/SS ;bitpos:[1] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_PES_END_INT interrupt.1: Triggered when Auto Suspend com
mand (0x75) is sent and flash is suspended successfully. 0: Others..*/
#define SPI_MEM_PES_END_INT_RAW    (BIT(1))
#define SPI_MEM_PES_END_INT_RAW_M  (BIT(1))
#define SPI_MEM_PES_END_INT_RAW_V  0x1
#define SPI_MEM_PES_END_INT_RAW_S  1
/* SPI_MEM_PER_END_INT_RAW : R/WTC/SS ;bitpos:[0] ;default: 1'b0 ; */
/*description: The raw bit for SPI_MEM_PER_END_INT interrupt. 1: Triggered when Auto Resume com
mand (0x7A) is sent and flash is resumed successfully. 0: Others..*/
#define SPI_MEM_PER_END_INT_RAW    (BIT(0))
#define SPI_MEM_PER_END_INT_RAW_M  (BIT(0))
#define SPI_MEM_PER_END_INT_RAW_V  0x1
#define SPI_MEM_PER_END_INT_RAW_S  0

#define SPI_MEM_INT_ST_REG(i)          (REG_SPI_MEM_BASE(i) + 0xCC)
/* SPI_MEM_NANDFLASH_ECC_ERR_INT_ST : RO ;bitpos:[12] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_NANDFLASH_ECC_ERR_INT interrupt..*/
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ST    (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ST_M  (BIT(12))
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ST_V  0x1
#define SPI_MEM_NANDFLASH_ECC_ERR_INT_ST_S  12
/* SPI_MEM_NANDFLASH_PE_FAIL_INT_ST : RO ;bitpos:[11] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_NANDFLASH_PE_FAIL_INT interrupt..*/
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ST    (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ST_M  (BIT(11))
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ST_V  0x1
#define SPI_MEM_NANDFLASH_PE_FAIL_INT_ST_S  11
/* SPI_MEM_BROWN_OUT_INT_ST : RO ;bitpos:[10] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_BROWN_OUT_INT interrupt..*/
#define SPI_MEM_BROWN_OUT_INT_ST    (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_ST_M  (BIT(10))
#define SPI_MEM_BROWN_OUT_INT_ST_V  0x1
#define SPI_MEM_BROWN_OUT_INT_ST_S  10
/* SPI_MEM_AXI_WADDR_ERR_INT_ST : RO ;bitpos:[9] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_AXI_WADDR_ERR_INT interrupt..*/
#define SPI_MEM_AXI_WADDR_ERR_INT_ST    (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_ST_M  (BIT(9))
#define SPI_MEM_AXI_WADDR_ERR_INT_ST_V  0x1
#define SPI_MEM_AXI_WADDR_ERR_INT_ST_S  9
/* SPI_MEM_AXI_WR_FLASH_ERR_INT_ST : RO ;bitpos:[8] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_AXI_WR_FALSH_ERR_INT interrupt..*/
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST    (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_M  (BIT(8))
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_V  0x1
#define SPI_MEM_AXI_WR_FLASH_ERR_INT_ST_S  8
/* SPI_MEM_AXI_RADDR_ERR_INT_ST : RO ;bitpos:[7] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_AXI_RADDR_ERR_INT interrupt..*/
#define SPI_MEM_AXI_RADDR_ERR_INT_ST    (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_ST_M  (BIT(7))
#define SPI_MEM_AXI_RADDR_ERR_INT_ST_V  0x1
#define SPI_MEM_AXI_RADDR_ERR_INT_ST_S  7
/* SPI_MEM_PMS_REJECT_INT_ST : RO ;bitpos:[6] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_PMS_REJECT_INT interrupt..*/
#define SPI_MEM_PMS_REJECT_INT_ST    (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_ST_M  (BIT(6))
#define SPI_MEM_PMS_REJECT_INT_ST_V  0x1
#define SPI_MEM_PMS_REJECT_INT_ST_S  6
/* SPI_MEM_ECC_ERR_INT_ST : RO ;bitpos:[5] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_ECC_ERR_INT interrupt..*/
#define SPI_MEM_ECC_ERR_INT_ST    (BIT(5))
#define SPI_MEM_ECC_ERR_INT_ST_M  (BIT(5))
#define SPI_MEM_ECC_ERR_INT_ST_V  0x1
#define SPI_MEM_ECC_ERR_INT_ST_S  5
/* SPI_MEM_MST_ST_END_INT_ST : RO ;bitpos:[4] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_MST_ST_END_INT interrupt..*/
#define SPI_MEM_MST_ST_END_INT_ST    (BIT(4))
#define SPI_MEM_MST_ST_END_INT_ST_M  (BIT(4))
#define SPI_MEM_MST_ST_END_INT_ST_V  0x1
#define SPI_MEM_MST_ST_END_INT_ST_S  4
/* SPI_MEM_SLV_ST_END_INT_ST : RO ;bitpos:[3] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_SLV_ST_END_INT interrupt..*/
#define SPI_MEM_SLV_ST_END_INT_ST    (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_ST_M  (BIT(3))
#define SPI_MEM_SLV_ST_END_INT_ST_V  0x1
#define SPI_MEM_SLV_ST_END_INT_ST_S  3
/* SPI_MEM_WPE_END_INT_ST : RO ;bitpos:[2] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_WPE_END_INT interrupt..*/
#define SPI_MEM_WPE_END_INT_ST    (BIT(2))
#define SPI_MEM_WPE_END_INT_ST_M  (BIT(2))
#define SPI_MEM_WPE_END_INT_ST_V  0x1
#define SPI_MEM_WPE_END_INT_ST_S  2
/* SPI_MEM_PES_END_INT_ST : RO ;bitpos:[1] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_PES_END_INT interrupt..*/
#define SPI_MEM_PES_END_INT_ST    (BIT(1))
#define SPI_MEM_PES_END_INT_ST_M  (BIT(1))
#define SPI_MEM_PES_END_INT_ST_V  0x1
#define SPI_MEM_PES_END_INT_ST_S  1
/* SPI_MEM_PER_END_INT_ST : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: The status bit for SPI_MEM_PER_END_INT interrupt..*/
#define SPI_MEM_PER_END_INT_ST    (BIT(0))
#define SPI_MEM_PER_END_INT_ST_M  (BIT(0))
#define SPI_MEM_PER_END_INT_ST_V  0x1
#define SPI_MEM_PER_END_INT_ST_S  0

#define SPI_MEM_DDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0xD4)
/* SPI_MEM_SPI_FMEM_HYPERBUS_CA : HRO ;bitpos:[30] ;default: 1'b0 ; */
/*description: Set this bit to enable HyperRAM address out when accesses to flash, which means
ADDR_OUT[31:0] = {spi_usr_addr_value[19:4], 13'd0, spi_usr_addr_value[3:1]}..*/
#define SPI_MEM_SPI_FMEM_HYPERBUS_CA    (BIT(30))
#define SPI_MEM_SPI_FMEM_HYPERBUS_CA_M  (BIT(30))
#define SPI_MEM_SPI_FMEM_HYPERBUS_CA_V  0x1
#define SPI_MEM_SPI_FMEM_HYPERBUS_CA_S  30
/* SPI_MEM_SPI_FMEM_OCTA_RAM_ADDR : HRO ;bitpos:[29] ;default: 1'b0 ; */
/*description: Set this bit to enable octa_ram address out when accesses to flash, which means
ADDR_OUT[31:0] = {spi_usr_addr_value[25:4], 6'd0, spi_usr_addr_value[3:1], 1'b0}
..*/
#define SPI_MEM_SPI_FMEM_OCTA_RAM_ADDR    (BIT(29))
#define SPI_MEM_SPI_FMEM_OCTA_RAM_ADDR_M  (BIT(29))
#define SPI_MEM_SPI_FMEM_OCTA_RAM_ADDR_V  0x1
#define SPI_MEM_SPI_FMEM_OCTA_RAM_ADDR_S  29
/* SPI_MEM_SPI_FMEM_CLK_DIFF_INV : HRO ;bitpos:[28] ;default: 1'b0 ; */
/*description: Set this bit to invert SPI_DIFF when accesses to flash. ..*/
#define SPI_MEM_SPI_FMEM_CLK_DIFF_INV    (BIT(28))
#define SPI_MEM_SPI_FMEM_CLK_DIFF_INV_M  (BIT(28))
#define SPI_MEM_SPI_FMEM_CLK_DIFF_INV_V  0x1
#define SPI_MEM_SPI_FMEM_CLK_DIFF_INV_S  28
/* SPI_MEM_SPI_FMEM_HYPERBUS_DUMMY_2X : HRO ;bitpos:[27] ;default: 1'b0 ; */
/*description: Set this bit to enable the vary dummy function in SPI HyperBus mode, when SPI0 a
ccesses flash or SPI1 accesses flash or sram..*/
#define SPI_MEM_SPI_FMEM_HYPERBUS_DUMMY_2X    (BIT(27))
#define SPI_MEM_SPI_FMEM_HYPERBUS_DUMMY_2X_M  (BIT(27))
#define SPI_MEM_SPI_FMEM_HYPERBUS_DUMMY_2X_V  0x1
#define SPI_MEM_SPI_FMEM_HYPERBUS_DUMMY_2X_S  27
/* SPI_MEM_SPI_FMEM_DQS_CA_IN : HRO ;bitpos:[26] ;default: 1'b0 ; */
/*description: Set this bit to enable the input of SPI_DQS signal in SPI phases of CMD and ADDR
..*/
#define SPI_MEM_SPI_FMEM_DQS_CA_IN    (BIT(26))
#define SPI_MEM_SPI_FMEM_DQS_CA_IN_M  (BIT(26))
#define SPI_MEM_SPI_FMEM_DQS_CA_IN_V  0x1
#define SPI_MEM_SPI_FMEM_DQS_CA_IN_S  26
/* SPI_MEM_SPI_FMEM_CLK_DIFF_EN : HRO ;bitpos:[24] ;default: 1'b0 ; */
/*description: Set this bit to enable the differential SPI_CLK#..*/
#define SPI_MEM_SPI_FMEM_CLK_DIFF_EN    (BIT(24))
#define SPI_MEM_SPI_FMEM_CLK_DIFF_EN_M  (BIT(24))
#define SPI_MEM_SPI_FMEM_CLK_DIFF_EN_V  0x1
#define SPI_MEM_SPI_FMEM_CLK_DIFF_EN_S  24
/* SPI_MEM_SPI_FMEM_DDR_DQS_LOOP : HRO ;bitpos:[21] ;default: 1'b0 ; */
/*description: 1: Do not need the input of SPI_DQS signal, SPI0 starts to receive data when spi
0_slv_st is in SPI_MEM_DIN state. It is used when there is no SPI_DQS signal or
SPI_DQS signal is not stable. 0: SPI0 starts to store data at the positive and n
egative edge of SPI_DQS..*/
#define SPI_MEM_SPI_FMEM_DDR_DQS_LOOP    (BIT(21))
#define SPI_MEM_SPI_FMEM_DDR_DQS_LOOP_M  (BIT(21))
#define SPI_MEM_SPI_FMEM_DDR_DQS_LOOP_V  0x1
#define SPI_MEM_SPI_FMEM_DDR_DQS_LOOP_S  21
/* SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD : HRO ;bitpos:[20:14] ;default: 7'b0 ; */
/*description: The delay number of data strobe which from memory based on SPI clock..*/
#define SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD    0x0000007F
#define SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD_M  ((SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD_V)<<(SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD_S))
#define SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD_V  0x7F
#define SPI_MEM_SPI_FMEM_USR_DDR_DQS_THD_S  14
/* SPI_MEM_SPI_FMEM_RX_DDR_MSK_EN : R/W ;bitpos:[13] ;default: 1'h1 ; */
/*description: Set this bit to mask the first or the last byte in SPI0 ECC DDR read mode, when
accesses to flash..*/
#define SPI_MEM_SPI_FMEM_RX_DDR_MSK_EN    (BIT(13))
#define SPI_MEM_SPI_FMEM_RX_DDR_MSK_EN_M  (BIT(13))
#define SPI_MEM_SPI_FMEM_RX_DDR_MSK_EN_V  0x1
#define SPI_MEM_SPI_FMEM_RX_DDR_MSK_EN_S  13
/* SPI_MEM_SPI_FMEM_TX_DDR_MSK_EN : R/W ;bitpos:[12] ;default: 1'h1 ; */
/*description: Set this bit to mask the first or the last byte in SPI0 ECC DDR write mode, when
 accesses to flash..*/
#define SPI_MEM_SPI_FMEM_TX_DDR_MSK_EN    (BIT(12))
#define SPI_MEM_SPI_FMEM_TX_DDR_MSK_EN_M  (BIT(12))
#define SPI_MEM_SPI_FMEM_TX_DDR_MSK_EN_V  0x1
#define SPI_MEM_SPI_FMEM_TX_DDR_MSK_EN_S  12
/* SPI_MEM_SPI_FMEM_OUTMINBYTELEN : HRO ;bitpos:[11:5] ;default: 7'b1 ; */
/*description: It is the minimum output data length in the panda device..*/
#define SPI_MEM_SPI_FMEM_OUTMINBYTELEN    0x0000007F
#define SPI_MEM_SPI_FMEM_OUTMINBYTELEN_M  ((SPI_MEM_SPI_FMEM_OUTMINBYTELEN_V)<<(SPI_MEM_SPI_FMEM_OUTMINBYTELEN_S))
#define SPI_MEM_SPI_FMEM_OUTMINBYTELEN_V  0x7F
#define SPI_MEM_SPI_FMEM_OUTMINBYTELEN_S  5
/* SPI_MEM_SPI_FMEM_DDR_CMD_DIS : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: the bit is used to disable dual edge in command phase when DDR mode..*/
#define SPI_MEM_SPI_FMEM_DDR_CMD_DIS    (BIT(4))
#define SPI_MEM_SPI_FMEM_DDR_CMD_DIS_M  (BIT(4))
#define SPI_MEM_SPI_FMEM_DDR_CMD_DIS_V  0x1
#define SPI_MEM_SPI_FMEM_DDR_CMD_DIS_S  4
/* SPI_MEM_SPI_FMEM_DDR_WDAT_SWP : HRO ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set the bit to reorder tx data of the word in spi DDR mode..*/
#define SPI_MEM_SPI_FMEM_DDR_WDAT_SWP    (BIT(3))
#define SPI_MEM_SPI_FMEM_DDR_WDAT_SWP_M  (BIT(3))
#define SPI_MEM_SPI_FMEM_DDR_WDAT_SWP_V  0x1
#define SPI_MEM_SPI_FMEM_DDR_WDAT_SWP_S  3
/* SPI_MEM_SPI_FMEM_DDR_RDAT_SWP : HRO ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set the bit to reorder rx data of the word in spi DDR mode..*/
#define SPI_MEM_SPI_FMEM_DDR_RDAT_SWP    (BIT(2))
#define SPI_MEM_SPI_FMEM_DDR_RDAT_SWP_M  (BIT(2))
#define SPI_MEM_SPI_FMEM_DDR_RDAT_SWP_V  0x1
#define SPI_MEM_SPI_FMEM_DDR_RDAT_SWP_S  2
/* SPI_MEM_SPI_FMEM_VAR_DUMMY : HRO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set the bit to enable variable dummy cycle in spi DDR mode..*/
#define SPI_MEM_SPI_FMEM_VAR_DUMMY    (BIT(1))
#define SPI_MEM_SPI_FMEM_VAR_DUMMY_M  (BIT(1))
#define SPI_MEM_SPI_FMEM_VAR_DUMMY_V  0x1
#define SPI_MEM_SPI_FMEM_VAR_DUMMY_S  1
/* SPI_MEM_SPI_FMEM_DDR_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: 1: in DDR mode,  0 in SDR mode.*/
#define SPI_MEM_SPI_FMEM_DDR_EN    (BIT(0))
#define SPI_MEM_SPI_FMEM_DDR_EN_M  (BIT(0))
#define SPI_MEM_SPI_FMEM_DDR_EN_V  0x1
#define SPI_MEM_SPI_FMEM_DDR_EN_S  0

#define SPI_MEM_SPI_SMEM_DDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0xD8)
/* SPI_MEM_SPI_SMEM_HYPERBUS_CA : HRO ;bitpos:[30] ;default: 1'b0 ; */
/*description: Set this bit to enable HyperRAM address out when accesses to external RAM, which
 means ADDR_OUT[31:0] = {spi_usr_addr_value[19:4], 13'd0, spi_usr_addr_value[3:1
]}..*/
#define SPI_MEM_SPI_SMEM_HYPERBUS_CA    (BIT(30))
#define SPI_MEM_SPI_SMEM_HYPERBUS_CA_M  (BIT(30))
#define SPI_MEM_SPI_SMEM_HYPERBUS_CA_V  0x1
#define SPI_MEM_SPI_SMEM_HYPERBUS_CA_S  30
/* SPI_MEM_SPI_SMEM_OCTA_RAM_ADDR : HRO ;bitpos:[29] ;default: 1'b0 ; */
/*description: Set this bit to enable octa_ram address out when accesses to external RAM, which
 means ADDR_OUT[31:0] = {spi_usr_addr_value[25:4], 6'd0, spi_usr_addr_value[3:1]
, 1'b0}..*/
#define SPI_MEM_SPI_SMEM_OCTA_RAM_ADDR    (BIT(29))
#define SPI_MEM_SPI_SMEM_OCTA_RAM_ADDR_M  (BIT(29))
#define SPI_MEM_SPI_SMEM_OCTA_RAM_ADDR_V  0x1
#define SPI_MEM_SPI_SMEM_OCTA_RAM_ADDR_S  29
/* SPI_MEM_SPI_SMEM_CLK_DIFF_INV : HRO ;bitpos:[28] ;default: 1'b0 ; */
/*description: Set this bit to invert SPI_DIFF when accesses to external RAM. ..*/
#define SPI_MEM_SPI_SMEM_CLK_DIFF_INV    (BIT(28))
#define SPI_MEM_SPI_SMEM_CLK_DIFF_INV_M  (BIT(28))
#define SPI_MEM_SPI_SMEM_CLK_DIFF_INV_V  0x1
#define SPI_MEM_SPI_SMEM_CLK_DIFF_INV_S  28
/* SPI_MEM_SPI_SMEM_HYPERBUS_DUMMY_2X : HRO ;bitpos:[27] ;default: 1'b0 ; */
/*description: Set this bit to enable the vary dummy function in SPI HyperBus mode, when SPI0 a
ccesses flash or SPI1 accesses flash or sram..*/
#define SPI_MEM_SPI_SMEM_HYPERBUS_DUMMY_2X    (BIT(27))
#define SPI_MEM_SPI_SMEM_HYPERBUS_DUMMY_2X_M  (BIT(27))
#define SPI_MEM_SPI_SMEM_HYPERBUS_DUMMY_2X_V  0x1
#define SPI_MEM_SPI_SMEM_HYPERBUS_DUMMY_2X_S  27
/* SPI_MEM_SPI_SMEM_DQS_CA_IN : HRO ;bitpos:[26] ;default: 1'b0 ; */
/*description: Set this bit to enable the input of SPI_DQS signal in SPI phases of CMD and ADDR
..*/
#define SPI_MEM_SPI_SMEM_DQS_CA_IN    (BIT(26))
#define SPI_MEM_SPI_SMEM_DQS_CA_IN_M  (BIT(26))
#define SPI_MEM_SPI_SMEM_DQS_CA_IN_V  0x1
#define SPI_MEM_SPI_SMEM_DQS_CA_IN_S  26
/* SPI_MEM_SPI_SMEM_CLK_DIFF_EN : HRO ;bitpos:[24] ;default: 1'b0 ; */
/*description: Set this bit to enable the differential SPI_CLK#..*/
#define SPI_MEM_SPI_SMEM_CLK_DIFF_EN    (BIT(24))
#define SPI_MEM_SPI_SMEM_CLK_DIFF_EN_M  (BIT(24))
#define SPI_MEM_SPI_SMEM_CLK_DIFF_EN_V  0x1
#define SPI_MEM_SPI_SMEM_CLK_DIFF_EN_S  24
/* SPI_MEM_SPI_SMEM_DDR_DQS_LOOP : HRO ;bitpos:[21] ;default: 1'b0 ; */
/*description: 1: Do not need the input of SPI_DQS signal, SPI0 starts to receive data when spi
0_slv_st is in SPI_MEM_DIN state. It is used when there is no SPI_DQS signal or
SPI_DQS signal is not stable. 0: SPI0 starts to store data at the positive and n
egative edge of SPI_DQS..*/
#define SPI_MEM_SPI_SMEM_DDR_DQS_LOOP    (BIT(21))
#define SPI_MEM_SPI_SMEM_DDR_DQS_LOOP_M  (BIT(21))
#define SPI_MEM_SPI_SMEM_DDR_DQS_LOOP_V  0x1
#define SPI_MEM_SPI_SMEM_DDR_DQS_LOOP_S  21
/* SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD : HRO ;bitpos:[20:14] ;default: 7'b0 ; */
/*description: The delay number of data strobe which from memory based on SPI clock..*/
#define SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD    0x0000007F
#define SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD_M  ((SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD_V)<<(SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD_S))
#define SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD_V  0x7F
#define SPI_MEM_SPI_SMEM_USR_DDR_DQS_THD_S  14
/* SPI_MEM_SPI_SMEM_RX_DDR_MSK_EN : HRO ;bitpos:[13] ;default: 1'h1 ; */
/*description: Set this bit to mask the first or the last byte in SPI0 ECC DDR read mode, when
accesses to external RAM..*/
#define SPI_MEM_SPI_SMEM_RX_DDR_MSK_EN    (BIT(13))
#define SPI_MEM_SPI_SMEM_RX_DDR_MSK_EN_M  (BIT(13))
#define SPI_MEM_SPI_SMEM_RX_DDR_MSK_EN_V  0x1
#define SPI_MEM_SPI_SMEM_RX_DDR_MSK_EN_S  13
/* SPI_MEM_SPI_SMEM_TX_DDR_MSK_EN : HRO ;bitpos:[12] ;default: 1'h1 ; */
/*description: Set this bit to mask the first or the last byte in SPI0 ECC DDR write mode, when
 accesses to external RAM..*/
#define SPI_MEM_SPI_SMEM_TX_DDR_MSK_EN    (BIT(12))
#define SPI_MEM_SPI_SMEM_TX_DDR_MSK_EN_M  (BIT(12))
#define SPI_MEM_SPI_SMEM_TX_DDR_MSK_EN_V  0x1
#define SPI_MEM_SPI_SMEM_TX_DDR_MSK_EN_S  12
/* SPI_MEM_SPI_SMEM_OUTMINBYTELEN : HRO ;bitpos:[11:5] ;default: 7'b1 ; */
/*description: It is the minimum output data length in the DDR psram..*/
#define SPI_MEM_SPI_SMEM_OUTMINBYTELEN    0x0000007F
#define SPI_MEM_SPI_SMEM_OUTMINBYTELEN_M  ((SPI_MEM_SPI_SMEM_OUTMINBYTELEN_V)<<(SPI_MEM_SPI_SMEM_OUTMINBYTELEN_S))
#define SPI_MEM_SPI_SMEM_OUTMINBYTELEN_V  0x7F
#define SPI_MEM_SPI_SMEM_OUTMINBYTELEN_S  5
/* SPI_MEM_SPI_SMEM_DDR_CMD_DIS : HRO ;bitpos:[4] ;default: 1'b0 ; */
/*description: the bit is used to disable dual edge in command phase when DDR mode..*/
#define SPI_MEM_SPI_SMEM_DDR_CMD_DIS    (BIT(4))
#define SPI_MEM_SPI_SMEM_DDR_CMD_DIS_M  (BIT(4))
#define SPI_MEM_SPI_SMEM_DDR_CMD_DIS_V  0x1
#define SPI_MEM_SPI_SMEM_DDR_CMD_DIS_S  4
/* SPI_MEM_SPI_SMEM_DDR_WDAT_SWP : HRO ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set the bit to reorder tx data of the word in spi DDR mode..*/
#define SPI_MEM_SPI_SMEM_DDR_WDAT_SWP    (BIT(3))
#define SPI_MEM_SPI_SMEM_DDR_WDAT_SWP_M  (BIT(3))
#define SPI_MEM_SPI_SMEM_DDR_WDAT_SWP_V  0x1
#define SPI_MEM_SPI_SMEM_DDR_WDAT_SWP_S  3
/* SPI_MEM_SPI_SMEM_DDR_RDAT_SWP : HRO ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set the bit to reorder rx data of the word in spi DDR mode..*/
#define SPI_MEM_SPI_SMEM_DDR_RDAT_SWP    (BIT(2))
#define SPI_MEM_SPI_SMEM_DDR_RDAT_SWP_M  (BIT(2))
#define SPI_MEM_SPI_SMEM_DDR_RDAT_SWP_V  0x1
#define SPI_MEM_SPI_SMEM_DDR_RDAT_SWP_S  2
/* SPI_MEM_SPI_SMEM_VAR_DUMMY : HRO ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set the bit to enable variable dummy cycle in spi DDR mode..*/
#define SPI_MEM_SPI_SMEM_VAR_DUMMY    (BIT(1))
#define SPI_MEM_SPI_SMEM_VAR_DUMMY_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_VAR_DUMMY_V  0x1
#define SPI_MEM_SPI_SMEM_VAR_DUMMY_S  1
/* SPI_MEM_SPI_SMEM_DDR_EN : HRO ;bitpos:[0] ;default: 1'b0 ; */
/*description: 1: in DDR mode,  0 in SDR mode.*/
#define SPI_MEM_SPI_SMEM_DDR_EN    (BIT(0))
#define SPI_MEM_SPI_SMEM_DDR_EN_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_DDR_EN_V  0x1
#define SPI_MEM_SPI_SMEM_DDR_EN_S  0

#define SPI_MEM_SPI_FMEM_PMS0_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x100)
/* SPI_MEM_SPI_FMEM_PMS0_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 flash PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. The flash
 PMS section $n is configured by registers SPI_FMEM_PMS$n_ADDR_REG and SPI_FMEM_
PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_FMEM_PMS0_ECC    (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS0_ECC_M  (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS0_ECC_V  0x1
#define SPI_MEM_SPI_FMEM_PMS0_ECC_S  2
/* SPI_MEM_SPI_FMEM_PMS0_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS0_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS0_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS0_WR_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS0_WR_ATTR_S  1
/* SPI_MEM_SPI_FMEM_PMS0_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS0_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS0_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS0_RD_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS0_RD_ATTR_S  0

#define SPI_MEM_SPI_FMEM_PMS1_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x104)
/* SPI_MEM_SPI_FMEM_PMS1_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 flash PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. The flash
 PMS section $n is configured by registers SPI_FMEM_PMS$n_ADDR_REG and SPI_FMEM_
PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_FMEM_PMS1_ECC    (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS1_ECC_M  (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS1_ECC_V  0x1
#define SPI_MEM_SPI_FMEM_PMS1_ECC_S  2
/* SPI_MEM_SPI_FMEM_PMS1_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS1_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS1_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS1_WR_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS1_WR_ATTR_S  1
/* SPI_MEM_SPI_FMEM_PMS1_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS1_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS1_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS1_RD_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS1_RD_ATTR_S  0

#define SPI_MEM_SPI_FMEM_PMS2_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x108)
/* SPI_MEM_SPI_FMEM_PMS2_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 flash PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. The flash
 PMS section $n is configured by registers SPI_FMEM_PMS$n_ADDR_REG and SPI_FMEM_
PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_FMEM_PMS2_ECC    (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS2_ECC_M  (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS2_ECC_V  0x1
#define SPI_MEM_SPI_FMEM_PMS2_ECC_S  2
/* SPI_MEM_SPI_FMEM_PMS2_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS2_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS2_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS2_WR_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS2_WR_ATTR_S  1
/* SPI_MEM_SPI_FMEM_PMS2_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS2_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS2_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS2_RD_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS2_RD_ATTR_S  0

#define SPI_MEM_SPI_FMEM_PMS3_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x10C)
/* SPI_MEM_SPI_FMEM_PMS3_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 flash PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. The flash
 PMS section $n is configured by registers SPI_FMEM_PMS$n_ADDR_REG and SPI_FMEM_
PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_FMEM_PMS3_ECC    (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS3_ECC_M  (BIT(2))
#define SPI_MEM_SPI_FMEM_PMS3_ECC_V  0x1
#define SPI_MEM_SPI_FMEM_PMS3_ECC_S  2
/* SPI_MEM_SPI_FMEM_PMS3_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS3_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS3_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_FMEM_PMS3_WR_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS3_WR_ATTR_S  1
/* SPI_MEM_SPI_FMEM_PMS3_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 flash PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_FMEM_PMS3_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS3_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_FMEM_PMS3_RD_ATTR_V  0x1
#define SPI_MEM_SPI_FMEM_PMS3_RD_ATTR_S  0

#define SPI_MEM_SPI_FMEM_PMS0_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x110)
/* SPI_MEM_SPI_FMEM_PMS0_ADDR_S : R/W ;bitpos:[28:0] ;default: 29'h0 ; */
/*description: SPI1 flash PMS section $n start address value.*/
#define SPI_MEM_SPI_FMEM_PMS0_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS0_ADDR_S_M  ((SPI_MEM_SPI_FMEM_PMS0_ADDR_S_V)<<(SPI_MEM_SPI_FMEM_PMS0_ADDR_S_S))
#define SPI_MEM_SPI_FMEM_PMS0_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS0_ADDR_S_S  0

#define SPI_MEM_SPI_FMEM_PMS1_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x114)
/* SPI_MEM_SPI_FMEM_PMS1_ADDR_S : R/W ;bitpos:[28:0] ;default: 29'h0ffffff ; */
/*description: SPI1 flash PMS section $n start address value.*/
#define SPI_MEM_SPI_FMEM_PMS1_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS1_ADDR_S_M  ((SPI_MEM_SPI_FMEM_PMS1_ADDR_S_V)<<(SPI_MEM_SPI_FMEM_PMS1_ADDR_S_S))
#define SPI_MEM_SPI_FMEM_PMS1_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS1_ADDR_S_S  0

#define SPI_MEM_SPI_FMEM_PMS2_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x118)
/* SPI_MEM_SPI_FMEM_PMS2_ADDR_S : R/W ;bitpos:[28:0] ;default: 29'h1ffffff ; */
/*description: SPI1 flash PMS section $n start address value.*/
#define SPI_MEM_SPI_FMEM_PMS2_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS2_ADDR_S_M  ((SPI_MEM_SPI_FMEM_PMS2_ADDR_S_V)<<(SPI_MEM_SPI_FMEM_PMS2_ADDR_S_S))
#define SPI_MEM_SPI_FMEM_PMS2_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS2_ADDR_S_S  0

#define SPI_MEM_SPI_FMEM_PMS3_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x11C)
/* SPI_MEM_SPI_FMEM_PMS3_ADDR_S : R/W ;bitpos:[28:0] ;default: 29'h2ffffff ; */
/*description: SPI1 flash PMS section $n start address value.*/
#define SPI_MEM_SPI_FMEM_PMS3_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS3_ADDR_S_M  ((SPI_MEM_SPI_FMEM_PMS3_ADDR_S_V)<<(SPI_MEM_SPI_FMEM_PMS3_ADDR_S_S))
#define SPI_MEM_SPI_FMEM_PMS3_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_FMEM_PMS3_ADDR_S_S  0

#define SPI_MEM_SPI_FMEM_PMS0_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x120)
/* SPI_MEM_SPI_FMEM_PMS0_SIZE : R/W ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 flash PMS section $n address region is (SPI_FMEM_PMS$n_ADDR_S, SPI_FMEM_PMS
$n_ADDR_S + SPI_FMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_FMEM_PMS0_SIZE    0x0001FFFF
#define SPI_MEM_SPI_FMEM_PMS0_SIZE_M  ((SPI_MEM_SPI_FMEM_PMS0_SIZE_V)<<(SPI_MEM_SPI_FMEM_PMS0_SIZE_S))
#define SPI_MEM_SPI_FMEM_PMS0_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_FMEM_PMS0_SIZE_S  0

#define SPI_MEM_SPI_FMEM_PMS1_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x124)
/* SPI_MEM_SPI_FMEM_PMS1_SIZE : R/W ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 flash PMS section $n address region is (SPI_FMEM_PMS$n_ADDR_S, SPI_FMEM_PMS
$n_ADDR_S + SPI_FMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_FMEM_PMS1_SIZE    0x0001FFFF
#define SPI_MEM_SPI_FMEM_PMS1_SIZE_M  ((SPI_MEM_SPI_FMEM_PMS1_SIZE_V)<<(SPI_MEM_SPI_FMEM_PMS1_SIZE_S))
#define SPI_MEM_SPI_FMEM_PMS1_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_FMEM_PMS1_SIZE_S  0

#define SPI_MEM_SPI_FMEM_PMS2_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x128)
/* SPI_MEM_SPI_FMEM_PMS2_SIZE : R/W ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 flash PMS section $n address region is (SPI_FMEM_PMS$n_ADDR_S, SPI_FMEM_PMS
$n_ADDR_S + SPI_FMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_FMEM_PMS2_SIZE    0x0001FFFF
#define SPI_MEM_SPI_FMEM_PMS2_SIZE_M  ((SPI_MEM_SPI_FMEM_PMS2_SIZE_V)<<(SPI_MEM_SPI_FMEM_PMS2_SIZE_S))
#define SPI_MEM_SPI_FMEM_PMS2_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_FMEM_PMS2_SIZE_S  0

#define SPI_MEM_SPI_FMEM_PMS3_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x12C)
/* SPI_MEM_SPI_FMEM_PMS3_SIZE : R/W ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 flash PMS section $n address region is (SPI_FMEM_PMS$n_ADDR_S, SPI_FMEM_PMS
$n_ADDR_S + SPI_FMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_FMEM_PMS3_SIZE    0x0001FFFF
#define SPI_MEM_SPI_FMEM_PMS3_SIZE_M  ((SPI_MEM_SPI_FMEM_PMS3_SIZE_V)<<(SPI_MEM_SPI_FMEM_PMS3_SIZE_S))
#define SPI_MEM_SPI_FMEM_PMS3_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_FMEM_PMS3_SIZE_S  0

#define SPI_MEM_SPI_SMEM_PMS0_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x130)
/* SPI_MEM_SPI_SMEM_PMS0_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 external RAM PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. Th
e external RAM PMS section $n is configured by registers SPI_SMEM_PMS$n_ADDR_REG
 and SPI_SMEM_PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_SMEM_PMS0_ECC    (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS0_ECC_M  (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS0_ECC_V  0x1
#define SPI_MEM_SPI_SMEM_PMS0_ECC_S  2
/* SPI_MEM_SPI_SMEM_PMS0_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS0_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS0_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS0_WR_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS0_WR_ATTR_S  1
/* SPI_MEM_SPI_SMEM_PMS0_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS0_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS0_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS0_RD_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS0_RD_ATTR_S  0

#define SPI_MEM_SPI_SMEM_PMS1_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x134)
/* SPI_MEM_SPI_SMEM_PMS1_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 external RAM PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. Th
e external RAM PMS section $n is configured by registers SPI_SMEM_PMS$n_ADDR_REG
 and SPI_SMEM_PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_SMEM_PMS1_ECC    (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS1_ECC_M  (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS1_ECC_V  0x1
#define SPI_MEM_SPI_SMEM_PMS1_ECC_S  2
/* SPI_MEM_SPI_SMEM_PMS1_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS1_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS1_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS1_WR_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS1_WR_ATTR_S  1
/* SPI_MEM_SPI_SMEM_PMS1_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS1_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS1_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS1_RD_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS1_RD_ATTR_S  0

#define SPI_MEM_SPI_SMEM_PMS2_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x138)
/* SPI_MEM_SPI_SMEM_PMS2_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 external RAM PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. Th
e external RAM PMS section $n is configured by registers SPI_SMEM_PMS$n_ADDR_REG
 and SPI_SMEM_PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_SMEM_PMS2_ECC    (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS2_ECC_M  (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS2_ECC_V  0x1
#define SPI_MEM_SPI_SMEM_PMS2_ECC_S  2
/* SPI_MEM_SPI_SMEM_PMS2_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS2_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS2_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS2_WR_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS2_WR_ATTR_S  1
/* SPI_MEM_SPI_SMEM_PMS2_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS2_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS2_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS2_RD_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS2_RD_ATTR_S  0

#define SPI_MEM_SPI_SMEM_PMS3_ATTR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x13C)
/* SPI_MEM_SPI_SMEM_PMS3_ECC : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: SPI1 external RAM PMS section $n ECC mode, 1: enable ECC mode. 0: Disable it. Th
e external RAM PMS section $n is configured by registers SPI_SMEM_PMS$n_ADDR_REG
 and SPI_SMEM_PMS$n_SIZE_REG..*/
#define SPI_MEM_SPI_SMEM_PMS3_ECC    (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS3_ECC_M  (BIT(2))
#define SPI_MEM_SPI_SMEM_PMS3_ECC_V  0x1
#define SPI_MEM_SPI_SMEM_PMS3_ECC_S  2
/* SPI_MEM_SPI_SMEM_PMS3_WR_ATTR : R/W ;bitpos:[1] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n write accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS3_WR_ATTR    (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS3_WR_ATTR_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_PMS3_WR_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS3_WR_ATTR_S  1
/* SPI_MEM_SPI_SMEM_PMS3_RD_ATTR : R/W ;bitpos:[0] ;default: 1'h1 ; */
/*description: 1: SPI1 external RAM PMS section $n read accessible. 0: Not allowed..*/
#define SPI_MEM_SPI_SMEM_PMS3_RD_ATTR    (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS3_RD_ATTR_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_PMS3_RD_ATTR_V  0x1
#define SPI_MEM_SPI_SMEM_PMS3_RD_ATTR_S  0

#define SPI_MEM_SPI_SMEM_PMS0_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x140)
/* SPI_MEM_SPI_SMEM_PMS0_ADDR_S : HRO ;bitpos:[28:0] ;default: 29'h0 ; */
/*description: SPI1 external RAM PMS section $n start address value.*/
#define SPI_MEM_SPI_SMEM_PMS0_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS0_ADDR_S_M  ((SPI_MEM_SPI_SMEM_PMS0_ADDR_S_V)<<(SPI_MEM_SPI_SMEM_PMS0_ADDR_S_S))
#define SPI_MEM_SPI_SMEM_PMS0_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS0_ADDR_S_S  0

#define SPI_MEM_SPI_SMEM_PMS1_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x144)
/* SPI_MEM_SPI_SMEM_PMS1_ADDR_S : HRO ;bitpos:[28:0] ;default: 29'hffffff ; */
/*description: SPI1 external RAM PMS section $n start address value.*/
#define SPI_MEM_SPI_SMEM_PMS1_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS1_ADDR_S_M  ((SPI_MEM_SPI_SMEM_PMS1_ADDR_S_V)<<(SPI_MEM_SPI_SMEM_PMS1_ADDR_S_S))
#define SPI_MEM_SPI_SMEM_PMS1_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS1_ADDR_S_S  0

#define SPI_MEM_SPI_SMEM_PMS2_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x148)
/* SPI_MEM_SPI_SMEM_PMS2_ADDR_S : HRO ;bitpos:[28:0] ;default: 29'h1ffffff ; */
/*description: SPI1 external RAM PMS section $n start address value.*/
#define SPI_MEM_SPI_SMEM_PMS2_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS2_ADDR_S_M  ((SPI_MEM_SPI_SMEM_PMS2_ADDR_S_V)<<(SPI_MEM_SPI_SMEM_PMS2_ADDR_S_S))
#define SPI_MEM_SPI_SMEM_PMS2_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS2_ADDR_S_S  0

#define SPI_MEM_SPI_SMEM_PMS3_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x14C)
/* SPI_MEM_SPI_SMEM_PMS3_ADDR_S : HRO ;bitpos:[28:0] ;default: 29'h2ffffff ; */
/*description: SPI1 external RAM PMS section $n start address value.*/
#define SPI_MEM_SPI_SMEM_PMS3_ADDR_S    0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS3_ADDR_S_M  ((SPI_MEM_SPI_SMEM_PMS3_ADDR_S_V)<<(SPI_MEM_SPI_SMEM_PMS3_ADDR_S_S))
#define SPI_MEM_SPI_SMEM_PMS3_ADDR_S_V  0x1FFFFFFF
#define SPI_MEM_SPI_SMEM_PMS3_ADDR_S_S  0

#define SPI_MEM_SPI_SMEM_PMS0_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x150)
/* SPI_MEM_SPI_SMEM_PMS0_SIZE : HRO ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 external RAM PMS section $n address region is (SPI_SMEM_PMS$n_ADDR_S, SPI_S
MEM_PMS$n_ADDR_S + SPI_SMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_SMEM_PMS0_SIZE    0x0001FFFF
#define SPI_MEM_SPI_SMEM_PMS0_SIZE_M  ((SPI_MEM_SPI_SMEM_PMS0_SIZE_V)<<(SPI_MEM_SPI_SMEM_PMS0_SIZE_S))
#define SPI_MEM_SPI_SMEM_PMS0_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_SMEM_PMS0_SIZE_S  0

#define SPI_MEM_SPI_SMEM_PMS1_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x154)
/* SPI_MEM_SPI_SMEM_PMS1_SIZE : HRO ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 external RAM PMS section $n address region is (SPI_SMEM_PMS$n_ADDR_S, SPI_S
MEM_PMS$n_ADDR_S + SPI_SMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_SMEM_PMS1_SIZE    0x0001FFFF
#define SPI_MEM_SPI_SMEM_PMS1_SIZE_M  ((SPI_MEM_SPI_SMEM_PMS1_SIZE_V)<<(SPI_MEM_SPI_SMEM_PMS1_SIZE_S))
#define SPI_MEM_SPI_SMEM_PMS1_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_SMEM_PMS1_SIZE_S  0

#define SPI_MEM_SPI_SMEM_PMS2_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x158)
/* SPI_MEM_SPI_SMEM_PMS2_SIZE : HRO ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 external RAM PMS section $n address region is (SPI_SMEM_PMS$n_ADDR_S, SPI_S
MEM_PMS$n_ADDR_S + SPI_SMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_SMEM_PMS2_SIZE    0x0001FFFF
#define SPI_MEM_SPI_SMEM_PMS2_SIZE_M  ((SPI_MEM_SPI_SMEM_PMS2_SIZE_V)<<(SPI_MEM_SPI_SMEM_PMS2_SIZE_S))
#define SPI_MEM_SPI_SMEM_PMS2_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_SMEM_PMS2_SIZE_S  0

#define SPI_MEM_SPI_SMEM_PMS3_SIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x15C)
/* SPI_MEM_SPI_SMEM_PMS3_SIZE : HRO ;bitpos:[16:0] ;default: 17'h1000 ; */
/*description: SPI1 external RAM PMS section $n address region is (SPI_SMEM_PMS$n_ADDR_S, SPI_S
MEM_PMS$n_ADDR_S + SPI_SMEM_PMS$n_SIZE).*/
#define SPI_MEM_SPI_SMEM_PMS3_SIZE    0x0001FFFF
#define SPI_MEM_SPI_SMEM_PMS3_SIZE_M  ((SPI_MEM_SPI_SMEM_PMS3_SIZE_V)<<(SPI_MEM_SPI_SMEM_PMS3_SIZE_S))
#define SPI_MEM_SPI_SMEM_PMS3_SIZE_V  0x1FFFF
#define SPI_MEM_SPI_SMEM_PMS3_SIZE_S  0

#define SPI_MEM_PMS_REJECT_REG(i)          (REG_SPI_MEM_BASE(i) + 0x160)
/* SPI_MEM_PMS_IVD : R/SS/WTC ;bitpos:[31] ;default: 1'h0 ; */
/*description: 1: SPI1 access is rejected because of address multi-hit. 0: No address multi-hit
 error. It is cleared by when  SPI_MEM_PMS_REJECT_INT_CLR bit is set..*/
#define SPI_MEM_PMS_IVD    (BIT(31))
#define SPI_MEM_PMS_IVD_M  (BIT(31))
#define SPI_MEM_PMS_IVD_V  0x1
#define SPI_MEM_PMS_IVD_S  31
/* SPI_MEM_PMS_MULTI_HIT : R/SS/WTC ;bitpos:[30] ;default: 1'b0 ; */
/*description: 1: SPI1 access is rejected because of address miss. 0: No address miss error. It
 is cleared by when  SPI_MEM_PMS_REJECT_INT_CLR bit is set..*/
#define SPI_MEM_PMS_MULTI_HIT    (BIT(30))
#define SPI_MEM_PMS_MULTI_HIT_M  (BIT(30))
#define SPI_MEM_PMS_MULTI_HIT_V  0x1
#define SPI_MEM_PMS_MULTI_HIT_S  30
/* SPI_MEM_PMS_ST : R/SS/WTC ;bitpos:[29] ;default: 1'b0 ; */
/*description: 1: SPI1 read access error. 0: No read access error. It is cleared by when  SPI_M
EM_PMS_REJECT_INT_CLR bit is set..*/
#define SPI_MEM_PMS_ST    (BIT(29))
#define SPI_MEM_PMS_ST_M  (BIT(29))
#define SPI_MEM_PMS_ST_V  0x1
#define SPI_MEM_PMS_ST_S  29
/* SPI_MEM_PMS_LD : R/SS/WTC ;bitpos:[28] ;default: 1'b0 ; */
/*description: 1: SPI1 write access error. 0: No write access error. It is cleared by when  SPI
_MEM_PMS_REJECT_INT_CLR bit is set..*/
#define SPI_MEM_PMS_LD    (BIT(28))
#define SPI_MEM_PMS_LD_M  (BIT(28))
#define SPI_MEM_PMS_LD_V  0x1
#define SPI_MEM_PMS_LD_S  28
/* SPI_MEM_PM_EN : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: Set this bit to enable SPI0/1 transfer permission control function..*/
#define SPI_MEM_PM_EN    (BIT(27))
#define SPI_MEM_PM_EN_M  (BIT(27))
#define SPI_MEM_PM_EN_V  0x1
#define SPI_MEM_PM_EN_S  27

#define SPI_MEM_PMS_REJECT_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x164)
/* SPI_MEM_REJECT_ADDR : R/SS/WTC ;bitpos:[28:0] ;default: 29'h0 ; */
/*description: This bits show the first SPI1 access error address. It is cleared by when  SPI_M
EM_PMS_REJECT_INT_CLR bit is set..*/
#define SPI_MEM_REJECT_ADDR    0x1FFFFFFF
#define SPI_MEM_REJECT_ADDR_M  ((SPI_MEM_REJECT_ADDR_V)<<(SPI_MEM_REJECT_ADDR_S))
#define SPI_MEM_REJECT_ADDR_V  0x1FFFFFFF
#define SPI_MEM_REJECT_ADDR_S  0

#define SPI_MEM_ECC_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x168)
/* SPI_MEM_ECC_ERR_BITS : HRO ;bitpos:[31:25] ;default: 7'd0 ; */
/*description: Records the first ECC error bit number in the 16 bytes(From 0~127, corresponding
 to byte 0 bit 0 to byte 15 bit 7).*/
#define SPI_MEM_ECC_ERR_BITS    0x0000007F
#define SPI_MEM_ECC_ERR_BITS_M  ((SPI_MEM_ECC_ERR_BITS_V)<<(SPI_MEM_ECC_ERR_BITS_S))
#define SPI_MEM_ECC_ERR_BITS_V  0x7F
#define SPI_MEM_ECC_ERR_BITS_S  25
/* SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN : HRO ;bitpos:[24] ;default: 1'b1 ; */
/*description: 1: The error information in SPI_MEM_ECC_ERR_BITS and SPI_MEM_ECC_ERR_ADDR is upd
ated when there is an ECC error. 0: SPI_MEM_ECC_ERR_BITS and SPI_MEM_ECC_ERR_ADD
R record the first ECC error information..*/
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN    (BIT(24))
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_M  (BIT(24))
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_V  0x1
#define SPI_MEM_ECC_CONTINUE_RECORD_ERR_EN_S  24
/* SPI_MEM_USR_ECC_ADDR_EN : HRO ;bitpos:[22] ;default: 1'd0 ; */
/*description: Set this bit to enable ECC address convert in SPI0/1 USR_CMD transfer..*/
#define SPI_MEM_USR_ECC_ADDR_EN    (BIT(22))
#define SPI_MEM_USR_ECC_ADDR_EN_M  (BIT(22))
#define SPI_MEM_USR_ECC_ADDR_EN_V  0x1
#define SPI_MEM_USR_ECC_ADDR_EN_S  22
/* SPI_MEM_SPI_FMEM_ECC_ADDR_EN : HRO ;bitpos:[21] ;default: 1'd0 ; */
/*description: Set this bit to enable MSPI ECC address conversion, no matter MSPI accesses to t
he ECC region or non-ECC region of flash. If there is no ECC region in flash, th
is bit should be 0. Otherwise, this bit should be 1..*/
#define SPI_MEM_SPI_FMEM_ECC_ADDR_EN    (BIT(21))
#define SPI_MEM_SPI_FMEM_ECC_ADDR_EN_M  (BIT(21))
#define SPI_MEM_SPI_FMEM_ECC_ADDR_EN_V  0x1
#define SPI_MEM_SPI_FMEM_ECC_ADDR_EN_S  21
/* SPI_MEM_SPI_FMEM_PAGE_SIZE : R/W ;bitpos:[20:18] ;default: 3'd0 ; */
/*description: Set the page size of the flash accessed by MSPI. 0: 256 bytes. 1: 512 bytes. 2:
1024 bytes. 3: 2048 bytes. 4: 4096 bytes..*/
#define SPI_MEM_SPI_FMEM_PAGE_SIZE    0x00000007
#define SPI_MEM_SPI_FMEM_PAGE_SIZE_M  ((SPI_MEM_SPI_FMEM_PAGE_SIZE_V)<<(SPI_MEM_SPI_FMEM_PAGE_SIZE_S))
#define SPI_MEM_SPI_FMEM_PAGE_SIZE_V  0x7
#define SPI_MEM_SPI_FMEM_PAGE_SIZE_S  18
/* SPI_MEM_SPI_FMEM_ECC_ERR_INT_EN : HRO ;bitpos:[17] ;default: 1'b0 ; */
/*description: Set this bit to calculate the error times of MSPI ECC read when accesses to flas
h..*/
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_EN    (BIT(17))
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_EN_M  (BIT(17))
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_EN_V  0x1
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_EN_S  17
/* SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM : HRO ;bitpos:[16:11] ;default: 6'd10 ; */
/*description: Set the error times of MSPI ECC read to generate MSPI SPI_MEM_ECC_ERR_INT interr
upt..*/
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM    0x0000003F
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM_M  ((SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM_V)<<(SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM_S))
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM_V  0x3F
#define SPI_MEM_SPI_FMEM_ECC_ERR_INT_NUM_S  11
/* SPI_MEM_ECC_ERR_CNT : HRO ;bitpos:[10:5] ;default: 6'd0 ; */
/*description: This bits show the error times of MSPI ECC read. It is cleared by when  SPI_MEM_
ECC_ERR_INT_CLR bit is set..*/
#define SPI_MEM_ECC_ERR_CNT    0x0000003F
#define SPI_MEM_ECC_ERR_CNT_M  ((SPI_MEM_ECC_ERR_CNT_V)<<(SPI_MEM_ECC_ERR_CNT_S))
#define SPI_MEM_ECC_ERR_CNT_V  0x3F
#define SPI_MEM_ECC_ERR_CNT_S  5

#define SPI_MEM_ECC_ERR_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x16C)
/* SPI_MEM_ECC_ERR_ADDR : HRO ;bitpos:[28:0] ;default: 29'h0 ; */
/*description: This bits show the first MSPI ECC error address. It is cleared by when  SPI_MEM_
ECC_ERR_INT_CLR bit is set..*/
#define SPI_MEM_ECC_ERR_ADDR    0x1FFFFFFF
#define SPI_MEM_ECC_ERR_ADDR_M  ((SPI_MEM_ECC_ERR_ADDR_V)<<(SPI_MEM_ECC_ERR_ADDR_S))
#define SPI_MEM_ECC_ERR_ADDR_V  0x1FFFFFFF
#define SPI_MEM_ECC_ERR_ADDR_S  0

#define SPI_MEM_AXI_ERR_ADDR_REG(i)          (REG_SPI_MEM_BASE(i) + 0x170)
/* SPI_MEM_AXI_ERR_ADDR : R/SS/WTC ;bitpos:[28:0] ;default: 29'h0 ; */
/*description: This bits show the first AXI write/read invalid error or AXI write flash error a
ddress. It is cleared by when SPI_MEM_AXI_WADDR_ERR_INT_CLR, SPI_MEM_AXI_WR_FLAS
H_ERR_IN_CLR or SPI_MEM_AXI_RADDR_ERR_IN_CLR bit is set..*/
#define SPI_MEM_AXI_ERR_ADDR    0x1FFFFFFF
#define SPI_MEM_AXI_ERR_ADDR_M  ((SPI_MEM_AXI_ERR_ADDR_V)<<(SPI_MEM_AXI_ERR_ADDR_S))
#define SPI_MEM_AXI_ERR_ADDR_V  0x1FFFFFFF
#define SPI_MEM_AXI_ERR_ADDR_S  0

#define SPI_MEM_SPI_SMEM_ECC_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x174)
/* SPI_MEM_SPI_SMEM_ECC_ADDR_EN : HRO ;bitpos:[20] ;default: 1'd0 ; */
/*description: Set this bit to enable MSPI ECC address conversion, no matter MSPI accesses to t
he ECC region or non-ECC region of external RAM. If there is no ECC region in ex
ternal RAM, this bit should be 0. Otherwise, this bit should be 1..*/
#define SPI_MEM_SPI_SMEM_ECC_ADDR_EN    (BIT(20))
#define SPI_MEM_SPI_SMEM_ECC_ADDR_EN_M  (BIT(20))
#define SPI_MEM_SPI_SMEM_ECC_ADDR_EN_V  0x1
#define SPI_MEM_SPI_SMEM_ECC_ADDR_EN_S  20
/* SPI_MEM_SPI_SMEM_PAGE_SIZE : HRO ;bitpos:[19:18] ;default: 2'd2 ; */
/*description: Set the page size of the external RAM accessed by MSPI. 0: 256 bytes. 1: 512 byt
es. 2: 1024 bytes. 3: 2048 bytes..*/
#define SPI_MEM_SPI_SMEM_PAGE_SIZE    0x00000003
#define SPI_MEM_SPI_SMEM_PAGE_SIZE_M  ((SPI_MEM_SPI_SMEM_PAGE_SIZE_V)<<(SPI_MEM_SPI_SMEM_PAGE_SIZE_S))
#define SPI_MEM_SPI_SMEM_PAGE_SIZE_V  0x3
#define SPI_MEM_SPI_SMEM_PAGE_SIZE_S  18
/* SPI_MEM_SPI_SMEM_ECC_ERR_INT_EN : HRO ;bitpos:[17] ;default: 1'b0 ; */
/*description: Set this bit to calculate the error times of MSPI ECC read when accesses to exte
rnal RAM..*/
#define SPI_MEM_SPI_SMEM_ECC_ERR_INT_EN    (BIT(17))
#define SPI_MEM_SPI_SMEM_ECC_ERR_INT_EN_M  (BIT(17))
#define SPI_MEM_SPI_SMEM_ECC_ERR_INT_EN_V  0x1
#define SPI_MEM_SPI_SMEM_ECC_ERR_INT_EN_S  17

#define SPI_MEM_SPI_SMEM_AXI_ADDR_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x178)
/* SPI_MEM_SPI_ALL_AXI_TRANS_AFIFO_EMPTY : RO ;bitpos:[31] ;default: 1'b1 ; */
/*description: This bit is set when WADDR_AFIFO, WBLEN_AFIFO, WDATA_AFIFO, AXI_RADDR_CTL_AFIFO
and RDATA_AFIFO are empty and spi0_mst_st is IDLE..*/
#define SPI_MEM_SPI_ALL_AXI_TRANS_AFIFO_EMPTY    (BIT(31))
#define SPI_MEM_SPI_ALL_AXI_TRANS_AFIFO_EMPTY_M  (BIT(31))
#define SPI_MEM_SPI_ALL_AXI_TRANS_AFIFO_EMPTY_V  0x1
#define SPI_MEM_SPI_ALL_AXI_TRANS_AFIFO_EMPTY_S  31
/* SPI_MEM_SPI_WBLEN_AFIFO_REMPTY : RO ;bitpos:[30] ;default: 1'b1 ; */
/*description: 1: WBLEN_AFIFO is empty. 0: At least one AXI write transfer is pending..*/
#define SPI_MEM_SPI_WBLEN_AFIFO_REMPTY    (BIT(30))
#define SPI_MEM_SPI_WBLEN_AFIFO_REMPTY_M  (BIT(30))
#define SPI_MEM_SPI_WBLEN_AFIFO_REMPTY_V  0x1
#define SPI_MEM_SPI_WBLEN_AFIFO_REMPTY_S  30
/* SPI_MEM_SPI_WDATA_AFIFO_REMPTY : RO ;bitpos:[29] ;default: 1'b1 ; */
/*description: 1: WDATA_AFIFO is empty. 0: At least one AXI write transfer is pending..*/
#define SPI_MEM_SPI_WDATA_AFIFO_REMPTY    (BIT(29))
#define SPI_MEM_SPI_WDATA_AFIFO_REMPTY_M  (BIT(29))
#define SPI_MEM_SPI_WDATA_AFIFO_REMPTY_V  0x1
#define SPI_MEM_SPI_WDATA_AFIFO_REMPTY_S  29
/* SPI_MEM_SPI_RADDR_AFIFO_REMPTY : RO ;bitpos:[28] ;default: 1'b1 ; */
/*description: 1: AXI_RADDR_CTL_AFIFO is empty. 0: At least one AXI read transfer is pending..*/
#define SPI_MEM_SPI_RADDR_AFIFO_REMPTY    (BIT(28))
#define SPI_MEM_SPI_RADDR_AFIFO_REMPTY_M  (BIT(28))
#define SPI_MEM_SPI_RADDR_AFIFO_REMPTY_V  0x1
#define SPI_MEM_SPI_RADDR_AFIFO_REMPTY_S  28
/* SPI_MEM_SPI_RDATA_AFIFO_REMPTY : RO ;bitpos:[27] ;default: 1'b1 ; */
/*description: 1: RDATA_AFIFO is empty. 0: At least one AXI read transfer is pending..*/
#define SPI_MEM_SPI_RDATA_AFIFO_REMPTY    (BIT(27))
#define SPI_MEM_SPI_RDATA_AFIFO_REMPTY_M  (BIT(27))
#define SPI_MEM_SPI_RDATA_AFIFO_REMPTY_V  0x1
#define SPI_MEM_SPI_RDATA_AFIFO_REMPTY_S  27
/* SPI_MEM_ALL_FIFO_EMPTY : RO ;bitpos:[26] ;default: 1'b1 ; */
/*description: The empty status of all AFIFO and SYNC_FIFO in MSPI module. 1: All AXI transfers
 and SPI0 transfers are done. 0: Others..*/
#define SPI_MEM_ALL_FIFO_EMPTY    (BIT(26))
#define SPI_MEM_ALL_FIFO_EMPTY_M  (BIT(26))
#define SPI_MEM_ALL_FIFO_EMPTY_V  0x1
#define SPI_MEM_ALL_FIFO_EMPTY_S  26

#define SPI_MEM_AXI_ERR_RESP_EN_REG(i)          (REG_SPI_MEM_BASE(i) + 0x17C)
/* SPI_MEM_AR_RESP_EN_AXI_SIZE : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for axi size err in axi read trans
..*/
#define SPI_MEM_AR_RESP_EN_AXI_SIZE    (BIT(11))
#define SPI_MEM_AR_RESP_EN_AXI_SIZE_M  (BIT(11))
#define SPI_MEM_AR_RESP_EN_AXI_SIZE_V  0x1
#define SPI_MEM_AR_RESP_EN_AXI_SIZE_S  11
/* SPI_MEM_AR_RESP_EN_MMU_SENS : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu sensitive err in axi read
trans..*/
#define SPI_MEM_AR_RESP_EN_MMU_SENS    (BIT(10))
#define SPI_MEM_AR_RESP_EN_MMU_SENS_M  (BIT(10))
#define SPI_MEM_AR_RESP_EN_MMU_SENS_V  0x1
#define SPI_MEM_AR_RESP_EN_MMU_SENS_S  10
/* SPI_MEM_AR_RESP_EN_MMU_ECC : R/W ;bitpos:[9] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu ecc err in axi read trans..*/
#define SPI_MEM_AR_RESP_EN_MMU_ECC    (BIT(9))
#define SPI_MEM_AR_RESP_EN_MMU_ECC_M  (BIT(9))
#define SPI_MEM_AR_RESP_EN_MMU_ECC_V  0x1
#define SPI_MEM_AR_RESP_EN_MMU_ECC_S  9
/* SPI_MEM_AR_RESP_EN_MMU_GID : R/W ;bitpos:[8] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu gid err in axi read trans..*/
#define SPI_MEM_AR_RESP_EN_MMU_GID    (BIT(8))
#define SPI_MEM_AR_RESP_EN_MMU_GID_M  (BIT(8))
#define SPI_MEM_AR_RESP_EN_MMU_GID_V  0x1
#define SPI_MEM_AR_RESP_EN_MMU_GID_S  8
/* SPI_MEM_AR_RESP_EN_MMU_VLD : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu valid err in axi read tran
s..*/
#define SPI_MEM_AR_RESP_EN_MMU_VLD    (BIT(7))
#define SPI_MEM_AR_RESP_EN_MMU_VLD_M  (BIT(7))
#define SPI_MEM_AR_RESP_EN_MMU_VLD_V  0x1
#define SPI_MEM_AR_RESP_EN_MMU_VLD_S  7
/* SPI_MEM_AW_RESP_EN_AXI_WSTRB : R/W ;bitpos:[6] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for axi wstrb err in axi write tra
ns..*/
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB    (BIT(6))
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB_M  (BIT(6))
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB_V  0x1
#define SPI_MEM_AW_RESP_EN_AXI_WSTRB_S  6
/* SPI_MEM_AW_RESP_EN_MMU_SENS : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu sens in err axi write tran
s..*/
#define SPI_MEM_AW_RESP_EN_MMU_SENS    (BIT(5))
#define SPI_MEM_AW_RESP_EN_MMU_SENS_M  (BIT(5))
#define SPI_MEM_AW_RESP_EN_MMU_SENS_V  0x1
#define SPI_MEM_AW_RESP_EN_MMU_SENS_S  5
/* SPI_MEM_AW_RESP_EN_MMU_ECC : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu ecc err in axi write trans
..*/
#define SPI_MEM_AW_RESP_EN_MMU_ECC    (BIT(4))
#define SPI_MEM_AW_RESP_EN_MMU_ECC_M  (BIT(4))
#define SPI_MEM_AW_RESP_EN_MMU_ECC_V  0x1
#define SPI_MEM_AW_RESP_EN_MMU_ECC_S  4
/* SPI_MEM_AW_RESP_EN_AXI_FLASH : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for axi flash err in axi write tra
ns..*/
#define SPI_MEM_AW_RESP_EN_AXI_FLASH    (BIT(3))
#define SPI_MEM_AW_RESP_EN_AXI_FLASH_M  (BIT(3))
#define SPI_MEM_AW_RESP_EN_AXI_FLASH_V  0x1
#define SPI_MEM_AW_RESP_EN_AXI_FLASH_S  3
/* SPI_MEM_AW_RESP_EN_AXI_SIZE : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for axi size err in axi write tran
s..*/
#define SPI_MEM_AW_RESP_EN_AXI_SIZE    (BIT(2))
#define SPI_MEM_AW_RESP_EN_AXI_SIZE_M  (BIT(2))
#define SPI_MEM_AW_RESP_EN_AXI_SIZE_V  0x1
#define SPI_MEM_AW_RESP_EN_AXI_SIZE_S  2
/* SPI_MEM_AW_RESP_EN_MMU_GID : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu gid err in axi write trans
..*/
#define SPI_MEM_AW_RESP_EN_MMU_GID    (BIT(1))
#define SPI_MEM_AW_RESP_EN_MMU_GID_M  (BIT(1))
#define SPI_MEM_AW_RESP_EN_MMU_GID_V  0x1
#define SPI_MEM_AW_RESP_EN_MMU_GID_S  1
/* SPI_MEM_AW_RESP_EN_MMU_VLD : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit  to enable AXI response function for mmu valid err in axi write tra
ns..*/
#define SPI_MEM_AW_RESP_EN_MMU_VLD    (BIT(0))
#define SPI_MEM_AW_RESP_EN_MMU_VLD_M  (BIT(0))
#define SPI_MEM_AW_RESP_EN_MMU_VLD_V  0x1
#define SPI_MEM_AW_RESP_EN_MMU_VLD_S  0

#define SPI_MEM_TIMING_CALI_REG(i)          (REG_SPI_MEM_BASE(i) + 0x180)
/* SPI_MEM_TIMING_CALI_UPDATE : WT ;bitpos:[6] ;default: 1'b0 ; */
/*description: Set this bit to update delay mode, delay num and extra dummy in MSPI..*/
#define SPI_MEM_TIMING_CALI_UPDATE    (BIT(6))
#define SPI_MEM_TIMING_CALI_UPDATE_M  (BIT(6))
#define SPI_MEM_TIMING_CALI_UPDATE_V  0x1
#define SPI_MEM_TIMING_CALI_UPDATE_S  6
/* SPI_MEM_DLL_TIMING_CALI : HRO ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit to enable DLL for timing calibration in DDR mode when accessed to f
lash..*/
#define SPI_MEM_DLL_TIMING_CALI    (BIT(5))
#define SPI_MEM_DLL_TIMING_CALI_M  (BIT(5))
#define SPI_MEM_DLL_TIMING_CALI_V  0x1
#define SPI_MEM_DLL_TIMING_CALI_S  5
/* SPI_MEM_EXTRA_DUMMY_CYCLELEN : R/W ;bitpos:[4:2] ;default: 3'd0 ; */
/*description: add extra dummy spi clock cycle length for spi clock calibration..*/
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN    0x00000007
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN_M  ((SPI_MEM_EXTRA_DUMMY_CYCLELEN_V)<<(SPI_MEM_EXTRA_DUMMY_CYCLELEN_S))
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN_V  0x7
#define SPI_MEM_EXTRA_DUMMY_CYCLELEN_S  2
/* SPI_MEM_TIMING_CALI : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: The bit is used to enable timing auto-calibration for all reading operations..*/
#define SPI_MEM_TIMING_CALI    (BIT(1))
#define SPI_MEM_TIMING_CALI_M  (BIT(1))
#define SPI_MEM_TIMING_CALI_V  0x1
#define SPI_MEM_TIMING_CALI_S  1
/* SPI_MEM_TIMING_CLK_ENA : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: The bit is used to enable timing adjust clock for all reading operations..*/
#define SPI_MEM_TIMING_CLK_ENA    (BIT(0))
#define SPI_MEM_TIMING_CLK_ENA_M  (BIT(0))
#define SPI_MEM_TIMING_CLK_ENA_V  0x1
#define SPI_MEM_TIMING_CLK_ENA_S  0

#define SPI_MEM_DIN_MODE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x184)
/* SPI_MEM_DINS_MODE : R/W ;bitpos:[26:24] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: inp
ut with the spi_clk.*/
#define SPI_MEM_DINS_MODE    0x00000007
#define SPI_MEM_DINS_MODE_M  ((SPI_MEM_DINS_MODE_V)<<(SPI_MEM_DINS_MODE_S))
#define SPI_MEM_DINS_MODE_V  0x7
#define SPI_MEM_DINS_MODE_S  24
/* SPI_MEM_DIN7_MODE : R/W ;bitpos:[23:21] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: inp
ut with the spi_clk.*/
#define SPI_MEM_DIN7_MODE    0x00000007
#define SPI_MEM_DIN7_MODE_M  ((SPI_MEM_DIN7_MODE_V)<<(SPI_MEM_DIN7_MODE_S))
#define SPI_MEM_DIN7_MODE_V  0x7
#define SPI_MEM_DIN7_MODE_S  21
/* SPI_MEM_DIN6_MODE : R/W ;bitpos:[20:18] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: inp
ut with the spi_clk.*/
#define SPI_MEM_DIN6_MODE    0x00000007
#define SPI_MEM_DIN6_MODE_M  ((SPI_MEM_DIN6_MODE_V)<<(SPI_MEM_DIN6_MODE_S))
#define SPI_MEM_DIN6_MODE_V  0x7
#define SPI_MEM_DIN6_MODE_S  18
/* SPI_MEM_DIN5_MODE : R/W ;bitpos:[17:15] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: inp
ut with the spi_clk.*/
#define SPI_MEM_DIN5_MODE    0x00000007
#define SPI_MEM_DIN5_MODE_M  ((SPI_MEM_DIN5_MODE_V)<<(SPI_MEM_DIN5_MODE_S))
#define SPI_MEM_DIN5_MODE_V  0x7
#define SPI_MEM_DIN5_MODE_S  15
/* SPI_MEM_DIN4_MODE : R/W ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb, 3: inp
ut with the spi_clk.*/
#define SPI_MEM_DIN4_MODE    0x00000007
#define SPI_MEM_DIN4_MODE_M  ((SPI_MEM_DIN4_MODE_V)<<(SPI_MEM_DIN4_MODE_S))
#define SPI_MEM_DIN4_MODE_V  0x7
#define SPI_MEM_DIN4_MODE_S  12
/* SPI_MEM_DIN3_MODE : R/W ;bitpos:[11:9] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_DIN3_MODE    0x00000007
#define SPI_MEM_DIN3_MODE_M  ((SPI_MEM_DIN3_MODE_V)<<(SPI_MEM_DIN3_MODE_S))
#define SPI_MEM_DIN3_MODE_V  0x7
#define SPI_MEM_DIN3_MODE_S  9
/* SPI_MEM_DIN2_MODE : R/W ;bitpos:[8:6] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_DIN2_MODE    0x00000007
#define SPI_MEM_DIN2_MODE_M  ((SPI_MEM_DIN2_MODE_V)<<(SPI_MEM_DIN2_MODE_S))
#define SPI_MEM_DIN2_MODE_V  0x7
#define SPI_MEM_DIN2_MODE_S  6
/* SPI_MEM_DIN1_MODE : R/W ;bitpos:[5:3] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_DIN1_MODE    0x00000007
#define SPI_MEM_DIN1_MODE_M  ((SPI_MEM_DIN1_MODE_V)<<(SPI_MEM_DIN1_MODE_S))
#define SPI_MEM_DIN1_MODE_V  0x7
#define SPI_MEM_DIN1_MODE_S  3
/* SPI_MEM_DIN0_MODE : R/W ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_DIN0_MODE    0x00000007
#define SPI_MEM_DIN0_MODE_M  ((SPI_MEM_DIN0_MODE_V)<<(SPI_MEM_DIN0_MODE_S))
#define SPI_MEM_DIN0_MODE_V  0x7
#define SPI_MEM_DIN0_MODE_S  0

#define SPI_MEM_DIN_NUM_REG(i)          (REG_SPI_MEM_BASE(i) + 0x188)
/* SPI_MEM_DINS_NUM : R/W ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DINS_NUM    0x00000003
#define SPI_MEM_DINS_NUM_M  ((SPI_MEM_DINS_NUM_V)<<(SPI_MEM_DINS_NUM_S))
#define SPI_MEM_DINS_NUM_V  0x3
#define SPI_MEM_DINS_NUM_S  16
/* SPI_MEM_DIN7_NUM : R/W ;bitpos:[15:14] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN7_NUM    0x00000003
#define SPI_MEM_DIN7_NUM_M  ((SPI_MEM_DIN7_NUM_V)<<(SPI_MEM_DIN7_NUM_S))
#define SPI_MEM_DIN7_NUM_V  0x3
#define SPI_MEM_DIN7_NUM_S  14
/* SPI_MEM_DIN6_NUM : R/W ;bitpos:[13:12] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN6_NUM    0x00000003
#define SPI_MEM_DIN6_NUM_M  ((SPI_MEM_DIN6_NUM_V)<<(SPI_MEM_DIN6_NUM_S))
#define SPI_MEM_DIN6_NUM_V  0x3
#define SPI_MEM_DIN6_NUM_S  12
/* SPI_MEM_DIN5_NUM : R/W ;bitpos:[11:10] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN5_NUM    0x00000003
#define SPI_MEM_DIN5_NUM_M  ((SPI_MEM_DIN5_NUM_V)<<(SPI_MEM_DIN5_NUM_S))
#define SPI_MEM_DIN5_NUM_V  0x3
#define SPI_MEM_DIN5_NUM_S  10
/* SPI_MEM_DIN4_NUM : R/W ;bitpos:[9:8] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN4_NUM    0x00000003
#define SPI_MEM_DIN4_NUM_M  ((SPI_MEM_DIN4_NUM_V)<<(SPI_MEM_DIN4_NUM_S))
#define SPI_MEM_DIN4_NUM_V  0x3
#define SPI_MEM_DIN4_NUM_S  8
/* SPI_MEM_DIN3_NUM : R/W ;bitpos:[7:6] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN3_NUM    0x00000003
#define SPI_MEM_DIN3_NUM_M  ((SPI_MEM_DIN3_NUM_V)<<(SPI_MEM_DIN3_NUM_S))
#define SPI_MEM_DIN3_NUM_V  0x3
#define SPI_MEM_DIN3_NUM_S  6
/* SPI_MEM_DIN2_NUM : R/W ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN2_NUM    0x00000003
#define SPI_MEM_DIN2_NUM_M  ((SPI_MEM_DIN2_NUM_V)<<(SPI_MEM_DIN2_NUM_S))
#define SPI_MEM_DIN2_NUM_V  0x3
#define SPI_MEM_DIN2_NUM_S  4
/* SPI_MEM_DIN1_NUM : R/W ;bitpos:[3:2] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN1_NUM    0x00000003
#define SPI_MEM_DIN1_NUM_M  ((SPI_MEM_DIN1_NUM_V)<<(SPI_MEM_DIN1_NUM_S))
#define SPI_MEM_DIN1_NUM_V  0x3
#define SPI_MEM_DIN1_NUM_S  2
/* SPI_MEM_DIN0_NUM : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_DIN0_NUM    0x00000003
#define SPI_MEM_DIN0_NUM_M  ((SPI_MEM_DIN0_NUM_V)<<(SPI_MEM_DIN0_NUM_S))
#define SPI_MEM_DIN0_NUM_V  0x3
#define SPI_MEM_DIN0_NUM_S  0

#define SPI_MEM_DOUT_MODE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x18C)
/* SPI_MEM_DOUTS_MODE : R/W ;bitpos:[8] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the spi_clk.*/
#define SPI_MEM_DOUTS_MODE    (BIT(8))
#define SPI_MEM_DOUTS_MODE_M  (BIT(8))
#define SPI_MEM_DOUTS_MODE_V  0x1
#define SPI_MEM_DOUTS_MODE_S  8
/* SPI_MEM_DOUT7_MODE : R/W ;bitpos:[7] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the spi_clk.*/
#define SPI_MEM_DOUT7_MODE    (BIT(7))
#define SPI_MEM_DOUT7_MODE_M  (BIT(7))
#define SPI_MEM_DOUT7_MODE_V  0x1
#define SPI_MEM_DOUT7_MODE_S  7
/* SPI_MEM_DOUT6_MODE : R/W ;bitpos:[6] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the spi_clk.*/
#define SPI_MEM_DOUT6_MODE    (BIT(6))
#define SPI_MEM_DOUT6_MODE_M  (BIT(6))
#define SPI_MEM_DOUT6_MODE_V  0x1
#define SPI_MEM_DOUT6_MODE_S  6
/* SPI_MEM_DOUT5_MODE : R/W ;bitpos:[5] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the spi_clk.*/
#define SPI_MEM_DOUT5_MODE    (BIT(5))
#define SPI_MEM_DOUT5_MODE_M  (BIT(5))
#define SPI_MEM_DOUT5_MODE_V  0x1
#define SPI_MEM_DOUT5_MODE_S  5
/* SPI_MEM_DOUT4_MODE : R/W ;bitpos:[4] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the spi_clk.*/
#define SPI_MEM_DOUT4_MODE    (BIT(4))
#define SPI_MEM_DOUT4_MODE_M  (BIT(4))
#define SPI_MEM_DOUT4_MODE_V  0x1
#define SPI_MEM_DOUT4_MODE_S  4
/* SPI_MEM_DOUT3_MODE : R/W ;bitpos:[3] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_DOUT3_MODE    (BIT(3))
#define SPI_MEM_DOUT3_MODE_M  (BIT(3))
#define SPI_MEM_DOUT3_MODE_V  0x1
#define SPI_MEM_DOUT3_MODE_S  3
/* SPI_MEM_DOUT2_MODE : R/W ;bitpos:[2] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_DOUT2_MODE    (BIT(2))
#define SPI_MEM_DOUT2_MODE_M  (BIT(2))
#define SPI_MEM_DOUT2_MODE_V  0x1
#define SPI_MEM_DOUT2_MODE_S  2
/* SPI_MEM_DOUT1_MODE : R/W ;bitpos:[1] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_DOUT1_MODE    (BIT(1))
#define SPI_MEM_DOUT1_MODE_M  (BIT(1))
#define SPI_MEM_DOUT1_MODE_V  0x1
#define SPI_MEM_DOUT1_MODE_S  1
/* SPI_MEM_DOUT0_MODE : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_DOUT0_MODE    (BIT(0))
#define SPI_MEM_DOUT0_MODE_M  (BIT(0))
#define SPI_MEM_DOUT0_MODE_V  0x1
#define SPI_MEM_DOUT0_MODE_S  0

#define SPI_MEM_SPI_SMEM_TIMING_CALI_REG(i)          (REG_SPI_MEM_BASE(i) + 0x190)
/* SPI_MEM_SPI_SMEM_DQS0_90_SEL : HRO ;bitpos:[10:9] ;default: 2'd1 ; */
/*description: Set these bits to delay dqs signal for DLL timing adjust. 2'd0: 0.5ns, 2'd1: 1.0
ns, 2'd2: 1.5ns 2'd3: 2.0ns..*/
#define SPI_MEM_SPI_SMEM_DQS0_90_SEL    0x00000003
#define SPI_MEM_SPI_SMEM_DQS0_90_SEL_M  ((SPI_MEM_SPI_SMEM_DQS0_90_SEL_V)<<(SPI_MEM_SPI_SMEM_DQS0_90_SEL_S))
#define SPI_MEM_SPI_SMEM_DQS0_90_SEL_V  0x3
#define SPI_MEM_SPI_SMEM_DQS0_90_SEL_S  9
/* SPI_MEM_SPI_SMEM_DQS0_270_SEL : HRO ;bitpos:[8:7] ;default: 2'd1 ; */
/*description: Set these bits to delay dqs signal & invert delayed signal for DLL timing adjust
. 2'd0: 0.5ns, 2'd1: 1.0ns, 2'd2: 1.5ns 2'd3: 2.0ns..*/
#define SPI_MEM_SPI_SMEM_DQS0_270_SEL    0x00000003
#define SPI_MEM_SPI_SMEM_DQS0_270_SEL_M  ((SPI_MEM_SPI_SMEM_DQS0_270_SEL_V)<<(SPI_MEM_SPI_SMEM_DQS0_270_SEL_S))
#define SPI_MEM_SPI_SMEM_DQS0_270_SEL_V  0x3
#define SPI_MEM_SPI_SMEM_DQS0_270_SEL_S  7
/* SPI_MEM_SPI_SMEM_DLL_TIMING_CALI : HRO ;bitpos:[5] ;default: 1'b0 ; */
/*description: Set this bit to enable DLL for timing calibration in DDR mode when accessed to E
XT_RAM..*/
#define SPI_MEM_SPI_SMEM_DLL_TIMING_CALI    (BIT(5))
#define SPI_MEM_SPI_SMEM_DLL_TIMING_CALI_M  (BIT(5))
#define SPI_MEM_SPI_SMEM_DLL_TIMING_CALI_V  0x1
#define SPI_MEM_SPI_SMEM_DLL_TIMING_CALI_S  5
/* SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN : HRO ;bitpos:[4:2] ;default: 3'd0 ; */
/*description: For sram, add extra dummy spi clock cycle length for spi clock calibration..*/
#define SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN    0x00000007
#define SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN_M  ((SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN_V)<<(SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN_S))
#define SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN_V  0x7
#define SPI_MEM_SPI_SMEM_EXTRA_DUMMY_CYCLELEN_S  2
/* SPI_MEM_SPI_SMEM_TIMING_CALI : HRO ;bitpos:[1] ;default: 1'b0 ; */
/*description: For sram, the bit is used to enable timing auto-calibration for all reading oper
ations..*/
#define SPI_MEM_SPI_SMEM_TIMING_CALI    (BIT(1))
#define SPI_MEM_SPI_SMEM_TIMING_CALI_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_TIMING_CALI_V  0x1
#define SPI_MEM_SPI_SMEM_TIMING_CALI_S  1
/* SPI_MEM_SPI_SMEM_TIMING_CLK_ENA : HRO ;bitpos:[0] ;default: 1'b1 ; */
/*description: For sram, the bit is used to enable timing adjust clock for all reading operatio
ns..*/
#define SPI_MEM_SPI_SMEM_TIMING_CLK_ENA    (BIT(0))
#define SPI_MEM_SPI_SMEM_TIMING_CLK_ENA_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_TIMING_CLK_ENA_V  0x1
#define SPI_MEM_SPI_SMEM_TIMING_CLK_ENA_S  0

#define SPI_MEM_SPI_SMEM_DIN_MODE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x194)
/* SPI_MEM_SPI_SMEM_DINS_MODE : HRO ;bitpos:[26:24] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DINS_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DINS_MODE_M  ((SPI_MEM_SPI_SMEM_DINS_MODE_V)<<(SPI_MEM_SPI_SMEM_DINS_MODE_S))
#define SPI_MEM_SPI_SMEM_DINS_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DINS_MODE_S  24
/* SPI_MEM_SPI_SMEM_DIN7_MODE : HRO ;bitpos:[23:21] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN7_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN7_MODE_M  ((SPI_MEM_SPI_SMEM_DIN7_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN7_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN7_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN7_MODE_S  21
/* SPI_MEM_SPI_SMEM_DIN6_MODE : HRO ;bitpos:[20:18] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN6_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN6_MODE_M  ((SPI_MEM_SPI_SMEM_DIN6_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN6_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN6_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN6_MODE_S  18
/* SPI_MEM_SPI_SMEM_DIN5_MODE : HRO ;bitpos:[17:15] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN5_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN5_MODE_M  ((SPI_MEM_SPI_SMEM_DIN5_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN5_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN5_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN5_MODE_S  15
/* SPI_MEM_SPI_SMEM_DIN4_MODE : HRO ;bitpos:[14:12] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN4_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN4_MODE_M  ((SPI_MEM_SPI_SMEM_DIN4_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN4_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN4_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN4_MODE_S  12
/* SPI_MEM_SPI_SMEM_DIN3_MODE : HRO ;bitpos:[11:9] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN3_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN3_MODE_M  ((SPI_MEM_SPI_SMEM_DIN3_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN3_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN3_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN3_MODE_S  9
/* SPI_MEM_SPI_SMEM_DIN2_MODE : HRO ;bitpos:[8:6] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN2_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN2_MODE_M  ((SPI_MEM_SPI_SMEM_DIN2_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN2_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN2_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN2_MODE_S  6
/* SPI_MEM_SPI_SMEM_DIN1_MODE : HRO ;bitpos:[5:3] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN1_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN1_MODE_M  ((SPI_MEM_SPI_SMEM_DIN1_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN1_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN1_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN1_MODE_S  3
/* SPI_MEM_SPI_SMEM_DIN0_MODE : HRO ;bitpos:[2:0] ;default: 3'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: input without delayed,
1: input with the posedge of clk_apb,2 input with the negedge of clk_apb,  3: in
put with the posedge of clk_160, 4 input with the negedge of clk_160, 5: input w
ith the spi_clk high edge,  6: input with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DIN0_MODE    0x00000007
#define SPI_MEM_SPI_SMEM_DIN0_MODE_M  ((SPI_MEM_SPI_SMEM_DIN0_MODE_V)<<(SPI_MEM_SPI_SMEM_DIN0_MODE_S))
#define SPI_MEM_SPI_SMEM_DIN0_MODE_V  0x7
#define SPI_MEM_SPI_SMEM_DIN0_MODE_S  0

#define SPI_MEM_SPI_SMEM_DIN_NUM_REG(i)          (REG_SPI_MEM_BASE(i) + 0x198)
/* SPI_MEM_SPI_SMEM_DINS_NUM : HRO ;bitpos:[17:16] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DINS_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DINS_NUM_M  ((SPI_MEM_SPI_SMEM_DINS_NUM_V)<<(SPI_MEM_SPI_SMEM_DINS_NUM_S))
#define SPI_MEM_SPI_SMEM_DINS_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DINS_NUM_S  16
/* SPI_MEM_SPI_SMEM_DIN7_NUM : HRO ;bitpos:[15:14] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN7_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN7_NUM_M  ((SPI_MEM_SPI_SMEM_DIN7_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN7_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN7_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN7_NUM_S  14
/* SPI_MEM_SPI_SMEM_DIN6_NUM : HRO ;bitpos:[13:12] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN6_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN6_NUM_M  ((SPI_MEM_SPI_SMEM_DIN6_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN6_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN6_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN6_NUM_S  12
/* SPI_MEM_SPI_SMEM_DIN5_NUM : HRO ;bitpos:[11:10] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN5_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN5_NUM_M  ((SPI_MEM_SPI_SMEM_DIN5_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN5_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN5_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN5_NUM_S  10
/* SPI_MEM_SPI_SMEM_DIN4_NUM : HRO ;bitpos:[9:8] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN4_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN4_NUM_M  ((SPI_MEM_SPI_SMEM_DIN4_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN4_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN4_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN4_NUM_S  8
/* SPI_MEM_SPI_SMEM_DIN3_NUM : HRO ;bitpos:[7:6] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN3_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN3_NUM_M  ((SPI_MEM_SPI_SMEM_DIN3_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN3_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN3_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN3_NUM_S  6
/* SPI_MEM_SPI_SMEM_DIN2_NUM : HRO ;bitpos:[5:4] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN2_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN2_NUM_M  ((SPI_MEM_SPI_SMEM_DIN2_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN2_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN2_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN2_NUM_S  4
/* SPI_MEM_SPI_SMEM_DIN1_NUM : HRO ;bitpos:[3:2] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN1_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN1_NUM_M  ((SPI_MEM_SPI_SMEM_DIN1_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN1_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN1_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN1_NUM_S  2
/* SPI_MEM_SPI_SMEM_DIN0_NUM : HRO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: the input signals are delayed by system clock cycles, 0: delayed by 1 cycle, 1:
delayed by 2 cycles,....*/
#define SPI_MEM_SPI_SMEM_DIN0_NUM    0x00000003
#define SPI_MEM_SPI_SMEM_DIN0_NUM_M  ((SPI_MEM_SPI_SMEM_DIN0_NUM_V)<<(SPI_MEM_SPI_SMEM_DIN0_NUM_S))
#define SPI_MEM_SPI_SMEM_DIN0_NUM_V  0x3
#define SPI_MEM_SPI_SMEM_DIN0_NUM_S  0

#define SPI_MEM_SPI_SMEM_DOUT_MODE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x19C)
/* SPI_MEM_SPI_SMEM_DOUTS_MODE : HRO ;bitpos:[8] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUTS_MODE    (BIT(8))
#define SPI_MEM_SPI_SMEM_DOUTS_MODE_M  (BIT(8))
#define SPI_MEM_SPI_SMEM_DOUTS_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUTS_MODE_S  8
/* SPI_MEM_SPI_SMEM_DOUT7_MODE : HRO ;bitpos:[7] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT7_MODE    (BIT(7))
#define SPI_MEM_SPI_SMEM_DOUT7_MODE_M  (BIT(7))
#define SPI_MEM_SPI_SMEM_DOUT7_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT7_MODE_S  7
/* SPI_MEM_SPI_SMEM_DOUT6_MODE : HRO ;bitpos:[6] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT6_MODE    (BIT(6))
#define SPI_MEM_SPI_SMEM_DOUT6_MODE_M  (BIT(6))
#define SPI_MEM_SPI_SMEM_DOUT6_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT6_MODE_S  6
/* SPI_MEM_SPI_SMEM_DOUT5_MODE : HRO ;bitpos:[5] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT5_MODE    (BIT(5))
#define SPI_MEM_SPI_SMEM_DOUT5_MODE_M  (BIT(5))
#define SPI_MEM_SPI_SMEM_DOUT5_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT5_MODE_S  5
/* SPI_MEM_SPI_SMEM_DOUT4_MODE : HRO ;bitpos:[4] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT4_MODE    (BIT(4))
#define SPI_MEM_SPI_SMEM_DOUT4_MODE_M  (BIT(4))
#define SPI_MEM_SPI_SMEM_DOUT4_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT4_MODE_S  4
/* SPI_MEM_SPI_SMEM_DOUT3_MODE : HRO ;bitpos:[3] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT3_MODE    (BIT(3))
#define SPI_MEM_SPI_SMEM_DOUT3_MODE_M  (BIT(3))
#define SPI_MEM_SPI_SMEM_DOUT3_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT3_MODE_S  3
/* SPI_MEM_SPI_SMEM_DOUT2_MODE : HRO ;bitpos:[2] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT2_MODE    (BIT(2))
#define SPI_MEM_SPI_SMEM_DOUT2_MODE_M  (BIT(2))
#define SPI_MEM_SPI_SMEM_DOUT2_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT2_MODE_S  2
/* SPI_MEM_SPI_SMEM_DOUT1_MODE : HRO ;bitpos:[1] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT1_MODE    (BIT(1))
#define SPI_MEM_SPI_SMEM_DOUT1_MODE_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_DOUT1_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT1_MODE_S  1
/* SPI_MEM_SPI_SMEM_DOUT0_MODE : HRO ;bitpos:[0] ;default: 1'h0 ; */
/*description: the output signals are delayed by system clock cycles, 0: output without delayed
, 1: output with the posedge of clk_apb,2 output with the negedge of clk_apb, 3:
 output with the posedge of clk_160,4 output with the negedge of clk_160,5: outp
ut with the spi_clk high edge ,6: output with the spi_clk low edge.*/
#define SPI_MEM_SPI_SMEM_DOUT0_MODE    (BIT(0))
#define SPI_MEM_SPI_SMEM_DOUT0_MODE_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_DOUT0_MODE_V  0x1
#define SPI_MEM_SPI_SMEM_DOUT0_MODE_S  0

#define SPI_MEM_SPI_SMEM_AC_REG(i)          (REG_SPI_MEM_BASE(i) + 0x1A0)
/* SPI_MEM_SPI_SMEM_SPLIT_TRANS_EN : HRO ;bitpos:[31] ;default: 1'b0 ; */
/*description: Set this bit to enable SPI0 split one AXI accesses EXT_RAM transfer into two SPI
 transfers when one transfer will cross flash/EXT_RAM page corner, valid no matt
er whether there is an ECC region or not..*/
#define SPI_MEM_SPI_SMEM_SPLIT_TRANS_EN    (BIT(31))
#define SPI_MEM_SPI_SMEM_SPLIT_TRANS_EN_M  (BIT(31))
#define SPI_MEM_SPI_SMEM_SPLIT_TRANS_EN_V  0x1
#define SPI_MEM_SPI_SMEM_SPLIT_TRANS_EN_S  31
/* SPI_MEM_SPI_SMEM_CS_HOLD_DELAY : HRO ;bitpos:[30:25] ;default: 6'd0 ; */
/*description: These bits are used to set the minimum CS high time tSHSL between SPI burst tran
sfer when accesses to external RAM. tSHSL is (SPI_SMEM_CS_HOLD_DELAY[5:0] + 1) M
SPI core clock cycles..*/
#define SPI_MEM_SPI_SMEM_CS_HOLD_DELAY    0x0000003F
#define SPI_MEM_SPI_SMEM_CS_HOLD_DELAY_M  ((SPI_MEM_SPI_SMEM_CS_HOLD_DELAY_V)<<(SPI_MEM_SPI_SMEM_CS_HOLD_DELAY_S))
#define SPI_MEM_SPI_SMEM_CS_HOLD_DELAY_V  0x3F
#define SPI_MEM_SPI_SMEM_CS_HOLD_DELAY_S  25
/* SPI_MEM_SPI_SMEM_ECC_16TO18_BYTE_EN : HRO ;bitpos:[16] ;default: 1'b0 ; */
/*description: Set this bit to enable SPI0 and SPI1 ECC 16 bytes data with 2 ECC bytes mode whe
n accesses external RAM..*/
#define SPI_MEM_SPI_SMEM_ECC_16TO18_BYTE_EN    (BIT(16))
#define SPI_MEM_SPI_SMEM_ECC_16TO18_BYTE_EN_M  (BIT(16))
#define SPI_MEM_SPI_SMEM_ECC_16TO18_BYTE_EN_V  0x1
#define SPI_MEM_SPI_SMEM_ECC_16TO18_BYTE_EN_S  16
/* SPI_MEM_SPI_SMEM_ECC_SKIP_PAGE_CORNER : HRO ;bitpos:[15] ;default: 1'b1 ; */
/*description: 1: SPI0 skips page corner when accesses external RAM. 0: Not skip page corner wh
en accesses external RAM..*/
#define SPI_MEM_SPI_SMEM_ECC_SKIP_PAGE_CORNER    (BIT(15))
#define SPI_MEM_SPI_SMEM_ECC_SKIP_PAGE_CORNER_M  (BIT(15))
#define SPI_MEM_SPI_SMEM_ECC_SKIP_PAGE_CORNER_V  0x1
#define SPI_MEM_SPI_SMEM_ECC_SKIP_PAGE_CORNER_S  15
/* SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME : HRO ;bitpos:[14:12] ;default: 3'd3 ; */
/*description: SPI_SMEM_CS_HOLD_TIME + SPI_SMEM_ECC_CS_HOLD_TIME is the SPI0 and SPI1 CS hold c
ycles in ECC mode when accessed external RAM..*/
#define SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME    0x00000007
#define SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME_M  ((SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME_V)<<(SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME_S))
#define SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME_V  0x7
#define SPI_MEM_SPI_SMEM_ECC_CS_HOLD_TIME_S  12
/* SPI_MEM_SPI_SMEM_CS_HOLD_TIME : HRO ;bitpos:[11:7] ;default: 5'h1 ; */
/*description: For SPI0 and SPI1, spi cs signal is delayed to inactive by spi clock this bits a
re combined with spi_mem_cs_hold bit..*/
#define SPI_MEM_SPI_SMEM_CS_HOLD_TIME    0x0000001F
#define SPI_MEM_SPI_SMEM_CS_HOLD_TIME_M  ((SPI_MEM_SPI_SMEM_CS_HOLD_TIME_V)<<(SPI_MEM_SPI_SMEM_CS_HOLD_TIME_S))
#define SPI_MEM_SPI_SMEM_CS_HOLD_TIME_V  0x1F
#define SPI_MEM_SPI_SMEM_CS_HOLD_TIME_S  7
/* SPI_MEM_SPI_SMEM_CS_SETUP_TIME : HRO ;bitpos:[6:2] ;default: 5'h1 ; */
/*description: For spi0, (cycles-1) of prepare phase by spi clock this bits are combined with s
pi_mem_cs_setup bit..*/
#define SPI_MEM_SPI_SMEM_CS_SETUP_TIME    0x0000001F
#define SPI_MEM_SPI_SMEM_CS_SETUP_TIME_M  ((SPI_MEM_SPI_SMEM_CS_SETUP_TIME_V)<<(SPI_MEM_SPI_SMEM_CS_SETUP_TIME_S))
#define SPI_MEM_SPI_SMEM_CS_SETUP_TIME_V  0x1F
#define SPI_MEM_SPI_SMEM_CS_SETUP_TIME_S  2
/* SPI_MEM_SPI_SMEM_CS_HOLD : HRO ;bitpos:[1] ;default: 1'b0 ; */
/*description: For SPI0 and SPI1, spi cs keep low when spi is in done phase. 1: enable 0: disab
le..*/
#define SPI_MEM_SPI_SMEM_CS_HOLD    (BIT(1))
#define SPI_MEM_SPI_SMEM_CS_HOLD_M  (BIT(1))
#define SPI_MEM_SPI_SMEM_CS_HOLD_V  0x1
#define SPI_MEM_SPI_SMEM_CS_HOLD_S  1
/* SPI_MEM_SPI_SMEM_CS_SETUP : HRO ;bitpos:[0] ;default: 1'b0 ; */
/*description: For SPI0 and SPI1, spi cs is enable when spi is in prepare phase. 1: enable 0: d
isable..*/
#define SPI_MEM_SPI_SMEM_CS_SETUP    (BIT(0))
#define SPI_MEM_SPI_SMEM_CS_SETUP_M  (BIT(0))
#define SPI_MEM_SPI_SMEM_CS_SETUP_V  0x1
#define SPI_MEM_SPI_SMEM_CS_SETUP_S  0

#define SPI_MEM_CLOCK_GATE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x200)
/* SPI_MEM_SPI_MSPI_CLK_FORCE_ON : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI lowpower function clock gate force on signal. 1: Enable. 0: Disable..*/
#define SPI_MEM_SPI_MSPI_CLK_FORCE_ON    (BIT(1))
#define SPI_MEM_SPI_MSPI_CLK_FORCE_ON_M  (BIT(1))
#define SPI_MEM_SPI_MSPI_CLK_FORCE_ON_V  0x1
#define SPI_MEM_SPI_MSPI_CLK_FORCE_ON_S  1
/* SPI_MEM_SPI_CLK_EN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: Register clock gate enable signal. 1: Enable. 0: Disable..*/
#define SPI_MEM_SPI_CLK_EN    (BIT(0))
#define SPI_MEM_SPI_CLK_EN_M  (BIT(0))
#define SPI_MEM_SPI_CLK_EN_V  0x1
#define SPI_MEM_SPI_CLK_EN_S  0

#define SPI_MEM_NAND_FLASH_EN_REG(i)          (REG_SPI_MEM_BASE(i) + 0x204)
/* SPI_MEM_NAND_FLASH_SEQ_USR_WEND : R/W ;bitpos:[18] ;default: 1'b0 ; */
/*description: Used with SPI_MEM_NAND_FLASH_SEQ_USR_TRIG to indecate the last page program ,and
 to excute page excute. 1: write end 0: write in a page size..*/
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND    (BIT(18))
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND_M  (BIT(18))
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_USR_WEND_S  18
/* SPI_MEM_NAND_FLASH_LUT_EN : HRO ;bitpos:[17] ;default: 1'b1 ; */
/*description: NAND FLASH spi seq & cmd lut cfg en. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_LUT_EN    (BIT(17))
#define SPI_MEM_NAND_FLASH_LUT_EN_M  (BIT(17))
#define SPI_MEM_NAND_FLASH_LUT_EN_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_EN_S  17
/* SPI_MEM_NAND_FLASH_SEQ_USR_TRIG : R/W ;bitpos:[16] ;default: 1'b0 ; */
/*description: NAND FLASH spi seq user trigger configure register. SPI_MEM_NAND_FLASH_SEQ_USR_T
RIG is corresponds to SPI_MEM_NAND_FLASH_SEQ_HD_INDEX[14:10].1: enable 0: disabl
e..*/
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG    (BIT(16))
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_M  (BIT(16))
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_USR_TRIG_S  16
/* SPI_MEM_NAND_FLASH_SEQ_HD_INDEX : R/W ;bitpos:[15:1] ;default: 15'h7fff ; */
/*description: NAND FLASH spi seq head index configure register. Every 5 bits represent  the 1s
t index of a SPI CMD sequence.[14:10]:usr; [9:5]:axi_rd; [4:0]:axi_wr..*/
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX    0x00007FFF
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_M  ((SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_V)<<(SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_S))
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_V  0x7FFF
#define SPI_MEM_NAND_FLASH_SEQ_HD_INDEX_S  1
/* SPI_MEM_NAND_FLASH_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: NAND FLASH function enable signal. 1: Enable NAND FLASH, Disable NOR FLASH. 0: D
isable NAND FLASH, Enable NOR FLASH..*/
#define SPI_MEM_NAND_FLASH_EN    (BIT(0))
#define SPI_MEM_NAND_FLASH_EN_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_EN_V  0x1
#define SPI_MEM_NAND_FLASH_EN_S  0

#define SPI_MEM_NAND_FLASH_SR_ADDR0_REG(i)          (REG_SPI_MEM_BASE(i) + 0x208)
/* SPI_MEM_NAND_FLASH_SR_ADDR3 : R/W ;bitpos:[31:24] ;default: 8'b0 ; */
/*description: configure state register address for SPI SEQ need. If OIP is in address C0H , us
er could configure C0H into this register.*/
#define SPI_MEM_NAND_FLASH_SR_ADDR3    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_ADDR3_M  ((SPI_MEM_NAND_FLASH_SR_ADDR3_V)<<(SPI_MEM_NAND_FLASH_SR_ADDR3_S))
#define SPI_MEM_NAND_FLASH_SR_ADDR3_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_ADDR3_S  24
/* SPI_MEM_NAND_FLASH_SR_ADDR2 : R/W ;bitpos:[23:16] ;default: 8'b0 ; */
/*description: configure state register address for SPI SEQ need. If OIP is in address C0H , us
er could configure C0H into this register.*/
#define SPI_MEM_NAND_FLASH_SR_ADDR2    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_ADDR2_M  ((SPI_MEM_NAND_FLASH_SR_ADDR2_V)<<(SPI_MEM_NAND_FLASH_SR_ADDR2_S))
#define SPI_MEM_NAND_FLASH_SR_ADDR2_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_ADDR2_S  16
/* SPI_MEM_NAND_FLASH_SR_ADDR1 : R/W ;bitpos:[15:8] ;default: 8'b0 ; */
/*description: configure state register address for SPI SEQ need. If OIP is in address C0H , us
er could configure C0H into this register.*/
#define SPI_MEM_NAND_FLASH_SR_ADDR1    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_ADDR1_M  ((SPI_MEM_NAND_FLASH_SR_ADDR1_V)<<(SPI_MEM_NAND_FLASH_SR_ADDR1_S))
#define SPI_MEM_NAND_FLASH_SR_ADDR1_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_ADDR1_S  8
/* SPI_MEM_NAND_FLASH_SR_ADDR0 : R/W ;bitpos:[7:0] ;default: 8'b0 ; */
/*description: configure state register address for SPI SEQ need. If OIP is in address C0H , us
er could configure C0H into this register.*/
#define SPI_MEM_NAND_FLASH_SR_ADDR0    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_ADDR0_M  ((SPI_MEM_NAND_FLASH_SR_ADDR0_V)<<(SPI_MEM_NAND_FLASH_SR_ADDR0_S))
#define SPI_MEM_NAND_FLASH_SR_ADDR0_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_ADDR0_S  0

#define SPI_MEM_NAND_FLASH_SR_DIN0_REG(i)          (REG_SPI_MEM_BASE(i) + 0x20C)
/* SPI_MEM_NAND_FLASH_SR_DIN3 : RO ;bitpos:[31:24] ;default: 8'b0 ; */
/*description: spi read state register data to this register for SPI SEQ need. SPI_MEM_NAND_FLA
SH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG..*/
#define SPI_MEM_NAND_FLASH_SR_DIN3    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_DIN3_M  ((SPI_MEM_NAND_FLASH_SR_DIN3_V)<<(SPI_MEM_NAND_FLASH_SR_DIN3_S))
#define SPI_MEM_NAND_FLASH_SR_DIN3_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_DIN3_S  24
/* SPI_MEM_NAND_FLASH_SR_DIN2 : RO ;bitpos:[23:16] ;default: 8'b0 ; */
/*description: spi read state register data to this register for SPI SEQ need. SPI_MEM_NAND_FLA
SH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG..*/
#define SPI_MEM_NAND_FLASH_SR_DIN2    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_DIN2_M  ((SPI_MEM_NAND_FLASH_SR_DIN2_V)<<(SPI_MEM_NAND_FLASH_SR_DIN2_S))
#define SPI_MEM_NAND_FLASH_SR_DIN2_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_DIN2_S  16
/* SPI_MEM_NAND_FLASH_SR_DIN1 : RO ;bitpos:[15:8] ;default: 8'b0 ; */
/*description: spi read state register data to this register for SPI SEQ need. SPI_MEM_NAND_FLA
SH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG..*/
#define SPI_MEM_NAND_FLASH_SR_DIN1    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_DIN1_M  ((SPI_MEM_NAND_FLASH_SR_DIN1_V)<<(SPI_MEM_NAND_FLASH_SR_DIN1_S))
#define SPI_MEM_NAND_FLASH_SR_DIN1_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_DIN1_S  8
/* SPI_MEM_NAND_FLASH_SR_DIN0 : RO ;bitpos:[7:0] ;default: 8'b0 ; */
/*description: spi read state register data to this register for SPI SEQ need. SPI_MEM_NAND_FLA
SH_SR_DIN0_REG corresponds to SPI_MEM_NAND_FLASH_SR_ADDR0_REG..*/
#define SPI_MEM_NAND_FLASH_SR_DIN0    0x000000FF
#define SPI_MEM_NAND_FLASH_SR_DIN0_M  ((SPI_MEM_NAND_FLASH_SR_DIN0_V)<<(SPI_MEM_NAND_FLASH_SR_DIN0_S))
#define SPI_MEM_NAND_FLASH_SR_DIN0_V  0xFF
#define SPI_MEM_NAND_FLASH_SR_DIN0_S  0

#define SPI_MEM_NAND_FLASH_CFG_DATA0_REG(i)          (REG_SPI_MEM_BASE(i) + 0x210)
/* SPI_MEM_NAND_FLASH_CFG_DATA1 : R/W ;bitpos:[31:16] ;default: 16'b0 ; */
/*description: configure data for SPI SEQ din/dout need. The data could be use to configure NAN
D FLASH or compare read data.*/
#define SPI_MEM_NAND_FLASH_CFG_DATA1    0x0000FFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA1_M  ((SPI_MEM_NAND_FLASH_CFG_DATA1_V)<<(SPI_MEM_NAND_FLASH_CFG_DATA1_S))
#define SPI_MEM_NAND_FLASH_CFG_DATA1_V  0xFFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA1_S  16
/* SPI_MEM_NAND_FLASH_CFG_DATA0 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: configure data for SPI SEQ din/dout need. The data could be use to configure NAN
D FLASH or compare read data.*/
#define SPI_MEM_NAND_FLASH_CFG_DATA0    0x0000FFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA0_M  ((SPI_MEM_NAND_FLASH_CFG_DATA0_V)<<(SPI_MEM_NAND_FLASH_CFG_DATA0_S))
#define SPI_MEM_NAND_FLASH_CFG_DATA0_V  0xFFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA0_S  0

#define SPI_MEM_NAND_FLASH_CFG_DATA1_REG(i)          (REG_SPI_MEM_BASE(i) + 0x214)
/* SPI_MEM_NAND_FLASH_CFG_DATA3 : R/W ;bitpos:[31:16] ;default: 16'b0 ; */
/*description: configure data for SPI SEQ din/dout need. The data could be use to configure NAN
D FLASH or compare read data.*/
#define SPI_MEM_NAND_FLASH_CFG_DATA3    0x0000FFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA3_M  ((SPI_MEM_NAND_FLASH_CFG_DATA3_V)<<(SPI_MEM_NAND_FLASH_CFG_DATA3_S))
#define SPI_MEM_NAND_FLASH_CFG_DATA3_V  0xFFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA3_S  16
/* SPI_MEM_NAND_FLASH_CFG_DATA2 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: configure data for SPI SEQ din/dout need. The data could be use to configure NAN
D FLASH or compare read data.*/
#define SPI_MEM_NAND_FLASH_CFG_DATA2    0x0000FFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA2_M  ((SPI_MEM_NAND_FLASH_CFG_DATA2_V)<<(SPI_MEM_NAND_FLASH_CFG_DATA2_S))
#define SPI_MEM_NAND_FLASH_CFG_DATA2_V  0xFFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA2_S  0

#define SPI_MEM_NAND_FLASH_CFG_DATA2_REG(i)          (REG_SPI_MEM_BASE(i) + 0x218)
/* SPI_MEM_NAND_FLASH_CFG_DATA5 : R/W ;bitpos:[31:16] ;default: 16'b0 ; */
/*description: configure data for SPI SEQ din/dout need. The data could be use to configure NAN
D FLASH or compare read data.*/
#define SPI_MEM_NAND_FLASH_CFG_DATA5    0x0000FFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA5_M  ((SPI_MEM_NAND_FLASH_CFG_DATA5_V)<<(SPI_MEM_NAND_FLASH_CFG_DATA5_S))
#define SPI_MEM_NAND_FLASH_CFG_DATA5_V  0xFFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA5_S  16
/* SPI_MEM_NAND_FLASH_CFG_DATA4 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: configure data for SPI SEQ din/dout need. The data could be use to configure NAN
D FLASH or compare read data.*/
#define SPI_MEM_NAND_FLASH_CFG_DATA4    0x0000FFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA4_M  ((SPI_MEM_NAND_FLASH_CFG_DATA4_V)<<(SPI_MEM_NAND_FLASH_CFG_DATA4_S))
#define SPI_MEM_NAND_FLASH_CFG_DATA4_V  0xFFFF
#define SPI_MEM_NAND_FLASH_CFG_DATA4_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT0_REG(i)          (REG_SPI_MEM_BASE(i) + 0x240)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN0 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN0_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN0 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN0_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN0_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN0 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN0_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN0_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE0_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT1_REG(i)          (REG_SPI_MEM_BASE(i) + 0x244)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN1 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN1    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN1_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN1_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN1_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN1 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN1    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN1_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN1_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN1_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN1_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN1_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN1_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN1 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN1    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN1_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN1_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN1_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN1_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN1_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN1_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE1_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT2_REG(i)          (REG_SPI_MEM_BASE(i) + 0x248)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN2 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN2    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN2_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN2_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN2_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN2 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN2    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN2_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN2_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN2_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN2_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN2_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN2_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN2 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN2    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN2_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN2_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN2_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN2_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN2_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN2_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE2_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT3_REG(i)          (REG_SPI_MEM_BASE(i) + 0x24C)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN3 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN3    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN3_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN3_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN3_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN3 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN3    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN3_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN3_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN3_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN3_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN3_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN3_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN3 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN3    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN3_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN3_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN3_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN3_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN3_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN3_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE3_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT4_REG(i)          (REG_SPI_MEM_BASE(i) + 0x250)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN4 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN4    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN4_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN4_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN4_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN4 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN4    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN4_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN4_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN4_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN4_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN4_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN4_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN4 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN4    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN4_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN4_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN4_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN4_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN4_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN4_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE4_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT5_REG(i)          (REG_SPI_MEM_BASE(i) + 0x254)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN5 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN5    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN5_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN5_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN5_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN5 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN5    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN5_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN5_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN5_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN5_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN5_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN5_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN5 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN5    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN5_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN5_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN5_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN5_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN5_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN5_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE5_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT6_REG(i)          (REG_SPI_MEM_BASE(i) + 0x258)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN6 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN6    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN6_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN6_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN6_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN6 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN6    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN6_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN6_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN6_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN6_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN6_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN6_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN6 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN6    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN6_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN6_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN6_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN6_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN6_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN6_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE6_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT7_REG(i)          (REG_SPI_MEM_BASE(i) + 0x25C)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN7 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN7    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN7_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN7_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN7_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN7 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN7    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN7_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN7_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN7_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN7_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN7_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN7_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN7 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN7    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN7_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN7_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN7_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN7_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN7_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN7_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE7_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT8_REG(i)          (REG_SPI_MEM_BASE(i) + 0x260)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN8 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN8    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN8_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN8_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN8_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN8 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN8    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN8_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN8_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN8_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN8_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN8_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN8_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN8 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN8    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN8_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN8_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN8_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN8_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN8_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN8_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE8_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT9_REG(i)          (REG_SPI_MEM_BASE(i) + 0x264)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN9 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN9    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN9_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN9_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN9_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN9 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN9    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN9_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN9_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN9_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN9_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN9_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN9_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN9 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN9    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN9_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN9_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN9_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN9_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN9_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN9_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE9_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT10_REG(i)          (REG_SPI_MEM_BASE(i) + 0x268)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN10 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN10    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN10_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN10_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN10_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN10 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN10    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN10_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN10_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN10_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN10_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN10_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN10_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN10 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN10    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN10_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN10_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN10_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN10_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN10_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN10_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE10_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT11_REG(i)          (REG_SPI_MEM_BASE(i) + 0x26C)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN11 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN11    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN11_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN11_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN11_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN11 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN11    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN11_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN11_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN11_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN11_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN11_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN11_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN11 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN11    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN11_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN11_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN11_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN11_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN11_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN11_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE11_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT12_REG(i)          (REG_SPI_MEM_BASE(i) + 0x270)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN12 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN12    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN12_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN12_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN12_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN12 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN12    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN12_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN12_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN12_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN12_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN12_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN12_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN12 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN12    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN12_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN12_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN12_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN12_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN12_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN12_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE12_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT13_REG(i)          (REG_SPI_MEM_BASE(i) + 0x274)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN13 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN13    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN13_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN13_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN13_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN13 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN13    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN13_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN13_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN13_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN13_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN13_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN13_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN13 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN13    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN13_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN13_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN13_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN13_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN13_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN13_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE13_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT14_REG(i)          (REG_SPI_MEM_BASE(i) + 0x278)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN14 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN14    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN14_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN14_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN14_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN14 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN14    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN14_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN14_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN14_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN14_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN14_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN14_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN14 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN14    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN14_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN14_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN14_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN14_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN14_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN14_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE14_S  0

#define SPI_MEM_NAND_FLASH_CMD_LUT15_REG(i)          (REG_SPI_MEM_BASE(i) + 0x27C)
/* SPI_MEM_NAND_FLASH_LUT_BUS_EN15 : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config spi_bus_en at cmd lut address $n,SPI could use DUAL/QUAD
mode while enable, SPI could use SINGLE mode while disable.1:Enable. 0:Disable.(
Note these registers are described to indicate the SPI_MEM_NAND_FLASH_CMD_LUT$n_
REG's field. The number of CMD LUT entries can be defined by the user, but canno
t exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN15    (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN15_M  (BIT(30))
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN15_V  0x1
#define SPI_MEM_NAND_FLASH_LUT_BUS_EN15_S  30
/* SPI_MEM_NAND_FLASH_LUT_DATA_LEN15 : R/W ;bitpos:[29:28] ;default: 2'b0 ; */
/*description: MSPI NAND FLASH config data length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN15    0x00000003
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN15_M  ((SPI_MEM_NAND_FLASH_LUT_DATA_LEN15_V)<<(SPI_MEM_NAND_FLASH_LUT_DATA_LEN15_S))
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN15_V  0x3
#define SPI_MEM_NAND_FLASH_LUT_DATA_LEN15_S  28
/* SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15 : R/W ;bitpos:[27:24] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config address length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15_M  ((SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15_V)<<(SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15_S))
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_ADDR_LEN15_S  24
/* SPI_MEM_NAND_FLASH_LUT_CMD_LEN15 : R/W ;bitpos:[23:20] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config cmd length at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN15    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN15_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_LEN15_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_LEN15_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN15_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_CMD_LEN15_S  20
/* SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15 : R/W ;bitpos:[19:16] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config sfsm_st_en at cmd lut address $n.[3]-ADDR period enable;
[2]-DUMMY period enable; [1]-DIN period; [0]-DOUT period..*/
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15    0x0000000F
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15_M  ((SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15_V)<<(SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15_S))
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15_V  0xF
#define SPI_MEM_NAND_FLASH_LUT_SFSM_ST_EN15_S  16
/* SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15 : R/W ;bitpos:[15:0] ;default: 16'b0 ; */
/*description: MSPI NAND FLASH config cmd value at cmd lut address $n..*/
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15    0x0000FFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15_M  ((SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15_V)<<(SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15_S))
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15_V  0xFFFF
#define SPI_MEM_NAND_FLASH_LUT_CMD_VALUE15_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ0_REG(i)          (REG_SPI_MEM_BASE(i) + 0x280)
/* SPI_MEM_NAND_FLASH_CMD_INDEX0 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX0    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX0_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX0_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX0_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX0_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX0_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG0 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG0_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX0 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX0_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX0_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX0_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX0 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX0    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX0_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX0_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX0_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX0_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX0_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN0 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN0_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG0_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ1_REG(i)          (REG_SPI_MEM_BASE(i) + 0x284)
/* SPI_MEM_NAND_FLASH_CMD_INDEX1 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX1    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX1_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX1_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX1_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX1_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX1_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG1 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG1    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG1_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG1_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG1_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX1 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX1    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX1_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX1_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX1_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX1_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX1_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX1 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX1    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX1_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX1_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX1_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX1_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX1_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN1 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN1    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN1_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN1_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN1_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG1 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG1    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG1_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG1_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG1_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ2_REG(i)          (REG_SPI_MEM_BASE(i) + 0x288)
/* SPI_MEM_NAND_FLASH_CMD_INDEX2 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX2    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX2_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX2_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX2_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX2_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX2_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG2 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG2    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG2_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG2_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG2_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX2 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX2    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX2_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX2_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX2_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX2_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX2_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX2 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX2    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX2_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX2_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX2_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX2_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX2_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN2 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN2    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN2_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN2_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN2_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG2 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG2    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG2_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG2_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG2_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ3_REG(i)          (REG_SPI_MEM_BASE(i) + 0x28C)
/* SPI_MEM_NAND_FLASH_CMD_INDEX3 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX3    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX3_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX3_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX3_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX3_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX3_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG3 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG3    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG3_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG3_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG3_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX3 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX3    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX3_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX3_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX3_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX3_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX3_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX3 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX3    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX3_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX3_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX3_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX3_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX3_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN3 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN3    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN3_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN3_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN3_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG3 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG3    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG3_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG3_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG3_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ4_REG(i)          (REG_SPI_MEM_BASE(i) + 0x290)
/* SPI_MEM_NAND_FLASH_CMD_INDEX4 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX4    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX4_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX4_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX4_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX4_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX4_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG4 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG4    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG4_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG4_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG4_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX4 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX4    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX4_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX4_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX4_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX4_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX4_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX4 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX4    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX4_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX4_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX4_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX4_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX4_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN4 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN4    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN4_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN4_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN4_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG4 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG4    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG4_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG4_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG4_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ5_REG(i)          (REG_SPI_MEM_BASE(i) + 0x294)
/* SPI_MEM_NAND_FLASH_CMD_INDEX5 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX5    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX5_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX5_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX5_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX5_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX5_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG5 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG5    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG5_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG5_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG5_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX5 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX5    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX5_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX5_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX5_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX5_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX5_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX5 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX5    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX5_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX5_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX5_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX5_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX5_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN5 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN5    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN5_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN5_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN5_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG5 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG5    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG5_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG5_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG5_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ6_REG(i)          (REG_SPI_MEM_BASE(i) + 0x298)
/* SPI_MEM_NAND_FLASH_CMD_INDEX6 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX6    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX6_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX6_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX6_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX6_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX6_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG6 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG6    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG6_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG6_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG6_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX6 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX6    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX6_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX6_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX6_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX6_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX6_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX6 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX6    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX6_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX6_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX6_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX6_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX6_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN6 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN6    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN6_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN6_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN6_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG6 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG6    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG6_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG6_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG6_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ7_REG(i)          (REG_SPI_MEM_BASE(i) + 0x29C)
/* SPI_MEM_NAND_FLASH_CMD_INDEX7 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX7    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX7_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX7_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX7_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX7_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX7_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG7 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG7    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG7_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG7_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG7_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX7 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX7    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX7_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX7_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX7_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX7_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX7_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX7 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX7    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX7_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX7_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX7_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX7_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX7_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN7 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN7    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN7_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN7_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN7_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG7 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG7    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG7_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG7_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG7_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ8_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2A0)
/* SPI_MEM_NAND_FLASH_CMD_INDEX8 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX8    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX8_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX8_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX8_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX8_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX8_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG8 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG8    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG8_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG8_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG8_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX8 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX8    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX8_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX8_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX8_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX8_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX8_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX8 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX8    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX8_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX8_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX8_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX8_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX8_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN8 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN8    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN8_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN8_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN8_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG8 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG8    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG8_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG8_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG8_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ9_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2A4)
/* SPI_MEM_NAND_FLASH_CMD_INDEX9 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX9    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX9_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX9_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX9_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX9_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX9_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG9 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG9    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG9_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG9_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG9_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX9 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX9    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX9_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX9_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX9_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX9_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX9_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX9 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX9    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX9_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX9_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX9_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX9_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX9_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN9 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN9    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN9_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN9_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN9_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG9 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG9    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG9_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG9_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG9_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ10_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2A8)
/* SPI_MEM_NAND_FLASH_CMD_INDEX10 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX10    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX10_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX10_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX10_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX10_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX10_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG10 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG10    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG10_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG10_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG10_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX10 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX10    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX10_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX10_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX10_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX10_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX10_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX10 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX10    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX10_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX10_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX10_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX10_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX10_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN10 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN10    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN10_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN10_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN10_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG10 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG10    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG10_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG10_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG10_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ11_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2AC)
/* SPI_MEM_NAND_FLASH_CMD_INDEX11 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX11    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX11_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX11_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX11_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX11_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX11_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG11 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG11    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG11_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG11_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG11_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX11 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX11    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX11_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX11_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX11_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX11_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX11_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX11 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX11    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX11_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX11_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX11_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX11_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX11_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN11 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN11    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN11_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN11_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN11_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG11 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG11    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG11_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG11_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG11_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ12_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2B0)
/* SPI_MEM_NAND_FLASH_CMD_INDEX12 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX12    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX12_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX12_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX12_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX12_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX12_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG12 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG12    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG12_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG12_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG12_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX12 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX12    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX12_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX12_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX12_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX12_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX12_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX12 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX12    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX12_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX12_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX12_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX12_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX12_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN12 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN12    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN12_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN12_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN12_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG12 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG12    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG12_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG12_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG12_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ13_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2B4)
/* SPI_MEM_NAND_FLASH_CMD_INDEX13 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX13    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX13_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX13_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX13_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX13_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX13_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG13 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG13    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG13_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG13_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG13_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX13 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX13    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX13_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX13_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX13_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX13_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX13_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX13 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX13    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX13_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX13_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX13_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX13_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX13_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN13 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN13    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN13_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN13_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN13_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG13 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG13    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG13_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG13_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG13_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ14_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2B8)
/* SPI_MEM_NAND_FLASH_CMD_INDEX14 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX14    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX14_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX14_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX14_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX14_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX14_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG14 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG14    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG14_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG14_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG14_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX14 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX14    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX14_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX14_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX14_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX14_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX14_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX14 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX14    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX14_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX14_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX14_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX14_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX14_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN14 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN14    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN14_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN14_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN14_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG14 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG14    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG14_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG14_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG14_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ15_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2BC)
/* SPI_MEM_NAND_FLASH_CMD_INDEX15 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX15    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX15_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX15_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX15_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX15_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX15_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG15 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG15    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG15_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG15_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG15_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX15 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX15    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX15_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX15_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX15_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX15_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX15_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX15 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX15    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX15_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX15_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX15_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX15_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX15_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN15 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN15    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN15_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN15_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN15_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG15 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG15    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG15_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG15_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG15_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ16_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2C0)
/* SPI_MEM_NAND_FLASH_CMD_INDEX16 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX16    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX16_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX16_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX16_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX16_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX16_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG16 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG16    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG16_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG16_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG16_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX16 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX16    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX16_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX16_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX16_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX16_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX16_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX16 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX16    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX16_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX16_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX16_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX16_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX16_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN16 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN16    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN16_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN16_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN16_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG16 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG16    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG16_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG16_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG16_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ17_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2C4)
/* SPI_MEM_NAND_FLASH_CMD_INDEX17 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX17    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX17_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX17_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX17_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX17_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX17_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG17 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG17    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG17_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG17_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG17_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX17 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX17    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX17_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX17_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX17_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX17_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX17_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX17 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX17    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX17_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX17_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX17_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX17_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX17_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN17 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN17    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN17_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN17_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN17_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG17 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG17    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG17_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG17_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG17_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ18_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2C8)
/* SPI_MEM_NAND_FLASH_CMD_INDEX18 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX18    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX18_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX18_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX18_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX18_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX18_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG18 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG18    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG18_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG18_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG18_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX18 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX18    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX18_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX18_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX18_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX18_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX18_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX18 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX18    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX18_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX18_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX18_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX18_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX18_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN18 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN18    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN18_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN18_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN18_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG18 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG18    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG18_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG18_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG18_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ19_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2CC)
/* SPI_MEM_NAND_FLASH_CMD_INDEX19 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX19    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX19_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX19_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX19_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX19_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX19_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG19 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG19    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG19_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG19_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG19_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX19 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX19    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX19_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX19_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX19_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX19_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX19_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX19 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX19    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX19_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX19_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX19_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX19_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX19_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN19 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN19    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN19_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN19_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN19_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG19 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG19    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG19_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG19_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG19_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ20_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2D0)
/* SPI_MEM_NAND_FLASH_CMD_INDEX20 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX20    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX20_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX20_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX20_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX20_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX20_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG20 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG20    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG20_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG20_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG20_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX20 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX20    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX20_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX20_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX20_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX20_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX20_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX20 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX20    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX20_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX20_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX20_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX20_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX20_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN20 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN20    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN20_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN20_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN20_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG20 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG20    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG20_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG20_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG20_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ21_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2D4)
/* SPI_MEM_NAND_FLASH_CMD_INDEX21 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX21    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX21_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX21_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX21_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX21_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX21_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG21 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG21    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG21_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG21_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG21_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX21 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX21    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX21_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX21_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX21_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX21_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX21_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX21 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX21    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX21_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX21_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX21_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX21_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX21_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN21 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN21    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN21_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN21_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN21_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG21 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG21    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG21_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG21_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG21_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ22_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2D8)
/* SPI_MEM_NAND_FLASH_CMD_INDEX22 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX22    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX22_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX22_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX22_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX22_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX22_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG22 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG22    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG22_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG22_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG22_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX22 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX22    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX22_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX22_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX22_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX22_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX22_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX22 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX22    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX22_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX22_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX22_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX22_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX22_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN22 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN22    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN22_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN22_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN22_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG22 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG22    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG22_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG22_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG22_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ23_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2DC)
/* SPI_MEM_NAND_FLASH_CMD_INDEX23 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX23    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX23_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX23_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX23_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX23_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX23_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG23 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG23    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG23_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG23_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG23_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX23 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX23    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX23_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX23_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX23_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX23_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX23_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX23 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX23    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX23_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX23_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX23_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX23_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX23_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN23 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN23    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN23_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN23_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN23_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG23 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG23    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG23_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG23_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG23_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ24_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2E0)
/* SPI_MEM_NAND_FLASH_CMD_INDEX24 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX24    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX24_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX24_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX24_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX24_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX24_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG24 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG24    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG24_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG24_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG24_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX24 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX24    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX24_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX24_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX24_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX24_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX24_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX24 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX24    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX24_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX24_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX24_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX24_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX24_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN24 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN24    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN24_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN24_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN24_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG24 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG24    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG24_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG24_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG24_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ25_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2E4)
/* SPI_MEM_NAND_FLASH_CMD_INDEX25 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX25    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX25_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX25_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX25_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX25_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX25_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG25 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG25    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG25_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG25_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG25_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX25 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX25    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX25_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX25_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX25_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX25_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX25_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX25 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX25    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX25_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX25_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX25_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX25_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX25_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN25 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN25    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN25_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN25_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN25_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG25 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG25    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG25_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG25_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG25_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ26_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2E8)
/* SPI_MEM_NAND_FLASH_CMD_INDEX26 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX26    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX26_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX26_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX26_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX26_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX26_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG26 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG26    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG26_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG26_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG26_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX26 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX26    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX26_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX26_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX26_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX26_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX26_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX26 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX26    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX26_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX26_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX26_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX26_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX26_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN26 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN26    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN26_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN26_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN26_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG26 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG26    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG26_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG26_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG26_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ27_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2EC)
/* SPI_MEM_NAND_FLASH_CMD_INDEX27 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX27    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX27_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX27_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX27_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX27_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX27_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG27 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG27    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG27_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG27_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG27_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX27 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX27    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX27_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX27_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX27_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX27_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX27_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX27 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX27    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX27_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX27_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX27_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX27_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX27_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN27 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN27    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN27_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN27_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN27_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG27 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG27    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG27_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG27_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG27_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ28_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2F0)
/* SPI_MEM_NAND_FLASH_CMD_INDEX28 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX28    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX28_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX28_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX28_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX28_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX28_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG28 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG28    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG28_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG28_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG28_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX28 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX28    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX28_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX28_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX28_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX28_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX28_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX28 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX28    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX28_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX28_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX28_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX28_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX28_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN28 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN28    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN28_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN28_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN28_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG28 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG28    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG28_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG28_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG28_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ29_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2F4)
/* SPI_MEM_NAND_FLASH_CMD_INDEX29 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX29    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX29_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX29_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX29_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX29_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX29_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG29 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG29    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG29_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG29_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG29_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX29 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX29    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX29_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX29_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX29_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX29_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX29_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX29 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX29    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX29_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX29_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX29_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX29_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX29_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN29 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN29    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN29_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN29_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN29_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG29 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG29    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG29_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG29_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG29_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ30_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2F8)
/* SPI_MEM_NAND_FLASH_CMD_INDEX30 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX30    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX30_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX30_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX30_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX30_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX30_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG30 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG30    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG30_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG30_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG30_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX30 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX30    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX30_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX30_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX30_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX30_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX30_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX30 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX30    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX30_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX30_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX30_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX30_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX30_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN30 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN30    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN30_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN30_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN30_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG30 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG30    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG30_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG30_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG30_S  0

#define SPI_MEM_NAND_FLASH_SPI_SEQ31_REG(i)          (REG_SPI_MEM_BASE(i) + 0x2FC)
/* SPI_MEM_NAND_FLASH_CMD_INDEX31 : R/W ;bitpos:[14:11] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config spi_cmd_index at spi seq index $n. Use to find SPI comman
d in CMD LUT.(Note these registers are described to indicate the SPI_MEM_NAND_FL
ASH_SPI_SEQ_REG' fieldd The number of CMD LUT entries can be defined by the user
, but cannot exceed 16 ).*/
#define SPI_MEM_NAND_FLASH_CMD_INDEX31    0x0000000F
#define SPI_MEM_NAND_FLASH_CMD_INDEX31_M  ((SPI_MEM_NAND_FLASH_CMD_INDEX31_V)<<(SPI_MEM_NAND_FLASH_CMD_INDEX31_S))
#define SPI_MEM_NAND_FLASH_CMD_INDEX31_V  0xF
#define SPI_MEM_NAND_FLASH_CMD_INDEX31_S  11
/* SPI_MEM_NAND_FLASH_REQ_OR_CFG31 : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config reg_or_cfg at spi seq index $n. 1: AXI/APB request  0: SP
I SEQ configuration..*/
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG31    (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG31_M  (BIT(10))
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG31_V  0x1
#define SPI_MEM_NAND_FLASH_REQ_OR_CFG31_S  10
/* SPI_MEM_NAND_FLASH_ADDR_INDEX31 : R/W ;bitpos:[9:6] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config addr_index at spi seq index $n.  Use with SPI_MEM_NAND_FL
ASH_SR_ADDR.*/
#define SPI_MEM_NAND_FLASH_ADDR_INDEX31    0x0000000F
#define SPI_MEM_NAND_FLASH_ADDR_INDEX31_M  ((SPI_MEM_NAND_FLASH_ADDR_INDEX31_V)<<(SPI_MEM_NAND_FLASH_ADDR_INDEX31_S))
#define SPI_MEM_NAND_FLASH_ADDR_INDEX31_V  0xF
#define SPI_MEM_NAND_FLASH_ADDR_INDEX31_S  6
/* SPI_MEM_NAND_FLASH_DIN_INDEX31 : R/W ;bitpos:[5:2] ;default: 4'b0 ; */
/*description: MSPI NAND FLASH config din_index at spi seq index $n.  Use with SPI_MEM_NAND_FLA
SH_CFG_DATA.*/
#define SPI_MEM_NAND_FLASH_DIN_INDEX31    0x0000000F
#define SPI_MEM_NAND_FLASH_DIN_INDEX31_M  ((SPI_MEM_NAND_FLASH_DIN_INDEX31_V)<<(SPI_MEM_NAND_FLASH_DIN_INDEX31_S))
#define SPI_MEM_NAND_FLASH_DIN_INDEX31_V  0xF
#define SPI_MEM_NAND_FLASH_DIN_INDEX31_S  2
/* SPI_MEM_NAND_FLASH_SR_CHK_EN31 : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config sr_chk_en at spi seq index $n. 1: enable 0: disable..*/
#define SPI_MEM_NAND_FLASH_SR_CHK_EN31    (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN31_M  (BIT(1))
#define SPI_MEM_NAND_FLASH_SR_CHK_EN31_V  0x1
#define SPI_MEM_NAND_FLASH_SR_CHK_EN31_S  1
/* SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG31 : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: MSPI NAND FLASH config seq_tail_flg at spi seq index $n.1: The last index for se
quence. 0: Not the last index..*/
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG31    (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG31_M  (BIT(0))
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG31_V  0x1
#define SPI_MEM_NAND_FLASH_SEQ_TAIL_FLG31_S  0

#define SPI_MEM_XTS_PLAIN_BASE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x300)
/* SPI_MEM_SPI_XTS_PLAIN : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: This field is only used to generate include file in c case. This field is useles
s. Please do not use this field..*/
#define SPI_MEM_SPI_XTS_PLAIN    0xFFFFFFFF
#define SPI_MEM_SPI_XTS_PLAIN_M  ((SPI_MEM_SPI_XTS_PLAIN_V)<<(SPI_MEM_SPI_XTS_PLAIN_S))
#define SPI_MEM_SPI_XTS_PLAIN_V  0xFFFFFFFF
#define SPI_MEM_SPI_XTS_PLAIN_S  0

#define SPI_MEM_XTS_LINESIZE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x340)
/* SPI_MEM_SPI_XTS_LINESIZE : R/W ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: This bits stores the line-size parameter which will be used in manual encryption
 calculation. It decides how many bytes will be encrypted one time. 0: 16-bytes,
 1: 32-bytes, 2: 64-bytes, 3:reserved..*/
#define SPI_MEM_SPI_XTS_LINESIZE    0x00000003
#define SPI_MEM_SPI_XTS_LINESIZE_M  ((SPI_MEM_SPI_XTS_LINESIZE_V)<<(SPI_MEM_SPI_XTS_LINESIZE_S))
#define SPI_MEM_SPI_XTS_LINESIZE_V  0x3
#define SPI_MEM_SPI_XTS_LINESIZE_S  0

#define SPI_MEM_XTS_DESTINATION_REG(i)          (REG_SPI_MEM_BASE(i) + 0x344)
/* SPI_MEM_SPI_XTS_DESTINATION : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: This bit stores the destination parameter which will be used in manual encryptio
n calculation. 0: flash(default), 1: psram(reserved). Only default value can be
used..*/
#define SPI_MEM_SPI_XTS_DESTINATION    (BIT(0))
#define SPI_MEM_SPI_XTS_DESTINATION_M  (BIT(0))
#define SPI_MEM_SPI_XTS_DESTINATION_V  0x1
#define SPI_MEM_SPI_XTS_DESTINATION_S  0

#define SPI_MEM_XTS_PHYSICAL_ADDRESS_REG(i)          (REG_SPI_MEM_BASE(i) + 0x348)
/* SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS : R/W ;bitpos:[29:0] ;default: 30'h0 ; */
/*description: This bits stores the physical-address parameter which will be used in manual enc
ryption calculation. This value should aligned with byte number decided by line-
size parameter..*/
#define SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS    0x3FFFFFFF
#define SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS_M  ((SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS_V)<<(SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS_S))
#define SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS_V  0x3FFFFFFF
#define SPI_MEM_SPI_XTS_PHYSICAL_ADDRESS_S  0

#define SPI_MEM_XTS_TRIGGER_REG(i)          (REG_SPI_MEM_BASE(i) + 0x34C)
/* SPI_MEM_SPI_XTS_TRIGGER : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to trigger the process of manual encryption calculation. This actio
n should only be asserted when manual encryption status is 0. After this action,
 manual encryption status becomes 1. After calculation is done, manual encryptio
n status becomes 2..*/
#define SPI_MEM_SPI_XTS_TRIGGER    (BIT(0))
#define SPI_MEM_SPI_XTS_TRIGGER_M  (BIT(0))
#define SPI_MEM_SPI_XTS_TRIGGER_V  0x1
#define SPI_MEM_SPI_XTS_TRIGGER_S  0

#define SPI_MEM_XTS_RELEASE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x350)
/* SPI_MEM_SPI_XTS_RELEASE : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to release encrypted result to mspi. This action should only be ass
erted when manual encryption status is 2. After this action, manual encryption s
tatus will become 3..*/
#define SPI_MEM_SPI_XTS_RELEASE    (BIT(0))
#define SPI_MEM_SPI_XTS_RELEASE_M  (BIT(0))
#define SPI_MEM_SPI_XTS_RELEASE_V  0x1
#define SPI_MEM_SPI_XTS_RELEASE_S  0

#define SPI_MEM_XTS_DESTROY_REG(i)          (REG_SPI_MEM_BASE(i) + 0x354)
/* SPI_MEM_SPI_XTS_DESTROY : WT ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to destroy encrypted result. This action should be asserted only wh
en manual encryption status is 3. After this action, manual encryption status wi
ll become 0..*/
#define SPI_MEM_SPI_XTS_DESTROY    (BIT(0))
#define SPI_MEM_SPI_XTS_DESTROY_M  (BIT(0))
#define SPI_MEM_SPI_XTS_DESTROY_V  0x1
#define SPI_MEM_SPI_XTS_DESTROY_S  0

#define SPI_MEM_XTS_STATE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x358)
/* SPI_MEM_SPI_XTS_STATE : RO ;bitpos:[1:0] ;default: 2'h0 ; */
/*description: This bits stores the status of manual encryption. 0: idle, 1: busy of encryption
 calculation, 2: encryption calculation is done but the encrypted result is invi
sible to mspi, 3: the encrypted result is visible to mspi..*/
#define SPI_MEM_SPI_XTS_STATE    0x00000003
#define SPI_MEM_SPI_XTS_STATE_M  ((SPI_MEM_SPI_XTS_STATE_V)<<(SPI_MEM_SPI_XTS_STATE_S))
#define SPI_MEM_SPI_XTS_STATE_V  0x3
#define SPI_MEM_SPI_XTS_STATE_S  0

#define SPI_MEM_XTS_DATE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x35C)
/* SPI_MEM_SPI_XTS_DATE : R/W ;bitpos:[29:0] ;default: 30'h20210907 ; */
/*description: This bits stores the last modified-time of manual encryption feature..*/
#define SPI_MEM_SPI_XTS_DATE    0x3FFFFFFF
#define SPI_MEM_SPI_XTS_DATE_M  ((SPI_MEM_SPI_XTS_DATE_V)<<(SPI_MEM_SPI_XTS_DATE_S))
#define SPI_MEM_SPI_XTS_DATE_V  0x3FFFFFFF
#define SPI_MEM_SPI_XTS_DATE_S  0

#define SPI_MEM_MMU_ITEM_CONTENT_REG(i)          (REG_SPI_MEM_BASE(i) + 0x37C)
/* SPI_MEM_SPI_MMU_ITEM_CONTENT : R/W ;bitpos:[31:0] ;default: 32'h037c ; */
/*description: MSPI-MMU item content.*/
#define SPI_MEM_SPI_MMU_ITEM_CONTENT    0xFFFFFFFF
#define SPI_MEM_SPI_MMU_ITEM_CONTENT_M  ((SPI_MEM_SPI_MMU_ITEM_CONTENT_V)<<(SPI_MEM_SPI_MMU_ITEM_CONTENT_S))
#define SPI_MEM_SPI_MMU_ITEM_CONTENT_V  0xFFFFFFFF
#define SPI_MEM_SPI_MMU_ITEM_CONTENT_S  0

#define SPI_MEM_MMU_ITEM_INDEX_REG(i)          (REG_SPI_MEM_BASE(i) + 0x380)
/* SPI_MEM_SPI_MMU_ITEM_INDEX : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: MSPI-MMU item index.*/
#define SPI_MEM_SPI_MMU_ITEM_INDEX    0xFFFFFFFF
#define SPI_MEM_SPI_MMU_ITEM_INDEX_M  ((SPI_MEM_SPI_MMU_ITEM_INDEX_V)<<(SPI_MEM_SPI_MMU_ITEM_INDEX_S))
#define SPI_MEM_SPI_MMU_ITEM_INDEX_V  0xFFFFFFFF
#define SPI_MEM_SPI_MMU_ITEM_INDEX_S  0

#define SPI_MEM_MMU_POWER_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x384)
/* SPI_MEM_RDN_RESULT : RO ;bitpos:[31] ;default: 1'b0 ; */
/*description: MSPI module clock domain and AXI clock domain ECO register result register.*/
#define SPI_MEM_RDN_RESULT    (BIT(31))
#define SPI_MEM_RDN_RESULT_M  (BIT(31))
#define SPI_MEM_RDN_RESULT_V  0x1
#define SPI_MEM_RDN_RESULT_S  31
/* SPI_MEM_RDN_ENA : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: ECO register enable bit.*/
#define SPI_MEM_RDN_ENA    (BIT(30))
#define SPI_MEM_RDN_ENA_M  (BIT(30))
#define SPI_MEM_RDN_ENA_V  0x1
#define SPI_MEM_RDN_ENA_S  30
/* SPI_MEM_AUX_CTRL : HRO ;bitpos:[29:16] ;default: 14'h1320 ; */
/*description: MMU PSRAM aux control register.*/
#define SPI_MEM_AUX_CTRL    0x00003FFF
#define SPI_MEM_AUX_CTRL_M  ((SPI_MEM_AUX_CTRL_V)<<(SPI_MEM_AUX_CTRL_S))
#define SPI_MEM_AUX_CTRL_V  0x3FFF
#define SPI_MEM_AUX_CTRL_S  16
/* SPI_MEM_SPI_MMU_PAGE_SIZE : R/W ;bitpos:[4:3] ;default: 2'd0 ; */
/*description: 0: Max page size , 1: Max page size/2 , 2: Max page size/4, 3: Max page size/8.*/
#define SPI_MEM_SPI_MMU_PAGE_SIZE    0x00000003
#define SPI_MEM_SPI_MMU_PAGE_SIZE_M  ((SPI_MEM_SPI_MMU_PAGE_SIZE_V)<<(SPI_MEM_SPI_MMU_PAGE_SIZE_S))
#define SPI_MEM_SPI_MMU_PAGE_SIZE_V  0x3
#define SPI_MEM_SPI_MMU_PAGE_SIZE_S  3
/* SPI_MEM_SPI_MMU_MEM_FORCE_PU : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: Set this bit to force mmu-memory powerup, in this case, the power should also be
 controlled by rtc..*/
#define SPI_MEM_SPI_MMU_MEM_FORCE_PU    (BIT(2))
#define SPI_MEM_SPI_MMU_MEM_FORCE_PU_M  (BIT(2))
#define SPI_MEM_SPI_MMU_MEM_FORCE_PU_V  0x1
#define SPI_MEM_SPI_MMU_MEM_FORCE_PU_S  2
/* SPI_MEM_SPI_MMU_MEM_FORCE_PD : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: Set this bit to force mmu-memory powerdown.*/
#define SPI_MEM_SPI_MMU_MEM_FORCE_PD    (BIT(1))
#define SPI_MEM_SPI_MMU_MEM_FORCE_PD_M  (BIT(1))
#define SPI_MEM_SPI_MMU_MEM_FORCE_PD_V  0x1
#define SPI_MEM_SPI_MMU_MEM_FORCE_PD_S  1
/* SPI_MEM_SPI_MMU_MEM_FORCE_ON : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: Set this bit to enable mmu-memory clock force on.*/
#define SPI_MEM_SPI_MMU_MEM_FORCE_ON    (BIT(0))
#define SPI_MEM_SPI_MMU_MEM_FORCE_ON_M  (BIT(0))
#define SPI_MEM_SPI_MMU_MEM_FORCE_ON_V  0x1
#define SPI_MEM_SPI_MMU_MEM_FORCE_ON_S  0

#define SPI_MEM_DPA_CTRL_REG(i)          (REG_SPI_MEM_BASE(i) + 0x388)
/* SPI_MEM_SPI_CRYPT_DPA_SELECT_REGISTER : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: 1: MSPI XTS DPA clock gate is controlled by SPI_CRYPT_CALC_D_DPA_EN and SPI_CRYP
T_SECURITY_LEVEL. 0: Controlled by efuse bits..*/
#define SPI_MEM_SPI_CRYPT_DPA_SELECT_REGISTER    (BIT(4))
#define SPI_MEM_SPI_CRYPT_DPA_SELECT_REGISTER_M  (BIT(4))
#define SPI_MEM_SPI_CRYPT_DPA_SELECT_REGISTER_V  0x1
#define SPI_MEM_SPI_CRYPT_DPA_SELECT_REGISTER_S  4
/* SPI_MEM_SPI_CRYPT_CALC_D_DPA_EN : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description: Only available when SPI_CRYPT_SECURITY_LEVEL is not 0. 1: Enable DPA in the calc
ulation that using key 1 or key 2. 0: Enable DPA only in the calculation that us
ing key 1..*/
#define SPI_MEM_SPI_CRYPT_CALC_D_DPA_EN    (BIT(3))
#define SPI_MEM_SPI_CRYPT_CALC_D_DPA_EN_M  (BIT(3))
#define SPI_MEM_SPI_CRYPT_CALC_D_DPA_EN_V  0x1
#define SPI_MEM_SPI_CRYPT_CALC_D_DPA_EN_S  3
/* SPI_MEM_SPI_CRYPT_SECURITY_LEVEL : R/W ;bitpos:[2:0] ;default: 3'd7 ; */
/*description: Set the security level of spi mem cryption. 0: Shut off cryption DPA funtion. 1-
7: The bigger the number is, the more secure the cryption is. (Note that the per
formance of cryption will decrease together with this number increasing).*/
#define SPI_MEM_SPI_CRYPT_SECURITY_LEVEL    0x00000007
#define SPI_MEM_SPI_CRYPT_SECURITY_LEVEL_M  ((SPI_MEM_SPI_CRYPT_SECURITY_LEVEL_V)<<(SPI_MEM_SPI_CRYPT_SECURITY_LEVEL_S))
#define SPI_MEM_SPI_CRYPT_SECURITY_LEVEL_V  0x7
#define SPI_MEM_SPI_CRYPT_SECURITY_LEVEL_S  0

#define SPI_MEM_XTS_PSEUDO_ROUND_CONF_REG(i)          (REG_SPI_MEM_BASE(i) + 0x38C)
/* SPI_MEM_PSEUDO_INC : R/W ;bitpos:[10:9] ;default: 2'd2 ; */
/*description: xts aes peseudo function increment round that will be peformed randomly between
0 & 2**(inc+1)..*/
#define SPI_MEM_PSEUDO_INC    0x00000003
#define SPI_MEM_PSEUDO_INC_M  ((SPI_MEM_PSEUDO_INC_V)<<(SPI_MEM_PSEUDO_INC_S))
#define SPI_MEM_PSEUDO_INC_V  0x3
#define SPI_MEM_PSEUDO_INC_S  9
/* SPI_MEM_PSEUDO_BASE : R/W ;bitpos:[8:5] ;default: 4'd2 ; */
/*description: xts aes peseudo function base round that must be peformed..*/
#define SPI_MEM_PSEUDO_BASE    0x0000000F
#define SPI_MEM_PSEUDO_BASE_M  ((SPI_MEM_PSEUDO_BASE_V)<<(SPI_MEM_PSEUDO_BASE_S))
#define SPI_MEM_PSEUDO_BASE_V  0xF
#define SPI_MEM_PSEUDO_BASE_S  5
/* SPI_MEM_PSEUDO_RNG_CNT : R/W ;bitpos:[4:2] ;default: 3'd7 ; */
/*description: xts aes peseudo function base round that must be peformed..*/
#define SPI_MEM_PSEUDO_RNG_CNT    0x00000007
#define SPI_MEM_PSEUDO_RNG_CNT_M  ((SPI_MEM_PSEUDO_RNG_CNT_V)<<(SPI_MEM_PSEUDO_RNG_CNT_S))
#define SPI_MEM_PSEUDO_RNG_CNT_V  0x7
#define SPI_MEM_PSEUDO_RNG_CNT_S  2
/* SPI_MEM_MODE_PSEUDO : R/W ;bitpos:[1:0] ;default: 2'b00 ; */
/*description: Set the mode of pseudo. 2'b00: crypto without pseudo. 2'b01: state T with pseudo
 and state D without pseudo. 2'b10: state T with pseudo and state D with few pse
udo. 2'b11: crypto with pseudo..*/
#define SPI_MEM_MODE_PSEUDO    0x00000003
#define SPI_MEM_MODE_PSEUDO_M  ((SPI_MEM_MODE_PSEUDO_V)<<(SPI_MEM_MODE_PSEUDO_S))
#define SPI_MEM_MODE_PSEUDO_V  0x3
#define SPI_MEM_MODE_PSEUDO_S  0

#define SPI_MEM_REGISTERRND_ECO_HIGH_REG(i)          (REG_SPI_MEM_BASE(i) + 0x3F0)
/* SPI_MEM_REGISTERRND_ECO_HIGH : R/W ;bitpos:[31:0] ;default: 32'h037c ; */
/*description: ECO high register.*/
#define SPI_MEM_REGISTERRND_ECO_HIGH    0xFFFFFFFF
#define SPI_MEM_REGISTERRND_ECO_HIGH_M  ((SPI_MEM_REGISTERRND_ECO_HIGH_V)<<(SPI_MEM_REGISTERRND_ECO_HIGH_S))
#define SPI_MEM_REGISTERRND_ECO_HIGH_V  0xFFFFFFFF
#define SPI_MEM_REGISTERRND_ECO_HIGH_S  0

#define SPI_MEM_REGISTERRND_ECO_LOW_REG(i)          (REG_SPI_MEM_BASE(i) + 0x3F4)
/* SPI_MEM_REGISTERRND_ECO_LOW : R/W ;bitpos:[31:0] ;default: 32'h037c ; */
/*description: ECO low register.*/
#define SPI_MEM_REGISTERRND_ECO_LOW    0xFFFFFFFF
#define SPI_MEM_REGISTERRND_ECO_LOW_M  ((SPI_MEM_REGISTERRND_ECO_LOW_V)<<(SPI_MEM_REGISTERRND_ECO_LOW_S))
#define SPI_MEM_REGISTERRND_ECO_LOW_V  0xFFFFFFFF
#define SPI_MEM_REGISTERRND_ECO_LOW_S  0

#define SPI_MEM_DATE_REG(i)          (REG_SPI_MEM_BASE(i) + 0x3FC)
/* SPI_MEM_DATE : R/W ;bitpos:[27:0] ;default: 28'h2409240 ; */
/*description: SPI0 register version..*/
#define SPI_MEM_DATE    0x0FFFFFFF
#define SPI_MEM_DATE_M  ((SPI_MEM_DATE_V)<<(SPI_MEM_DATE_S))
#define SPI_MEM_DATE_V  0xFFFFFFF
#define SPI_MEM_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_SPI_MEM_REG_H_ */
