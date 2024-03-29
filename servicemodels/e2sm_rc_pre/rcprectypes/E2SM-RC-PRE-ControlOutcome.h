/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "e2sm-rc-pre-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_E2SM_RC_PRE_ControlOutcome_H_
#define	_E2SM_RC_PRE_ControlOutcome_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_RC_PRE_ControlOutcome_PR {
	E2SM_RC_PRE_ControlOutcome_PR_NOTHING,	/* No components present */
	E2SM_RC_PRE_ControlOutcome_PR_controlOutcome_Format1
	/* Extensions may appear below */
	
} E2SM_RC_PRE_ControlOutcome_PR;

/* Forward declarations */
struct E2SM_RC_PRE_ControlOutcome_Format1;

/* E2SM-RC-PRE-ControlOutcome */
typedef struct E2SM_RC_PRE_ControlOutcome {
	E2SM_RC_PRE_ControlOutcome_PR present;
	union E2SM_RC_PRE_ControlOutcome_u {
		struct E2SM_RC_PRE_ControlOutcome_Format1	*controlOutcome_Format1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_PRE_ControlOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_PRE_ControlOutcome;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_PRE_ControlOutcome_H_ */
#include "asn_internal.h"
