/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "../v2/e2sm_rc_pre_v2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E2SM-RC-PRE-ControlMessage-Format1.h"

asn_TYPE_member_t asn_MBR_E2SM_RC_PRE_ControlMessage_Format1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_PRE_ControlMessage_Format1, parameterType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANparameterDef_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parameterType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_PRE_ControlMessage_Format1, parameterVal),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANparameter_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parameterVal"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_PRE_ControlMessage_Format1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* parameterType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* parameterVal */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_PRE_ControlMessage_Format1_specs_1 = {
	sizeof(struct E2SM_RC_PRE_ControlMessage_Format1),
	offsetof(struct E2SM_RC_PRE_ControlMessage_Format1, _asn_ctx),
	asn_MAP_E2SM_RC_PRE_ControlMessage_Format1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_PRE_ControlMessage_Format1 = {
	"E2SM-RC-PRE-ControlMessage-Format1",
	"E2SM-RC-PRE-ControlMessage-Format1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1,
	sizeof(asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_RC_PRE_ControlMessage_Format1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_RC_PRE_ControlMessage_Format1_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_RC_PRE_ControlMessage_Format1_specs_1	/* Additional specs */
};

