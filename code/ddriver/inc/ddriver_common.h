#ifndef __DDRIVER_COMMON_H__
#define __DDRIVER_COMMON_H__

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
