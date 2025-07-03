#ifndef __WDT_CFG_H__
#define __WDT_CFG_H__

#ifdef DEF_WDT_CFG
#define EXTERN_DEF_WDT_CFG
#else
#define EXTERN_DEF_WDT_CFG extern
#endif /* DEF_WDT_CFG */

typedef enum
{
    WDT_CFG_PRE_WARNING_DISABLE = ((uint32_t)0),
    WDT_CFG_PRE_WARNING_ENABLE  = ((uint32_t)1),
    WDT_CFG_PRE_WARNING_NONE    = ((uint32_t)0xFFFFFFFF)
}wdt_cfg_pre_warning_t;

typedef enum
{
    WDT_CFG_PRE_WARNING_ALARM_NOT_OCCURRED = ((uint32_t)0),
    WDT_CFG_PRE_WARNING_ALARM_OCCURRED     = ((uint32_t)1),
    WDT_CFG_PRE_WARNING_ALARM_NONE         = ((uint32_t)0xFFFFFFFF)
}wdt_cfg_pre_warning_alarm_status_t;

typedef struct
{
    uint32_t lower_bound_ui32;
    uint32_t upper_bound_ui32;
}wdt_cfg_window_t;

typedef struct
{
    wdt_cfg_window_t      window_st;
    wdt_cfg_pre_warning_t pre_warning_en;
}wdt_cfg_cfg_t;

#endif /* __WDT_CFG_H__ */
