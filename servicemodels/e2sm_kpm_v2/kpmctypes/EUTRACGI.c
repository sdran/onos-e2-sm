/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../v2/e2sm_kpm_v2.0.3-rm.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "EUTRACGI.h"

asn_TYPE_member_t asn_MBR_EUTRACGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRACGI, pLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMN-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRACGI, eUTRACellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRACellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRACellIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_EUTRACGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRACGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eUTRACellIdentity */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRACGI_specs_1 = {
	sizeof(struct EUTRACGI),
	offsetof(struct EUTRACGI, _asn_ctx),
	asn_MAP_EUTRACGI_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRACGI = {
	"EUTRACGI",
	"EUTRACGI",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRACGI_tags_1,
	sizeof(asn_DEF_EUTRACGI_tags_1)
		/sizeof(asn_DEF_EUTRACGI_tags_1[0]), /* 1 */
	asn_DEF_EUTRACGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRACGI_tags_1)
		/sizeof(asn_DEF_EUTRACGI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRACGI_1,
	2,	/* Elements count */
	&asn_SPC_EUTRACGI_specs_1	/* Additional specs */
};

