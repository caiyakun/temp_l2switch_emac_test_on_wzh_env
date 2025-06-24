/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

#define DR_REG_CLINT_BASE         0x4000000

#define CLINT_MINT_MSIP_REG(i)          (DR_REG_CLINT_BASE + (i * 4))
/* CLINT_MINT_SIP : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  M mode software interrupt pending register for core-i. 
Upper bits are tied to 0 and bit-0 is valid.*/
#define CLINT_MINT_MSIP    BIT(0)
#define CLINT_MINT_MSIP_M  BIT(0)
#define CLINT_MINT_MSIP_V  1
#define CLINT_MINT_MSIP_S  0

#define CLINT_MINT_MTIMECMP_L_REG(i)          (DR_REG_CLINT_BASE + 0x4000 + (i * 8))
/* CLINT_MINT_MTIMECMP_L : R/W ;bitpos:[31:0] ;default: 32'hFFFFFFFF ; */
/*description: M mode clock timer compare value register (lower 32 bits) for core-i.*/
#define CLINT_MINT_MTIMECMP_L    0xFFFFFFFF
#define CLINT_MINT_MTIMECMP_L_M  ((CLINT_MINT_MTIMECMP_L_V)<<(CLINT_MINT_MTIMECMP_L_S))
#define CLINT_MINT_MTIMECMP_L_V  0xFFFFFFFF
#define CLINT_MINT_MTIMECMP_L_S  0

#define CLINT_MINT_MTIMECMP_H_REG(i)          (DR_REG_CLINT_BASE + 0x4004 + (i * 8))
/* CLINT_MINT_MTIMECMP_H : R/W ;bitpos:[31:0] ;default: 32'hFFFFFFFF ; */
/*description: M mode clock timer compare value register (higher 32 bits) for core-i.*/
#define CLINT_MINT_MTIMECMP_H    0xFFFFFFFF
#define CLINT_MINT_MTIMECMP_H_M  ((CLINT_MINT_MTIMECMP_H_V)<<(CLINT_MINT_MTIMECMP_H_S))
#define CLINT_MINT_MTIMECMP_H_V  0xFFFFFFFF
#define CLINT_MINT_MTIMECMP_H_S  0

#define CLINT_MINT_MTIMELOAD_L_REG          (DR_REG_CLINT_BASE + 0x4020)
/* CLINT_MINT_MTIMELOAD_L : R/W ;bitpos:[31:0] ;default: 32'hFFFFFFFF ; */
/*description: value to load to sys counter’s lower 32bits. It is common register for both cores.*/
#define CLINT_MINT_MTIMELOAD_L    0xFFFFFFFF
#define CLINT_MINT_MTIMELOAD_L_M  ((CLINT_MINT_MTIMELOAD_L_V)<<(CLINT_MINT_MTIMELOAD_L_S))
#define CLINT_MINT_MTIMELOAD_L_V  0xFFFFFFFF
#define CLINT_MINT_MTIMELOAD_L_S  0

#define CLINT_MINT_MTIMELOAD_H_REG          (DR_REG_CLINT_BASE + 0x4024)
/* CLINT_MINT_MTIMELOAD_H : R/W ;bitpos:[31:0] ;default: 32'hFFFFFFFF ; */
/*description: value to load to sys counter’s higher 32bits. It is common register for both cores.*/
#define CLINT_MINT_MTIMELOAD_H    0xFFFFFFFF
#define CLINT_MINT_MTIMELOAD_H_M  ((CLINT_MINT_MTIMELOAD_H_V)<<(CLINT_MINT_MTIMELOAD_H_S))
#define CLINT_MINT_MTIMELOAD_H_V  0xFFFFFFFF
#define CLINT_MINT_MTIMELOAD_H_S  0

#define CLINT_MINT_MTIMECTL_REG(i)          (DR_REG_CLINT_BASE + 0x4028 + (i * 4))
/* CLINT_MINT_MTIMECTL_MODE : R/W ;bitpos:[5:4] ;default: 4'b0 ; */
/*description: Sampling mode. 0x0-No sampling, 0x1-Sample upper half of sys count on reading MTIMELOi,
0x2- Sample lower half of sys count on reading MTIMEHIi, 0x3- Sample other half of sys count on 
reading MTIMELOi or MTIMEHIi*/
#define CLINT_MINT_MTIMECTL_MODE    0x00000003
#define CLINT_MINT_MTIMECTL_MODE_M  ((CLINT_MINT_MTIMECTL_MODE_V)<<(CLINT_MINT_MTIMECTL_MODE_S))
#define CLINT_MINT_MTIMECTL_MODE_V  0x3
#define CLINT_MINT_MTIMECTL_MODE_S  4
/* CLINT_MINT_MTIMECTL_OVERFLOW : R/W ;bitpos:[0] ;default: 1'b0; */
/*description: verflow bit. When sys counter value is 0xFFFFFFFFFFFFFFFF i.e. max value,
then this bit is set as 1 by HW. SW can clear this bit by writing*/
#define CLINT_MINT_MTIMECTL_OVERFLOW    (BIT(3))
#define CLINT_MINT_MTIMECTL_OVERFLOW_M  (BIT(3))
#define CLINT_MINT_MTIMECTL_OVERFLOW_V  0x1
#define CLINT_MINT_MTIMECTL_OVERFLOW_S  3
/* CLINT_MINT_MTIMECTL_EN : R/W ;bitpos:[0] ;default: 1'b1; */
/*description:  sys counter enable. When 1, syscounter runs else sys counter is paused.*/
#define CLINT_MINT_MTIMECTL_EN    (BIT(0))
#define CLINT_MINT_MTIMECTL_EN_M  (BIT(0))
#define CLINT_MINT_MTIMECTL_EN_V  0x1
#define CLINT_MINT_MTIMECTL_EN_S  0

#define CLINT_MINT_MTIME_L_REG(i)          (DR_REG_CLINT_BASE + 0x4030 + (i * 8))
/* CLINT_MINT_MTIME_L : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: current value of sys counter’s lower 32bits for core-i*/
#define CLINT_MINT_MTIME_L    0xFFFFFFFF
#define CLINT_MINT_MTIME_L_M  ((CLINT_MINT_MTIME_L_V)<<(CLINT_MINT_MTIME_L_S))
#define CLINT_MINT_MTIME_L_V  0xFFFFFFFF
#define CLINT_MINT_MTIME_L_S  0

#define CLINT_MINT_MTIME_H_REG(i)          (DR_REG_CLINT_BASE + 0x4034 + (i * 8))
/* CLINT_MINT_MTIME_H : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: current value of sys counter’s higher 32bits for core-i*/
#define CLINT_MINT_MTIME_H    0xFFFFFFFF
#define CLINT_MINT_MTIME_H_M  ((CLINT_MINT_MTIME_H_V)<<(CLINT_MINT_MTIME_H_S))
#define CLINT_MINT_MTIME_H_V  0xFFFFFFFF
#define CLINT_MINT_MTIME_H_S  0

#define CLINT_SINT_SSIP_REG(i)          (DR_REG_CLINT_BASE + 0xC000 + (i * 4))
/* CLINT_SINT_SIP : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description:  S mode software interrupt pending register for core-i. 
Upper bits are tied to 0 and bit-0 is valid.*/
#define CLINT_SINT_SSIP    BIT(0)
#define CLINT_SINT_SSIP_M  BIT(0)
#define CLINT_SINT_SSIP_V  1
#define CLINT_SINT_SSIP_S  0

#define CLINT_SINT_STIMECMP_L_REG(i)          (DR_REG_CLINT_BASE + 0xD000 + (i * 8))
/* CLINT_SINT_STIMECMP_L : R/W ;bitpos:[31:0] ;default: 32'hFFFFFFFF ; */
/*description: S mode clock timer compare value register (lower 32 bits) for core-i.*/
#define CLINT_SINT_STIMECMP_L    0xFFFFFFFF
#define CLINT_SINT_STIMECMP_L_M  ((CLINT_SINT_STIMECMP_L_V)<<(CLINT_SINT_STIMECMP_L_S))
#define CLINT_SINT_STIMECMP_L_V  0xFFFFFFFF
#define CLINT_SINT_STIMECMP_L_S  0

#define CLINT_SINT_STIMECMP_H_REG(i)          (DR_REG_CLINT_BASE + 0xD004 + (i * 8))
/* CLINT_SINT_STIMECMP_H : R/W ;bitpos:[31:0] ;default: 32'hFFFFFFFF ; */
/*description: S mode clock timer compare value register (higher 32 bits) for core-i.*/
#define CLINT_SINT_STIMECMP_H    0xFFFFFFFF
#define CLINT_SINT_STIMECMP_H_M  ((CLINT_SINT_STIMECMP_H_V)<<(CLINT_SINT_STIMECMP_H_S))
#define CLINT_SINT_STIMECMP_H_V  0xFFFFFFFF
#define CLINT_SINT_STIMECMP_H_S  0

#ifdef __cplusplus
}
#endif
