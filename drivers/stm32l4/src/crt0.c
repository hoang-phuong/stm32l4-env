#include "ARMCM4.h"
#include "Std_Types.h"

#define DEFAULT_HANDLER(_x)     void __WEAK _x (void) { Default_Handler(); }

extern uint32_t _estack[], _sidata[], _sdata[], _edata[], _sbss[], _ebss[];
extern void* vectorTable[];
extern int main(void);

static void Default_Handler(void);
__STATIC_FORCEINLINE void CopyData(uint32_t *src, uint32_t *dst, uint32_t len);
__STATIC_FORCEINLINE void ClearData(uint32_t *dst, uint32_t len);

__NO_RETURN void Reset_Handler(void)
{
    /* Initialize stack pointer */
    __asm__ volatile ("ldr sp,=%0"::"i" (_estack));

    /* Set vector table base */
    SCB->VTOR = (uint32_t)(&vectorTable[0]);

    /* Disable unaligned access support */
    SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;

    /* Copy data sections */
    CopyData(_sidata, _sdata, (uint32_t)(_edata - _sdata));

    /* Clear bss sections */
    ClearData(_sbss, (uint32_t)(_ebss - _sbss));

    /* Jump to main */
    (void)main();

    while(1);
}

DEFAULT_HANDLER(NMI_Handler)
DEFAULT_HANDLER(HardFault_Handler)
DEFAULT_HANDLER(MemManage_Handler)
DEFAULT_HANDLER(BusFault_Handler)
DEFAULT_HANDLER(UsageFault_Handler)
DEFAULT_HANDLER(SVCall_Handler)
DEFAULT_HANDLER(Debug_Handler)
DEFAULT_HANDLER(PendSV_Handler)
DEFAULT_HANDLER(SysTick_Handler)
DEFAULT_HANDLER(WWDG_Handler)
DEFAULT_HANDLER(PVD_PVM_Handler)
DEFAULT_HANDLER(RTC_TAMP_STAMP_CSS_LSE_Handler)
DEFAULT_HANDLER(RTC_WKUP_Handler)
DEFAULT_HANDLER(FLASH_Handler)
DEFAULT_HANDLER(RCC_Handler)
DEFAULT_HANDLER(EXTI0_Handler)
DEFAULT_HANDLER(EXTI1_Handler)
DEFAULT_HANDLER(EXTI2_Handler)
DEFAULT_HANDLER(EXTI3_Handler)
DEFAULT_HANDLER(EXTI4_Handler)
DEFAULT_HANDLER(DMA1_CH1_Handler)
DEFAULT_HANDLER(DMA1_CH2_Handler)
DEFAULT_HANDLER(DMA1_CH3_Handler)
DEFAULT_HANDLER(DMA1_CH4_Handler)
DEFAULT_HANDLER(DMA1_CH5_Handler)
DEFAULT_HANDLER(DMA1_CH6_Handler)
DEFAULT_HANDLER(DMA1_CH7_Handler)
DEFAULT_HANDLER(ADC_1_2_Handler)
DEFAULT_HANDLER(CAN1_TX_Handler)
DEFAULT_HANDLER(CAN1_RX0_Handler)
DEFAULT_HANDLER(CAN1_RX1_Handler)
DEFAULT_HANDLER(CAN1_SCE_Handler)
DEFAULT_HANDLER(EXTI9_5_Handler)
DEFAULT_HANDLER(TIM1_BRK_TIM15_Handler)
DEFAULT_HANDLER(TIM1_UP_TIM16_Handler)
DEFAULT_HANDLER(TIM1_TRG_COM_TIM17_Handler)
DEFAULT_HANDLER(TIM1_CC_Handler)
DEFAULT_HANDLER(TIM2_Handler)
DEFAULT_HANDLER(TIM3_Handler)
DEFAULT_HANDLER(TIM4_Handler)
DEFAULT_HANDLER(I2C1_EV_Handler)
DEFAULT_HANDLER(I2C1_ER_Handler)
DEFAULT_HANDLER(I2C2_EV_Handler)
DEFAULT_HANDLER(I2C2_ER_Handler)
DEFAULT_HANDLER(SPI1_Handler)
DEFAULT_HANDLER(SPI2_Handler)
DEFAULT_HANDLER(USART1_Handler)
DEFAULT_HANDLER(USART2_Handler)
DEFAULT_HANDLER(USART3_Handler)
DEFAULT_HANDLER(EXTI15_10_Handler)
DEFAULT_HANDLER(RTC_ALARM_Handler)
DEFAULT_HANDLER(DFSDM1_FLT3_Handler)
DEFAULT_HANDLER(TIM8_BRK_Handler)
DEFAULT_HANDLER(TIM8_UP_Handler)
DEFAULT_HANDLER(TIM8_TRG_COM_Handler)
DEFAULT_HANDLER(TIM8_CC_Handler)
DEFAULT_HANDLER(ADC3_Handler)
DEFAULT_HANDLER(FMC_Handler)
DEFAULT_HANDLER(SDMMC1_Handler)
DEFAULT_HANDLER(TIM5_Handler)
DEFAULT_HANDLER(SPI3_Handler)
DEFAULT_HANDLER(UART4_Handler)
DEFAULT_HANDLER(UART5_Handler)
DEFAULT_HANDLER(TIM6_DACUNDER_Handler)
DEFAULT_HANDLER(TIM7_Handler)
DEFAULT_HANDLER(DMA2_CH1_Handler)
DEFAULT_HANDLER(DMA2_CH2_Handler)
DEFAULT_HANDLER(DMA2_CH3_Handler)
DEFAULT_HANDLER(DMA2_CH4_Handler)
DEFAULT_HANDLER(DMA2_CH5_Handler)
DEFAULT_HANDLER(DFSDM1_FLT0_Handler)
DEFAULT_HANDLER(DFSDM1_FLT1_Handler)
DEFAULT_HANDLER(DFSDM1_FLT2_Handler)
DEFAULT_HANDLER(COMP_Handler)
DEFAULT_HANDLER(LPTIM1_Handler)
DEFAULT_HANDLER(LPTIM2_Handler)
DEFAULT_HANDLER(OTG_FS_Handler)
DEFAULT_HANDLER(DMA2_CH6_Handler)
DEFAULT_HANDLER(DMA2_CH7_Handler)
DEFAULT_HANDLER(LPUART1_Handler)
DEFAULT_HANDLER(QUADSPI_Handler)
DEFAULT_HANDLER(I2C3_EV_Handler)
DEFAULT_HANDLER(I2C3_ER_Handler)
DEFAULT_HANDLER(SAI1_Handler)
DEFAULT_HANDLER(SAI2_Handler)
DEFAULT_HANDLER(SWPMI1_Handler)
DEFAULT_HANDLER(TSC_Handler)
DEFAULT_HANDLER(LCD_Handler)
DEFAULT_HANDLER(AES_Handler)
DEFAULT_HANDLER(RNG_Handler)
DEFAULT_HANDLER(FPU_Handler)
DEFAULT_HANDLER(HASH_CRS_Handler)
DEFAULT_HANDLER(I2C4_EV_Handler)
DEFAULT_HANDLER(I2C4_ER_Handler)
DEFAULT_HANDLER(DCMI_Handler)
DEFAULT_HANDLER(CAN2_TX_Handler)
DEFAULT_HANDLER(CAN2_RX0_Handler)
DEFAULT_HANDLER(CAN2_RX1_Handler)
DEFAULT_HANDLER(CAN2_SCE_Handler)
DEFAULT_HANDLER(DMA2D_Handler)

void* vectorTable[] __attribute__((section(".isr_vector"))) = {
    _estack,
    &Reset_Handler,
    &NMI_Handler,
    &HardFault_Handler,
    &MemManage_Handler,
    &BusFault_Handler,
    &UsageFault_Handler,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    NULL_PTR,
    &SVCall_Handler,
    &Debug_Handler,
    NULL_PTR,
    &PendSV_Handler,
    &SysTick_Handler,
    &WWDG_Handler,
    &PVD_PVM_Handler,
    &RTC_TAMP_STAMP_CSS_LSE_Handler,
    &RTC_WKUP_Handler,
    &FLASH_Handler,
    &RCC_Handler,
    &EXTI0_Handler,
    &EXTI1_Handler,
    &EXTI2_Handler,
    &EXTI3_Handler,
    &EXTI4_Handler,
    &DMA1_CH1_Handler,
    &DMA1_CH2_Handler,
    &DMA1_CH3_Handler,
    &DMA1_CH4_Handler,
    &DMA1_CH5_Handler,
    &DMA1_CH6_Handler,
    &DMA1_CH7_Handler,
    &ADC_1_2_Handler,
    &CAN1_TX_Handler,
    &CAN1_RX0_Handler,
    &CAN1_RX1_Handler,
    &CAN1_SCE_Handler,
    &EXTI9_5_Handler,
    &TIM1_BRK_TIM15_Handler,
    &TIM1_UP_TIM16_Handler,
    &TIM1_TRG_COM_TIM17_Handler,
    &TIM1_CC_Handler,
    &TIM2_Handler,
    &TIM3_Handler,
    &TIM4_Handler,
    &I2C1_EV_Handler,
    &I2C1_ER_Handler,
    &I2C2_EV_Handler,
    &I2C2_ER_Handler,
    &SPI1_Handler,
    &SPI2_Handler,
    &USART1_Handler,
    &USART2_Handler,
    &USART3_Handler,
    &EXTI15_10_Handler,
    &RTC_ALARM_Handler,
    &DFSDM1_FLT3_Handler,
    &TIM8_BRK_Handler,
    &TIM8_UP_Handler,
    &TIM8_TRG_COM_Handler,
    &TIM8_CC_Handler,
    &ADC3_Handler,
    &FMC_Handler,
    &SDMMC1_Handler,
    &TIM5_Handler,
    &SPI3_Handler,
    &UART4_Handler,
    &UART5_Handler,
    &TIM6_DACUNDER_Handler,
    &TIM7_Handler,
    &DMA2_CH1_Handler,
    &DMA2_CH2_Handler,
    &DMA2_CH3_Handler,
    &DMA2_CH4_Handler,
    &DMA2_CH5_Handler,
    &DFSDM1_FLT0_Handler,
    &DFSDM1_FLT1_Handler,
    &DFSDM1_FLT2_Handler,
    &COMP_Handler,
    &LPTIM1_Handler,
    &LPTIM2_Handler,
    &OTG_FS_Handler,
    &DMA2_CH6_Handler,
    &DMA2_CH7_Handler,
    &LPUART1_Handler,
    &QUADSPI_Handler,
    &I2C3_EV_Handler,
    &I2C3_ER_Handler,
    &SAI1_Handler,
    &SAI2_Handler,
    &SWPMI1_Handler,
    &TSC_Handler,
    &LCD_Handler,
    &AES_Handler,
    &RNG_Handler,
    &FPU_Handler,
    &HASH_CRS_Handler,
    &I2C4_EV_Handler,
    &I2C4_ER_Handler,
    &DCMI_Handler,
    &CAN2_TX_Handler,
    &CAN2_RX0_Handler,
    &CAN2_RX1_Handler,
    &CAN2_SCE_Handler,
    &DMA2D_Handler
};

static void Default_Handler(void)
{
    while(TRUE);
}

__STATIC_FORCEINLINE void CopyData(uint32_t *src, uint32_t *dst, uint32_t len)
{
    uint32_t numWords = len >> 2;
    while(numWords > 0)
    {
        *dst = *src;
        src++;
        dst++;
        numWords--;
    }
}

__STATIC_FORCEINLINE void ClearData(uint32_t *dst, uint32_t len)
{
    uint32_t numWords = len >> 2;
    while (numWords > 0)
    {
        *dst = 0UL;
        dst++;
        numWords--;
    }
}
