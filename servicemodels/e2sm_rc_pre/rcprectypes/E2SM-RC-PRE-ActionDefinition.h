/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "e2sm-rc-pre-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_E2SM_RC_PRE_ActionDefinition_H_
#define	_E2SM_RC_PRE_ActionDefinition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RIC-Style-Type.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-RC-PRE-ActionDefinition */
typedef struct E2SM_RC_PRE_ActionDefinition {
	RIC_Style_Type_t	 ric_Style_Type;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_PRE_ActionDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_PRE_ActionDefinition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_PRE_ActionDefinition_H_ */
#include "asn_internal.h"
