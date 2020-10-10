#ifndef _GPIO_H_
#define _GPIO_H_
#include "Std_Types.h"

typedef struct GPIO_RegTag
{
    volatile uint32 MODER;
    volatile uint32 OTYPER;
    volatile uint32 OSPEEDR;
    volatile uint32 PUPDR;
    volatile uint32 IDR;
    volatile uint32 ODR;
    volatile uint32 BSRR;
    volatile uint32 AFRL;
    volatile uint32 AFRH;
    volatile uint32 BRR;
    volatile uint32 ASCR;
} GPIO_Reg_tst;

typedef enum GPIO_PortTag
{
    GPIO_PORT_A,
    GPIO_PORT_B,
    GPIO_PORT_C,
    GPIO_PORT_D,
    GPIO_PORT_E,
    GPIO_PORT_F,
    GPIO_PORT_G,
    GPIO_PORT_H,
    GPIO_PORT_I,
    GPIO_PORT_RESERVED = 0xFFFFFFFFUL
} GPIO_Port_ten;

typedef enum GPIO_PinTag
{
    GPIO_PIN_0,
    GPIO_PIN_1,
    GPIO_PIN_2,
    GPIO_PIN_3,
    GPIO_PIN_4,
    GPIO_PIN_5,
    GPIO_PIN_6,
    GPIO_PIN_7,
    GPIO_PIN_8,
    GPIO_PIN_9,
    GPIO_PIN_10,
    GPIO_PIN_11,
    GPIO_PIN_12,
    GPIO_PIN_13,
    GPIO_PIN_14,
    GPIO_PIN_15,
    GPIO_PIN_RESERVED = 0xFFFFFFFFUL
} GPIO_Pin_ten;

typedef enum GPIO_ModeTag
{
    GPIO_MODE_INPUT,
    GPIO_MODE_OUTPUT,
    GPIO_MODE_AF,
    GPIO_MODE_ANALOG,
    GPIO_MODE_RESERVED = 0xFFFFFFFFUL
} GPIO_Mode_ten;

typedef enum GPIO_OTypeTag
{
    GPIO_OTYPE_PUSH_PULL,
    GPIO_OTYPE_OPEN_DRAIN,
    GPIO_OTYPE_RESERVED = 0xFFFFFFFFUL
} GPIO_OType_ten;

typedef enum GPIO_OSpeedTag
{
    GPIO_OSPEED_LOW,
    GPIO_OSPEED_MEDIUM,
    GPIO_OSPEED_HIGH,
    GPIO_OSPEED_VERY_HIGH,
    GPIO_OSPEED_RESERVED = 0xFFFFFFFFUL
} GPIO_OSpeed_ten;

typedef enum GPIO_PuPdTag
{
    GPIO_PUPD_NO_PULL,
    GPIO_PUPD_PULL_UP,
    GPIO_PUPD_PULL_DOWN,
    GPIO_PUPD_RESERVED = 0xFFFFFFFFUL
} GPIO_PuPd_ten;

typedef uint32   GPIO_PortDataT;
typedef uint32   GPIO_PinDataT;

typedef enum GPIO_AltFunctionTag
{
    GPIO_ALT_FUNCTION_AF0,
    GPIO_ALT_FUNCTION_AF1,
    GPIO_ALT_FUNCTION_AF2,
    GPIO_ALT_FUNCTION_AF3,
    GPIO_ALT_FUNCTION_AF4,
    GPIO_ALT_FUNCTION_AF5,
    GPIO_ALT_FUNCTION_AF6,
    GPIO_ALT_FUNCTION_AF7,
    GPIO_ALT_FUNCTION_AF8,
    GPIO_ALT_FUNCTION_AF9,
    GPIO_ALT_FUNCTION_AF10,
    GPIO_ALT_FUNCTION_AF11,
    GPIO_ALT_FUNCTION_AF12,
    GPIO_ALT_FUNCTION_AF13,
    GPIO_ALT_FUNCTION_AF14,
    GPIO_ALT_FUNCTION_AF15,
    GPIO_ALT_FUNCTION_RESERVED = 0xFFFFFFFFUL
} GPIO_AltFunction_ten;

typedef enum GPIO_AnalogSwitchTag
{
    GPIO_ANALOG_SWITCH_DISCONNECT,
    GPIO_ANALOG_SWITCH_CONNECT,
} GPIO_AnalogSwitch_ten;

typedef struct GPIO_ConfigTag
{
    GPIO_Mode_ten           mode;
    GPIO_OType_ten          type;
    GPIO_OSpeed_ten         speed;
    GPIO_PuPd_ten           pupd;
    GPIO_AltFunction_ten    altFn;
} GPIO_Config_tst;

void GPIO_EnableClock(GPIO_Port_ten port);

void GPIO_ConfigurePin(GPIO_Port_ten    port,
                       GPIO_Pin_ten     pin,
                       GPIO_Config_tst * pConfig);

void GPIO_SetPin(GPIO_Port_ten    port,
                 GPIO_Pin_ten     pin);

void GPIO_ResetPin(GPIO_Port_ten    port,
                   GPIO_Pin_ten     pin);

void GPIO_TogglePin(GPIO_Port_ten    port,
                    GPIO_Pin_ten     pin);
#endif /* #ifndef _GPIO_H_ */
