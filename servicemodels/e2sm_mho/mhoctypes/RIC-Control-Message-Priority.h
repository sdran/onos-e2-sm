/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-MHO-IEs"
 * 	found in "e2sm-mho.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RIC_Control_Message_Priority_H_
#define	_RIC_Control_Message_Priority_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RIC-Control-Message-Priority */
typedef long	 RIC_Control_Message_Priority_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RIC_Control_Message_Priority_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RIC_Control_Message_Priority;
asn_struct_free_f RIC_Control_Message_Priority_free;
asn_struct_print_f RIC_Control_Message_Priority_print;
asn_constr_check_f RIC_Control_Message_Priority_constraint;
ber_type_decoder_f RIC_Control_Message_Priority_decode_ber;
der_type_encoder_f RIC_Control_Message_Priority_encode_der;
xer_type_decoder_f RIC_Control_Message_Priority_decode_xer;
xer_type_encoder_f RIC_Control_Message_Priority_encode_xer;
per_type_decoder_f RIC_Control_Message_Priority_decode_uper;
per_type_encoder_f RIC_Control_Message_Priority_encode_uper;
per_type_decoder_f RIC_Control_Message_Priority_decode_aper;
per_type_encoder_f RIC_Control_Message_Priority_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RIC_Control_Message_Priority_H_ */
#include "asn_internal.h"
