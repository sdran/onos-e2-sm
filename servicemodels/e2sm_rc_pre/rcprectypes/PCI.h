/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "e2sm-rc-pre-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PCI_H_
#define	_PCI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PCI */
typedef long	 PCI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PCI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PCI;
asn_struct_free_f PCI_free;
asn_struct_print_f PCI_print;
asn_constr_check_f PCI_constraint;
ber_type_decoder_f PCI_decode_ber;
der_type_encoder_f PCI_encode_der;
xer_type_decoder_f PCI_decode_xer;
xer_type_encoder_f PCI_encode_xer;
per_type_decoder_f PCI_decode_uper;
per_type_encoder_f PCI_encode_uper;
per_type_decoder_f PCI_decode_aper;
per_type_encoder_f PCI_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PCI_H_ */
#include "asn_internal.h"
