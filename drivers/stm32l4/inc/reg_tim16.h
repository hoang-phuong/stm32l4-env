
#ifndef _REG_TIM16_H_
#define _REG_TIM16_H_

#include "Std_Types.h"
#include "reg_functions.h"

#define TIM16_CR1                        REGISTER(0x40014400UL)
#define TIM16_CR1_CEN_POS                0UL
#define TIM16_CR1_CEN_LEN                1UL
#define TIM16_CR1_UDIS_POS               1UL
#define TIM16_CR1_UDIS_LEN               1UL
#define TIM16_CR1_URS_POS                2UL
#define TIM16_CR1_URS_LEN                1UL
#define TIM16_CR1_OPM_POS                3UL
#define TIM16_CR1_OPM_LEN                1UL
#define TIM16_CR1_ARPE_POS               7UL
#define TIM16_CR1_ARPE_LEN               1UL
#define TIM16_CR1_CKD_POS                8UL
#define TIM16_CR1_CKD_LEN                2UL
#define TIM16_CR1_UIFREMAP_POS           11UL
#define TIM16_CR1_UIFREMAP_LEN           1UL

#define TIM16_CR2                        REGISTER(0x40014404UL)
#define TIM16_CR2_CCPC_POS               0UL
#define TIM16_CR2_CCPC_LEN               1UL
#define TIM16_CR2_CCUS_POS               2UL
#define TIM16_CR2_CCUS_LEN               1UL
#define TIM16_CR2_CCDS_POS               3UL
#define TIM16_CR2_CCDS_LEN               1UL
#define TIM16_CR2_OIS1_POS               8UL
#define TIM16_CR2_OIS1_LEN               1UL
#define TIM16_CR2_OIS1N_POS              9UL
#define TIM16_CR2_OIS1N_LEN              1UL

#define TIM16_DIER                       REGISTER(0x4001440CUL)
#define TIM16_DIER_UIE_POS               0UL
#define TIM16_DIER_UIE_LEN               1UL
#define TIM16_DIER_CC1IE_POS             1UL
#define TIM16_DIER_CC1IE_LEN             1UL
#define TIM16_DIER_COMIE_POS             5UL
#define TIM16_DIER_COMIE_LEN             1UL
#define TIM16_DIER_BIE_POS               7UL
#define TIM16_DIER_BIE_LEN               1UL
#define TIM16_DIER_UDE_POS               8UL
#define TIM16_DIER_UDE_LEN               1UL
#define TIM16_DIER_CC1DE_POS             9UL
#define TIM16_DIER_CC1DE_LEN             1UL

#define TIM16_SR                         REGISTER(0x40014410UL)
#define TIM16_SR_UIF_POS                 0UL
#define TIM16_SR_UIF_LEN                 1UL
#define TIM16_SR_CC1IF_POS               1UL
#define TIM16_SR_CC1IF_LEN               1UL
#define TIM16_SR_COMIF_POS               5UL
#define TIM16_SR_COMIF_LEN               1UL
#define TIM16_SR_BIF_POS                 7UL
#define TIM16_SR_BIF_LEN                 1UL
#define TIM16_SR_CC1OF_POS               9UL
#define TIM16_SR_CC1OF_LEN               1UL

#define TIM16_EGR                        REGISTER(0x40014414UL)
#define TIM16_EGR_UG_POS                 0UL
#define TIM16_EGR_UG_LEN                 1UL
#define TIM16_EGR_CC1G_POS               1UL
#define TIM16_EGR_CC1G_LEN               1UL
#define TIM16_EGR_COMG_POS               5UL
#define TIM16_EGR_COMG_LEN               1UL
#define TIM16_EGR_BG_POS                 7UL
#define TIM16_EGR_BG_LEN                 1UL

#define TIM16_CCMR1                      REGISTER(0x40014418UL)
#define TIM16_CCMR1_CC1S_POS             0UL
#define TIM16_CCMR1_CC1S_LEN             2UL
#define TIM16_CCMR1_OC1FE_POS            2UL
#define TIM16_CCMR1_OC1FE_LEN            1UL
#define TIM16_CCMR1_OC1PE_POS            3UL
#define TIM16_CCMR1_OC1PE_LEN            1UL
#define TIM16_CCMR1_OC1M_POS             4UL
#define TIM16_CCMR1_OC1M_LEN             3UL
#define TIM16_CCMR1_OC1M3_POS            16UL
#define TIM16_CCMR1_OC1M3_LEN            1UL
#define TIM16_CCMR1_IC1PSC_POS           2UL
#define TIM16_CCMR1_IC1PSC_LEN           2UL
#define TIM16_CCMR1_IC1F_POS             4UL
#define TIM16_CCMR1_IC1F_LEN             4UL

#define TIM16_CCER                       REGISTER(0x40014420UL)
#define TIM16_CCER_CC1E_POS              0UL
#define TIM16_CCER_CC1E_LEN              1UL
#define TIM16_CCER_CC1P_POS              1UL
#define TIM16_CCER_CC1P_LEN              1UL
#define TIM16_CCER_CC1NE_POS             2UL
#define TIM16_CCER_CC1NE_LEN             1UL
#define TIM16_CCER_CC1NP_POS             3UL
#define TIM16_CCER_CC1NP_LEN             1UL

#define TIM16_CNT                        REGISTER(0x40014424UL)
#define TIM16_CNT_CNT_POS                0UL
#define TIM16_CNT_CNT_LEN                16UL
#define TIM16_CNT_UIFCP_POS              31UL
#define TIM16_CNT_UIFCP_LEN              1UL

#define TIM16_PSC                        REGISTER(0x40014428UL)
#define TIM16_PSC_PSC_POS                0UL
#define TIM16_PSC_PSC_LEN                16UL

#define TIM16_ARR                        REGISTER(0x4001442CUL)
#define TIM16_ARR_ARR_POS                0UL
#define TIM16_ARR_ARR_LEN                16UL

#define TIM16_RCR                        REGISTER(0x40014430UL)
#define TIM16_RCR_REP_POS                0UL
#define TIM16_RCR_REP_LEN                8UL

#define TIM16_CCR1                       REGISTER(0x40014434UL)
#define TIM16_CCR1_CCR1_POS              0UL
#define TIM16_CCR1_CCR1_LEN              16UL

#define TIM16_CCR2                       REGISTER(0x40014438UL)
#define TIM16_CCR2_CCR2_POS              0UL
#define TIM16_CCR2_CCR2_LEN              16UL

#define TIM16_BDTR                       REGISTER(0x40014444UL)
#define TIM16_BDTR_DT_POS                0UL
#define TIM16_BDTR_DT_LEN                8U
#define TIM16_BDTR_LOCK_POS              8UL
#define TIM16_BDTR_LOCK_LEN              2U
#define TIM16_BDTR_OSSI_POS              10UL
#define TIM16_BDTR_OSSI_LEN              1U
#define TIM16_BDTR_OSSR_POS              11UL
#define TIM16_BDTR_OSSR_LEN              1U
#define TIM16_BDTR_BKE_POS               12UL
#define TIM16_BDTR_BKE_LEN               1U
#define TIM16_BDTR_BKP_POS               13UL
#define TIM16_BDTR_BKP_LEN               1U
#define TIM16_BDTR_AOE_POS               14UL
#define TIM16_BDTR_AOE_LEN               1U
#define TIM16_BDTR_MOE_POS               15UL
#define TIM16_BDTR_MOE_LEN               1U

#define TIM16_DCR                        REGISTER(0x40014448UL)
#define TIM16_DCR_DBA_POS                0UL
#define TIM16_DCR_DBA_LEN                5UL
#define TIM16_DCR_DBL_POS                8UL
#define TIM16_DCR_DBL_LEN                5UL

#define TIM16_DMAR                       REGISTER(0x4001444CUL)
#define TIM16_DMAR_DMAB_POS              0UL
#define TIM16_DMAR_DMAB_LEN              16UL

#define TIM16_OR1                        REGISTER(0x40014450UL)
#define TIM16_OR1_T1_RMP_POS             0UL
#define TIM16_OR1_T1_RMP_LEN             2UL

#define TIM16_OR2                        REGISTER(0x40014460UL)
#define TIM16_OR2_BKINE_POS              0UL
#define TIM16_OR2_BKINE_LEN              1UL
#define TIM16_OR2_BKCMP1E_POS            1UL
#define TIM16_OR2_BKCMP1E_LEN            1UL
#define TIM16_OR2_BKCMP2E_POS            2UL
#define TIM16_OR2_BKCMP2E_LEN            1UL
#define TIM16_OR2_BKDF1BK1E_POS          8UL
#define TIM16_OR2_BKDF1BK1E_LEN          1UL
#define TIM16_OR2_BKINP_POS              9UL
#define TIM16_OR2_BKINP_LEN              1UL
#define TIM16_OR2_BKCMP1P_POS            10UL
#define TIM16_OR2_BKCMP1P_LEN            1UL
#define TIM16_OR2_BKCMP2P_POS            11UL
#define TIM16_OR2_BKCMP2P_LEN            1UL

#endif /* #ifndef _REG_TIM16_H_ */
