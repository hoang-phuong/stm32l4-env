#include "gpio.h"
#include "reg_baseaddr.h"
#include "reg_rcc.h"

#define GPIOA   (volatile GPIO_Reg_tst *)(GPIOA_BASE)
#define GPIOB   (volatile GPIO_Reg_tst *)(GPIOB_BASE)
#define GPIOC   (volatile GPIO_Reg_tst *)(GPIOC_BASE)
#define GPIOD   (volatile GPIO_Reg_tst *)(GPIOD_BASE)
#define GPIOE   (volatile GPIO_Reg_tst *)(GPIOE_BASE)
#define GPIOF   (volatile GPIO_Reg_tst *)(GPIOF_BASE)
#define GPIOG   (volatile GPIO_Reg_tst *)(GPIOG_BASE)
#define GPIOH   (volatile GPIO_Reg_tst *)(GPIOH_BASE)
#define GPIOI   (volatile GPIO_Reg_tst *)(GPIOI_BASE)

static volatile GPIO_Reg_tst * ports[] =
{
    GPIOA,
    GPIOB,
    GPIOC,
    GPIOD,
    GPIOE,
    GPIOF,
    GPIOG,
    GPIOH,
    GPIOI
};

void GPIO_EnableClock(GPIO_Port_ten port)
{
    RCC_AHB2ENR |= 1UL << port;
}

void GPIO_ConfigurePin(GPIO_Port_ten     port,
                       GPIO_Pin_ten      pin,
                       GPIO_Config_tst * pConfig)
{
    volatile GPIO_Reg_tst * pPort = ports[port];

    pPort->MODER   = pConfig->mode << (pin << 1);
    pPort->OTYPER  = pConfig->type << pin;
    pPort->OSPEEDR = pConfig->speed << (pin << 1);
    pPort->PUPDR   = pConfig->pupd << (pin << 1);

    if(GPIO_MODE_AF == pConfig->mode){
        if(pin <= GPIO_PIN_7){
            pPort->AFRL |= (pConfig->altFn << (pin << 2));
        }
        else if(pin <= GPIO_PIN_15)
        {
            pPort->AFRH |= (pConfig->altFn << ((pin - 8UL) << 2));
        }
    }
}

void GPIO_SetPin(GPIO_Port_ten    port,
                 GPIO_Pin_ten     pin)
{
    volatile GPIO_Reg_tst * pPort = ports[port];
    pPort->BSRR |= 1UL << pin;
}

void GPIO_ResetPin(GPIO_Port_ten    port,
                   GPIO_Pin_ten     pin)
{
    volatile GPIO_Reg_tst * pPort = ports[port];
    pPort->BSRR |= 1UL << (pin + 16UL);
}

void GPIO_TogglePin(GPIO_Port_ten    port,
                    GPIO_Pin_ten     pin)
{
    volatile GPIO_Reg_tst * pPort = ports[port];
    pPort->ODR ^= 1UL << pin;
}
