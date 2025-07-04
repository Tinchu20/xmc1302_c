#ifndef __PAU_CFG_H__
#define __PAU_CFG_H__

#include <xmc1300.h>

typedef enum
{
	PAU_CFG_PERI_REG_INDEX_0 = ((uint32_t)0x00000000),
	PAU_CFG_PERI_REG_INDEX_1 = ((uint32_t)0x10000000),
	PAU_CFG_PERI_REG_INDEX_2 = ((uint32_t)0x20000000),
	PAU_CFG_PERI_NONE        = ((uint32_t)0xFFFFFFFF)
}pau_cfg_peri_reg_index_t;

typedef enum
{
    /* Flash SFRs Privilege Disable Flag */
	PAU_CFG_PERI_FLASH                 = ((uint32_t)(PAU_PRIVDIS0_PDIS2_Msk  | PAU_CFG_PERI_REG_INDEX_0)),

    /* RAM Block 1 Privilege Disable Flag */
	PAU_CFG_PERI_RAM_BLOCK1            = ((uint32_t)(PAU_PRIVDIS0_PDIS5_Msk  | PAU_CFG_PERI_REG_INDEX_0)),

    /* RAM Block 2 Privilege Disable Flag */
	PAU_CFG_PERI_RAM_BLOCK2            = ((uint32_t)(PAU_PRIVDIS0_PDIS6_Msk  | PAU_CFG_PERI_REG_INDEX_0)),

    /* RAM Block 3 Privilege Disable Flag */
	PAU_CFG_PERI_RAM_BLOCK3            = ((uint32_t)(PAU_PRIVDIS0_PDIS7_Msk  | PAU_CFG_PERI_REG_INDEX_0)),

    /* WDT Privilege Disable Flag */
	PAU_CFG_PERI_WDT                   = ((uint32_t)(PAU_PRIVDIS0_PDIS19_Msk | PAU_CFG_PERI_REG_INDEX_0)),

    /* MATH Global SFRs and Divider Privilege Disable Flag */
	PAU_CFG_PERI_MATH_GLOBAL_AND_DIV   = ((uint32_t)(PAU_PRIVDIS0_PDIS20_Msk | PAU_CFG_PERI_REG_INDEX_0)),

    /* MATH CORDIC Privilege Disable Flag */
	PAU_CFG_PERI_MATH_CORDIC           = ((uint32_t)(PAU_PRIVDIS0_PDIS21_Msk | PAU_CFG_PERI_REG_INDEX_0)),

    /* Port 0 Privilege Disable Flag */
	PAU_CFG_PERI_PORT0                 = ((uint32_t)(PAU_PRIVDIS0_PDIS22_Msk | PAU_CFG_PERI_REG_INDEX_0)),

    /* Port 1 Privilege Disable Flag */
	PAU_CFG_PERI_PORT1                 = ((uint32_t)(PAU_PRIVDIS0_PDIS23_Msk | PAU_CFG_PERI_REG_INDEX_0)),

    /* Port 2 Privilege Disable Flag */
	PAU_CFG_PERI_PORT2                 = ((uint32_t)(PAU_PRIVDIS0_PDIS24_Msk | PAU_CFG_PERI_REG_INDEX_0)),

    /* USIC0 Channel 0 Privilege Disable Flag */
	PAU_CFG_PERI_USIC0_CH0             = ((uint32_t)(PAU_PRIVDIS1_PDIS0_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* USIC0 Channel 1 Privilege Disable Flag */
	PAU_CFG_PERI_USIC0_CH1             = ((uint32_t)(PAU_PRIVDIS1_PDIS1_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* PRNG Availability Flag */
	PAU_CFG_PERI_PRNG                  = ((uint32_t)(PAU_AVAIL1_AVAIL4_Msk   | PAU_CFG_PERI_REG_INDEX_1)),

    /* VADC0 Basic SFRs Privilege Disable Flag */
	PAU_CFG_PERI_VADC_GLOBAL           = ((uint32_t)(PAU_PRIVDIS1_PDIS5_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* VADC0 Group 0 SFRs Privilege Disable Flag */
	PAU_CFG_PERI_VADC_GROUP0           = ((uint32_t)(PAU_PRIVDIS1_PDIS6_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* VADC0 Group 1 SFRs Privilege Disable Flag */
	PAU_CFG_PERI_VADC_GROUP1           = ((uint32_t)(PAU_PRIVDIS1_PDIS7_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* SHS0 Privilege Disable Flag */
	PAU_CFG_PERI_VADC_SHS0             = ((uint32_t)(PAU_PRIVDIS1_PDIS8_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* CCU40_CC40 and CCU40 Kernel SFRs Privilege Disable Flag */
	PAU_CFG_PERI_CCU40_CC40_AND_GLOBAL = ((uint32_t)(PAU_PRIVDIS1_PDIS9_Msk  | PAU_CFG_PERI_REG_INDEX_1)),

    /* CCU40_CC41 Privilege Disable Flag */
	PAU_CFG_PERI_CCU40_CC41            = ((uint32_t)(PAU_PRIVDIS1_PDIS10_Msk | PAU_CFG_PERI_REG_INDEX_1)),

    /* CCU40_CC42 Privilege Disable Flag */
	PAU_CFG_PERI_CCU40_CC42            = ((uint32_t)(PAU_PRIVDIS1_PDIS11_Msk | PAU_CFG_PERI_REG_INDEX_1)),

    /* CCU40_CC43 Privilege Disable Flag */
	PAU_CFG_PERI_CCU40_CC43            = ((uint32_t)(PAU_PRIVDIS1_PDIS12_Msk | PAU_CFG_PERI_REG_INDEX_1)),

    /* CCU80_CC80 and CCU80 Kernel SFRs Privilege Disable Flag */
	PAU_CFG_PERI_CCU80_CC80_AND_GLOBAL = ((uint32_t)(PAU_PRIVDIS2_PDIS0_Msk  | PAU_CFG_PERI_REG_INDEX_2)),

    /* CCU80_CC81 Privilege Disable Flag */
	PAU_CFG_PERI_CCU80_CC81            = ((uint32_t)(PAU_PRIVDIS2_PDIS1_Msk  | PAU_CFG_PERI_REG_INDEX_2)),

    /* CCU80_CC82 Privilege Disable Flag */
	PAU_CFG_PERI_CCU80_CC82            = ((uint32_t)(PAU_PRIVDIS2_PDIS2_Msk  | PAU_CFG_PERI_REG_INDEX_2)),

    /* CCU80_CC83 Privilege Disable Flag */
	PAU_CFG_PERI_CCU80_CC83            = ((uint32_t)(PAU_PRIVDIS2_PDIS3_Msk  | PAU_CFG_PERI_REG_INDEX_2)),

    /* POSIF0 Privilege Disable Flag */
	PAU_CFG_PERI_POSIF0                = ((uint32_t)(PAU_PRIVDIS2_PDIS12_Msk | PAU_CFG_PERI_REG_INDEX_2)),

    /* BCCU0 Privilege Disable Flag */
	PAU_CFG_PERI_BCCU0                 = ((uint32_t)(PAU_PRIVDIS2_PDIS15_Msk | PAU_CFG_PERI_REG_INDEX_2)),
}pau_cfg_peri_name_t;

typedef enum
{
	PAU_CFG_PERI_ACCESS_ENABLED  = ((uint32_t)0),
	PAU_CFG_PERI_ACCESS_DISABLED = ((uint32_t)1),
	PAU_CFG_PERI_ACCESS_NONE     = ((uint32_t)0xFFFFFFFF)
}pau_cfg_peri_access_status_t;

typedef enum
{
	PAU_CFG_PERI_AVAILABLE_NO   = ((uint32_t)0),
	PAU_CFG_PERI_AVAILABLE_YES  = ((uint32_t)1),
	PAU_CFG_PERI_AVAILABLE_NONE = ((uint32_t)0xFFFFFFFF)
}pau_cfg_peri_avail_status_t;

typedef struct
{
    uint32_t NO_DATA;
}pau_cfg_t;

#endif /*__PAU_CFG_H__ */
