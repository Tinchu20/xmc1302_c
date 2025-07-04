#ifndef __HW_PAU_H__
#define __HW_PAU_H__

typedef struct                                 /*!< (@ 0x40000000) PAU Structure                                              */
{
    __IM  uint32_t  RESERVED[16];

    union
    {
        __IOM uint32_t AVAIL[3];

        union
        {
            __IOM uint32_t AVAIL0;                      /*!< (@ 0x00000040) Peripheral Availability Register 0                         */

            struct
            {
                __IM  uint32_t            : 5;
                __IM  uint32_t AVAIL5     : 1;            /*!< [5..5] RAM Block 1 Availability Flag                                      */
                __IM  uint32_t AVAIL6     : 1;            /*!< [6..6] RAM Block 2 Availability Flag                                      */
                __IM  uint32_t AVAIL7     : 1;            /*!< [7..7] RAM Block 3 Availability Flag                                      */
                __IM  uint32_t            : 12;
                __IM  uint32_t AVAIL20    : 1;            /*!< [20..20] MATH Global SFRs and Divider Availability Flag                   */
                __IM  uint32_t AVAIL21    : 1;            /*!< [21..21] MATH CORDIC Availability Flag                                    */
                __IM  uint32_t AVAIL22    : 1;            /*!< [22..22] Port 0 Availability Flag                                         */
                __IM  uint32_t AVAIL23    : 1;            /*!< [23..23] Port 1 Availability Flag                                         */
                __IM  uint32_t AVAIL24    : 1;            /*!< [24..24] Port 0 Availability Flag                                         */
            } AVAIL0_b;
        } ;

        union
        {
            __IOM uint32_t AVAIL1;                      /*!< (@ 0x00000044) Peripheral Availability Register 1                         */

            struct
            {
                __IM  uint32_t AVAIL0     : 1;            /*!< [0..0] USIC0 Channel 0 Availability Flag                                  */
                __IM  uint32_t AVAIL1     : 1;            /*!< [1..1] USIC0 Channel 1 Availability Flag                                  */
                __IM  uint32_t            : 2;
                __IM  uint32_t AVAIL4     : 1;            /*!< [4..4] PRNG Availability Flag                                             */
                __IM  uint32_t AVAIL5     : 1;            /*!< [5..5] VADC0 Basic SFRs Availability Flag                                 */
                __IM  uint32_t AVAIL6     : 1;            /*!< [6..6] VADC0 Group 0 SFRs Availability Flag                               */
                __IM  uint32_t AVAIL7     : 1;            /*!< [7..7] VADC0 Group 1 SFRs Availability Flag                               */
                __IM  uint32_t AVAIL8     : 1;            /*!< [8..8] SHS0 Availability Flag                                             */
                __IM  uint32_t AVAIL9     : 1;            /*!< [9..9] CC40 Availability Flag                                             */
                __IM  uint32_t AVAIL10    : 1;            /*!< [10..10] CC41 Availability Flag                                           */
                __IM  uint32_t AVAIL11    : 1;            /*!< [11..11] CC42 Availability Flag                                           */
                __IM  uint32_t AVAIL12    : 1;            /*!< [12..12] CC43 Availability Flag                                           */
            } AVAIL1_b;
        } ;

        union
        {
            __IOM uint32_t AVAIL2;                      /*!< (@ 0x00000048) Peripheral Availability Register 2                         */

            struct
            {
                __IM  uint32_t AVAIL0     : 1;            /*!< [0..0] CC80 and CCU80 kernel SFRs Availability Flag                       */
                __IM  uint32_t AVAIL1     : 1;            /*!< [1..1] CC81 Availability Flag                                             */
                __IM  uint32_t AVAIL2     : 1;            /*!< [2..2] CC82 Availability Flag                                             */
                __IM  uint32_t AVAIL3     : 1;            /*!< [3..3] CC83 Availability Flag                                             */
                __IM  uint32_t            : 8;
                __IM  uint32_t AVAIL12    : 1;            /*!< [12..12] POSIF0 Availability Flag                                         */
                __IM  uint32_t            : 2;
                __IM  uint32_t AVAIL15    : 1;            /*!< [15..15] BCCU0 Availability Flag                                          */
            } AVAIL2_b;
        } ;
    };

    __IM  uint32_t  RESERVED1[13];

    union
    {
        __IOM uint32_t PRIVDIS[3];

        union
        {
            __IOM uint32_t PRIVDIS0;                    /*!< (@ 0x00000080) Peripheral Privilege Access Register 0                     */

            struct
            {
                __IM  uint32_t            : 2;
                __IOM uint32_t PDIS2      : 1;            /*!< [2..2] Flash SFRs Privilege Disable Flag                                  */
                __IM  uint32_t            : 2;
                __IOM uint32_t PDIS5      : 1;            /*!< [5..5] RAM Block 1 Privilege Disable Flag                                 */
                __IOM uint32_t PDIS6      : 1;            /*!< [6..6] RAM Block 2 Privilege Disable Flag                                 */
                __IOM uint32_t PDIS7      : 1;            /*!< [7..7] RAM Block 3 Privilege Disable Flag                                 */
                __IM  uint32_t            : 11;
                __IOM uint32_t PDIS19     : 1;            /*!< [19..19] WDT Privilege Disable Flag                                       */
                __IOM uint32_t PDIS20     : 1;            /*!< [20..20] MATH Global SFRs and Divider Privilege Disable Flag              */
                __IOM uint32_t PDIS21     : 1;            /*!< [21..21] MATH CORDIC Privilege Disable Flag                               */
                __IOM uint32_t PDIS22     : 1;            /*!< [22..22] Port 0 Privilege Disable Flag                                    */
                __IOM uint32_t PDIS23     : 1;            /*!< [23..23] Port 1 Privilege Disable Flag                                    */
                __IOM uint32_t PDIS24     : 1;            /*!< [24..24] Port 2 Privilege Disable Flag                                    */
            } PRIVDIS0_b;
        } ;

        union
        {
            __IOM uint32_t PRIVDIS1;                    /*!< (@ 0x00000084) Peripheral Privilege Access Register 1                     */

            struct
            {
                __IOM uint32_t PDIS0      : 1;            /*!< [0..0] USIC0 Channel 0 Privilege Disable Flag                             */
                __IOM uint32_t PDIS1      : 1;            /*!< [1..1] USIC0 Channel 1 Privilege Disable Flag                             */
                __IM  uint32_t            : 3;
                __IOM uint32_t PDIS5      : 1;            /*!< [5..5] VADC0 Basic SFRs Privilege Disable Flag                            */
                __IOM uint32_t PDIS6      : 1;            /*!< [6..6] VADC0 Group 0 SFRs Privilege Disable Flag                          */
                __IOM uint32_t PDIS7      : 1;            /*!< [7..7] VADC0 Group 1 SFRs Privilege Disable Flag                          */
                __IOM uint32_t PDIS8      : 1;            /*!< [8..8] SHS0 Privilege Disable Flag                                        */
                __IOM uint32_t PDIS9      : 1;            /*!< [9..9] CC40 and CCU40 Kernel SFRs Privilege Disable Flag                  */
                __IOM uint32_t PDIS10     : 1;            /*!< [10..10] CC41 Privilege Disable Flag                                      */
                __IOM uint32_t PDIS11     : 1;            /*!< [11..11] CC42 Privilege Disable Flag                                      */
                __IOM uint32_t PDIS12     : 1;            /*!< [12..12] CC43 Privilege Disable Flag                                      */
            } PRIVDIS1_b;
        } ;

        union
        {
            __IOM uint32_t PRIVDIS2;                    /*!< (@ 0x00000088) Peripheral Privilege Access Register 2                     */

            struct
            {
                __IOM uint32_t PDIS0      : 1;            /*!< [0..0] CC80 and CCU80 Kernel SFRs Privilege Disable Flag                  */
                __IOM uint32_t PDIS1      : 1;            /*!< [1..1] CC81 Privilege Disable Flag                                        */
                __IOM uint32_t PDIS2      : 1;            /*!< [2..2] CC82 Privilege Disable Flag                                        */
                __IOM uint32_t PDIS3      : 1;            /*!< [3..3] CC83 Privilege Disable Flag                                        */
                __IM  uint32_t            : 8;
                __IOM uint32_t PDIS12     : 1;            /*!< [12..12] POSIF0 Privilege Disable Flag                                    */
                __IM  uint32_t            : 2;
                __IOM uint32_t PDIS15     : 1;            /*!< [15..15] BCCU0 Privilege Disable Flag                                     */
            } PRIVDIS2_b;
        } ;
    };

    __IM  uint32_t  RESERVED2[221];

    union
    {
        __IOM uint32_t ROMSIZE;                     /*!< (@ 0x00000400) ROM Size Register                                          */

        struct
        {
            __IM  uint32_t            : 8;
            __IM  uint32_t ADDR       : 6;            /*!< [13..8] ROM Size                                                          */
        } ROMSIZE_b;
    } ;

    union
    {
        __IOM uint32_t FLSIZE;                      /*!< (@ 0x00000404) Flash Size Register                                        */

        struct
        {
            __IM  uint32_t            : 12;
            __IM  uint32_t ADDR       : 6;            /*!< [17..12] Flash Size                                                       */
        } FLSIZE_b;
    } ;
    __IM  uint32_t  RESERVED3[2];

    union
    {
        __IOM uint32_t RAM0SIZE;                    /*!< (@ 0x00000410) RAM0 Size Register                                         */

        struct
        {
            __IM  uint32_t            : 8;
            __IM  uint32_t ADDR       : 5;          /*!< [12..8] RAM0 Size                                                         */
        } RAM0SIZE_b;
    } ;
}HW_PAU_Type;                                       /*!< Size = 1044 (0x414)                                                       */

#endif /* __HW_PAU_H__ */
