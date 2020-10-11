#include "gpio.h"
#include "reg_baseaddr.h"


volatile GPIO_Reg_tst * GPIO_Ports[] =
{
    (volatile GPIO_Reg_tst *)GPIOA_BASE,
    (volatile GPIO_Reg_tst *)GPIOB_BASE,
    (volatile GPIO_Reg_tst *)GPIOC_BASE,
    (volatile GPIO_Reg_tst *)GPIOD_BASE,
    (volatile GPIO_Reg_tst *)GPIOE_BASE,
    (volatile GPIO_Reg_tst *)GPIOF_BASE,
    (volatile GPIO_Reg_tst *)GPIOG_BASE,
    (volatile GPIO_Reg_tst *)GPIOH_BASE,
    (volatile GPIO_Reg_tst *)GPIOI_BASE
};


void GPIO_ConfigurePin(GPIO_Port_ten     port,
                       GPIO_Pin_ten      pin,
                       GPIO_Config_tst * pConfig)
{
    volatile GPIO_Reg_tst * pPort = GPIO_Ports[port];

    pPort->MODER   = pConfig->mode << (pin << 1);
    pPort->OTYPER  = pConfig->outputType << pin;
    pPort->OSPEEDR = pConfig->outputSpeed << (pin << 1);
    pPort->PUPDR   = pConfig->pupd << (pin << 1);

    if(GPIO_MODE_AF == pConfig->mode){
        if(pin <= GPIO_PIN_7){
            pPort->AFRL |= (pConfig->altFunction << (pin << 2));
        }
        else if(pin <= GPIO_PIN_15)
        {
            pPort->AFRH |= (pConfig->altFunction << ((pin - GPIO_PIN_8) << 2));
        }
    }
    else if(GPIO_MODE_ANALOG == pConfig->mode){
        pPort->ASCR |= pConfig->analogSwitch << pin;
    }
}
