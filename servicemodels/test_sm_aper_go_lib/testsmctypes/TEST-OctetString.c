/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TEST-SM-IEs"
 * 	found in "../v1/test_sm.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "TEST-OctetString.h"

static int
memb_attrOs2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_attrOs3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_attrOs4_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_attrOs5_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 22 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_attrOs6_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 28 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_attrOs7_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 22 && size <= 36)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_attrOs2_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  20,  20 }	/* (SIZE(20..20)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_attrOs3_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  127,  127 }	/* (SIZE(127..127,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_attrOs4_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  0,  32 }	/* (SIZE(0..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_attrOs5_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  22,  32 }	/* (SIZE(22..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_attrOs6_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  28,  32 }	/* (SIZE(28..32,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_attrOs7_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  22,  36 }	/* (SIZE(22..36)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_TEST_OctetString_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TEST_OctetString, attrOs1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"attrOs1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TEST_OctetString, attrOs2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_attrOs2_constr_3,  memb_attrOs2_constraint_1 },
		0, 0, /* No default value */
		"attrOs2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TEST_OctetString, attrOs3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_attrOs3_constr_4,  memb_attrOs3_constraint_1 },
		0, 0, /* No default value */
		"attrOs3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TEST_OctetString, attrOs4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_attrOs4_constr_5,  memb_attrOs4_constraint_1 },
		0, 0, /* No default value */
		"attrOs4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TEST_OctetString, attrOs5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_attrOs5_constr_6,  memb_attrOs5_constraint_1 },
		0, 0, /* No default value */
		"attrOs5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TEST_OctetString, attrOs6),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_attrOs6_constr_7,  memb_attrOs6_constraint_1 },
		0, 0, /* No default value */
		"attrOs6"
		},
	{ ATF_POINTER, 1, offsetof(struct TEST_OctetString, attrOs7),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_attrOs7_constr_8,  memb_attrOs7_constraint_1 },
		0, 0, /* No default value */
		"attrOs7"
		},
};
static const int asn_MAP_TEST_OctetString_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_TEST_OctetString_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TEST_OctetString_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* attrOs1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* attrOs2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* attrOs3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* attrOs4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* attrOs5 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* attrOs6 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* attrOs7 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TEST_OctetString_specs_1 = {
	sizeof(struct TEST_OctetString),
	offsetof(struct TEST_OctetString, _asn_ctx),
	asn_MAP_TEST_OctetString_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_TEST_OctetString_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TEST_OctetString = {
	"TEST-OctetString",
	"TEST-OctetString",
	&asn_OP_SEQUENCE,
	asn_DEF_TEST_OctetString_tags_1,
	sizeof(asn_DEF_TEST_OctetString_tags_1)
		/sizeof(asn_DEF_TEST_OctetString_tags_1[0]), /* 1 */
	asn_DEF_TEST_OctetString_tags_1,	/* Same as above */
	sizeof(asn_DEF_TEST_OctetString_tags_1)
		/sizeof(asn_DEF_TEST_OctetString_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TEST_OctetString_1,
	7,	/* Elements count */
	&asn_SPC_TEST_OctetString_specs_1	/* Additional specs */
};

