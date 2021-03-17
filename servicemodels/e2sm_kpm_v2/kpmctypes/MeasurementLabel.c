/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../v2/e2sm_kpm_v2.0.2-rm.asn"
 * 	`asn1c -pdu=all -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "MeasurementLabel.h"

#include "SNSSAI.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_bitrateRange_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65536)) {
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
memb_layerMU_MIMO_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65536)) {
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
memb_distBinX_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65536)) {
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
memb_distBinY_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65536)) {
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
memb_distBinZ_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65536)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_sUM_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_preLabelOverride_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_startEndInd_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bitrateRange_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16, -1,  1,  65536 }	/* (1..65536,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_layerMU_MIMO_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16, -1,  1,  65536 }	/* (1..65536,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_distBinX_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16, -1,  1,  65536 }	/* (1..65536,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_distBinY_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16, -1,  1,  65536 }	/* (1..65536,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_distBinZ_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16, -1,  1,  65536 }	/* (1..65536,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sUM_value2enum_13[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_sUM_enum2value_13[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_sUM_specs_13 = {
	asn_MAP_sUM_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_sUM_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sUM_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sUM_13 = {
	"sUM",
	"sUM",
	&asn_OP_NativeEnumerated,
	asn_DEF_sUM_tags_13,
	sizeof(asn_DEF_sUM_tags_13)
		/sizeof(asn_DEF_sUM_tags_13[0]) - 1, /* 1 */
	asn_DEF_sUM_tags_13,	/* Same as above */
	sizeof(asn_DEF_sUM_tags_13)
		/sizeof(asn_DEF_sUM_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_sUM_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sUM_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_preLabelOverride_value2enum_19[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_preLabelOverride_enum2value_19[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_preLabelOverride_specs_19 = {
	asn_MAP_preLabelOverride_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_preLabelOverride_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_preLabelOverride_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preLabelOverride_19 = {
	"preLabelOverride",
	"preLabelOverride",
	&asn_OP_NativeEnumerated,
	asn_DEF_preLabelOverride_tags_19,
	sizeof(asn_DEF_preLabelOverride_tags_19)
		/sizeof(asn_DEF_preLabelOverride_tags_19[0]) - 1, /* 1 */
	asn_DEF_preLabelOverride_tags_19,	/* Same as above */
	sizeof(asn_DEF_preLabelOverride_tags_19)
		/sizeof(asn_DEF_preLabelOverride_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_preLabelOverride_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_preLabelOverride_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_startEndInd_value2enum_22[] = {
	{ 0,	5,	"start" },
	{ 1,	3,	"end" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_startEndInd_enum2value_22[] = {
	1,	/* end(1) */
	0	/* start(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_startEndInd_specs_22 = {
	asn_MAP_startEndInd_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_startEndInd_enum2value_22,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_startEndInd_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_startEndInd_22 = {
	"startEndInd",
	"startEndInd",
	&asn_OP_NativeEnumerated,
	asn_DEF_startEndInd_tags_22,
	sizeof(asn_DEF_startEndInd_tags_22)
		/sizeof(asn_DEF_startEndInd_tags_22[0]) - 1, /* 1 */
	asn_DEF_startEndInd_tags_22,	/* Same as above */
	sizeof(asn_DEF_startEndInd_tags_22)
		/sizeof(asn_DEF_startEndInd_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_startEndInd_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_startEndInd_specs_22	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasurementLabel_1[] = {
	{ ATF_POINTER, 17, offsetof(struct MeasurementLabel, plmnID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmnID"
		},
	{ ATF_POINTER, 16, offsetof(struct MeasurementLabel, sliceID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SNSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sliceID"
		},
	{ ATF_POINTER, 15, offsetof(struct MeasurementLabel, fiveQI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveQI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveQI"
		},
	{ ATF_POINTER, 14, offsetof(struct MeasurementLabel, qFI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QFI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qFI"
		},
	{ ATF_POINTER, 13, offsetof(struct MeasurementLabel, qCI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qCI"
		},
	{ ATF_POINTER, 12, offsetof(struct MeasurementLabel, qCImax),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qCImax"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasurementLabel, qCImin),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qCImin"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasurementLabel, aRPmax),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aRPmax"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasurementLabel, aRPmin),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aRPmin"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasurementLabel, bitrateRange),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_bitrateRange_constr_11,  memb_bitrateRange_constraint_1 },
		0, 0, /* No default value */
		"bitrateRange"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasurementLabel, layerMU_MIMO),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_layerMU_MIMO_constr_12,  memb_layerMU_MIMO_constraint_1 },
		0, 0, /* No default value */
		"layerMU-MIMO"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasurementLabel, sUM),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sUM_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sUM"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasurementLabel, distBinX),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_distBinX_constr_16,  memb_distBinX_constraint_1 },
		0, 0, /* No default value */
		"distBinX"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasurementLabel, distBinY),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_distBinY_constr_17,  memb_distBinY_constraint_1 },
		0, 0, /* No default value */
		"distBinY"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasurementLabel, distBinZ),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_distBinZ_constr_18,  memb_distBinZ_constraint_1 },
		0, 0, /* No default value */
		"distBinZ"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasurementLabel, preLabelOverride),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_preLabelOverride_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preLabelOverride"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementLabel, startEndInd),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_startEndInd_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"startEndInd"
		},
};
static const int asn_MAP_MeasurementLabel_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const ber_tlv_tag_t asn_DEF_MeasurementLabel_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementLabel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmnID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sliceID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fiveQI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qFI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* qCI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* qCImax */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* qCImin */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* aRPmax */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* aRPmin */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* bitrateRange */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* layerMU-MIMO */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* sUM */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* distBinX */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* distBinY */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* distBinZ */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* preLabelOverride */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* startEndInd */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementLabel_specs_1 = {
	sizeof(struct MeasurementLabel),
	offsetof(struct MeasurementLabel, _asn_ctx),
	asn_MAP_MeasurementLabel_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_MeasurementLabel_oms_1,	/* Optional members */
	17, 0,	/* Root/Additions */
	17,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementLabel = {
	"MeasurementLabel",
	"MeasurementLabel",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementLabel_tags_1,
	sizeof(asn_DEF_MeasurementLabel_tags_1)
		/sizeof(asn_DEF_MeasurementLabel_tags_1[0]), /* 1 */
	asn_DEF_MeasurementLabel_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementLabel_tags_1)
		/sizeof(asn_DEF_MeasurementLabel_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementLabel_1,
	17,	/* Elements count */
	&asn_SPC_MeasurementLabel_specs_1	/* Additional specs */
};

