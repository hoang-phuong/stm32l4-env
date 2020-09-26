/* * prolouge ************************************************************************************/
#ifndef FLASH_REG_H
#define FLASH_REG_H

/* * include *************************************************************************************/
#include "types.h"
#include "periph_base_addr.h"

/* * defines *************************************************************************************/
#define FLASH           (*(FLASH_st)FLASH_BASE_ADDR)

/* FLASH_PDKEYR (W) */
#define FLASH_PDKEYR_KEY1       0x04152637UL
#define FLASH_PDKEYR_KEY2       0xFAFBFCFDUL

/* FLASH_KEYR (W) */
#define FLASH_KEYR_KEY1         0x45670123UL
#define FLASH_KEYR_KEY2         0xCDEF89ABUL

/* FLASH_OPTKEYR (W) */
#define FLASH_OPTKEYR_KEY1      0x08192A3BUL
#define FLASH_OPTKEYR_KEY2      0x4C5D6E7FUL

/* * type definitions ****************************************************************************/
typedef struct
{
    volatile uint32_t FLASH_ACR;        /**< Flash access control register              */
    volatile uint32_t FLASH_PDKEYR;     /**< Flash Power-down key register              */
    volatile uint32_t FLASH_KEYR;       /**< Flash key register                         */
    volatile uint32_t FLASH_OPTKEYR;    /**< Flash option key register                  */
    volatile uint32_t FLASH_SR;         /**< Flash status register                      */
    volatile uint32_t FLASH_CR;         /**< Flash control register                     */
    volatile uint32_t FLASH_ECCR;       /**< Flash ECC register                         */
    volatile uint32_t FLASH_OPTR;       /**< Flash option register                      */
    volatile uint32_t FLASH_PCROP1SR;   /**< Flash Bank 1 PCROP Start address register  */
    volatile uint32_t FLASH_PCROP1ER;   /**< Flash Bank 1 PCROP End address register    */
    volatile uint32_t FLASH_WRP1AR;     /**< Flash Bank 1 WRP are A address register    */
    volatile uint32_t FLASH_WRP1BR;     /**< Flash Bank 1 WRP are B address register    */
    volatile uint32_t FLASH_PCROP2SR;   /**< Flash Bank 2 PCROP Start address register  */
    volatile uint32_t FLASH_PCROP2ER;   /**< Flash Bank 2 PCROP End address register    */
    volatile uint32_t FLASH_WRP2AR;     /**< Flash Bank 2 WRP are A address register    */
    volatile uint32_t FLASH_WRP2BR;     /**< Flash Bank 2 WRP are B address register    */
} FLASH_st;


/* * Register bit fields  ************************************************************************/

/* FLASH_ACR_LATENCY (RW) */
#define FLASH_ACR_LATENCY_BITMASK                       0x00000007UL
#define FLASH_ACR_LATENCY_BITPOS                        0UL
#define FLASH_ACR_LATENCY_BITLEN                        3UL
#define FLASH_ACR_LATENCY_BITVAL_ZERO_WAIT_STATE        0UL
#define FLASH_ACR_LATENCY_BITVAL_ONE_WAIT_STATE         1UL
#define FLASH_ACR_LATENCY_BITVAL_TWO_WAIT_STATES        2UL
#define FLASH_ACR_LATENCY_BITVAL_THREE_WAIT_STATES      3UL
#define FLASH_ACR_LATENCY_BITVAL_FOUR_WAIT_STATES       4UL

/* FLASH_ACR_PRFTEN (RW) */
#define FLASH_ACR_PRFTEN_BITMASK                        0x00000100UL
#define FLASH_ACR_PRFTEN_BITPOS                         8UL
#define FLASH_ACR_PRFTEN_BITLEN                         1UL
#define FLASH_ACR_PRFTEN_BITVAL_DISABLE                 0UL
#define FLASH_ACR_PRFTEN_BITVAL_ENABLE                  1UL

/* FLASH_ACR_ICEN (RW) */
#define FLASH_ACR_ICEN_BITMASK                          0x00000200UL
#define FLASH_ACR_ICEN_BITPOS                           9UL
#define FLASH_ACR_ICEN_BITLEN                           1UL
#define FLASH_ACR_ICEN_BITVAL_DISABLE                   0UL
#define FLASH_ACR_ICEN_BITVAL_ENABLE                    1UL

/* FLASH_ACR_DCEN (RW) */
#define FLASH_ACR_DCEN_BITMASK                          0x00000400UL
#define FLASH_ACR_DCEN_BITPOS                           10UL
#define FLASH_ACR_DCEN_BITLEN                           1UL
#define FLASH_ACR_DCEN_BITVAL_DISABLE                   0UL
#define FLASH_ACR_DCEN_BITVAL_ENABLE                    1UL

/* FLASH_ACR_ICRST (RW) */
#define FLASH_ACR_ICRST_BITMASK                         0x00000800UL
#define FLASH_ACR_ICRST_BITPOS                          11UL
#define FLASH_ACR_ICRST_BITLEN                          1UL
#define FLASH_ACR_ICRST_BITVAL_NOT_RESET                0UL
#define FLASH_ACR_ICRST_BITVAL_RESET                    1UL

/* FLASH_ACR_DCRST (RW) */
#define FLASH_ACR_DCRST_BITMASK                         0x00001000UL
#define FLASH_ACR_DCRST_BITPOS                          12UL
#define FLASH_ACR_DCRST_BITLEN                          1UL
#define FLASH_ACR_DCRST_BITVAL_NOT_RESET                0UL
#define FLASH_ACR_DCRST_BITVAL_RESET                    1UL

/* FLASH_ACR_RUN_PD (RW) */
#define FLASH_ACR_RUN_PD_BITMASK                        0x00002000UL
#define FLASH_ACR_RUN_PD_BITPOS                         13UL
#define FLASH_ACR_RUN_PD_BITLEN                         1UL
#define FLASH_ACR_RUN_PD_BITVAL_IDLE                    0UL
#define FLASH_ACR_RUN_PD_BITVAL_POWERDOWN               1UL

/* FLASH_ACR_SLEEP_PD (RW) */
#define FLASH_ACR_SLEEP_PD_BITMASK                      0x00004000UL
#define FLASH_ACR_SLEEP_PD_BITPOS                       14UL
#define FLASH_ACR_SLEEP_PD_BITLEN                       1UL
#define FLASH_ACR_SLEEP_PD_BITVAL_IDLE                  0UL
#define FLASH_ACR_SLEEP_PD_BITVAL_POWERDOWN             1UL

/* FLASH_SR_EOP (RC_W1) */
#define FLASH_SR_EOP_BITMASK                            0x00000001UL
#define FLASH_SR_EOP_BITPOS                             0UL
#define FLASH_SR_EOP_BITLEN                             1UL

/* FLASH_SR_OPERR (RC_W1) */
#define FLASH_SR_OPERR_BITMASK                          0x00000002UL
#define FLASH_SR_OPERR_BITPOS                           1UL
#define FLASH_SR_OPERR_BITLEN                           1UL

/* FLASH_SR_PROGERR (RC_W1) */
#define FLASH_SR_PROGERR_BITMASK                        0x00000008UL
#define FLASH_SR_PROGERR_BITPOS                         3UL
#define FLASH_SR_PROGERR_BITLEN                         1UL

/* FLASH_SR_WRPERR (RC_W1) */
#define FLASH_SR_WRPERR_BITMASK                         0x00000010UL
#define FLASH_SR_WRPERR_BITPOS                          4UL
#define FLASH_SR_WRPERR_BITLEN                          1UL

/* FLASH_SR_PGAERR (RC_W1) */
#define FLASH_SR_PGAERR_BITMASK                         0x00000020UL
#define FLASH_SR_PGAERR_BITPOS                          5UL
#define FLASH_SR_PGAERR_BITLEN                          1UL

/* FLASH_SR_SIZERR (RC_W1) */
#define FLASH_SR_SIZERR_BITMASK                         0x00000040UL
#define FLASH_SR_SIZERR_BITPOS                          6UL
#define FLASH_SR_SIZERR_BITLEN                          1UL

/* FLASH_SR_PGSERR (RC_W1) */
#define FLASH_SR_PGSERR_BITMASK                         0x00000080UL
#define FLASH_SR_PGSERR_BITPOS                          7UL
#define FLASH_SR_PGSERR_BITLEN                          1UL

/* FLASH_SR_MISERR (RC_W1) */
#define FLASH_SR_MISERR_BITMASK                         0x00000100UL
#define FLASH_SR_MISERR_BITPOS                          8UL
#define FLASH_SR_MISERR_BITLEN                          1UL

/* FLASH_SR_FASTERR (RC_W1) */
#define FLASH_SR_FASTERR_BITMASK                        0x00000200UL
#define FLASH_SR_FASTERR_BITPOS                         9UL
#define FLASH_SR_FASTERR_BITLEN                         1UL

/* FLASH_SR_RDERR (RC_W1) */
#define FLASH_SR_RDERR_BITMASK                          0x00004000UL
#define FLASH_SR_RDERR_BITPOS                           14UL
#define FLASH_SR_RDERR_BITLEN                           1UL

/* FLASH_SR_OPTVERR (RC_W1) */
#define FLASH_SR_OPTVERR_BITMASK                        0x00008000UL
#define FLASH_SR_OPTVERR_BITPOS                         15UL
#define FLASH_SR_OPTVERR_BITLEN                         1UL

/* FLASH_SR_BSY (R) */
#define FLASH_SR_BSY_BITMASK                            0x00010000UL
#define FLASH_SR_BSY_BITPOS                             16UL
#define FLASH_SR_BSY_BITLEN                             1UL

/* FLASH_CR_PG (RW) */
#define FLASH_CR_PG_BITMASK                             0x00000001UL
#define FLASH_CR_PG_BITPOS                              0UL
#define FLASH_CR_PG_BITLEN                              1UL
#define FLASH_CR_PG_BITVAL_ENABLE                       1UL
#define FLASH_CR_PG_BITVAL_DISABLE                      0UL

/* FLASH_CR_PER (RW) */
#define FLASH_CR_PER_BITMASK                            0x00000002UL
#define FLASH_CR_PER_BITPOS                             1UL
#define FLASH_CR_PER_BITLEN                             1UL
#define FLASH_CR_PER_BITVAL_ENABLE                      1UL
#define FLASH_CR_PER_BITVAL_DISABLE                     0UL

/* FLASH_CR_MER1 (RW) */
#define FLASH_CR_MER1_BITMASK                           0x00000004UL
#define FLASH_CR_MER1_BITPOS                            2UL
#define FLASH_CR_MER1_BITLEN                            1UL
#define FLASH_CR_MER1_BITVAL_ENABLE                     1UL

/* FLASH_CR_PNB (RW) */
#define FLASH_CR_PNB_BITMASK                            0x000007F8UL
#define FLASH_CR_PNB_BITPOS                             3UL
#define FLASH_CR_PNB_BITLEN                             8UL

/* FLASH_CR_BKER (RW) */
#define FLASH_CR_BKER_BITMASK                           0x00000800UL
#define FLASH_CR_BKER_BITPOS                            11UL
#define FLASH_CR_BKER_BITLEN                            1U
#define FLASH_CR_BKER_BITVAL_BANK_1                     0UL
#define FLASH_CR_BKER_BITVAL_BANK_2                     1UL

/* FLASH_CR_MER2 (RW) */
#define FLASH_CR_MER2_BITMASK                           0x00008000UL
#define FLASH_CR_MER2_BITPOS                            15UL
#define FLASH_CR_MER2_BITLEN                            1UL
#define FLASH_CR_MER2_BITVAL_ENABLE                     1UL

/* FLASH_CR_STRT (RS) */
#define FLASH_CR_STRT_BITMASK                           0x00010000UL
#define FLASH_CR_STRT_BITPOS                            16UL
#define FLASH_CR_STRT_BITLEN                            1UL
#define FLASH_CR_STRT_BITVAL_START                      1UL

/* FLASH_CR_OPTSTRT (RS) */
#define FLASH_CR_OPTSTRT_BITMASK                        0x00020000UL
#define FLASH_CR_OPTSTRT_BITPOS                         17UL
#define FLASH_CR_OPTSTRT_BITLEN                         1UL
#define FLASH_CR_OPTSTRT_BITVAL_START                   1UL

/* FLASH_CR_FSTPG (RW) */
#define FLASH_CR_FSTPG_BITMASK                          0x00040000UL
#define FLASH_CR_FSTPG_BITPOS                           18UL
#define FLASH_CR_FSTPG_BITLEN                           1UL
#define FLASH_CR_FSTPG_BITVAL_ENABLE                    1UL
#define FLASH_CR_FSTPG_BITVAL_DISABLE                   0UL

/* FLASH_CR_EOPIE (RW) */
#define FLASH_CR_EOPIE_BITMASK                          0x01000000UL
#define FLASH_CR_EOPIE_BITPOS                           24UL
#define FLASH_CR_EOPIE_BITLEN                           1UL
#define FLASH_CR_EOPIE_BITVAL_ENABLE                    1UL
#define FLASH_CR_EOPIE_BITVAL_DISABLE                   0UL

/* FLASH_CR_ERRIE (RW) */
#define FLASH_CR_ERRIE_BITMASK                          0x02000000UL
#define FLASH_CR_ERRIE_BITPOS                           25UL
#define FLASH_CR_ERRIE_BITLEN                           1UL
#define FLASH_CR_ERRIE_BITVAL_ENABLE                    1UL
#define FLASH_CR_ERRIE_BITVAL_DISABLE                   0UL

/* FLASH_CR_RDERRIE (RW) */
#define FLASH_CR_RDERRIE_BITMASK                        0x04000000UL
#define FLASH_CR_RDERRIE_BITPOS                         26UL
#define FLASH_CR_RDERRIE_BITLEN                         1UL
#define FLASH_CR_RDERRIE_BITVAL_ENABLE                  1UL
#define FLASH_CR_RDERRIE_BITVAL_DISABLE                 0UL

/* FLASH_CR_OBL_LAUNCH (RC_W1) */
#define FLASH_CR_OBL_LAUNCH_BITMASK                     0x08000000UL
#define FLASH_CR_OBL_LAUNCH_BITPOS                      27UL
#define FLASH_CR_OBL_LAUNCH_BITLEN                      1UL
#define FLASH_CR_OBL_LAUNCH_BITVAL_REQUEST              1UL
#define FLASH_CR_OBL_LAUNCH_BITVAL_COMPLETED            0UL

/* FLASH_CR_OPTLOCK (RS) */
#define FLASH_CR_OPTLOCK_BITMASK                        0x40000000UL
#define FLASH_CR_OPTLOCK_BITPOS                         30UL
#define FLASH_CR_OPTLOCK_BITLEN                         1UL
#define FLASH_CR_OPTLOCK_BITVAL_LOCK                    1UL
#define FLASH_CR_OPTLOCK_BITVAL_UNLOCK                  0UL

/* FLASH_CR_LOCK (RS) */
#define FLASH_CR_LOCK_BITMASK                           0x80000000UL
#define FLASH_CR_LOCK_BITPOS                            31UL
#define FLASH_CR_LOCK_BITLEN                            1UL
#define FLASH_CR_LOCK_BITVAL_LOCK                       1UL
#define FLASH_CR_LOCK_BITVAL_UNLOCK                     0UL

/* FLASH_ECCR_ADDR_ECC (R) */
#define FLASH_ECCR_ADDR_ECC_BITMASK                     0x0007FFFFUL
#define FLASH_ECCR_ADDR_ECC_BITPOS                      0UL
#define FLASH_ECCR_ADDR_ECC_BITLEN                      19UL

/* FLASH_ECCR_BK_ECC (R) */
#define FLASH_ECCR_BK_ECC_BITMASK                       0x00080000UL
#define FLASH_ECCR_BK_ECC_BITPOS                        19UL
#define FLASH_ECCR_BK_ECC_BITLEN                        1UL
#define FLASH_ECCR_BK_ECC_BITVAL_BANK_1                 0UL
#define FLASH_ECCR_BK_ECC_BITVAL_BANK_2                 1UL

/* FLASH_ECCR_SYSF_ECC (R) */
#define FLASH_ECCR_SYSF_ECC_BITMASK                     0x00100000UL
#define FLASH_ECCR_SYSF_ECC_BITPOS                      20UL
#define FLASH_ECCR_SYSF_ECC_BITLEN                      1UL

/* FLASH_ECCR_ECCIE (RW) */
#define FLASH_ECCR_ECCIE_BITMASK                        0x01000000UL
#define FLASH_ECCR_ECCIE_BITPOS                         24UL
#define FLASH_ECCR_ECCIE_BITLEN                         1UL
#define FLASH_ECCR_ECCIE_BITVAL_ENABLE                  1UL
#define FLASH_ECCR_ECCIE_BITVAL_DISABLE                 0UL

/* FLASH_ECCR_ECCC (RC_W1) */
#define FLASH_ECCR_ECCC_BITMASK                         0x40000000UL
#define FLASH_ECCR_ECCC_BITPOS                          30UL
#define FLASH_ECCR_ECCC_BITLEN                          1UL

/* FLASH_ECCR_ECCD (RC_W1) */
#define FLASH_ECCR_ECCD_BITMASK                         0x80000000UL
#define FLASH_ECCR_ECCD_BITPOS                          31UL
#define FLASH_ECCR_ECCD_BITLEN                          1UL

/* FLASH_OPTR_RDP (RW) */
#define FLASH_OPTR_RDP_BITMASK                          0x000000FFUL
#define FLASH_OPTR_RDP_BITPOS                           0UL
#define FLASH_OPTR_RDP_BITLEN                           8UL
#define FLASH_OPTR_RDP_BITVAL_NOT_ACTIVE                0xAA
#define FLASH_OPTR_RDP_BITVAL_CHIP_READ_PROTECTED       0xCC

/* FLASH_OPTR_BOR_LEVEL (RW) */
#define FLASH_OPTR_BOR_LEV_BITMASK                      0x00000700UL
#define FLASH_OPTR_BOR_LEV_BITPOS                       8UL
#define FLASH_OPTR_BOR_LEV_BITLEN                       3UL
#define FLASH_OPTR_BOR_LEV_BITVAL_1V7                   0UL
#define FLASH_OPTR_BOR_LEV_BITVAL_2V0                   1UL
#define FLASH_OPTR_BOR_LEV_BITVAL_2V2                   2UL
#define FLASH_OPTR_BOR_LEV_BITVAL_2V5                   3UL
#define FLASH_OPTR_BOR_LEV_BITVAL_2V8                   4UL

/* FLASH_OPTR_nRST_STOP (RW) */
#define FLASH_OPTR_nRST_STOP_BITMASK                    0x00001000UL
#define FLASH_OPTR_nRST_STOP_BITPOS                     12UL
#define FLASH_OPTR_nRST_STOP_BITLEN                     1UL
#define FLASH_OPTR_nRST_STOP_BITVAL_RESET               0UL
#define FLASH_OPTR_nRST_STOP_BITVAL_NO_RESET            1UL

/* FLASH_OPTR_nRST_STDBY (RW) */
#define FLASH_OPTR_nRST_STDBY_BITMASK                   0x00002000UL
#define FLASH_OPTR_nRST_STDBY_BITPOS                    13UL
#define FLASH_OPTR_nRST_STDBY_BITLEN                    1UL
#define FLASH_OPTR_nRST_STDBY_BITVAL_RESET              0UL
#define FLASH_OPTR_nRST_STDBY_BITVAL_NO_RESET           1UL

/* FLASH_OPTR_nRST_SHDW (RW) */
#define FLASH_OPTR_nRST_SHDW_BITMASK                    0x00004000UL
#define FLASH_OPTR_nRST_SHDW_BITPOS                     14UL
#define FLASH_OPTR_nRST_SHDW_BITLEN                     1UL
#define FLASH_OPTR_nRST_SHDW_BITVAL_RESET               0UL
#define FLASH_OPTR_nRST_SHDW_BITVAL_NO_RESET            1UL

/* FLASH_OPTR_IDWG_SW (RW) */
#define FLASH_OPTR_IWDG_SW_BITMASK                      0x00010000UL
#define FLASH_OPTR_IWDG_SW_BITPOS                       16UL
#define FLASH_OPTR_IWDG_SW_BITLEN                       1UL
#define FLASH_OPTR_IWDG_SW_BITVAL_HARDWARE              0UL
#define FLASH_OPTR_IWDG_SW_BITVAL_SOFTWARE              1UL

/* FLASH_OPTR_IDWG_STOP (RW) */
#define FLASH_OPTR_IWDG_STOP_BITMASK                    0x00020000UL
#define FLASH_OPTR_IWDG_STOP_BITPOS                     17UL
#define FLASH_OPTR_IWDG_STOP_BITLEN                     1UL
#define FLASH_OPTR_IWDG_STOP_BITVAL_FROZEN              0UL
#define FLASH_OPTR_IWDG_STOP_BITVAL_RUNNING             1UL

/* FLASH_OPTR_IDWG_STDBY (RW) */
#define FLASH_OPTR_IWDG_STDBY_BITMASK                   0x00040000UL
#define FLASH_OPTR_IWDG_STDBY_BITPOS                    18UL
#define FLASH_OPTR_IWDG_STDBY_BITLEN                    1UL
#define FLASH_OPTR_IWDG_STDBY_BITVAL_FROZEN             0UL
#define FLASH_OPTR_IWDG_STDBY_BITVAL_RUNNING            1UL

/* FLASH_OPTR_WWDG_SW (RW) */
#define FLASH_OPTR_WWDG_SW_BITMASK                      0x00080000UL
#define FLASH_OPTR_WWDG_SW_BITPOS                       19UL
#define FLASH_OPTR_WWDG_SW_BITLEN                       1UL
#define FLASH_OPTR_WWDG_SW_BITVAL_HARDWARE              0UL
#define FLASH_OPTR_WWDG_SW_BITVAL_SOFTWARE              1UL

/* FLASH_OPTR_BFB2 (RW) */
#define FLASH_OPTR_BFB2_BITMASK                         0x00100000UL
#define FLASH_OPTR_BFB2_BITPOS                          20UL
#define FLASH_OPTR_BFB2_BITLEN                          1UL
#define FLASH_OPTR_BFB2_BITVAL_ENABLE                   1UL
#define FLASH_OPTR_BFB2_BITVAL_DISABLE                  0UL

/* FLASH_OPTR_DUALBANK (RW) */
#define FLASH_OPTR_DUALBANK_BITMASK                     0x00200000UL
#define FLASH_OPTR_DUALBANK_BITPOS                      21UL
#define FLASH_OPTR_DUALBANK_BITLEN                      1UL
#define FLASH_OPTR_DUALBANK_BITVAL_SINGLEBANK           0UL
#define FLASH_OPTR_DUALBANK_BITVAL_DUALBANK             1UL

/* FLASH_OPTR_nBOOT1 (RW) */
#define FLASH_OPTR_nBOOT1_BITMASK                       0x00800000UL
#define FLASH_OPTR_nBOOT1_BITPOS                        23UL
#define FLASH_OPTR_nBOOT1_BITLEN                        1UL

/* FLASH_OPTR_SRAM2_PE (RW) */
#define FLASH_OPTR_SRAM2_PE_BITMASK                     0x01000000UL
#define FLASH_OPTR_SRAM2_PE_BITPOS                      24UL
#define FLASH_OPTR_SRAM2_PE_BITLEN                      1UL
#define FLASH_OPTR_SRAM2_PE_BITVAL_ENABLE               1UL
#define FLASH_OPTR_SRAM2_PE_BITVAL_DISABLE              0UL

/* FLASH_OPTR_SRAM2_RST (RW) */
#define FLASH_OPTR_SRAM2_RST_BITMASK                    0x02000000UL
#define FLASH_OPTR_SRAM2_RST_BITPOS                     25UL
#define FLASH_OPTR_SRAM2_RST_BITLEN                     1UL
#define FLASH_OPTR_SRAM2_RST_BITVAL_ERASED              0UL
#define FLASH_OPTR_SRAM2_RST_BITVAL_NOT_ERASED          1UL

/* FLASH_PCROP1SR_STRT (RW) */
#define FLASH_PCROP1SR_PCROP1_STRT_BITMASK              0x0000FFFFUL
#define FLASH_PCROP1SR_PCROP1_STRT_BITPOS               0UL
#define FLASH_PCROP1SR_PCROP1_STRT_BITLEN               16UL

/* FLASH_PCROP1ER_PCROP1_END (RW) */
#define FLASH_PCROP1ER_PCROP1_END_BITMASK               0x0000FFFFUL
#define FLASH_PCROP1ER_PCROP1_END_BITPOS                0UL
#define FLASH_PCROP1ER_PCROP1_END_BITLEN                16UL

/* FLASH_PCROP1ER_PCROP_RDP (RS) */
#define FLASH_PCROP1ER_PCROP_RDP_BITMASK                0x80000000UL
#define FLASH_PCROP1ER_PCROP_RDP_BITPOS                 31UL
#define FLASH_PCROP1ER_PCROP_RDP_BITLEN                 1UL

/* FLASH_WRP1AR_WRP1A_STRT (RW) */
#define FLASH_WRP1AR_WRP1A_STRT_BITMASK                 0x000000FFUL
#define FLASH_WRP1AR_WRP1A_STRT_BITPOS                  0UL
#define FLASH_WRP1AR_WRP1A_STRT_BITLEN                  8UL

/* FLASH_WRP1AR_WRP1A_END (RW) */
#define FLASH_WRP1AR_WRP1A_END_BITMASK                  0x00FF0000UL
#define FLASH_WRP1AR_WRP1A_END_BITPOS                   16UL
#define FLASH_WRP1AR_WRP1A_END_BITLEN                   8UL

/* FLASH_WRP1BR_WRP1B_STRT (RW) */
#define FLASH_WRP1BR_WRP1B_STRT_BITMASK                 0x000000FFUL
#define FLASH_WRP1BR_WRP1B_STRT_BITPOS                  0UL
#define FLASH_WRP1BR_WRP1B_STRT_BITLEN                  8UL

/* FLASH_WRP1BR_WRP1B_END (RW) */
#define FLASH_WRP1BR_WRP1B_END_BITMASK                  0x00FF0000UL
#define FLASH_WRP1BR_WRP1B_END_BITPOS                   16UL
#define FLASH_WRP1BR_WRP1B_END_BITLEN                   8UL

/* FLASH_PCROP2SR_STRT (RW) */
#define FLASH_PCROP2SR_PCROP2_STRT_BITMASK              0x0000FFFFUL
#define FLASH_PCROP2SR_PCROP2_STRT_BITPOS               0UL
#define FLASH_PCROP2SR_PCROP2_STRT_BITLEN               16UL

/* FLASH_PCROP2ER_PCROP2_END (RW) */
#define FLASH_PCROP2ER_PCROP2_END_BITMASK               0x0000FFFFUL
#define FLASH_PCROP2ER_PCROP2_END_BITPOS                0UL
#define FLASH_PCROP2ER_PCROP2_END_BITLEN                16UL

/* FLASH_WRP2AR_WRP2A_STRT (RW) */
#define FLASH_WRP2AR_WRP2A_STRT_BITMASK                 0x000000FFUL
#define FLASH_WRP2AR_WRP2A_STRT_BITPOS                  0UL
#define FLASH_WRP2AR_WRP2A_STRT_BITLEN                  8UL

/* FLASH_WRP2AR_WRP2A_END (RW) */
#define FLASH_WRP2AR_WRP2A_END_BITMASK                  0x00FF0000UL
#define FLASH_WRP2AR_WRP2A_END_BITPOS                   16UL
#define FLASH_WRP2AR_WRP2A_END_BITLEN                   8UL

/* FLASH_WRP2BR_WRP2B_STRT (RW) */
#define FLASH_WRP2BR_WRP2B_STRT_BITMASK                 0x000000FFUL
#define FLASH_WRP2BR_WRP2B_STRT_BITPOS                  0UL
#define FLASH_WRP2BR_WRP2B_STRT_BITLEN                  8UL

/* FLASH_WRP2BR_WRP2B_END (RW) */
#define FLASH_WRP2BR_WRP2B_END_BITMASK                  0x00FF0000UL
#define FLASH_WRP2BR_WRP2B_END_BITPOS                   16UL
#define FLASH_WRP2BR_WRP2B_END_BITLEN                   8UL

#endif /* #ifndef FLASH_REG_H */