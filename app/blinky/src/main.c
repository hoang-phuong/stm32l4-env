#include "Std_Types.h"
#include "bsp.h"

uint32 myData = 0x12345678;

int main(void)
{
    (void)BSP_Init();
    uint32 i;
    BSP_TurnOnLED(LED_GREEN);
    BSP_TurnOffLED(LED_RED);
    while(1){
        BSP_Delay_ms(1000);
        BSP_ToggleLED(LED_GREEN);
        BSP_ToggleLED(LED_RED);
    }
    myData++;
    return 0;
}
