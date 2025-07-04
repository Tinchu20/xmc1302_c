/**
 * ********************************************************************************************************************
 * @brief : Peripheral Access Unit Device Driver file
 *
 * @copyright 2025 wordglory.com, Inc.
 * ********************************************************************************************************************
 */

#define DEF_PAU

/**
 * ********************************************************************************************************************
 * Includes
 * ********************************************************************************************************************
 */

#include <stdio.h>
#include <stdin.h>
#include "hw_pau_pvt.h"
#include "pau.h"

/**
 * ********************************************************************************************************************
 * Macro Definitions
 * ********************************************************************************************************************
 */

#ifndef PAU_PARAM_CHECK_ENABLE
#define PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */

#ifndef PAU_ERROR_RETURN
#define PAU_ERROR_RETURN(a, error)      ERROR_RETURN((a), (error))
#endif /* PAU_ERROR_RETURN */

#ifndef PAU_ASSERT
#define PAU_ASSERT(a)                   ERROR_ASSERT((a))
#endif /* PAU_ASSERT */

#define PAU_TOTAL_INSTANCE_COUNT        ((uint32_t)1)

#define PAU_INIT                        ((uint32_t)1)
#define PAU_UNINIT                      ((uint32_t)0)

/**
 * ********************************************************************************************************************
 * Private Constants
 * ********************************************************************************************************************
 */

/**
 * ********************************************************************************************************************
 * Typedef Definitions
 * ********************************************************************************************************************
 */

typedef struct
{
    uint32_t           open_ui32;
    void             * reg_addr_vp;
}pau_ctrl_t;

typedef struct
{
    void     * addr_vp;
    uint32_t   addr_index_ui32;
}pau_ctrl_inst_info_t;

typedef struct
{
    pau_ctrl_inst_info_t ctrl_inst_sta[PAU_TOTAL_INSTANCE_COUNT];
    uint32_t             index_ui32;
}pau_data_t;

/**
 * ********************************************************************************************************************
 * static inline functions
 * ********************************************************************************************************************
 */

/**
 * ********************************************************************************************************************
 * Private Function Prototypes
 * ********************************************************************************************************************
 */

static void       pau_data_init_fct(pau_data_t * const, uint32_t const);
static ddrv_ret_t PAU_Open_fct(void **, pau_cfg_t const * const);
static ddrv_ret_t PAU_Peri_Access_Enable_fct(void **, pau_cfg_peri_name_t const);
static ddrv_ret_t PAU_Peri_Access_Disable_fct(void **, pau_cfg_peri_name_t const);
static ddrv_ret_t PAU_Peri_Access_Status_Get_fct(void **, pau_cfg_peri_name_t const, pau_cfg_peri_access_status_t * const);
static ddrv_ret_t PAU_Peri_Available_Status_Get_fct(void **, pau_cfg_peri_name_t const, pau_cfg_peri_avail_status_t * const);
static ddrv_ret_t PAU_ROM_Size_Get_fct(void **, uint32_t * const);
static ddrv_ret_t PAU_Flash_Size_Get_fct(void **, uint32_t * const);
static ddrv_ret_t PAU_RAM_Size_Get_fct(void **, uint32_t * const);
static ddrv_ret_t PAU_Close_fct(void **);
static ddrv_ret_t PAU_Ver_Get_fct(void **);

/**
 * ********************************************************************************************************************
 * Private Global Variables
 * ********************************************************************************************************************
 */

static pau_ctrl_t pau_ctrl_sta[PAU_TOTAL_INSTANCE_COUNT];

static pau_data_t pau_data_st =
{
    .index_ui32 = 0
};

/**
 * ********************************************************************************************************************
 * Global Variables
 * ********************************************************************************************************************
 */

pau_api_t const pau_api_st =
{
    .open_fp                      = PAU_Open_fct,
    .peri_access_enable_fp        = PAU_Peri_Access_Enable_fct,
    .peri_access_disable_fp       = PAU_Peri_Access_Disable_fct,
    .peri_access_status_get_fp    = PAU_Peri_Access_Status_Get_fct,
    .peri_available_status_get_fp = PAU_Peri_Available_Status_Get_fct,
    .rom_size_get_fp              = PAU_ROM_Size_Get_fct,
    .flash_size_get_fp            = PAU_Flash_Size_Get_fct,
    .ram_size_get_fp              = PAU_RAM_Size_Get_fct,
    .close_fp                     = PAU_Close_fct,
    .ver_get_fp                   = PAU_Ver_Get_fct
};

/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  :
 * @param[out] :
 *
 * @retval     :
 * ********************************************************************************************************************
 */

static ddrv_ret_t PAU_Open_fct(void ** ctrl_vpp, pau_cfg_t const * const cfg_stp)
{
    ddrv_ret_t ret_status_en = ((ddrv_ret_t)RET_NONE);

#ifdef PAU_PARAM_CHECK_ENABLE
    PAU_ASSERT(ctrl_vpp)
    PAU_ERROR_RETURN(NULL == *ctrl_vpp, RET_ERROR)
#endif /* PAU_PARAM_CHECK_ENABLE */

    ret_status_en = pau_ctrl_inst_bind_fct(ctrl_vpp, &pau_data_st);
    PAU_ERROR_RETURN(RET_SUCCESS == ret_status_en, RET_ERROR)
}


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

static ddrv_ret_t PAU_Peri_Access_Enable_fct(void ** ctrl_vpp, pau_cfg_peri_name_t const peri_name_en)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

static ddrv_ret_t PAU_Peri_Access_Disable_fct(void ** ctrl_vpp, pau_cfg_peri_name_t const peri_name_en)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}

/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

static ddrv_ret_t PAU_Peri_Access_Status_Get_fct(void                         ** ctrl_vpp,
                                                 pau_cfg_peri_name_t             const peri_name_en,
                                                 pau_cfg_peri_access_status_t  * const status_enp)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}



/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */


static ddrv_ret_t PAU_Peri_Available_Status_Get_fct(void                        ** ctrl_vpp,
                                                    pau_cfg_peri_name_t            const peri_name_en,
                                                    pau_cfg_peri_avail_status_t  * const status_enp)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */


static ddrv_ret_t PAU_ROM_Size_Get_fct(void ** ctrl_vpp, uint32_t * const rom_size_ui32p)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}

/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */


static ddrv_ret_t PAU_Flash_Size_Get_fct(void ** ctrl_vpp, uint32_t * const flash_size_ui32p)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */


static ddrv_ret_t PAU_RAM_Size_Get_fct(void ** ctrl_vpp, uint32_t * const ram_size_ui32p)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}


/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

static ddrv_ret_t PAU_Close_fct(void ** ctrl_vpp)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}

/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */

static ddrv_ret_t PAU_Ver_Get_fct(void ** ctrl_vpp)
{
#ifdef PAU_PARAM_CHECK_ENABLE
#endif /* PAU_PARAM_CHECK_ENABLE */
}

/**
 * ********************************************************************************************************************
 * @brief      :
 *
 * @param[in]  : None
 * @param[out] : None
 *
 * @retval     : None
 * ********************************************************************************************************************
 */


static void pau_data_init_fct(pau_data_t * const data_stp, uint32_t const arr_size_ui32)
{
    if ((NULL != data_stp) && arr_size_ui32)
    {
        for (uint32_t i = 0; i < arr_size_ui32; i++)
        {
            data_stp[i].ctrl_inst_addr            = NULL;
            data_stp[i].ctrl_inst_addr_index_ui32 = 0U;
        }
    }
    else
    {
        /* Do Nothing : */
    }
}

/* [] END OF FILE */

