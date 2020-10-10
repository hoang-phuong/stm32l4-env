#ifndef _BSP_H_
#define _BSP_H_

#include "Std_Types.h"
#include "error.h"

typedef enum
{
    LED_RED,
    LED_GREEN
} LED_ten;

ErrorCodeT BSP_Init(void);
uint32 BSP_GetSystemClock(void);
void BSP_TurnOnLED(LED_ten led);
void BSP_TurnOffLED(LED_ten led);
void BSP_ToggleLED(LED_ten led);

#endif /* #ifndef _BSP_H_ */
