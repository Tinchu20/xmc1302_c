#ifndef __PAU_H__
#define __PAU_H__

#include "_pau_cfg.h"

#define PAU_VER_MAJOR       ((uint32_t)1)
#define PAU_VER_MINOR       ((uint32_t)0)

#ifdef DEF_PAU
#define EXTERN_DEF_PAU
#else
#define EXTERN_DEF_PAU extern
#endif /* DEF_PAU */

typedef struct
{
    ddrv_ret_t (* open_fp)(void **, pau_cfg_t const * const);
    ddrv_ret_t (* peri_access_enable_fp)(void **, pau_cfg_peri_name_t const);
    ddrv_ret_t (* peri_access_disable_fp)(void **, pau_cfg_peri_name_t const);
    ddrv_ret_t (* peri_access_status_get_fp)(void **, pau_cfg_peri_name_t const, pau_cfg_peri_access_status_t * const);
    ddrv_ret_t (* peri_available_status_get_fp)(void **, pau_cfg_peri_name_t const, pau_cfg_peri_avail_status_t * const);
    ddrv_ret_t (* rom_size_get_fp)(void **, uint32_t * const);
    ddrv_ret_t (* flash_size_get_fp)(void **, uint32_t * const);
    ddrv_ret_t (* ram_size_get_fp)(void **, uint32_t * const);
    ddrv_ret_t (* close_fp)(void **);
    ddrv_ret_t (* ver_get_fp)(void **);
}pau_api_t;

typedef struct
{
    void      * ctrl_vp;
    pau_cfg_t * cfg_stp;
    pau_api_t * api_stp;
}pau_api_cfg_ctrl_t;

EXTERN_DEF_PAU pau_api_t const pau_api_st;

#endif /* __PAU_H__ */
