#ifndef __HW_PAU_H__
#define __HW_PAU_H__

#include "hw_pau.h"

#define HW_PAU_REG_ADDR                 ((uint32_t *)0x40000000)

#define HW_PAU_REG_INDEX_MASK           ((uint32_t)0xF0000000)
#define HW_PAU_REG_INDEX_UNMASK         ((uint32_t)0x0FFFFFFF)
#define HW_PAU_BIT_SHIFT_FOR_REG_INDEX  ((uint32_t)28)
#define HW_PAU_BIT_SHIFT_FOR_ROM_RAM    ((uint32_t)8)
#define HW_PAU_BIT_SHIFT_FOR_FLASH      ((uint32_t)2)


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     :
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_PAU_Peri_Access_Enable_Set(HW_PAU_Type         * const pau_stp,
                                                   pau_cfg_peri_name_t   const peri_name_en)
{
    uint32_t reg_index_ui32 = 0U;

    if (HW_PAU_REG_ADDR == pau_stp)
    {
        reg_index_ui32 = ((uint32_t)((peri_name_en & HW_PAU_REG_INDEX_MASK) >> HW_PAU_BIT_SHIFT_FOR_REG_INDEX));

        pau_stp->PRIVDIS[reg_index_ui32] &= ~((uint32_t)(peri_name_en & HW_PAU_REG_INDEX_UNMASK));
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     :
 * ********************************************************************************************************************
 */

__STATIC_INLINE void HW_PAU_Peri_Access_Disable_Set(HW_PAU_Type         * const pau_stp,
                                                    pau_cfg_peri_name_t   const peri_name_en)
{
    uint32_t reg_index_ui32 = 0U;

    if (HW_PAU_REG_ADDR == pau_stp)
    {
        reg_index_ui32 = ((uint32_t)((peri_name_en & HW_PAU_REG_INDEX_MASK) >> HW_PAU_BIT_SHIFT_FOR_REG_INDEX));

        pau_stp->PRIVDIS[reg_index_ui32] |= ((uint32_t)(peri_name_en & HW_PAU_REG_INDEX_UNMASK));
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}

/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     :
 * ********************************************************************************************************************
 */

__STATIC_INLINE pau_cfg_peri_access_status_t HW_PAU_Peri_Access_Status_Get(HW_PAU_Type         * const pau_stp,
                                                                           pau_cfg_peri_name_t   const peri_name_en)
{
    uint32_t reg_index_ui32 = 0U;

    if (HW_PAU_REG_ADDR == pau_stp)
    {
        reg_index_ui32 = ((uint32_t)((peri_name_en & HW_PAU_REG_INDEX_MASK) >> HW_PAU_BIT_SHIFT_FOR_REG_INDEX));

        return ((pau_cfg_peri_access_status_t)!(pau_stp->PRIVDIS[reg_index_ui32] & (peri_name_en & HW_PAU_REG_INDEX_UNMASK)));
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}




/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     :
 * ********************************************************************************************************************
 */

__STATIC_INLINE pau_cfg_peri_avail_status_t HW_PAU_Peri_Avail_Status_get(HW_PAU_Type         * const pau_stp,
                                                                         pau_cfg_peri_name_t   const peri_name_en)
{
    uint32_t reg_index_ui32 = 0U;

    if (HW_PAU_REG_ADDR == pau_stp)
    {
        reg_index_ui32 = ((uint32_t)((peri_name_en & HW_PAU_REG_INDEX_MASK) >> HW_PAU_BIT_SHIFT_FOR_REG_INDEX));

        return ((pau_cfg_peri_avail_status_t)!!(pau_stp->AVAIL[reg_index_ui32] & (peri_name_en & HW_PAU_REG_INDEX_UNMASK)));
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [13..8] ROM Size
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the Addr bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_PAU_Rom_Size_Get(HW_PAU_Type * const pau_stp)
{
    if (HW_PAU_REG_ADDR == pau_stp)
    {
        return ((uint32_t)(pau_stp->ROMSIZE_b.ADDR << HW_PAU_BIT_SHIFT_FOR_ROM_RAM));
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [17..12] Flash Size
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the Addr bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_PAU_Flash_Size_Get(HW_PAU_Type * const pau_stp)
{
    if (HW_PAU_REG_ADDR == pau_stp)
    {
        return ((uint32_t)((pau_stp->FLSIZE_b.ADDR - 1) << HW_PAU_BIT_SHIFT_FOR_FLASH);
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}

/**
 * ********************************************************************************************************************
 * @brief      : Get the [12..8] RAM0 Size
 *
 * @param[in]  : pau_stp
 *               - Base Address of the USB structure
 *
 * @param[out] : None
 *
 * @retval     : The value of the Addr bit
 * ********************************************************************************************************************
 */

__STATIC_INLINE uint32_t HW_PAU_Ram_Size_Get(HW_PAU_Type * const pau_stp)
{
    if (HW_PAU_REG_ADDR == pau_stp)
    {
        return ((uint32_t)(pau_stp->RAM0SIZE_b.ADDR << HW_PAU_BIT_SHIFT_FOR_ROM_RAM));
    }
    else
    {
        /* Do Nothing : PAU register address is wrong */
    }
}

#endif /* __HW_PAU_H__ */
