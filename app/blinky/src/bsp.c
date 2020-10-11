#include "reg_rcc.h"
#include "bsp.h"
#include "gpio.h"
#include "ARMCM4.h"

/* Macros for clock configuration */
#define SYSCLK                  80000000UL
#define HCLK                    SYSCLK/2
#define PCLK                    HCLK
#define STM_CLK                 HCLK/8
#define STARTUP_SYSLOCK_SPEED   4000000UL
#define HSI_ON                  (1UL  << RCC_CR_HSION_POS)
#define PLL_ON                  (1UL  << RCC_CR_PLLON_POS)
#define PLLM_1                  (0UL  << RCC_PLLCFGR_PLLM_POS)
#define PLLN_10                 (10UL << RCC_PLLCFGR_PLLN_POS)
#define PLLREN                  (1UL  << RCC_PLLCFGR_PLLREN_POS)
#define PLLR_2                  (0UL  << RCC_PLLCFGR_PLLR_POS)
#define PLLQ_8                  (3UL  << RCC_PLLCFGR_PLLQ_POS)
#define PLLP_17                 (1UL  << RCC_PLLCFGR_PLLP_POS)
#define PLLSRC_HSI16            (2UL  << RCC_PLLCFGR_PLLSRC_POS)
#define SW_PLL                  (3UL  << RCC_CFGR_SW_POS)
#define SWS_PLL                 (3UL  << RCC_CFGR_SWS_POS)
#define AHB_PRESCALER           (8UL  << RCC_CFGR_HPRE_POS)
#define APB1_PRESCALER          (0UL  << RCC_CFGR_PPRE1_POS)
#define APB2_PRESCALER          (0UL  << RCC_CFGR_PPRE2_POS)
#define TIMEOUT_COUNTER_VALUE   1000UL
#define SYSTICK_IRQ_FREQ        100000

/* Macros for LEDs */
#define LED_RED_PORT            GPIO_PORT_B
#define LED_RED_PIN             GPIO_PIN_2
#define LED_GREEN_PORT          GPIO_PORT_E
#define LED_GREEN_PIN           GPIO_PIN_8

/* Macros for Joystick */
#define JOYSTICK_PORT           GPIO_PORT_A
#define JOY_CENTER_PIN          GPIO_PIN_0
#define JOY_LEFT_PIN            GPIO_PIN_1
#define JOY_RIGHT_PIN           GPIO_PIN_2
#define JOY_UP_PIN              GPIO_PIN_3
#define JOY_DOWN_PIN            GPIO_PIN_5

/** Flag indicate whether clock is configured to 80MHz */
static uint32 systemClockFreq = STARTUP_SYSLOCK_SPEED;

static uint32 usTicks = 0;
static uint32 msTicks = 0;

static void ConfigureSystemClock(void);
static void ConfigureSystemTimer(void);
static void ConfigureLED(void);
static void ConfigureJoystick(void);


ErrorCodeT BSP_Init(void)
{
    ErrorCodeT errorCode = ERC_CLOCK_CONFIG_ERROR;

    ConfigureSystemClock();

    if (SYSCLK == systemClockFreq){
        ConfigureSystemTimer();
        errorCode = ERC_SUCCESS;
    }

    ConfigureLED();

    return errorCode;
}

uint32 BSP_GetSystemClock(void)
{
    return systemClockFreq;
}

void BSP_TurnOnLED(LED_ten led)
{
    if (LED_GREEN == led){
        GPIO_SetPin(LED_GREEN_PORT, LED_GREEN_PIN);
    }
    else if (LED_RED == led){
        GPIO_SetPin(LED_RED_PORT, LED_RED_PIN);
    }
}

void BSP_TurnOffLED(LED_ten led)
{
    if (LED_GREEN == led){
        GPIO_ResetPin(LED_GREEN_PORT, LED_GREEN_PIN);
    }
    else if (LED_RED == led){
        GPIO_ResetPin(LED_RED_PORT, LED_RED_PIN);
    }
}

void BSP_ToggleLED(LED_ten led)
{
    if (LED_GREEN == led){
        GPIO_TogglePin(LED_GREEN_PORT, LED_GREEN_PIN);
    }
    else if (LED_RED == led){
        GPIO_TogglePin(LED_RED_PORT, LED_RED_PIN);
    }
}


void BSP_GetCurrentTime_us(uint32 * currentTime)
{
    *currentTime = usTicks;
}

void BSP_GetElapsedTime_us(uint32 startTime, uint32 * elapsedTime)
{
    *elapsedTime = usTicks - startTime;
    if (usTicks < startTime){
        *elapsedTime = 0xFFFFFFFFUL - *elapsedTime;
    }
}

void BSP_Delay_us(uint32 delay)
{
    uint32 startTime;
    uint32 elapsedTime;
    BSP_GetCurrentTime_us(&startTime);
    do{
        BSP_GetElapsedTime_us(startTime, &elapsedTime);
    }while(elapsedTime < delay);
}

void BSP_GetCurrentTime_ms(uint32 * currentTime)
{
    *currentTime = msTicks;
}

void BSP_GetElapsedTime_ms(uint32 startTime, uint32 * elapsedTime)
{
    *elapsedTime = msTicks - startTime;
    if (msTicks < startTime){
        *elapsedTime = 0xFFFFFFFFUL - *elapsedTime;
    }
}

void BSP_Delay_ms(uint32 delay)
{
    uint32 startTime;
    uint32 elapsedTime;
    BSP_GetCurrentTime_ms(&startTime);
    do{
        BSP_GetElapsedTime_ms(startTime, &elapsedTime);
    }while(elapsedTime < delay);
}


void SysTick_Handler(void)
{
    static uint8 counter = 0;

    usTicks += 10;

    counter++;
    counter = counter % 100;
    if(0 == counter){
        msTicks++;
    }
}

static void ConfigureSystemClock(void)
{
    /* Enable internal 16MHz clock */
    RCC_CR |= HSI_ON;
    while(FALSE == GET_BITFIELD(RCC_CR, RCC_CR_HSIRDY));

    /* Disable PLL */
    RCC_CR &= ~PLL_ON;
    while(TRUE == GET_BITFIELD(RCC_CR, RCC_CR_PLLRDY));

    /* Set PLL parameters: M=1, N=10, P=17, Q=8, R=2, PLLSRC=HSI16 */
    RCC_PLLCFGR = PLLM_1 | PLLN_10 | PLLP_17 | PLLQ_8 | PLLR_2 | PLLSRC_HSI16;

    /* Enable PLL and PLLCLK output */
    RCC_CR |= PLL_ON;
    RCC_PLLCFGR |= PLLREN;
    while(FALSE == GET_BITFIELD(RCC_CR, RCC_CR_PLLRDY));

    /* Switch to PLLCLK = 80MHz */
    /* HCLK = SYSCLK/2 = 40MHz, PCLK1 = HCLK, PCLK = HCLK */
    RCC_CFGR |= SW_PLL | AHB_PRESCALER | APB1_PRESCALER | APB2_PRESCALER;
    while(SWS_PLL != (RCC_CFGR & GET_BITFIELD_MASK(RCC_CFGR_SWS)));

    systemClockFreq = SYSCLK;
}

static void ConfigureSystemTimer(void)
{
    SysTick_Config(HCLK/SYSTICK_IRQ_FREQ);
}

static void ConfigureLED(void)
{
    GPIO_Config_tst gpioConfig;
    gpioConfig.mode = GPIO_MODE_OUTPUT;
    gpioConfig.outputType = GPIO_OTYPE_PUSH_PULL;
    gpioConfig.outputSpeed = GPIO_OSPEED_HIGH;
    gpioConfig.pupd = GPIO_PUPD_NO_PULL;

    GPIO_Enable(LED_GREEN_PORT);
    GPIO_ConfigurePin(LED_GREEN_PORT, LED_GREEN_PIN, &gpioConfig);

    GPIO_Enable(LED_RED_PORT);
    GPIO_ConfigurePin(LED_RED_PORT, LED_RED_PIN, &gpioConfig);
}

static void ConfigureJoystick(void)
{
    GPIO_Config_tst gpioConfig;
    gpioConfig.mode = GPIO_MODE_INPUT;
    gpioConfig.outputType = GPIO_OTYPE_PUSH_PULL;
    gpioConfig.outputSpeed = GPIO_OSPEED_HIGH;
    gpioConfig.pupd = GPIO_PUPD_PULL_DOWN;

    GPIO_Enable(JOYSTICK_PORT);
    GPIO_ConfigurePin(JOYSTICK_PORT, JOY_CENTER_PIN, &gpioConfig);
    GPIO_ConfigurePin(JOYSTICK_PORT, JOY_LEFT_PIN, &gpioConfig);
    GPIO_ConfigurePin(JOYSTICK_PORT, JOY_RIGHT_PIN, &gpioConfig);
    GPIO_ConfigurePin(JOYSTICK_PORT, JOY_UP_PIN, &gpioConfig);
    GPIO_ConfigurePin(JOYSTICK_PORT, JOY_DOWN_PIN, &gpioConfig);

}
