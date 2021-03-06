
#ifndef _REG_TIM5_H_
#define _REG_TIM5_H_

#include "Std_Types.h"
#include "reg_functions.h"

#define TIM5_CR1                        REGISTER(0x40000C00UL)
#define TIM5_CR1_CEN_POS                0UL
#define TIM5_CR1_CEN_LEN                1UL
#define TIM5_CR1_UDIS_POS               1UL
#define TIM5_CR1_UDIS_LEN               1UL
#define TIM5_CR1_URS_POS                2UL
#define TIM5_CR1_URS_LEN                1UL
#define TIM5_CR1_OPM_POS                3UL
#define TIM5_CR1_OPM_LEN                1UL
#define TIM5_CR1_DIR_POS                4UL
#define TIM5_CR1_DIR_LEN                1UL
#define TIM5_CR1_CMS_POS                5UL
#define TIM5_CR1_CMS_LEN                2UL
#define TIM5_CR1_ARPE_POS               7UL
#define TIM5_CR1_ARPE_LEN               1UL
#define TIM5_CR1_CKD_POS                8UL
#define TIM5_CR1_CKD_LEN                2UL
#define TIM5_CR1_UIFREMAP_POS           11UL
#define TIM5_CR1_UIFREMAP_LEN           1UL

#define TIM5_CR2                        REGISTER(0x40000C04UL)
#define TIM5_CR2_CCDS_POS               3UL
#define TIM5_CR2_CCDS_LEN               1UL
#define TIM5_CR2_MMS_POS                4UL
#define TIM5_CR2_MMS_LEN                3UL
#define TIM5_CR2_TI1S_POS               7UL
#define TIM5_CR2_TI1S_LEN               1UL

#define TIM5_SMCR                       REGISTER(0x40000C08UL)
#define TIM5_SMCR_SMS_POS               0UL
#define TIM5_SMCR_SMS_LEN               3UL
#define TIM5_SMCR_OCCS_POS              3UL
#define TIM5_SMCR_OCCS_LEN              1UL
#define TIM5_SMCR_TS_POS                4UL
#define TIM5_SMCR_TS_LEN                3UL
#define TIM5_SMCR_MSM_POS               7UL
#define TIM5_SMCR_MSM_LEN               1UL
#define TIM5_SMCR_ETF_POS               8UL
#define TIM5_SMCR_ETF_LEN               4UL
#define TIM5_SMCR_ETPS_POS              12UL
#define TIM5_SMCR_ETPS_LEN              2UL
#define TIM5_SMCR_ECE_POS               14UL
#define TIM5_SMCR_ECE_LEN               1UL
#define TIM5_SMCR_ETP_POS               15UL
#define TIM5_SMCR_ETP_LEN               1UL
#define TIM5_SMCR_SMS3_POS              16UL
#define TIM5_SMCR_SMS3_LEN              1UL

#define TIM5_DIER                       REGISTER(0x40000C0CUL)
#define TIM5_DIER_UIE_POS               0UL
#define TIM5_DIER_UIE_LEN               1UL
#define TIM5_DIER_CC1IE_POS             1UL
#define TIM5_DIER_CC1IE_LEN             1UL
#define TIM5_DIER_CC2IE_POS             2UL
#define TIM5_DIER_CC2IE_LEN             1UL
#define TIM5_DIER_CC3IE_POS             3UL
#define TIM5_DIER_CC3IE_LEN             1UL
#define TIM5_DIER_CC4IE_POS             4UL
#define TIM5_DIER_CC4IE_LEN             1UL
#define TIM5_DIER_TIE_POS               6UL
#define TIM5_DIER_TIE_LEN               1UL
#define TIM5_DIER_UDE_POS               8UL
#define TIM5_DIER_UDE_LEN               1UL
#define TIM5_DIER_CC1DE_POS             9UL
#define TIM5_DIER_CC1DE_LEN             1UL
#define TIM5_DIER_CC2DE_POS             10UL
#define TIM5_DIER_CC2DE_LEN             1UL
#define TIM5_DIER_CC3DE_POS             11UL
#define TIM5_DIER_CC3DE_LEN             1UL
#define TIM5_DIER_CC4DE_POS             12UL
#define TIM5_DIER_CC4DE_LEN             1UL
#define TIM5_DIER_TDE_POS               14UL
#define TIM5_DIER_TDE_LEN               1UL

#define TIM5_SR                         REGISTER(0x40000C10UL)
#define TIM5_SR_UIF_POS                 0UL
#define TIM5_SR_UIF_LEN                 1UL
#define TIM5_SR_CC1IF_POS               1UL
#define TIM5_SR_CC1IF_LEN               1UL
#define TIM5_SR_CC2IF_POS               2UL
#define TIM5_SR_CC2IF_LEN               1UL
#define TIM5_SR_CC3IF_POS               3UL
#define TIM5_SR_CC3IF_LEN               1UL
#define TIM5_SR_CC4IF_POS               4UL
#define TIM5_SR_CC4IF_LEN               1UL
#define TIM5_SR_TIF_POS                 6UL
#define TIM5_SR_TIF_LEN                 1UL
#define TIM5_SR_CC1OF_POS               9UL
#define TIM5_SR_CC1OF_LEN               1UL
#define TIM5_SR_CC2OF_POS               10UL
#define TIM5_SR_CC2OF_LEN               1UL
#define TIM5_SR_CC3OF_POS               11UL
#define TIM5_SR_CC3OF_LEN               1UL
#define TIM5_SR_CC4OF_POS               12UL
#define TIM5_SR_CC4OF_LEN               1UL

#define TIM5_EGR                        REGISTER(0x40000C14UL)
#define TIM5_EGR_UG_POS                 0UL
#define TIM5_EGR_UG_LEN                 1UL
#define TIM5_EGR_CC1G_POS               1UL
#define TIM5_EGR_CC1G_LEN               1UL
#define TIM5_EGR_CC2G_POS               2UL
#define TIM5_EGR_CC2G_LEN               1UL
#define TIM5_EGR_CC3G_POS               3UL
#define TIM5_EGR_CC3G_LEN               1UL
#define TIM5_EGR_CC4G_POS               4UL
#define TIM5_EGR_CC4G_LEN               1UL
#define TIM5_EGR_TG_POS                 6UL
#define TIM5_EGR_TG_LEN                 1UL

#define TIM5_CCMR1                      REGISTER(0x40000C18UL)
#define TIM5_CCMR1_CC1S_POS             0UL
#define TIM5_CCMR1_CC1S_LEN             2UL
#define TIM5_CCMR1_OC1FE_POS            2UL
#define TIM5_CCMR1_OC1FE_LEN            1UL
#define TIM5_CCMR1_OC1PE_POS            3UL
#define TIM5_CCMR1_OC1PE_LEN            1UL
#define TIM5_CCMR1_OC1M_POS             4UL
#define TIM5_CCMR1_OC1M_LEN             3UL
#define TIM5_CCMR1_OC1CE_POS            7UL
#define TIM5_CCMR1_OC1CE_LEN            1UL
#define TIM5_CCMR1_CC2S_POS             8UL
#define TIM5_CCMR1_CC2S_LEN             2UL
#define TIM5_CCMR1_OC2FE_POS            10UL
#define TIM5_CCMR1_OC2FE_LEN            1UL
#define TIM5_CCMR1_OC2PE_POS            11UL
#define TIM5_CCMR1_OC2PE_LEN            1UL
#define TIM5_CCMR1_OC2M_POS             12UL
#define TIM5_CCMR1_OC2M_LEN             3UL
#define TIM5_CCMR1_OC2CE_POS            15UL
#define TIM5_CCMR1_OC2CE_LEN            1UL
#define TIM5_CCMR1_OC1M3_POS            16UL
#define TIM5_CCMR1_OC1M3_LEN            1UL
#define TIM5_CCMR1_OC2M3_POS            24UL
#define TIM5_CCMR1_OC2M3_LEN            1UL
#define TIM5_CCMR1_IC1PSC_POS           2UL
#define TIM5_CCMR1_IC1PSC_LEN           2UL
#define TIM5_CCMR1_IC1F_POS             4UL
#define TIM5_CCMR1_IC1F_LEN             4UL
#define TIM5_CCMR1_IC2PSC_POS           10UL
#define TIM5_CCMR1_IC2PSC_LEN           2UL
#define TIM5_CCMR1_IC2F_POS             12UL
#define TIM5_CCMR1_IC2F_LEN             4UL

#define TIM5_CCMR2                      REGISTER(0x40000C1CUL)
#define TIM5_CCMR2_CC3S_POS             0UL
#define TIM5_CCMR2_CC3S_LEN             2UL
#define TIM5_CCMR2_OC3FE_POS            2UL
#define TIM5_CCMR2_OC3FE_LEN            1UL
#define TIM5_CCMR2_OC3PE_POS            3UL
#define TIM5_CCMR2_OC3PE_LEN            1UL
#define TIM5_CCMR2_OC3M_POS             4UL
#define TIM5_CCMR2_OC3M_LEN             3UL
#define TIM5_CCMR2_OC3CE_POS            7UL
#define TIM5_CCMR2_OC3CE_LEN            1UL
#define TIM5_CCMR2_CC4S_POS             8UL
#define TIM5_CCMR2_CC4S_LEN             2UL
#define TIM5_CCMR2_OC4FE_POS            10UL
#define TIM5_CCMR2_OC4FE_LEN            1UL
#define TIM5_CCMR2_OC4PE_POS            11UL
#define TIM5_CCMR2_OC4PE_LEN            1UL
#define TIM5_CCMR2_OC4M_POS             12UL
#define TIM5_CCMR2_OC4M_LEN             3UL
#define TIM5_CCMR2_OC4CE_POS            15UL
#define TIM5_CCMR2_OC4CE_LEN            1UL
#define TIM5_CCMR2_OC3M3_POS            16UL
#define TIM5_CCMR2_OC3M3_LEN            1UL
#define TIM5_CCMR2_OC4M3_POS            24UL
#define TIM5_CCMR2_OC4M3_LEN            1UL
#define TIM5_CCMR2_IC3PSC_POS           2UL
#define TIM5_CCMR2_IC3PSC_LEN           2UL
#define TIM5_CCMR2_IC3F_POS             4UL
#define TIM5_CCMR2_IC3F_LEN             4UL
#define TIM5_CCMR2_IC4PSC_POS           10UL
#define TIM5_CCMR2_IC4PSC_LEN           2UL
#define TIM5_CCMR2_IC4F_POS             12UL
#define TIM5_CCMR2_IC4F_LEN             4UL

#define TIM5_CCER                       REGISTER(0x40000C20UL)
#define TIM5_CCER_CC1E_POS              0UL
#define TIM5_CCER_CC1E_LEN              1UL
#define TIM5_CCER_CC1P_POS              1UL
#define TIM5_CCER_CC1P_LEN              1UL
#define TIM5_CCER_CC1NP_POS             3UL
#define TIM5_CCER_CC1NP_LEN             1UL
#define TIM5_CCER_CC2E_POS              4UL
#define TIM5_CCER_CC2E_LEN              1UL
#define TIM5_CCER_CC2P_POS              5UL
#define TIM5_CCER_CC2P_LEN              1UL
#define TIM5_CCER_CC2NP_POS             7UL
#define TIM5_CCER_CC2NP_LEN             1UL
#define TIM5_CCER_CC3E_POS              8UL
#define TIM5_CCER_CC3E_LEN              1UL
#define TIM5_CCER_CC3P_POS              9UL
#define TIM5_CCER_CC3P_LEN              1UL
#define TIM5_CCER_CC3NP_POS             11UL
#define TIM5_CCER_CC3NP_LEN             1UL
#define TIM5_CCER_CC4E_POS              12UL
#define TIM5_CCER_CC4E_LEN              1UL
#define TIM5_CCER_CC4P_POS              13UL
#define TIM5_CCER_CC4P_LEN              1UL
#define TIM5_CCER_CC4NP_POS             15UL
#define TIM5_CCER_CC4NP_LEN             1UL

#define TIM5_CNT                        REGISTER(0x40000C24UL)
#define TIM5_CNT_CNT_POS                0UL
#define TIM5_CNT_CNT_LEN                32UL
#define TIM5_CNT_UIFCP_POS              31UL
#define TIM5_CNT_UIFCP_LEN              1UL

#define TIM5_PSC                        REGISTER(0x40000C28UL)
#define TIM5_PSC_PSC_POS                0UL
#define TIM5_PSC_PSC_LEN                16UL

#define TIM5_ARR                        REGISTER(0x40000C2CUL)
#define TIM5_ARR_ARR_POS                0UL
#define TIM5_ARR_ARR_LEN                32UL

#define TIM5_CCR1                       REGISTER(0x40000C34UL)
#define TIM5_CCR1_CCR1_POS              0UL
#define TIM5_CCR1_CCR1_LEN              32UL

#define TIM5_CCR2                       REGISTER(0x40000C38UL)
#define TIM5_CCR2_CCR2_POS              0UL
#define TIM5_CCR2_CCR2_LEN              32UL

#define TIM5_CCR3                       REGISTER(0x40000C3CUL)
#define TIM5_CCR3_CCR3_POS              0UL
#define TIM5_CCR3_CCR3_LEN              32UL

#define TIM5_CCR4                       REGISTER(0x40000C40UL)
#define TIM5_CCR4_CCR4_POS              0UL
#define TIM5_CCR4_CCR4_LEN              32UL

#define TIM5_DCR                        REGISTER(0x40000C48UL)
#define TIM5_DCR_DBA_POS                0UL
#define TIM5_DCR_DBA_LEN                5UL
#define TIM5_DCR_DBL_POS                8UL
#define TIM5_DCR_DBL_LEN                5UL

#define TIM5_DMAR                       REGISTER(0x40000C4CUL)
#define TIM5_DMAR_DMAB_POS              0UL
#define TIM5_DMAR_DMAB_LEN              16UL

#endif /* #ifndef _REG_TIM5_H_ */
