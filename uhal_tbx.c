// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/*
 * Copyright (C) 2023 Espressif Systems Co. Ltd.
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#include <endian.h>

#include "fal_typedef.h"

#include "uhal_tbx.h"
#include "uhal_reg_access.h"
#include "espsw_soc.h"

/**
 * @brief check tbx rtl date
 * @param[in] tbx_num tbx idx
 * @param[out] value date value
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_tbx_date_check(uint32_t tbx_num, uint8_t *value)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_date, reg_val;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    reg_date = TBX_DATE_REG + tbx_num * TBX_OFFSET;

    ESPSW_RTN_ON_ERROR(uhal_reg_get(reg_date, (uint8_t *)&reg_val));
    *((uint32_t *) value) = reg_val;

    return ret;
}

/**
 * @brief Dump tbx registers
 * @param[in] tbx_num tbx idx
 * @param[out] reg_dump register dump result
 * @return ESPSW_OK or error code
 */
espsw_error_t uhal_tbx_reg_dump(uint32_t tbx_num, struct fal_reg_dump *reg_dump)
{
    espsw_error_t ret = ESPSW_OK;

    typedef struct {
        uint32_t reg_base;
        uint32_t reg_end;
        char name[32];
    } regdump;

    regdump tbx_reg_dumps[] = {
        {TBX_DATE_REG, TBX_RX_FSM_STATE_REG, "TBX0"},
        {TBX_DATE_REG + TBX_OFFSET, TBX_RX_FSM_STATE_REG + TBX_OFFSET, "TBX1"},
    };

    uint32_t dump_addr, reg_count, reg_val = 0;

    if (tbx_num != TBX_NUM0 && tbx_num != TBX_NUM1)
        return ESPSW_BAD_PARAM;

    reg_count = 0;
    for (dump_addr = tbx_reg_dumps[tbx_num].reg_base; dump_addr <= tbx_reg_dumps[tbx_num].reg_end; reg_count++) {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(dump_addr, (uint8_t *)&reg_val));
        reg_dump->reg_value[reg_count] = reg_val;
        dump_addr += 4;
    }

    reg_dump->reg_count = reg_count;
    reg_dump->reg_base = tbx_reg_dumps[tbx_num].reg_base;
    reg_dump->reg_end = tbx_reg_dumps[tbx_num].reg_end;
    snprintf((char *)reg_dump->reg_name, sizeof(reg_dump->reg_name), "%s", tbx_reg_dumps[tbx_num].name);

    return ret;
}

/**
 * @brief Test tbx interrupt
 * @param[in] intr_num interrupt number
 * @return ESPSW_OK or error code
 */
static struct tbx_intr_info tbx_intr_tlb[] = {
        {
            .reg_bit = 0,
            .name = "TBX_RX_PKT_INT",
        },
        {
            .reg_bit = 2,
            .name = "TBX_CNTP_INTF_OVERFLOW_INT",
        },
};

static espsw_error_t tbx_check_interrupt_info(uint32_t tbx_num, struct tbx_intr_info *intr_info)
{
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(TBX_INTERRUPT_ENA_REG + tbx_num * TBX_OFFSET, intr_info->reg_bit, 1, (uint8_t *)&intr_info->ena_val));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(TBX_INTERRUPT_REG + tbx_num * TBX_OFFSET, intr_info->reg_bit, 1, (uint8_t *)&intr_info->int_val));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(TBX_INTERRUPT_RAW_REG + tbx_num * TBX_OFFSET, intr_info->reg_bit, 1, (uint8_t *)&intr_info->raw_val));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(TBX_INTERRUPT_ST_REG + tbx_num * TBX_OFFSET, intr_info->reg_bit, 1, (uint8_t *)&intr_info->st_val));

    return ESPSW_OK;
}

espsw_error_t uhal_tbx_test_intr(uint32_t tbx_num, uint32_t intr_num)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t idx, enable = 1;

    /* TBX Interrupt Registers */
    uint32_t int_test, int_ena, int_clr;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    int_test = TBX_INTERRUPT_TEST_REG + tbx_num * TBX_OFFSET;
    int_ena = TBX_INTERRUPT_ENA_REG + tbx_num * TBX_OFFSET;
    int_clr = TBX_INTERRUPT_CLR_REG + tbx_num * TBX_OFFSET;

    for (idx = 0; idx < sizeof(tbx_intr_tlb) / sizeof(tbx_intr_tlb[0]); idx++) {
        /* found which interrupt bit */
        if (intr_num == tbx_intr_tlb[idx].reg_bit) {
            ESPSW_RTN_ON_ERROR(tbx_check_interrupt_info(tbx_num ,&tbx_intr_tlb[idx]));
            printf("%s is bit[%d], state: ENA %d INT %d RAW %d ST %d\n", tbx_intr_tlb[idx].name, intr_num, tbx_intr_tlb[idx].ena_val,
                    tbx_intr_tlb[idx].int_val, tbx_intr_tlb[idx].raw_val, tbx_intr_tlb[idx].st_val);

            //soft trigger interrupt
            ESPSW_RTN_ON_ERROR(uhal_reg_field_set(int_ena, tbx_intr_tlb[idx].reg_bit, 1, enable));
            ESPSW_RTN_ON_ERROR(uhal_reg_field_set(int_test, tbx_intr_tlb[idx].reg_bit, 1, enable));

            printf("\nEnable intr bit and trig [%s]\n", tbx_intr_tlb[idx].name);

            ESPSW_RTN_ON_ERROR(tbx_check_interrupt_info(tbx_num ,&tbx_intr_tlb[idx]));
            printf("%s is bit[%d], state: ENA %d INT %d RAW %d ST %d\n", tbx_intr_tlb[idx].name, intr_num, tbx_intr_tlb[idx].ena_val,
                    tbx_intr_tlb[idx].int_val, tbx_intr_tlb[idx].raw_val, tbx_intr_tlb[idx].st_val);

            // clean
            ESPSW_RTN_ON_ERROR(uhal_reg_field_set(int_clr, tbx_intr_tlb[idx].reg_bit, 1, enable));
            ESPSW_RTN_ON_ERROR(uhal_reg_field_set(int_ena, tbx_intr_tlb[idx].reg_bit, 1, 0));
            printf("\nClear intr bit and disable [%s]\n", tbx_intr_tlb[idx].name);

            ESPSW_RTN_ON_ERROR(tbx_check_interrupt_info(tbx_num ,&tbx_intr_tlb[idx]));
            printf("%s is bit[%d], State: ENA %d INT %d RAW %d ST %d\n", tbx_intr_tlb[idx].name, intr_num, tbx_intr_tlb[idx].ena_val,
                    tbx_intr_tlb[idx].int_val, tbx_intr_tlb[idx].raw_val, tbx_intr_tlb[idx].st_val);

            return ret;
        }
    }

    printf("Error: unknown interrupt num\n");
    return ret;
}

#if(SWITCH_VERSION == 10)
espsw_error_t uhal_tbx_pattern_set(uint32_t tbx_num, const struct fal_tbx_pattern *tbx_pattern)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t val_h, val_l;

    /* TBX CTRL Register */
    uint32_t tbx_txctrl, tbx_rxctrl, tbx_txram, offset, idx;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    tbx_txctrl = TBX_TX_CTRL_REG + tbx_num * TBX_OFFSET;
    tbx_rxctrl = TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET;
    tbx_txram = TBX_MEM_TX_SRAM_REG + tbx_num * TBX_OFFSET;

    /* Wrote Pattern After disable tx enable */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(tbx_txctrl, TBX_TX_EN_S, 1, 0));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(tbx_rxctrl, TBX_RX_EN_S, 1, 0));

    /* Fill pattern into RAM */
    /* info */
    offset = 0;
    ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, tbx_pattern->info.val[0]));
    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, tbx_pattern->info.val[1]));
    /* packet header */
    for (idx = 0; idx < 16; idx++) {
        /* 64BIT BIG Endian Wrote */
        val_h = (htobe64(tbx_pattern->pkt_hdr.dword[idx]) >> 32) & 0xFFFFFFFF;
        val_l = (htobe64(tbx_pattern->pkt_hdr.dword[idx])) & 0xFFFFFFFF;

        offset += 4;
        ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, val_l));
        offset += 4;
        ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, val_h));
    }

    /* pyaload pad */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(tbx_txctrl, TBX_TX_PAYLOAD_PAD_S, 8, tbx_pattern->payload_pad));

    // printf("tbx%d pattern wrote done. Pls enable tbx%d tx\n", tbx_num, tbx_num);
    return ret;
}
#elif(SWITCH_VERSION == 20)
espsw_error_t uhal_tbx_pattern_set(uint32_t tbx_num, const struct fal_tbx_pattern_switch20 *tbx_pattern)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t val_h, val_l;

    /* TBX CTRL Register */
    uint32_t tbx_txctrl, tbx_rxctrl, tbx_txram, offset, idx;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }

    if(tbx_num == 0)
    {
        // printf("go tbx_num = 0\n");
        tbx_txctrl = SWITCH_SWDBG_TBX0_TX_CTRL_REG;
        tbx_rxctrl = SWITCH_SWDBG_TBX0_RX_CTRL_REG;

        tbx_txram = DR_REG_SWITCH_TBX_MEM_BASE;
    }else{
        // printf("go tbx_num = 1\n");
        tbx_txctrl = SWITCH_SWDBG_TBX1_TX_CTRL_REG;
        tbx_rxctrl = SWITCH_SWDBG_TBX1_RX_CTRL_REG;
        tbx_txram =  DR_REG_SWITCH_TBX_MEM_BASE + TBX_OFFSET;
    }

    // printf("tbx_txctrl = %p\n",tbx_txctrl);
    /* Wrote Pattern After disable tx enable */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(tbx_txctrl, SWITCH_SWDBG_TBX0_TX_EN_S, 1, 0));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(tbx_rxctrl, SWITCH_SWDBG_TBX0_RX_EN_S, 1, 0));


    // printf("Fill pattern into RAM-------------\n\n");
    /* Fill pattern into RAM */
    /* info */
    offset = 0;
    ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, tbx_pattern->ptn_info.val[0]));

    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, tbx_pattern->ptn_info.val[1]));

    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, tbx_pattern->agent_info.data[0]));
    
    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, tbx_pattern->agent_info.data[1]));


    /* packet header */
    for (idx = 0; idx < 16; idx++) {
        /* 64BIT BIG Endian Wrote */
        val_h = (htobe64(tbx_pattern->pkt_hdr.dword[idx]) >> 32) & 0xFFFFFFFF;
        val_l = (htobe64(tbx_pattern->pkt_hdr.dword[idx])) & 0xFFFFFFFF;

        offset += 4;
        ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, val_l));
        offset += 4;
        ESPSW_RTN_ON_ERROR(uhal_reg_set(tbx_txram + offset, val_h));
    }

    /* pyaload pad */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(tbx_txctrl, SWITCH_SWDBG_TBX0_TX_PAYLOAD_PAD_S, 8, tbx_pattern->payload_pad));

    // printf("tbx%d pattern wrote done. Pls enable tbx%d tx\n", tbx_num, tbx_num);
    return ret;
}
#endif


#if(SWITCH_VERSION == 10)
espsw_error_t uhal_tbx_pattern_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern)
{
    espsw_error_t ret = ESPSW_OK;

    /* TBX CTRL Register */
    uint32_t tbx_txctrl, tbx_txram, offset, idx;

    memset(tbx_pattern, 0, sizeof(*tbx_pattern));

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    tbx_txctrl = TBX_TX_CTRL_REG + tbx_num * TBX_OFFSET;
    tbx_txram = TBX_MEM_TX_SRAM_REG + tbx_num * TBX_OFFSET;

    /* pattern info */
    offset = 0;
    ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->info.val[0]));
    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->info.val[1]));

    /* packet header */
    for (idx = 0; idx < 32; idx++) {
        offset += 4;
        ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->pkt_hdr.word[idx]));
    }

    /* pyaload pad */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(tbx_txctrl, TBX_TX_PAYLOAD_PAD_S, 8, (uint8_t *)&tbx_pattern->payload_pad));

    return ret;
}
#elif(SWITCH_VERSION == 20)
espsw_error_t uhal_tbx_pattern_check(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern)
{
    espsw_error_t ret = ESPSW_OK;

    /* TBX CTRL Register */
    uint32_t tbx_txctrl, tbx_txram, offset, idx;

    memset(tbx_pattern, 0, sizeof(*tbx_pattern));

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }

    if(tbx_num == 0)
    {
        tbx_txctrl = SWITCH_SWDBG_TBX0_TX_CTRL_REG;
        tbx_txram = DR_REG_SWITCH_TBX_MEM_BASE;
    }else{
        tbx_txctrl = SWITCH_SWDBG_TBX1_TX_CTRL_REG;
        tbx_txram =  DR_REG_SWITCH_TBX_MEM_BASE + TBX_OFFSET;
    }
    /* pattern info */
    offset = 0;
    ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->ptn_info.val[0]));
    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->ptn_info.val[1]));

    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->agent_info.data[0]));

    offset += 4;
    ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->agent_info.data[1]));

    /* packet header */
    for (idx = 0; idx < 32; idx++) {
        offset += 4;
        ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_txram + offset, (uint8_t *)&tbx_pattern->pkt_hdr.word[idx]));
    }

    /* pyaload pad */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_get(tbx_txctrl, TBX_TX_PAYLOAD_PAD_S, 8, (uint8_t *)&tbx_pattern->payload_pad));

    return ret;
}
#endif

#if(SWITCH_VERSION == 10)
espsw_error_t uhal_tbx_config(uint32_t tbx_num, const struct fal_tbx_config *tbx_config)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t value = 0;

    /* TBX CTRL Register */
    uint32_t glbctrl, txctrl, rxctrl, txstate, rxstate;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    glbctrl = TBX_GLOBAL_CFG_REG + tbx_num * TBX_OFFSET;
    txctrl = TBX_TX_CTRL_REG + tbx_num * TBX_OFFSET;
    rxctrl = TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET;
    txstate = TBX_TX_FSM_STATE_REG + tbx_num * TBX_OFFSET;
    rxstate = TBX_RX_FSM_STATE_REG + tbx_num * TBX_OFFSET;

    /* Check Tx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txstate, (uint8_t *)&value));
    if ((value & TBX_TX_FSM_STATE) != 1) {
        printf("TBX%d Tx NOT Idle, state=%d\n", tbx_num, value & TBX_TX_FSM_STATE);
        return ESPSW_BUSY;
    }
    /* Check Rx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxstate, (uint8_t *)&value));
    if ((value & TBX_RX_FSM_STATE) != 1) {
        printf("TBX%d Rx NOT Idle, state=%d\n", tbx_num, value & TBX_RX_FSM_STATE);
        return ESPSW_BUSY;
    }

    /* set global config */
    value = (tbx_config->cntp_afull_stop_en << TBX_CNTP_AFULL_STOP_EN_S) | \
            (tbx_config->cntp_en << TBX_CNTP_EN_S) | \
            (tbx_config->user_mode & TBX_USER_MODE);
    ESPSW_RTN_ON_ERROR(uhal_reg_set(glbctrl, value));

    /* set tx config */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX_TX_ERR_FORCE_S, 1, tbx_config->tx_err_force));
    /* set rx config */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, TBX_RX_RDY_HTIME_S, 8, tbx_config->rx_rdy_htime));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, TBX_RX_RDY_LTIME_S, 8, tbx_config->rx_rdy_ltime));
    /*
     * At last, enable Tx/rx
     */
#if 0 // not used
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX0_TX_EN_S, 1, tbx_config->tx_en));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, TBX0_RX_EN_S, 1, tbx_config->rx_en));
#endif

    return ret;
}

espsw_error_t uhal_tbx_config_check(uint32_t tbx_num, struct fal_tbx_config *tbx_config)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0;

    /* TBX CTRL Register */
    uint32_t glbctrl, txctrl, rxctrl, txstate, rxstate, txdone, txfsm, rxfsm;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    glbctrl = TBX_GLOBAL_CFG_REG + tbx_num * TBX_OFFSET;
    txctrl = TBX_TX_CTRL_REG + tbx_num * TBX_OFFSET;
    rxctrl = TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET;
    txstate = TBX_TX_FSM_STATE_REG + tbx_num * TBX_OFFSET;
    rxstate = TBX_RX_FSM_STATE_REG + tbx_num * TBX_OFFSET;
    txdone = TBX_DONE_REG + tbx_num * TBX_OFFSET;
    txfsm = TBX_TX_FSM_STATE_REG + tbx_num * TBX_OFFSET;
    rxfsm = TBX_RX_FSM_STATE_REG + tbx_num * TBX_OFFSET;

    /* Check Global Config */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(glbctrl, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->cntp_afull_stop_en, TBX_CNTP_AFULL_STOP_EN_S, TBX_CNTP_AFULL_STOP_EN_V);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->cntp_en, TBX_CNTP_EN_S, TBX_CNTP_EN_V);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->user_mode, TBX_USER_MODE_S, 3);

    /* Check Tx Config */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txctrl, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_err_force, TBX_TX_ERR_FORCE_S, TBX_TX_ERR_FORCE_V);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_en, TBX_TX_EN_S, TBX_TX_EN_V);

    /* Check Tx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txstate, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_conn_vld, TBX_TX_VLD_STATE_S, TBX_TX_VLD_STATE_V);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_conn_rdy, TBX_TX_RDY_STATE_S, TBX_TX_RDY_STATE_V);

    /* Check Tx Done */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txdone, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_done, TBX_TX_DONE_S, TBX_TX_DONE_V);

    /* Check Rx Config */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxctrl, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_rdy_htime, TBX_RX_RDY_HTIME_S, 8);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_rdy_ltime, TBX_RX_RDY_LTIME_S, 8);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_en, TBX_RX_EN_S, TBX_RX_EN_V);

    /* Check Rx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxstate, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_conn_vld, TBX_RX_VLD_STATE_S, TBX_RX_VLD_STATE_V);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_conn_rdy, TBX_RX_RDY_STATE_S, TBX_RX_RDY_STATE_V);

    /* check Tx/Rx FSM */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txfsm, (uint8_t *)&tbx_config->tx_fsm_state));
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxfsm, (uint8_t *)&tbx_config->rx_fsm_state));

    return ret;
}

#elif(SWITCH_VERSION == 20)
espsw_error_t uhal_tbx_config(uint32_t tbx_num, const struct fal_tbx_config *tbx_config)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t value = 0;

    /* TBX CTRL Register */
    uint32_t glbctrl, txctrl, rxctrl, txstate, rxstate;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }

    if(tbx_num == 0)
    {
        glbctrl = SWITCH_SWDBG_TBX0_GLOBAL_CFG_REG;
        txctrl = SWITCH_SWDBG_TBX0_TX_CTRL_REG;
        rxctrl = SWITCH_SWDBG_TBX0_RX_CTRL_REG;
        txstate = SWITCH_SWDBG_TBX0_STATUS_REG;
        rxstate = SWITCH_SWDBG_TBX0_STATUS_REG;

    }else{
        glbctrl = SWITCH_SWDBG_TBX1_GLOBAL_CFG_REG;
        txctrl = SWITCH_SWDBG_TBX1_TX_CTRL_REG;
        rxctrl = SWITCH_SWDBG_TBX1_RX_CTRL_REG;
        txstate = SWITCH_SWDBG_TBX1_STATUS_REG;
        rxstate = SWITCH_SWDBG_TBX1_STATUS_REG;
    }

    /* Check Tx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txstate, (uint8_t *)&value));
    value = (value&SWITCH_SWDBG_TBX0_TX_FSM_STATE_M) >> SWITCH_SWDBG_TBX0_TX_FSM_STATE_S;
    if ((value & SWITCH_SWDBG_TBX0_TX_FSM_STATE) != 1) {
        printf("TBX%d Tx NOT Idle, state=%d\n", tbx_num, value & SWITCH_SWDBG_TBX0_TX_FSM_STATE);
        return ESPSW_BUSY;
    }

    /* Check Rx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxstate, (uint8_t *)&value));
    value = (value&SWITCH_SWDBG_TBX0_RX_FSM_STATE_M) >> SWITCH_SWDBG_TBX0_RX_FSM_STATE_S;

    if ((value & SWITCH_SWDBG_TBX0_RX_FSM_STATE) != 1) {
        printf("TBX%d Rx NOT Idle, state=%d\n", tbx_num, value & SWITCH_SWDBG_TBX0_RX_FSM_STATE);
        return ESPSW_BUSY;
    }

    if(tbx_num == 0)
    {
        /* set global config */
        // value = (tbx_config->cntp_afull_stop_en << SWITCH_EIBCNTP_TBX0_CNTP_AFULL_STOP_EN_S) | \
        //         (tbx_config->cntp_en << SWITCH_EIBCNTP_TBX0_CNTP_EN_S) | \
        //         (tbx_config->user_mode & TBX_USER_MODE);
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_SWDBG_TBX0_GLOBAL_CFG_REG, SWITCH_SWDBG_TBX0_USER_MODE_S, 3,tbx_config->user_mode));
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EIBCNTP_MODULE_CNTP_AFULL_STOP_EN_REG, SWITCH_EIBCNTP_TBX0_CNTP_AFULL_STOP_EN_S, 1,tbx_config->cntp_afull_stop_en));
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EIBCNTP_MODULE_CNTP_EN_REG, SWITCH_EIBCNTP_TBX0_CNTP_EN_S, 1,tbx_config->cntp_en));
    
    }else{
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_SWDBG_TBX1_GLOBAL_CFG_REG, SWITCH_SWDBG_TBX1_USER_MODE_S, 3,tbx_config->user_mode));
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EIBCNTP_MODULE_CNTP_AFULL_STOP_EN_REG, SWITCH_EIBCNTP_TBX1_CNTP_AFULL_STOP_EN_S, 1,tbx_config->cntp_afull_stop_en));
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(SWITCH_EIBCNTP_MODULE_CNTP_EN_REG, SWITCH_EIBCNTP_TBX1_CNTP_EN_S, 1,tbx_config->cntp_en));
    }

    /* set rx config */
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, SWITCH_SWDBG_TBX0_RX_RDY_HTIME_S, 8, tbx_config->rx_rdy_htime));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, SWITCH_SWDBG_TBX0_RX_RDY_LTIME_S, 8, tbx_config->rx_rdy_ltime));

    /*
     * At last, enable Tx/rx
     */
#if 0 // not used
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX0_TX_EN_S, 1, tbx_config->tx_en));
    ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, TBX0_RX_EN_S, 1, tbx_config->rx_en));
#endif

    return ret;
}


espsw_error_t uhal_tbx_config_check(uint32_t tbx_num, struct fal_tbx_config *tbx_config)
{
    espsw_error_t ret = ESPSW_OK;
    uint32_t reg_val = 0;

    /* TBX CTRL Register */
    uint32_t glbctrl, txctrl, rxctrl, txstate, rxstate, txdone, txfsm, rxfsm, cntpstate1,cntpstate2;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }


    if(tbx_num == 0)
    {
        glbctrl = SWITCH_SWDBG_TBX0_GLOBAL_CFG_REG;
        txctrl = SWITCH_SWDBG_TBX0_TX_CTRL_REG;
        rxctrl = SWITCH_SWDBG_TBX0_RX_CTRL_REG;
        txstate = SWITCH_SWDBG_TBX0_STATUS_REG;
        rxstate = SWITCH_SWDBG_TBX0_STATUS_REG;



    }else{
        glbctrl = SWITCH_SWDBG_TBX1_GLOBAL_CFG_REG;
        txctrl = SWITCH_SWDBG_TBX1_TX_CTRL_REG;
        rxctrl = SWITCH_SWDBG_TBX1_RX_CTRL_REG;
        txstate = SWITCH_SWDBG_TBX1_STATUS_REG;
        rxstate = SWITCH_SWDBG_TBX1_STATUS_REG;
    }

    cntpstate1 = SWITCH_EIBCNTP_MODULE_CNTP_AFULL_STOP_EN_REG;
    cntpstate2 = SWITCH_EIBCNTP_MODULE_CNTP_EN_REG;

    /* Check Global Config */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(glbctrl, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->user_mode, SWITCH_SWDBG_TBX1_USER_MODE_S, 3);

    ESPSW_RTN_ON_ERROR(uhal_reg_get(cntpstate1, (uint8_t *)&reg_val));
    if(tbx_num == 0)
    {    
        ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->cntp_afull_stop_en, SWITCH_EIBCNTP_TBX0_CNTP_AFULL_STOP_EN_S, 1);
    }else{
        ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->cntp_afull_stop_en, SWITCH_EIBCNTP_TBX1_CNTP_AFULL_STOP_EN_S, 1);
    }

    ESPSW_RTN_ON_ERROR(uhal_reg_get(cntpstate2, (uint8_t *)&reg_val));
    if(tbx_num == 0)
    {    
        ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->cntp_en, SWITCH_EIBCNTP_TBX0_CNTP_EN_S, 1);
    }else{
        ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->cntp_en, SWITCH_EIBCNTP_TBX1_CNTP_EN_S, 1);
    }

    
    /* Check Tx Config */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txctrl, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_done, SWITCH_SWDBG_TBX0_TX_DONE_S, 1);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_en, SWITCH_SWDBG_TBX0_TX_EN_S, 1);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->data_pload, SWITCH_SWDBG_TBX0_TX_PAYLOAD_PAD_S, 8);

    /* Check Tx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(txstate, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_conn_vld, SWITCH_SWDBG_TBX0_TX_VLD_STATE_S, 1);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_conn_rdy, SWITCH_SWDBG_TBX0_TX_RDY_STATE_S, 1);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->tx_fsm_state, SWITCH_SWDBG_TBX0_TX_FSM_STATE_S, 4);

    /* Check Rx Config */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxctrl, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_rdy_htime, SWITCH_SWDBG_TBX0_RX_RDY_HTIME_S, 8);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_rdy_ltime, SWITCH_SWDBG_TBX0_RX_RDY_LTIME_S, 8);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_en, SWITCH_SWDBG_TBX0_RX_EN_S, 1);

    /* Check Rx State */
    ESPSW_RTN_ON_ERROR(uhal_reg_get(rxstate, (uint8_t *)&reg_val));
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_conn_vld, SWITCH_SWDBG_TBX0_RX_VLD_STATE_S, 1);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_conn_rdy, SWITCH_SWDBG_TBX0_RX_RDY_STATE_S, 1);
    ESPSW_GET_FIELD_BY_REG(reg_val, tbx_config->rx_fsm_state, SWITCH_SWDBG_TBX0_RX_FSM_STATE_S, 4);


    return ret;
}


#endif



#if(SWITCH_VERSION == 10)
espsw_error_t uhal_tbx_tx_action(uint32_t tbx_num, enum fal_tbx_tx_action tx_act)
{
    /* TBX CTRL Register */
    uint32_t txctrl;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    txctrl = TBX_TX_CTRL_REG + tbx_num * TBX_OFFSET;

    if (tx_act == TX_START) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX_TX_EN_S, 1, TRUE));
    } else if (tx_act == TX_STOP) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX_TX_EN_S, 1, FALSE));
    } else if (tx_act == TX_RESTART) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX_TX_EN_S, 1, FALSE));
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, TBX_TX_EN_S, 1, TRUE));
    } else {
        return ESPSW_NOT_IMPLEMENTED;
    }
    return ESPSW_OK;
}

espsw_error_t uhal_tbx_rx_action(uint32_t tbx_num, bool enable)
{
    /* TBX CTRL Register */
    uint32_t rxctrl;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    rxctrl = TBX_RX_CTRL_REG + tbx_num * TBX_OFFSET;

    if (enable) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, TBX_RX_EN_S, 1, TRUE));
    } else {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, TBX_RX_EN_S, 1, FALSE));
    }
    return ESPSW_OK;
}


espsw_error_t uhal_tbx_rx_data_check(uint32_t tbx_num, struct fal_tbx_pattern *tbx_pattern)
{
    espsw_error_t ret = ESPSW_OK;

    /* TBX CTRL Register */
    uint32_t tbx_rxram, idx;

    memset(tbx_pattern, 0, sizeof(*tbx_pattern));

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }
    tbx_rxram = TBX_MEM_RX_SRAM_REG + tbx_num * TBX_OFFSET;

    /* packet header */
    for (idx = 0; idx < 32; idx++) {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_rxram + idx * 4, (uint8_t *)&tbx_pattern->pkt_hdr.word[idx]));
    }

    return ret;
}

#elif(SWITCH_VERSION == 20)
espsw_error_t uhal_tbx_tx_action(uint32_t tbx_num, enum fal_tbx_tx_action tx_act)
{
    /* TBX CTRL Register */
    uint32_t txctrl;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }

    if(tbx_num == 0)
    {
        txctrl = SWITCH_SWDBG_TBX0_TX_CTRL_REG;
    }else{
        txctrl = SWITCH_SWDBG_TBX1_TX_CTRL_REG;
    }

    if (tx_act == TX_START) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, SWITCH_SWDBG_TBX0_TX_EN_S, 1, TRUE));
    } else if (tx_act == TX_STOP) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, SWITCH_SWDBG_TBX0_TX_EN_S, 1, FALSE));
    } else if (tx_act == TX_RESTART) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, SWITCH_SWDBG_TBX0_TX_EN_S, 1, FALSE));
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(txctrl, SWITCH_SWDBG_TBX0_TX_EN_S, 1, TRUE));
    } else {
        return ESPSW_NOT_IMPLEMENTED;
    }
    return ESPSW_OK;
}

espsw_error_t uhal_tbx_rx_action(uint32_t tbx_num, bool enable)
{
    /* TBX CTRL Register */
    uint32_t rxctrl;

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }


    if(tbx_num == 0)
    {
        rxctrl = SWITCH_SWDBG_TBX0_RX_CTRL_REG;
    }else{
        rxctrl = SWITCH_SWDBG_TBX1_RX_CTRL_REG;
    }

    if (enable) {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, SWITCH_SWDBG_TBX0_RX_EN_S, 1, TRUE));
    } else {
        ESPSW_RTN_ON_ERROR(uhal_reg_field_set(rxctrl, SWITCH_SWDBG_TBX0_RX_EN_S, 1, FALSE));
    }
    return ESPSW_OK;
}


espsw_error_t uhal_tbx_rx_data_check(uint32_t tbx_num, struct fal_tbx_pattern_switch20 *tbx_pattern)
{
    espsw_error_t ret = ESPSW_OK;

    /* TBX CTRL Register */
    uint32_t tbx_rxram, idx, offset;

    memset(tbx_pattern, 0, sizeof(*tbx_pattern));

    if (tbx_num >= TBX_MAX) {
        return ESPSW_BAD_PARAM;
    }

    if(tbx_num == 0)
    {
        tbx_rxram = DR_REG_SWITCH_TBX_RX_MEM_BASE;
    }else{
        tbx_rxram =  DR_REG_SWITCH_TBX_RX_MEM_BASE + TBX_OFFSET;
    }

    offset = 0;
    /* packet info */
    for (idx = 0; idx < 2; idx++) {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_rxram + offset + idx * 4, (uint8_t *)&tbx_pattern->ptn_info.val[idx]));
    }

    offset = 8;
    /* agent info */
    for (idx = 0; idx < 2; idx++) {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_rxram + offset + idx * 4, (uint8_t *)&tbx_pattern->agent_info.data[idx]));
    }
    
    offset = 16;
    /* packet header */
    for (idx = 0; idx < 32; idx++) {
        ESPSW_RTN_ON_ERROR(uhal_reg_get(tbx_rxram + offset + idx * 4, (uint8_t *)&tbx_pattern->pkt_hdr.word[idx]));
    }

    return ret;
}

#endif


