/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST-SM-IEs"
 * 	found in "../v1/test_sm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_TEST_PrintableString_H_
#define	_TEST_PrintableString_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PrintableString.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TEST-PrintableString */
typedef struct TEST_PrintableString {
	PrintableString_t	 attrPs1;
	PrintableString_t	 attrPs2;
	PrintableString_t	 attrPs3;
	PrintableString_t	 attrPs4;
	PrintableString_t	 attrPs5;
	PrintableString_t	 attrPs6;
	PrintableString_t	*attrPs7;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TEST_PrintableString_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TEST_PrintableString;

#ifdef __cplusplus
}
#endif

#endif	/* _TEST_PrintableString_H_ */
#include "asn_internal.h"
