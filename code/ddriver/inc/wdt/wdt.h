#ifndef __WDT_H__
#define __WDT_H__

#define EXTERN_DEF_WDT_CFG

#include "wdt_cfg.h"

#define WDT_VER_MAJOR       ((uint32_t)1)
#define WDT_VER_MINOR       ((uint32_t)0)

#ifdef DEF_WDT
#define EXTERN_DEF_WDT
#else
#define EXTERN_DEF_WDT extern
#endif /* DEF_WDT */

typedef struct
{
    ddrv_ret_t (* open_fp)(void **, wdt_cfg_t const * const);
    ddrv_ret_t (* start_fp)(void **);
    ddrv_ret_t (* stop_fp)(void **);
    ddrv_ret_t (* service_fp)(void **);
    ddrv_ret_t (* close_fp)(void **);
    ddrv_ret_t (* ver_get_fp)(void **);
}wdt_api_t;

typedef struct
{
    void      * ctrl_vp;
    wdt_cfg_t * cfg_stp;
    wdt_api_t * api_stp;
}wdt_api_cfg_ctrl_t;

EXTERN_DEF_WDT wdt_api_t const wdt_api_st;

#endif /* __WDT_H__ */
