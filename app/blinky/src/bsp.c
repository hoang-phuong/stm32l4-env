#include "reg_rcc.h"
#include "bsp.h"
#include "gpio.h"

#define MAX_SYSCLK_SPEED        80000000UL
#define STARTUP_SYSLOCK_SPEED   4000000UL
#define HSI_ON                  (1UL  << RCC_CR_HSION_POS)
#define PLL_ON                  (1UL  << RCC_CR_PLLON_POS)
#define PLLM_2                  (1UL  << RCC_PLLCFGR_PLLM_POS)
#define PLLN_10                 (10UL << RCC_PLLCFGR_PLLN_POS)
#define PLLSRC_HSI16            (2UL  << RCC_PLLCFGR_PLLSRC_POS)
#define SW_HSI16                (1UL  << RCC_CFGR_SW_POS)
#define SWS_HSI16               (1UL  << RCC_CFGR_SWS_POS)
#define TIMEOUT_COUNTER_VALUE   1000UL

#define LED_RED_PORT            GPIO_PORT_B
#define LED_RED_PIN             GPIO_PIN_2
#define LED_GREEN_PORT          GPIO_PORT_E
#define LED_GREEN_PIN           GPIO_PIN_8

/** Flag indicate whether clock is configured to 80MHz */
static uint32  systemClock = STARTUP_SYSLOCK_SPEED;

static void ConfigureClock(void);
static void ConfigureLED(void);

ErrorCodeT BSP_Init(void)
{
    ErrorCodeT errorCode = ERC_CLOCK_CONFIG_ERROR;

    ConfigureClock();

    if (MAX_SYSCLK_SPEED == systemClock)
        errorCode = ERC_SUCCESS;

    ConfigureLED();

    return errorCode;
}

uint32 BSP_GetSystemClock(void)
{
    return systemClock;
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

static void ConfigureClock(void)
{
    uint32  counter = TIMEOUT_COUNTER_VALUE;
    boolean isClockSourceReady = FALSE;

    /* Configure PLL parameters: M=2, N=10, source = HSI16 */
    RCC_PLLCFGR |= ( PLLM_2 | PLLN_10 | PLLSRC_HSI16 );
    /* Turn on HSI and PLL */
    RCC_CR |= ( HSI_ON | PLL_ON );

    /* Wait with timeout until HSE and PLL clock are stable */
    do{
        counter--;
        if(0 == counter)
        {
            break;
        }
        isClockSourceReady = GET_BITFIELD(RCC_CR, RCC_CR_PLLON)
                            & GET_BITFIELD(RCC_CR, RCC_CR_HSION);
    } while (FALSE == isClockSourceReady);

    if (TRUE == isClockSourceReady){
        /* Use high speed internal 16 MHz clock as system clock */
        RCC_CFGR |= SW_HSI16;
        while(SWS_HSI16 != (RCC_CFGR & GET_BITFIELD_MASK(RCC_CFGR_SWS))){
            /* Wait until system clock is switched to HSI16 */
        }
        systemClock = MAX_SYSCLK_SPEED;
    }
}


static void ConfigureLED(void)
{
    GPIO_Config_tst gpioConfig;
    gpioConfig.mode = GPIO_MODE_OUTPUT;
    gpioConfig.type = GPIO_OTYPE_PUSH_PULL;
    gpioConfig.speed = GPIO_OSPEED_HIGH;
    gpioConfig.pupd = GPIO_PUPD_NO_PULL;

    GPIO_EnableClock(LED_GREEN_PORT);
    GPIO_ConfigurePin(LED_GREEN_PORT, LED_GREEN_PIN, &gpioConfig);

    GPIO_EnableClock(LED_RED_PORT);
    GPIO_ConfigurePin(LED_RED_PORT, LED_RED_PIN, &gpioConfig);
}
