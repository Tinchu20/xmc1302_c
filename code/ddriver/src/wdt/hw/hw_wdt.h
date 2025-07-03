#ifndef __HW_WDT_H__
#define __HW_WDT_H__

typedef struct                                 /*!< (@ 0x40020000) WDT Structure                                              */
{
  union
  {
    __IOM uint32_t ID;                          /*!< (@ 0x00000000) WDT Module ID Register                                     */

    struct
    {
      __IM  uint32_t MOD_REV    : 8;            /*!< [7..0] Module Revision Number                                             */
      __IM  uint32_t MOD_TYPE   : 8;            /*!< [15..8] Module Type                                                       */
      __IM  uint32_t MOD_NUMBER : 16;           /*!< [31..16] Module Number Value                                              */
    } ID_b;
  } ;

  union
  {
    __IOM uint32_t CTR;                         /*!< (@ 0x00000004) WDT Control Register                                       */

    struct
    {
      __IOM uint32_t ENB        : 1;            /*!< [0..0] Enable                                                             */
      __IOM uint32_t PRE        : 1;            /*!< [1..1] Pre-warning                                                        */
      __IM  uint32_t            : 2;
      __IOM uint32_t DSP        : 1;            /*!< [4..4] Debug Suspend                                                      */
      __IM  uint32_t            : 3;
      __IOM uint32_t SPW        : 8;            /*!< [15..8] Service Indication Pulse Width                                    */
    } CTR_b;
  } ;

  union
  {
    __IOM uint32_t SRV;                         /*!< (@ 0x00000008) WDT Service Register                                       */

    struct
    {
      __OM  uint32_t SRV        : 32;           /*!< [31..0] Service                                                           */
    } SRV_b;
  } ;

  union
  {
    __IOM uint32_t TIM;                         /*!< (@ 0x0000000C) WDT Timer Register                                         */

    struct
    {
      __IM  uint32_t TIM        : 32;           /*!< [31..0] Timer Value                                                       */
    } TIM_b;
  } ;

  union
  {
    __IOM uint32_t WLB;                         /*!< (@ 0x00000010) WDT Window Lower Bound Register                            */

    struct
    {
      __IOM uint32_t WLB        : 32;           /*!< [31..0] Window Lower Bound                                                */
    } WLB_b;
  } ;

  union
  {
    __IOM uint32_t WUB;                         /*!< (@ 0x00000014) WDT Window Upper Bound Register                            */

    struct
    {
      __IOM uint32_t WUB        : 32;           /*!< [31..0] Window Upper Bound                                                */
    } WUB_b;
  } ;

  union
  {
    __IOM uint32_t WDTSTS;                      /*!< (@ 0x00000018) WDT Status Register                                        */

    struct
    {
      __IM  uint32_t ALMS       : 1;            /*!< [0..0] Pre-warning Alarm                                                  */
    } WDTSTS_b;
  } ;

  union
  {
    __IOM uint32_t WDTCLR;                      /*!< (@ 0x0000001C) WDT Clear Register                                         */

    struct
    {
      __OM  uint32_t ALMC       : 1;            /*!< [0..0] Pre-warning Alarm                                                  */
    } WDTCLR_b;
  } ;
}HW_WDT_Type;                                     /*!< Size = 32 (0x20)                                                          */

#endif /* __HW_WDT_H__ */
