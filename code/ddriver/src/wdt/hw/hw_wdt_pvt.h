#ifndef __HW_WDT_PVT_H__
#define __HW_WDT_PVT_H__

#include "hw_wdt.h"

#define HW_WDT_PVT_MAGIC_WORD   ((uint32_t)0xABADCAFE)

/**
 * ********************************************************************************************************************
 * @brief      : Get the [7..0] Module Revision Number
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the MOD_REV bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_MOD_REV_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return (wdt_stp->ID_b.MOD_REV);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [15..8] Module Type
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the MOD_TYPE bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Mod_Type_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return (wdt_stp->ID_b.MOD_TYPE);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [31..16] Module Number Value
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the MOD_NUMBER bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Mod_Num_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return (wdt_stp->ID_b.MOD_NUMBER);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [0..0] Enable
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Enable_Set(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->CTR_b.ENB = ((bit_field_t)BIT_SET);
}

/**
 * ********************************************************************************************************************
 * @brief      : Reset the [0..0] Enable
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Enable_Reset(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->CTR_b.ENB = ((bit_field_t)BIT_CLEAR);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [0..0] Enable
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the ENB bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Enable_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return (wdt_stp->CTR_b.ENB);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [1..1] Pre-warning
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Pre_Warning_Set(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->CTR_b.PRE = ((bit_field_t)BIT_SET);
}

/**
 * ********************************************************************************************************************
 * @brief      : Reset the [1..1] Pre-warning
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Pre_Warning_Reset(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->CTR_b.PRE = ((bit_field_t)BIT_CLEAR);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [1..1] Pre-warning
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the PRE bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Pre_Warning_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->CTR_b.PRE);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [4..4] Debug Suspend
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Debug_Suspend_Set(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->CTR_b.DSP = ((bit_field_t)BIT_SET);
}

/**
 * ********************************************************************************************************************
 * @brief      : Reset the [4..4] Debug Suspend
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Debug_Suspend_Reset(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->CTR_b.DSP = ((bit_field_t)BIT_CLEAR);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [4..4] Debug Suspend
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the DSP bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Debug_Suspend_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->CTR_b.DSP);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [15..8] Service Indication Pulse Width
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Service_Indication_Pulse_Width_Set(HW_WDT_Type * const wdt_stp, uint8_t const spw_ui8)
{
    wdt_stp->CTR_b.SPW = ((uint8_t)spw_ui8);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [15..8] Service Indication Pulse Width
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the SPW bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Service_Indication_Pulse_Width_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->CTR_b.SPW);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [31..0] Service
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Service_Set(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->SRV_b.SRV = ((uint32_t)HW_WDT_PVT_MAGIC_WORD);
}

/**
 * ********************************************************************************************************************
 * @brief      : Reset the [31..0] Service
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Service_Reset(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->SRV_b.SRV = ((word_set_clear_t)WORD_CLEAR);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [31..0] Timer Value
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the TIM bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Timer_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->TIM_b.TIM);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [31..0] Window Lower Bound
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Window_Lower_Bound_Set(HW_WDT_Type * const wdt_stp, uint32_t const wlb_ui32)
{
    wdt_stp->WLB_b.WLB = ((uint32_t)wlb_ui32);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [31..0] Window Lower Bound
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the WLB bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Window_Lower_Bound_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->WLB_b.WLB);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [31..0] Window Upper Bound
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Window_Upper_Bound_Set(HW_WDT_Type * const wdt_stp, uint32_t wub_ui32)
{
    wdt_stp->WUB_b.WUB = ((uint32_t)wub_ui32);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [31..0] Window Upper Bound
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the WUB bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Window_Upper_Bound_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->WUB_b.WUB);
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [0..0] Pre-warning Alarm
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the ALMS bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_WDT_Pre_Warning_Alarm_Status_Get(HW_WDT_Type * const wdt_stp)
{
    return ((uint32_t)wdt_stp->WDTSTS_b.ALMS);
}

/**
 * ********************************************************************************************************************
 * @brief      : Set the [0..0] Pre-warning Alarm
 *
 * @param[in]  : wdt_stp
 *               - Base Address of the WDT structure
 *
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_WDT_Pre_Warning_Alarm_Clear(HW_WDT_Type * const wdt_stp)
{
    wdt_stp->WDTCLR_b.ALMC = ((bit_field_t)BIT_SET);
}

#endif /* __HW_WDT_PVT_H__  */
