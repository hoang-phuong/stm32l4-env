#ifndef _REG_FLASH_H_
#define _REG_FLASH_H_

#include "Std_Types.h"
#include "reg_functions.h"

#define FLASH_ACR                           REGISTER(0x40022000UL)
#define FLASH_ACR_LATENCY_POS               0UL
#define FLASH_ACR_LATENCY_LEN               3UL
#define FLASH_ACR_PRFTEN_POS                8UL
#define FLASH_ACR_PRFTEN_LEN                1UL
#define FLASH_ACR_ICEN_POS                  9UL
#define FLASH_ACR_ICEN_LEN                  1UL
#define FLASH_ACR_DCEN_POS                  10UL
#define FLASH_ACR_DCEN_LEN                  1UL
#define FLASH_ACR_ICRST_POS                 11UL
#define FLASH_ACR_ICRST_LEN                 1UL
#define FLASH_ACR_DCRST_POS                 12UL
#define FLASH_ACR_DCRST_LEN                 1UL
#define FLASH_ACR_RUN_PD_POS                13UL
#define FLASH_ACR_RUN_PD_LEN                1UL
#define FLASH_ACR_SLEEP_PD_POS              14UL
#define FLASH_ACR_SLEEP_PD_LEN              1UL

#define FLASH_PDKEYR                        REGISTER(0x40022004UL)
#define FLASH_PDKEYR_PDKEYR_POS             0UL
#define FLASH_PDKEYR_PDKEYR_LEN             32UL

#define FLASH_KEYR                          REGISTER(0x40022008UL)
#define FLASH_KEYR_KEYR_POS                 0UL
#define FLASH_KEYR_KEYR_LEN                 32UL

#define FLASH_OPTKEYR                       REGISTER(0x4002200CUL)
#define FLASH_OPTKEYR_OPTKEYR_POS           0UL
#define FLASH_OPTKEYR_OPTKEYR_LEN           32UL

#define FLASH_SR                            REGISTER(0x40022010UL)
#define FLASH_SR_EOP_POS                    0UL
#define FLASH_SR_EOP_LEN                    1UL
#define FLASH_SR_OPERR_POS                  1UL
#define FLASH_SR_OPERR_LEN                  1UL
#define FLASH_SR_PROGERR_POS                3UL
#define FLASH_SR_PROGERR_LEN                1UL
#define FLASH_SR_WRPERR_POS                 4UL
#define FLASH_SR_WRPERR_LEN                 1UL
#define FLASH_SR_PGAERR_POS                 5UL
#define FLASH_SR_PGAERR_LEN                 1UL
#define FLASH_SR_SIZERR_POS                 6UL
#define FLASH_SR_SIZERR_LEN                 1UL
#define FLASH_SR_PGSERR_POS                 7UL
#define FLASH_SR_PGSERR_LEN                 1UL
#define FLASH_SR_MISERR_POS                 8UL
#define FLASH_SR_MISERR_LEN                 1UL
#define FLASH_SR_FASTERR_POS                9UL
#define FLASH_SR_FASTERR_LEN                1UL
#define FLASH_SR_RDERR_POS                  14UL
#define FLASH_SR_RDERR_LEN                  1UL
#define FLASH_SR_OPTVERR_POS                15UL
#define FLASH_SR_OPTVERR_LEN                1UL
#define FLASH_SR_BSY_POS                    16UL
#define FLASH_SR_BSY_LEN                    1UL

#define FLASH_CR                            REGISTER(0x40022014UL)
#define FLASH_CR_PG_POS                     0UL
#define FLASH_CR_PG_LEN                     1UL
#define FLASH_CR_PER_POS                    1UL
#define FLASH_CR_PER_LEN                    1UL
#define FLASH_CR_MER1_POS                   2UL
#define FLASH_CR_MER1_LEN                   1UL
#define FLASH_CR_PNB_POS                    3UL
#define FLASH_CR_PNB_LEN                    8UL
#define FLASH_CR_BKER_POS                   11UL
#define FLASH_CR_BKER_LEN                   1UL
#define FLASH_CR_MER2_POS                   15UL
#define FLASH_CR_MER2_LEN                   1UL
#define FLASH_CR_STRT_POS                   16UL
#define FLASH_CR_STRT_LEN                   1UL
#define FLASH_CR_OPTSTRT_POS                17UL
#define FLASH_CR_OPTSTRT_LEN                1UL
#define FLASH_CR_FSTPG_POS                  18UL
#define FLASH_CR_FSTPG_LEN                  1UL
#define FLASH_CR_EOPIE_POS                  24UL
#define FLASH_CR_EOPIE_LEN                  1UL
#define FLASH_CR_ERRIE_POS                  25UL
#define FLASH_CR_ERRIE_LEN                  1UL
#define FLASH_CR_RDERRIE_POS                26UL
#define FLASH_CR_RDERRIE_LEN                1UL
#define FLASH_CR_OBL_LAUNCH_POS             27UL
#define FLASH_CR_OBL_LAUNCH_LEN             1UL
#define FLASH_CR_OPTLOCK_POS                30UL
#define FLASH_CR_OPTLOCK_LEN                1UL
#define FLASH_CR_LOCK_POS                   31UL
#define FLASH_CR_LOCK_LEN                   1UL

#define FLASH_ECCR                          REGISTER(0x40022018UL)
#define FLASH_ECCR_ADDR_ECC_POS             0UL
#define FLASH_ECCR_ADDR_ECC_LEN             19UL
#define FLASH_ECCR_BK_ECC_POS               19UL
#define FLASH_ECCR_BK_ECC_LEN               1UL
#define FLASH_ECCR_SYSF_ECC_POS             20UL
#define FLASH_ECCR_SYSF_ECC_LEN             1UL
#define FLASH_ECCR_ECCCIE_POS               24UL
#define FLASH_ECCR_ECCCIE_LEN               1UL
#define FLASH_ECCR_ECCC_POS                 30UL
#define FLASH_ECCR_ECCC_LEN                 1UL
#define FLASH_ECCR_ECCD_POS                 31UL
#define FLASH_ECCR_ECCD_LEN                 1UL

#define FLASH_OPTR                          REGISTER(0x40022020UL)
#define FLASH_OPTR_RDP_POS                  0UL
#define FLASH_OPTR_RDP_LEN                  8UL
#define FLASH_OPTR_BOR_LEV_POS              8UL
#define FLASH_OPTR_BOR_LEV_LEN              3UL
#define FLASH_OPTR_nRST_STOP_POS            12UL
#define FLASH_OPTR_nRST_STOP_LEN            1UL
#define FLASH_OPTR_nRST_STDB_POS            13UL
#define FLASH_OPTR_nRST_STDB_LEN            1UL
#define FLASH_OPTR_nRST_SHDW_POS            14UL
#define FLASH_OPTR_nRST_SHDW_LEN            1UL
#define FLASH_OPTR_IWDG_SW_POS              16UL
#define FLASH_OPTR_IWDG_SW_LEN              1UL
#define FLASH_OPTR_IWDG_STOP_POS            17UL
#define FLASH_OPTR_IWDG_STOP_LEN            1UL
#define FLASH_OPTR_IWDG_STBY_POS            18UL
#define FLASH_OPTR_IWDG_STBY_LEN            1UL
#define FLASH_OPTR_WWDG_SW_POS              19UL
#define FLASH_OPTR_WWDG_SW_LEN              1UL
#define FLASH_OPTR_BFB2_POS                 20UL
#define FLASH_OPTR_BFB2_LEN                 1UL
#define FLASH_OPTR_DUALBANK_POS             21UL
#define FLASH_OPTR_DUALBANK_LEN             1UL
#define FLASH_OPTR_nBOOT1_POS               23UL
#define FLASH_OPTR_nBOOT1_LEN               1UL
#define FLASH_OPTR_SRAM2_PE_POS             24UL
#define FLASH_OPTR_SRAM2_PE_LEN             1UL
#define FLASH_OPTR_SRAM2_RST_POS            25UL
#define FLASH_OPTR_SRAM2_RST_LEN            1UL
#define FLASH_OPTR_nSWBOOT0_POS             26UL
#define FLASH_OPTR_nSWBOOT0_LEN             1UL
#define FLASH_OPTR_nBOOT0_POS               27UL
#define FLASH_OPTR_nBOOT0_LEN               1UL

#define FLASH_PCROP1SR                      REGISTER(0x40022024UL)
#define FLASH_PCROP1SR_PCROP1_STRT_POS      0UL
#define FLASH_PCROP1SR_PCROP1_STRT_LEN      16UL

#define FLASH_PCROP1ER                      REGISTER(0x40022028UL)
#define FLASH_PCROP1ER_PCROP1_END_POS       0UL
#define FLASH_PCROP1ER_PCROP1_END_LEN       16UL
#define FLASH_PCROP1ER_PCROP_RDP_POS        31UL
#define FLASH_PCROP1ER_PCROP_RDP_LEN        1UL

#define FLASH_WRP1AR                        REGISTER(0x4002202CUL)
#define FLASH_WRP1AR_WRP1A_STRT_POS         0UL
#define FLASH_WRP1AR_WRP1A_STRT_LEN         8UL
#define FLASH_WRP1AR_WRP1A_END_POS          16UL
#define FLASH_WRP1AR_WRP1A_END_LEN          8UL

#define FLASH_WRP1BR                        REGISTER(0x40022030UL)
#define FLASH_WRP1BR_WRP1B_STRT_POS         0UL
#define FLASH_WRP1BR_WRP1B_STRT_LEN         8UL
#define FLASH_WRP1BR_WRP1B_END_POS          16UL
#define FLASH_WRP1BR_WRP1B_END_LEN          8UL

#define FLASH_PCROP2SR                      REGISTER(0x40022044UL)
#define FLASH_PCROP2SR_PCROP2_STRT_POS      0UL
#define FLASH_PCROP2SR_PCROP2_STRT_LEN      16UL

#define FLASH_PCROP2ER                      REGISTER(0x40022048UL)
#define FLASH_PCROP2ER_PCROP2_END_POS       0UL
#define FLASH_PCROP2ER_PCROP2_END_LEN       16UL

#define FLASH_WRP2AR                        REGISTER(0x4002204CUL)
#define FLASH_WRP2AR_WRP2A_STRT_POS         0UL
#define FLASH_WRP2AR_WRP2A_STRT_LEN         8UL
#define FLASH_WRP2AR_WRP2A_END_POS          16UL
#define FLASH_WRP2AR_WRP2A_END_LEN          8UL

#define FLASH_WRP2BR                        REGISTER(0x40022050UL)
#define FLASH_WRP2BR_WRP2B_STRT_POS         0UL
#define FLASH_WRP2BR_WRP2B_STRT_LEN         8UL
#define FLASH_WRP2BR_WRP2B_END_POS          16UL
#define FLASH_WRP2BR_WRP2B_END_LEN          8UL

#endif /* #ifndef _REG_FLASH_H_ */
