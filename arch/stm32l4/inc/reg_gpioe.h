#ifndef _REG_GPIOE_H_
#define _REG_GPIOE_H_

#include "Std_Types.h"
#include "reg_functions.h"

#define GPIOE_MODER                             REGISTER(0x48001000UL)
#define GPIOE_MODER_MODE0_POS                   0UL
#define GPIOE_MODER_MODE0_LEN                   2UL
#define GPIOE_MODER_MODE1_POS                   2UL
#define GPIOE_MODER_MODE1_LEN                   2UL
#define GPIOE_MODER_MODE2_POS                   4UL
#define GPIOE_MODER_MODE2_LEN                   2UL
#define GPIOE_MODER_MODE3_POS                   6UL
#define GPIOE_MODER_MODE3_LEN                   2UL
#define GPIOE_MODER_MODE4_POS                   8UL
#define GPIOE_MODER_MODE4_LEN                   2UL
#define GPIOE_MODER_MODE5_POS                   10UL
#define GPIOE_MODER_MODE5_LEN                   2UL
#define GPIOE_MODER_MODE6_POS                   12UL
#define GPIOE_MODER_MODE6_LEN                   2UL
#define GPIOE_MODER_MODE7_POS                   14UL
#define GPIOE_MODER_MODE7_LEN                   2UL
#define GPIOE_MODER_MODE8_POS                   16UL
#define GPIOE_MODER_MODE8_LEN                   2UL
#define GPIOE_MODER_MODE9_POS                   18UL
#define GPIOE_MODER_MODE9_LEN                   2UL
#define GPIOE_MODER_MODE10_POS                  20UL
#define GPIOE_MODER_MODE10_LEN                  2UL
#define GPIOE_MODER_MODE11_POS                  22UL
#define GPIOE_MODER_MODE11_LEN                  2UL
#define GPIOE_MODER_MODE12_POS                  24UL
#define GPIOE_MODER_MODE12_LEN                  2UL
#define GPIOE_MODER_MODE13_POS                  26UL
#define GPIOE_MODER_MODE13_LEN                  2UL
#define GPIOE_MODER_MODE14_POS                  28UL
#define GPIOE_MODER_MODE14_LEN                  2UL
#define GPIOE_MODER_MODE15_POS                  30UL
#define GPIOE_MODER_MODE15_LEN                  2UL

#define GPIOE_OTYPER                            REGISTER(0x48001004UL)
#define GPIOE_OTYPER_OT0_POS                    0UL
#define GPIOE_OTYPER_OT0_LEN                    1UL
#define GPIOE_OTYPER_OT1_POS                    1UL
#define GPIOE_OTYPER_OT1_LEN                    1UL
#define GPIOE_OTYPER_OT2_POS                    2UL
#define GPIOE_OTYPER_OT2_LEN                    1UL
#define GPIOE_OTYPER_OT3_POS                    3UL
#define GPIOE_OTYPER_OT3_LEN                    1UL
#define GPIOE_OTYPER_OT4_POS                    4UL
#define GPIOE_OTYPER_OT4_LEN                    1UL
#define GPIOE_OTYPER_OT5_POS                    5UL
#define GPIOE_OTYPER_OT5_LEN                    1UL
#define GPIOE_OTYPER_OT6_POS                    6UL
#define GPIOE_OTYPER_OT6_LEN                    1UL
#define GPIOE_OTYPER_OT7_POS                    7UL
#define GPIOE_OTYPER_OT7_LEN                    1UL
#define GPIOE_OTYPER_OT8_POS                    8UL
#define GPIOE_OTYPER_OT8_LEN                    1UL
#define GPIOE_OTYPER_OT9_POS                    9UL
#define GPIOE_OTYPER_OT9_LEN                    1UL
#define GPIOE_OTYPER_OT10_POS                   10UL
#define GPIOE_OTYPER_OT10_LEN                   1UL
#define GPIOE_OTYPER_OT11_POS                   11UL
#define GPIOE_OTYPER_OT11_LEN                   1UL
#define GPIOE_OTYPER_OT12_POS                   12UL
#define GPIOE_OTYPER_OT12_LEN                   1UL
#define GPIOE_OTYPER_OT13_POS                   13UL
#define GPIOE_OTYPER_OT13_LEN                   1UL
#define GPIOE_OTYPER_OT14_POS                   14UL
#define GPIOE_OTYPER_OT14_LEN                   1UL
#define GPIOE_OTYPER_OT15_POS                   15UL
#define GPIOE_OTYPER_OT15_LEN                   1UL

#define GPIOE_OSPEEDR                           REGISTER(0x48001008UL)
#define GPIOE_OSPEEDR_OSPEED0_POS               0UL
#define GPIOE_OSPEEDR_OSPEED0_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED1_POS               2UL
#define GPIOE_OSPEEDR_OSPEED1_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED2_POS               4UL
#define GPIOE_OSPEEDR_OSPEED2_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED3_POS               6UL
#define GPIOE_OSPEEDR_OSPEED3_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED4_POS               8UL
#define GPIOE_OSPEEDR_OSPEED4_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED5_POS               10UL
#define GPIOE_OSPEEDR_OSPEED5_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED6_POS               12UL
#define GPIOE_OSPEEDR_OSPEED6_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED7_POS               14UL
#define GPIOE_OSPEEDR_OSPEED7_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED8_POS               16UL
#define GPIOE_OSPEEDR_OSPEED8_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED9_POS               18UL
#define GPIOE_OSPEEDR_OSPEED9_LEN               2UL
#define GPIOE_OSPEEDR_OSPEED10_POS              20UL
#define GPIOE_OSPEEDR_OSPEED10_LEN              2UL
#define GPIOE_OSPEEDR_OSPEED11_POS              22UL
#define GPIOE_OSPEEDR_OSPEED11_LEN              2UL
#define GPIOE_OSPEEDR_OSPEED12_POS              24UL
#define GPIOE_OSPEEDR_OSPEED12_LEN              2UL
#define GPIOE_OSPEEDR_OSPEED13_POS              26UL
#define GPIOE_OSPEEDR_OSPEED13_LEN              2UL
#define GPIOE_OSPEEDR_OSPEED14_POS              28UL
#define GPIOE_OSPEEDR_OSPEED14_LEN              2UL
#define GPIOE_OSPEEDR_OSPEED15_POS              30UL
#define GPIOE_OSPEEDR_OSPEED15_LEN              2UL

#define GPIOE_PUPDR                             REGISTER(0x4800100CUL)
#define GPIOE_PUPDR_PUPD0_POS                   0UL
#define GPIOE_PUPDR_PUPD0_LEN                   2UL
#define GPIOE_PUPDR_PUPD1_POS                   2UL
#define GPIOE_PUPDR_PUPD1_LEN                   2UL
#define GPIOE_PUPDR_PUPD2_POS                   4UL
#define GPIOE_PUPDR_PUPD2_LEN                   2UL
#define GPIOE_PUPDR_PUPD3_POS                   6UL
#define GPIOE_PUPDR_PUPD3_LEN                   2UL
#define GPIOE_PUPDR_PUPD4_POS                   8UL
#define GPIOE_PUPDR_PUPD4_LEN                   2UL
#define GPIOE_PUPDR_PUPD5_POS                   10UL
#define GPIOE_PUPDR_PUPD5_LEN                   2UL
#define GPIOE_PUPDR_PUPD6_POS                   12UL
#define GPIOE_PUPDR_PUPD6_LEN                   2UL
#define GPIOE_PUPDR_PUPD7_POS                   14UL
#define GPIOE_PUPDR_PUPD7_LEN                   2UL
#define GPIOE_PUPDR_PUPD8_POS                   16UL
#define GPIOE_PUPDR_PUPD8_LEN                   2UL
#define GPIOE_PUPDR_PUPD9_POS                   18UL
#define GPIOE_PUPDR_PUPD9_LEN                   2UL
#define GPIOE_PUPDR_PUPD10_POS                  20UL
#define GPIOE_PUPDR_PUPD10_LEN                  2UL
#define GPIOE_PUPDR_PUPD11_POS                  22UL
#define GPIOE_PUPDR_PUPD11_LEN                  2UL
#define GPIOE_PUPDR_PUPD12_POS                  24UL
#define GPIOE_PUPDR_PUPD12_LEN                  2UL
#define GPIOE_PUPDR_PUPD13_POS                  26UL
#define GPIOE_PUPDR_PUPD13_LEN                  2UL
#define GPIOE_PUPDR_PUPD14_POS                  28UL
#define GPIOE_PUPDR_PUPD14_LEN                  2UL
#define GPIOE_PUPDR_PUPD15_POS                  30UL
#define GPIOE_PUPDR_PUPD15_LEN                  2UL

#define GPIOE_IDR                               REGISTER(0x48001010UL)
#define GPIOE_IDR_ID0_POS                       0UL
#define GPIOE_IDR_ID0_LEN                       1UL
#define GPIOE_IDR_ID1_POS                       1UL
#define GPIOE_IDR_ID1_LEN                       1UL
#define GPIOE_IDR_ID2_POS                       2UL
#define GPIOE_IDR_ID2_LEN                       1UL
#define GPIOE_IDR_ID3_POS                       3UL
#define GPIOE_IDR_ID3_LEN                       1UL
#define GPIOE_IDR_ID4_POS                       4UL
#define GPIOE_IDR_ID4_LEN                       1UL
#define GPIOE_IDR_ID5_POS                       5UL
#define GPIOE_IDR_ID5_LEN                       1UL
#define GPIOE_IDR_ID6_POS                       6UL
#define GPIOE_IDR_ID6_LEN                       1UL
#define GPIOE_IDR_ID7_POS                       7UL
#define GPIOE_IDR_ID7_LEN                       1UL
#define GPIOE_IDR_ID8_POS                       8UL
#define GPIOE_IDR_ID8_LEN                       1UL
#define GPIOE_IDR_ID9_POS                       9UL
#define GPIOE_IDR_ID9_LEN                       1UL
#define GPIOE_IDR_ID10_POS                      10UL
#define GPIOE_IDR_ID10_LEN                      1UL
#define GPIOE_IDR_ID11_POS                      11UL
#define GPIOE_IDR_ID11_LEN                      1UL
#define GPIOE_IDR_ID12_POS                      12UL
#define GPIOE_IDR_ID12_LEN                      1UL
#define GPIOE_IDR_ID13_POS                      13UL
#define GPIOE_IDR_ID13_LEN                      1UL
#define GPIOE_IDR_ID14_POS                      14UL
#define GPIOE_IDR_ID14_LEN                      1UL
#define GPIOE_IDR_ID15_POS                      15UL
#define GPIOE_IDR_ID15_LEN                      1UL

#define GPIOE_ODR                               REGISTER(0x48001014UL)
#define GPIOE_ODR_OD0_POS                       0UL
#define GPIOE_ODR_OD0_LEN                       1UL
#define GPIOE_ODR_OD1_POS                       1UL
#define GPIOE_ODR_OD1_LEN                       1UL
#define GPIOE_ODR_OD2_POS                       2UL
#define GPIOE_ODR_OD2_LEN                       1UL
#define GPIOE_ODR_OD3_POS                       3UL
#define GPIOE_ODR_OD3_LEN                       1UL
#define GPIOE_ODR_OD4_POS                       4UL
#define GPIOE_ODR_OD4_LEN                       1UL
#define GPIOE_ODR_OD5_POS                       5UL
#define GPIOE_ODR_OD5_LEN                       1UL
#define GPIOE_ODR_OD6_POS                       6UL
#define GPIOE_ODR_OD6_LEN                       1UL
#define GPIOE_ODR_OD7_POS                       7UL
#define GPIOE_ODR_OD7_LEN                       1UL
#define GPIOE_ODR_OD8_POS                       8UL
#define GPIOE_ODR_OD8_LEN                       1UL
#define GPIOE_ODR_OD9_POS                       9UL
#define GPIOE_ODR_OD9_LEN                       1UL
#define GPIOE_ODR_OD10_POS                      10UL
#define GPIOE_ODR_OD10_LEN                      1UL
#define GPIOE_ODR_OD11_POS                      11UL
#define GPIOE_ODR_OD11_LEN                      1UL
#define GPIOE_ODR_OD12_POS                      12UL
#define GPIOE_ODR_OD12_LEN                      1UL
#define GPIOE_ODR_OD13_POS                      13UL
#define GPIOE_ODR_OD13_LEN                      1UL
#define GPIOE_ODR_OD14_POS                      14UL
#define GPIOE_ODR_OD14_LEN                      1UL
#define GPIOE_ODR_OD15_POS                      15UL
#define GPIOE_ODR_OD15_LEN                      1UL

#define GPIOE_BSRR                              REGISTER(0x48001018UL)
#define GPIOE_BSRR_BS0_POS                      0UL
#define GPIOE_BSRR_BS0_LEN                      1UL
#define GPIOE_BSRR_BS1_POS                      1UL
#define GPIOE_BSRR_BS1_LEN                      1UL
#define GPIOE_BSRR_BS2_POS                      2UL
#define GPIOE_BSRR_BS2_LEN                      1UL
#define GPIOE_BSRR_BS3_POS                      3UL
#define GPIOE_BSRR_BS3_LEN                      1UL
#define GPIOE_BSRR_BS4_POS                      4UL
#define GPIOE_BSRR_BS4_LEN                      1UL
#define GPIOE_BSRR_BS5_POS                      5UL
#define GPIOE_BSRR_BS5_LEN                      1UL
#define GPIOE_BSRR_BS6_POS                      6UL
#define GPIOE_BSRR_BS6_LEN                      1UL
#define GPIOE_BSRR_BS7_POS                      7UL
#define GPIOE_BSRR_BS7_LEN                      1UL
#define GPIOE_BSRR_BS8_POS                      8UL
#define GPIOE_BSRR_BS8_LEN                      1UL
#define GPIOE_BSRR_BS9_POS                      9UL
#define GPIOE_BSRR_BS9_LEN                      1UL
#define GPIOE_BSRR_BS10_POS                     10UL
#define GPIOE_BSRR_BS10_LEN                     1UL
#define GPIOE_BSRR_BS11_POS                     11UL
#define GPIOE_BSRR_BS11_LEN                     1UL
#define GPIOE_BSRR_BS12_POS                     12UL
#define GPIOE_BSRR_BS12_LEN                     1UL
#define GPIOE_BSRR_BS13_POS                     13UL
#define GPIOE_BSRR_BS13_LEN                     1UL
#define GPIOE_BSRR_BS14_POS                     14UL
#define GPIOE_BSRR_BS14_LEN                     1UL
#define GPIOE_BSRR_BS15_POS                     15UL
#define GPIOE_BSRR_BS15_LEN                     1UL
#define GPIOE_BSRR_BR0_POS                      16UL
#define GPIOE_BSRR_BR0_LEN                      1UL
#define GPIOE_BSRR_BR1_POS                      17UL
#define GPIOE_BSRR_BR1_LEN                      1UL
#define GPIOE_BSRR_BR2_POS                      18UL
#define GPIOE_BSRR_BR2_LEN                      1UL
#define GPIOE_BSRR_BR3_POS                      19UL
#define GPIOE_BSRR_BR3_LEN                      1UL
#define GPIOE_BSRR_BR4_POS                      20UL
#define GPIOE_BSRR_BR4_LEN                      1UL
#define GPIOE_BSRR_BR5_POS                      21UL
#define GPIOE_BSRR_BR5_LEN                      1UL
#define GPIOE_BSRR_BR6_POS                      22UL
#define GPIOE_BSRR_BR6_LEN                      1UL
#define GPIOE_BSRR_BR7_POS                      23UL
#define GPIOE_BSRR_BR7_LEN                      1UL
#define GPIOE_BSRR_BR8_POS                      24UL
#define GPIOE_BSRR_BR8_LEN                      1UL
#define GPIOE_BSRR_BR9_POS                      25UL
#define GPIOE_BSRR_BR9_LEN                      1UL
#define GPIOE_BSRR_BR10_POS                     26UL
#define GPIOE_BSRR_BR10_LEN                     1UL
#define GPIOE_BSRR_BR11_POS                     27UL
#define GPIOE_BSRR_BR11_LEN                     1UL
#define GPIOE_BSRR_BR12_POS                     28UL
#define GPIOE_BSRR_BR12_LEN                     1UL
#define GPIOE_BSRR_BR13_POS                     29UL
#define GPIOE_BSRR_BR13_LEN                     1UL
#define GPIOE_BSRR_BR14_POS                     30UL
#define GPIOE_BSRR_BR14_LEN                     1UL
#define GPIOE_BSRR_BR15_POS                     31UL
#define GPIOE_BSRR_BR15_LEN                     1UL

#define GPIOE_LCKR                              REGISTER(0x4800101CUL)
#define GPIOE_LCKR_LCK0_POS                     0UL
#define GPIOE_LCKR_LCK0_LEN                     1UL
#define GPIOE_LCKR_LCK1_POS                     1UL
#define GPIOE_LCKR_LCK1_LEN                     1UL
#define GPIOE_LCKR_LCK2_POS                     2UL
#define GPIOE_LCKR_LCK2_LEN                     1UL
#define GPIOE_LCKR_LCK3_POS                     3UL
#define GPIOE_LCKR_LCK3_LEN                     1UL
#define GPIOE_LCKR_LCK4_POS                     4UL
#define GPIOE_LCKR_LCK4_LEN                     1UL
#define GPIOE_LCKR_LCK5_POS                     5UL
#define GPIOE_LCKR_LCK5_LEN                     1UL
#define GPIOE_LCKR_LCK6_POS                     6UL
#define GPIOE_LCKR_LCK6_LEN                     1UL
#define GPIOE_LCKR_LCK7_POS                     7UL
#define GPIOE_LCKR_LCK7_LEN                     1UL
#define GPIOE_LCKR_LCK8_POS                     8UL
#define GPIOE_LCKR_LCK8_LEN                     1UL
#define GPIOE_LCKR_LCK9_POS                     9UL
#define GPIOE_LCKR_LCK9_LEN                     1UL
#define GPIOE_LCKR_LCK10_POS                    10UL
#define GPIOE_LCKR_LCK10_LEN                    1UL
#define GPIOE_LCKR_LCK11_POS                    11UL
#define GPIOE_LCKR_LCK11_LEN                    1UL
#define GPIOE_LCKR_LCK12_POS                    12UL
#define GPIOE_LCKR_LCK12_LEN                    1UL
#define GPIOE_LCKR_LCK13_POS                    13UL
#define GPIOE_LCKR_LCK13_LEN                    1UL
#define GPIOE_LCKR_LCK14_POS                    14UL
#define GPIOE_LCKR_LCK14_LEN                    1UL
#define GPIOE_LCKR_LCK15_POS                    15UL
#define GPIOE_LCKR_LCK15_LEN                    1UL
#define GPIOE_LCKR_LCKK_POS                     16UL
#define GPIOE_LCKR_LCKK_LEN                     1UL

#define GPIOE_AFRL                              REGISTER(0x48001020UL)
#define GPIOE_AFRL_AFSEL0_POS                   0UL
#define GPIOE_AFRL_AFSEL0_LEN                   4UL
#define GPIOE_AFRL_AFSEL1_POS                   4UL
#define GPIOE_AFRL_AFSEL1_LEN                   4UL
#define GPIOE_AFRL_AFSEL2_POS                   8UL
#define GPIOE_AFRL_AFSEL2_LEN                   4UL
#define GPIOE_AFRL_AFSEL3_POS                   12UL
#define GPIOE_AFRL_AFSEL3_LEN                   4UL
#define GPIOE_AFRL_AFSEL4_POS                   16UL
#define GPIOE_AFRL_AFSEL4_LEN                   4UL
#define GPIOE_AFRL_AFSEL5_POS                   20UL
#define GPIOE_AFRL_AFSEL5_LEN                   4UL
#define GPIOE_AFRL_AFSEL6_POS                   24UL
#define GPIOE_AFRL_AFSEL6_LEN                   4UL
#define GPIOE_AFRL_AFSEL7_POS                   28UL
#define GPIOE_AFRL_AFSEL7_LEN                   4UL

#define GPIOE_AFRH                              REGISTER(0x48001024UL)
#define GPIOE_AFRH_AFSEL8_POS                   0UL
#define GPIOE_AFRH_AFSEL8_LEN                   4UL
#define GPIOE_AFRH_AFSEL9_POS                   4UL
#define GPIOE_AFRH_AFSEL9_LEN                   4UL
#define GPIOE_AFRH_AFSEL10_POS                  8UL
#define GPIOE_AFRH_AFSEL10_LEN                  4UL
#define GPIOE_AFRH_AFSEL11_POS                  12UL
#define GPIOE_AFRH_AFSEL11_LEN                  4UL
#define GPIOE_AFRH_AFSEL12_POS                  16UL
#define GPIOE_AFRH_AFSEL12_LEN                  4UL
#define GPIOE_AFRH_AFSEL13_POS                  20UL
#define GPIOE_AFRH_AFSEL13_LEN                  4UL
#define GPIOE_AFRH_AFSEL14_POS                  24UL
#define GPIOE_AFRH_AFSEL14_LEN                  4UL
#define GPIOE_AFRH_AFSEL15_POS                  28UL
#define GPIOE_AFRH_AFSEL15_LEN                  4UL

#define GPIOE_BRR                              REGISTER(0x48001028UL)
#define GPIOE_BRR_BR0_POS                      0UL
#define GPIOE_BRR_BR0_LEN                      1UL
#define GPIOE_BRR_BR1_POS                      1UL
#define GPIOE_BRR_BR1_LEN                      1UL
#define GPIOE_BRR_BR2_POS                      2UL
#define GPIOE_BRR_BR2_LEN                      1UL
#define GPIOE_BRR_BR3_POS                      3UL
#define GPIOE_BRR_BR3_LEN                      1UL
#define GPIOE_BRR_BR4_POS                      4UL
#define GPIOE_BRR_BR4_LEN                      1UL
#define GPIOE_BRR_BR5_POS                      5UL
#define GPIOE_BRR_BR5_LEN                      1UL
#define GPIOE_BRR_BR6_POS                      6UL
#define GPIOE_BRR_BR6_LEN                      1UL
#define GPIOE_BRR_BR7_POS                      7UL
#define GPIOE_BRR_BR7_LEN                      1UL
#define GPIOE_BRR_BR8_POS                      8UL
#define GPIOE_BRR_BR8_LEN                      1UL
#define GPIOE_BRR_BR9_POS                      9UL
#define GPIOE_BRR_BR9_LEN                      1UL
#define GPIOE_BRR_BR10_POS                     10UL
#define GPIOE_BRR_BR10_LEN                     1UL
#define GPIOE_BRR_BR11_POS                     11UL
#define GPIOE_BRR_BR11_LEN                     1UL
#define GPIOE_BRR_BR12_POS                     12UL
#define GPIOE_BRR_BR12_LEN                     1UL
#define GPIOE_BRR_BR13_POS                     13UL
#define GPIOE_BRR_BR13_LEN                     1UL
#define GPIOE_BRR_BR14_POS                     14UL
#define GPIOE_BRR_BR14_LEN                     1UL
#define GPIOE_BRR_BR15_POS                     15UL
#define GPIOE_BRR_BR15_LEN                     1UL

#define GPIOE_ASCR                             REGISTER(0x4800102CUL)
#define GPIOE_ASCR_ASC0_POS                    0UL
#define GPIOE_ASCR_ASC0_LEN                    1UL
#define GPIOE_ASCR_ASC1_POS                    1UL
#define GPIOE_ASCR_ASC1_LEN                    1UL
#define GPIOE_ASCR_ASC2_POS                    2UL
#define GPIOE_ASCR_ASC2_LEN                    1UL
#define GPIOE_ASCR_ASC3_POS                    3UL
#define GPIOE_ASCR_ASC3_LEN                    1UL
#define GPIOE_ASCR_ASC4_POS                    4UL
#define GPIOE_ASCR_ASC4_LEN                    1UL
#define GPIOE_ASCR_ASC5_POS                    5UL
#define GPIOE_ASCR_ASC5_LEN                    1UL
#define GPIOE_ASCR_ASC6_POS                    6UL
#define GPIOE_ASCR_ASC6_LEN                    1UL
#define GPIOE_ASCR_ASC7_POS                    7UL
#define GPIOE_ASCR_ASC7_LEN                    1UL
#define GPIOE_ASCR_ASC8_POS                    8UL
#define GPIOE_ASCR_ASC8_LEN                    1UL
#define GPIOE_ASCR_ASC9_POS                    9UL
#define GPIOE_ASCR_ASC9_LEN                    1UL
#define GPIOE_ASCR_ASC10_POS                   10UL
#define GPIOE_ASCR_ASC10_LEN                   1UL
#define GPIOE_ASCR_ASC11_POS                   11UL
#define GPIOE_ASCR_ASC11_LEN                   1UL
#define GPIOE_ASCR_ASC12_POS                   12UL
#define GPIOE_ASCR_ASC12_LEN                   1UL
#define GPIOE_ASCR_ASC13_POS                   13UL
#define GPIOE_ASCR_ASC13_LEN                   1UL
#define GPIOE_ASCR_ASC14_POS                   14UL
#define GPIOE_ASCR_ASC14_LEN                   1UL
#define GPIOE_ASCR_ASC15_POS                   15UL
#define GPIOE_ASCR_ASC15_LEN                   1UL

#endif /* #ifndef _REG_GPIOE_H_ */
