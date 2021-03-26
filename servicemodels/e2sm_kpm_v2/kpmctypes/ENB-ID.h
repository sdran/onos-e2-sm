/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../v2/e2sm_kpm_v2.0.2-rm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_ENB_ID_H_
#define	_ENB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ENB_ID_PR {
	ENB_ID_PR_NOTHING,	/* No components present */
	ENB_ID_PR_macro_eNB_ID,
	ENB_ID_PR_home_eNB_ID
	/* Extensions may appear below */
	
} ENB_ID_PR;

/* ENB-ID */
typedef struct ENB_ID {
	ENB_ID_PR present;
	union ENB_ID_u {
		BIT_STRING_t	 macro_eNB_ID;
		BIT_STRING_t	 home_eNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_ENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_ENB_ID_1[2];
extern asn_per_constraints_t asn_PER_type_ENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ENB_ID_H_ */
#include "asn_internal.h"
