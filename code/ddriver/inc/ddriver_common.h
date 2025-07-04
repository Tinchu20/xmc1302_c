#ifndef __DDRIVER_COMMON_H__
#define __DDRIVER_COMMON_H__

#define ERROR_RETURN_SUB(a, err)                \
        {                                       \
            if ((a))                            \
            {                                   \
                (void)0; /* Do Nothing */       \
            }                                   \
            else                                \
            {                                   \
                return (err);                   \
            }                                   \
        }

#define ERROR_RETURN(a, err) ERROR_RETURN_SUB((a), (err))

#define ERROR_ASSERT(a)                         \
        {                                       \
            if ((a))                            \
            {                                   \
                (void)0; /* Do Nothing */       \
            }                                   \
            else                                \
            {                                   \
                return (RET_ERROR_ASSERTION)    \
            }                                   \
        }

typedef enum
{
    RET_SUCCESS                  = ((uint32_t)0),
    RET_ERROR                    = ((uint32_t)1),
    RET_ERROR_ASSERTION          = ((uint32_t)2),
    RET_ERROR_NOT_OPEN           = ((uint32_t)3),
    RET_ERROR_ALREADY_OPEN       = ((uint32_t)4),
    RET_ERROR_PERI_NOT_AVAILABLE = ((uint32_t)5),
    RET_NONE                     = ((uint32_t)0xFFFFFFFF)
}ddrv_ret_t;

typedef enum
{
    BIT_CLEAR = ((uint32_t)0),
    BIT_SET   = ((uint32_t)1),
    BIT_NONE  = ((uint32_t)0xFFFFFFFF)
}bit_field_t;

typedef enum
{
    BYTE_CLEAR = ((uint8_t)0x00),
    BYTE_SET   = ((uint8_t)0xFF)
}byte_set_clear_t;

typedef enum
{
    HALF_WORD_CLEAR = ((uint16_t)0x0000),
    HALF_WORD_SET   = ((uint16_t)0xFFFF)
}half_word_set_clear_t;

typedef enum
{
    WORD_CLEAR = ((uint32_t)0x00000000),
    WORD_SET   = ((uint32_t)0xFFFFFFFF)
}word_set_clear_t;



#endif /* __DDRIVER_COMMON_H__ */
