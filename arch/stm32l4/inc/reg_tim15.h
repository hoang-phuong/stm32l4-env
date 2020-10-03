
#ifndef _REG_TIM15_H_
#define _REG_TIM15_H_

#include "Std_Types.h"
#include "reg_functions.h"

#define TIM15_CR1                        REGISTER(0x40014000UL)
#define TIM15_CR1_CEN_POS                0UL
#define TIM15_CR1_CEN_LEN                1UL
#define TIM15_CR1_UDIS_POS               1UL
#define TIM15_CR1_UDIS_LEN               1UL
#define TIM15_CR1_URS_POS                2UL
#define TIM15_CR1_URS_LEN                1UL
#define TIM15_CR1_OPM_POS                3UL
#define TIM15_CR1_OPM_LEN                1UL
#define TIM15_CR1_ARPE_POS               7UL
#define TIM15_CR1_ARPE_LEN               1UL
#define TIM15_CR1_CKD_POS                8UL
#define TIM15_CR1_CKD_LEN                2UL
#define TIM15_CR1_UIFREMAP_POS           11UL
#define TIM15_CR1_UIFREMAP_LEN           1UL

#define TIM15_CR2                        REGISTER(0x40014004UL)
#define TIM15_CR2_CCPC_POS               0UL
#define TIM15_CR2_CCPC_LEN               1UL
#define TIM15_CR2_CCUS_POS               2UL
#define TIM15_CR2_CCUS_LEN               1UL
#define TIM15_CR2_CCDS_POS               3UL
#define TIM15_CR2_CCDS_LEN               1UL
#define TIM15_CR2_MMS_POS                4UL
#define TIM15_CR2_MMS_LEN                3UL
#define TIM15_CR2_TI1S_POS               7UL
#define TIM15_CR2_TI1S_LEN               1UL
#define TIM15_CR2_OIS1_POS               8UL
#define TIM15_CR2_OIS1_LEN               1UL
#define TIM15_CR2_OIS1N_POS              9UL
#define TIM15_CR2_OIS1N_LEN              1UL
#define TIM15_CR2_OIS2_POS               10UL
#define TIM15_CR2_OIS2_LEN               1UL

#define TIM15_SMCR                       REGISTER(0x40014008UL)
#define TIM15_SMCR_SMS_POS               0UL
#define TIM15_SMCR_SMS_LEN               3UL
#define TIM15_SMCR_TS_POS                4UL
#define TIM15_SMCR_TS_LEN                3UL
#define TIM15_SMCR_MSM_POS               7UL
#define TIM15_SMCR_MSM_LEN               1UL
#define TIM15_SMCR_SMS3_POS              16UL
#define TIM15_SMCR_SMS3_LEN              1UL

#define TIM15_DIER                       REGISTER(0x4001400CUL)
#define TIM15_DIER_UIE_POS               0UL
#define TIM15_DIER_UIE_LEN               1UL
#define TIM15_DIER_CC1IE_POS             1UL
#define TIM15_DIER_CC1IE_LEN             1UL
#define TIM15_DIER_CC2IE_POS             2UL
#define TIM15_DIER_CC2IE_LEN             1UL
#define TIM15_DIER_COMIE_POS             5UL
#define TIM15_DIER_COMIE_LEN             1UL
#define TIM15_DIER_TIE_POS               6UL
#define TIM15_DIER_TIE_LEN               1UL
#define TIM15_DIER_BIE_POS               7UL
#define TIM15_DIER_BIE_LEN               1UL
#define TIM15_DIER_UDE_POS               8UL
#define TIM15_DIER_UDE_LEN               1UL
#define TIM15_DIER_CC1DE_POS             9UL
#define TIM15_DIER_CC1DE_LEN             1UL
#define TIM15_DIER_CC2DE_POS             10UL
#define TIM15_DIER_CC2DE_LEN             1UL
#define TIM15_DIER_COMDE_POS             13UL
#define TIM15_DIER_COMDE_LEN             1UL
#define TIM15_DIER_TDE_POS               14UL
#define TIM15_DIER_TDE_LEN               1UL

#define TIM15_SR                         REGISTER(0x40014010UL)
#define TIM15_SR_UIF_POS                 0UL
#define TIM15_SR_UIF_LEN                 1UL
#define TIM15_SR_CC1IF_POS               1UL
#define TIM15_SR_CC1IF_LEN               1UL
#define TIM15_SR_CC2IF_POS               2UL
#define TIM15_SR_CC2IF_LEN               1UL
#define TIM15_SR_COMIF_POS               5UL
#define TIM15_SR_COMIF_LEN               1UL
#define TIM15_SR_TIF_POS                 6UL
#define TIM15_SR_TIF_LEN                 1UL
#define TIM15_SR_BIF_POS                 7UL
#define TIM15_SR_BIF_LEN                 1UL
#define TIM15_SR_CC1OF_POS               9UL
#define TIM15_SR_CC1OF_LEN               1UL
#define TIM15_SR_CC2OF_POS               10UL
#define TIM15_SR_CC2OF_LEN               1UL

#define TIM15_EGR                        REGISTER(0x40014014UL)
#define TIM15_EGR_UG_POS                 0UL
#define TIM15_EGR_UG_LEN                 1UL
#define TIM15_EGR_CC1G_POS               1UL
#define TIM15_EGR_CC1G_LEN               1UL
#define TIM15_EGR_CC2G_POS               2UL
#define TIM15_EGR_CC2G_LEN               1UL
#define TIM15_EGR_COMG_POS               5UL
#define TIM15_EGR_COMG_LEN               1UL
#define TIM15_EGR_TG_POS                 6UL
#define TIM15_EGR_TG_LEN                 1UL
#define TIM15_EGR_BG_POS                 7UL
#define TIM15_EGR_BG_LEN                 1UL

#define TIM15_CCMR1                      REGISTER(0x40014018UL)
#define TIM15_CCMR1_CC1S_POS             0UL
#define TIM15_CCMR1_CC1S_LEN             2UL
#define TIM15_CCMR1_OC1FE_POS            2UL
#define TIM15_CCMR1_OC1FE_LEN            1UL
#define TIM15_CCMR1_OC1PE_POS            3UL
#define TIM15_CCMR1_OC1PE_LEN            1UL
#define TIM15_CCMR1_OC1M_POS             4UL
#define TIM15_CCMR1_OC1M_LEN             3UL
#define TIM15_CCMR1_CC2S_POS             8UL
#define TIM15_CCMR1_CC2S_LEN             2UL
#define TIM15_CCMR1_OC2FE_POS            10UL
#define TIM15_CCMR1_OC2FE_LEN            1UL
#define TIM15_CCMR1_OC2PE_POS            11UL
#define TIM15_CCMR1_OC2PE_LEN            1UL
#define TIM15_CCMR1_OC2M_POS             12UL
#define TIM15_CCMR1_OC2M_LEN             3UL
#define TIM15_CCMR1_OC1M3_POS            16UL
#define TIM15_CCMR1_OC1M3_LEN            1UL
#define TIM15_CCMR1_OC2M3_POS            24UL
#define TIM15_CCMR1_OC2M3_LEN            1UL
#define TIM15_CCMR1_IC1PSC_POS           2UL
#define TIM15_CCMR1_IC1PSC_LEN           2UL
#define TIM15_CCMR1_IC1F_POS             4UL
#define TIM15_CCMR1_IC1F_LEN             4UL
#define TIM15_CCMR1_IC2PSC_POS           10UL
#define TIM15_CCMR1_IC2PSC_LEN           2UL
#define TIM15_CCMR1_IC2F_POS             12UL
#define TIM15_CCMR1_IC2F_LEN             4UL

#define TIM15_CCER                       REGISTER(0x40014020UL)
#define TIM15_CCER_CC1E_POS              0UL
#define TIM15_CCER_CC1E_LEN              1UL
#define TIM15_CCER_CC1P_POS              1UL
#define TIM15_CCER_CC1P_LEN              1UL
#define TIM15_CCER_CC1NE_POS             2UL
#define TIM15_CCER_CC1NE_LEN             1UL
#define TIM15_CCER_CC1NP_POS             3UL
#define TIM15_CCER_CC1NP_LEN             1UL
#define TIM15_CCER_CC2E_POS              4UL
#define TIM15_CCER_CC2E_LEN              1UL
#define TIM15_CCER_CC2P_POS              5UL
#define TIM15_CCER_CC2P_LEN              1UL
#define TIM15_CCER_CC2NP_POS             7UL
#define TIM15_CCER_CC2NP_LEN             1UL

#define TIM15_CNT                        REGISTER(0x40014024UL)
#define TIM15_CNT_CNT_POS                0UL
#define TIM15_CNT_CNT_LEN                16UL
#define TIM15_CNT_UIFCP_POS              31UL
#define TIM15_CNT_UIFCP_LEN              1UL

#define TIM15_PSC                        REGISTER(0x40014028UL)
#define TIM15_PSC_PSC_POS                0UL
#define TIM15_PSC_PSC_LEN                16UL

#define TIM15_ARR                        REGISTER(0x4001402CUL)
#define TIM15_ARR_ARR_POS                0UL
#define TIM15_ARR_ARR_LEN                16UL

#define TIM15_RCR                        REGISTER(0x40014030UL)
#define TIM15_RCR_REP_POS                0UL
#define TIM15_RCR_REP_LEN                8UL

#define TIM15_CCR1                       REGISTER(0x40014034UL)
#define TIM15_CCR1_CCR1_POS              0UL
#define TIM15_CCR1_CCR1_LEN              16UL

#define TIM15_CCR2                       REGISTER(0x40014038UL)
#define TIM15_CCR2_CCR2_POS              0UL
#define TIM15_CCR2_CCR2_LEN              16UL

#define TIM15_BDTR                       REGISTER(0x40014044UL)
#define TIM15_BDTR_DT_POS                0UL
#define TIM15_BDTR_DT_LEN                8U
#define TIM15_BDTR_LOCK_POS              8UL
#define TIM15_BDTR_LOCK_LEN              2U
#define TIM15_BDTR_OSSI_POS              10UL
#define TIM15_BDTR_OSSI_LEN              1U
#define TIM15_BDTR_OSSR_POS              11UL
#define TIM15_BDTR_OSSR_LEN              1U
#define TIM15_BDTR_BKE_POS               12UL
#define TIM15_BDTR_BKE_LEN               1U
#define TIM15_BDTR_BKP_POS               13UL
#define TIM15_BDTR_BKP_LEN               1U
#define TIM15_BDTR_AOE_POS               14UL
#define TIM15_BDTR_AOE_LEN               1U
#define TIM15_BDTR_MOE_POS               15UL
#define TIM15_BDTR_MOE_LEN               1U

#define TIM15_DCR                        REGISTER(0x40014048UL)
#define TIM15_DCR_DBA_POS                0UL
#define TIM15_DCR_DBA_LEN                5UL
#define TIM15_DCR_DBL_POS                8UL
#define TIM15_DCR_DBL_LEN                5UL

#define TIM15_DMAR                       REGISTER(0x4001404CUL)
#define TIM15_DMAR_DMAB_POS              0UL
#define TIM15_DMAR_DMAB_LEN              16UL

#define TIM15_OR1                        REGISTER(0x40014050UL)
#define TIM15_OR1_T1_RMP_POS             0UL
#define TIM15_OR1_T1_RMP_LEN             1UL
#define TIM15_OR1_ENCODER_MODE_RMP_POS   1UL
#define TIM15_OR1_ENCODER_MODE_RMP_LEN   2UL

#define TIM15_OR2                        REGISTER(0x40014060UL)
#define TIM15_OR2_BKINE_POS              0UL
#define TIM15_OR2_BKINE_LEN              1UL
#define TIM15_OR2_BKCMP1E_POS            1UL
#define TIM15_OR2_BKCMP1E_LEN            1UL
#define TIM15_OR2_BKCMP2E_POS            2UL
#define TIM15_OR2_BKCMP2E_LEN            1UL
#define TIM15_OR2_BKDF1BK0E_POS          8UL
#define TIM15_OR2_BKDF1BK0E_LEN          1UL
#define TIM15_OR2_BKINP_POS              9UL
#define TIM15_OR2_BKINP_LEN              1UL
#define TIM15_OR2_BKCMP1P_POS            10UL
#define TIM15_OR2_BKCMP1P_LEN            1UL
#define TIM15_OR2_BKCMP2P_POS            11UL
#define TIM15_OR2_BKCMP2P_LEN            1UL

#endif /* #ifndef _REG_TIM15_H_ */
