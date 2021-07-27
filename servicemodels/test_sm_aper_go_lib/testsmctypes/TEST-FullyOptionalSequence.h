/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST-SM-IEs"
 * 	found in "../v1/test_sm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_TEST_FullyOptionalSequence_H_
#define	_TEST_FullyOptionalSequence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "BOOLEAN.h"
#include "NativeEnumerated.h"
#include "NULL.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TEST_FullyOptionalSequence__item4 {
	TEST_FullyOptionalSequence__item4_one	= 0,
	TEST_FullyOptionalSequence__item4_two	= 1
	/*
	 * Enumeration is extensible
	 */
} e_TEST_FullyOptionalSequence__item4;

/* TEST-FullyOptionalSequence */
typedef struct TEST_FullyOptionalSequence {
	long	*item1;	/* OPTIONAL */
	OCTET_STRING_t	*item2;	/* OPTIONAL */
	BOOLEAN_t	*item3;	/* OPTIONAL */
	long	*item4;	/* OPTIONAL */
	NULL_t	*item5;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TEST_FullyOptionalSequence_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_item4_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TEST_FullyOptionalSequence;
extern asn_SEQUENCE_specifics_t asn_SPC_TEST_FullyOptionalSequence_specs_1;
extern asn_TYPE_member_t asn_MBR_TEST_FullyOptionalSequence_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _TEST_FullyOptionalSequence_H_ */
#include "asn_internal.h"