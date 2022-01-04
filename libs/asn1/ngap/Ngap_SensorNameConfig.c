/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_SensorNameConfig.h"

#include "Ngap_ProtocolIE-SingleContainer.h"
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
static asn_oer_constraints_t asn_OER_type_Ngap_uncompensatedBarometricConfig_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Ngap_uncompensatedBarometricConfig_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Ngap_ueSpeedConfig_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Ngap_ueSpeedConfig_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Ngap_ueOrientationConfig_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Ngap_ueOrientationConfig_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Ngap_SensorNameConfig_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_SensorNameConfig_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_uncompensatedBarometricConfig_value2enum_2[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_uncompensatedBarometricConfig_enum2value_2[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Ngap_uncompensatedBarometricConfig_specs_2 = {
	asn_MAP_Ngap_uncompensatedBarometricConfig_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_uncompensatedBarometricConfig_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Ngap_uncompensatedBarometricConfig_2 = {
	"uncompensatedBarometricConfig",
	"uncompensatedBarometricConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2,
	sizeof(asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2)
		/sizeof(asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2[0]) - 1, /* 1 */
	asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2,	/* Same as above */
	sizeof(asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2)
		/sizeof(asn_DEF_Ngap_uncompensatedBarometricConfig_tags_2[0]), /* 2 */
	{ &asn_OER_type_Ngap_uncompensatedBarometricConfig_constr_2, &asn_PER_type_Ngap_uncompensatedBarometricConfig_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_uncompensatedBarometricConfig_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_Ngap_ueSpeedConfig_value2enum_5[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_ueSpeedConfig_enum2value_5[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Ngap_ueSpeedConfig_specs_5 = {
	asn_MAP_Ngap_ueSpeedConfig_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_ueSpeedConfig_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_ueSpeedConfig_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Ngap_ueSpeedConfig_5 = {
	"ueSpeedConfig",
	"ueSpeedConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_ueSpeedConfig_tags_5,
	sizeof(asn_DEF_Ngap_ueSpeedConfig_tags_5)
		/sizeof(asn_DEF_Ngap_ueSpeedConfig_tags_5[0]) - 1, /* 1 */
	asn_DEF_Ngap_ueSpeedConfig_tags_5,	/* Same as above */
	sizeof(asn_DEF_Ngap_ueSpeedConfig_tags_5)
		/sizeof(asn_DEF_Ngap_ueSpeedConfig_tags_5[0]), /* 2 */
	{ &asn_OER_type_Ngap_ueSpeedConfig_constr_5, &asn_PER_type_Ngap_ueSpeedConfig_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_ueSpeedConfig_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_Ngap_ueOrientationConfig_value2enum_8[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_ueOrientationConfig_enum2value_8[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Ngap_ueOrientationConfig_specs_8 = {
	asn_MAP_Ngap_ueOrientationConfig_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_ueOrientationConfig_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_ueOrientationConfig_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Ngap_ueOrientationConfig_8 = {
	"ueOrientationConfig",
	"ueOrientationConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_ueOrientationConfig_tags_8,
	sizeof(asn_DEF_Ngap_ueOrientationConfig_tags_8)
		/sizeof(asn_DEF_Ngap_ueOrientationConfig_tags_8[0]) - 1, /* 1 */
	asn_DEF_Ngap_ueOrientationConfig_tags_8,	/* Same as above */
	sizeof(asn_DEF_Ngap_ueOrientationConfig_tags_8)
		/sizeof(asn_DEF_Ngap_ueOrientationConfig_tags_8[0]), /* 2 */
	{ &asn_OER_type_Ngap_ueOrientationConfig_constr_8, &asn_PER_type_Ngap_ueOrientationConfig_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_ueOrientationConfig_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Ngap_SensorNameConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_SensorNameConfig, choice.uncompensatedBarometricConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_uncompensatedBarometricConfig_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uncompensatedBarometricConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_SensorNameConfig, choice.ueSpeedConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ueSpeedConfig_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueSpeedConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_SensorNameConfig, choice.ueOrientationConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ueOrientationConfig_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueOrientationConfig"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_SensorNameConfig, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_SingleContainer_9541P36,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_SensorNameConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uncompensatedBarometricConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ueSpeedConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ueOrientationConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_SensorNameConfig_specs_1 = {
	sizeof(struct Ngap_SensorNameConfig),
	offsetof(struct Ngap_SensorNameConfig, _asn_ctx),
	offsetof(struct Ngap_SensorNameConfig, present),
	sizeof(((struct Ngap_SensorNameConfig *)0)->present),
	asn_MAP_Ngap_SensorNameConfig_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_SensorNameConfig = {
	"SensorNameConfig",
	"SensorNameConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_SensorNameConfig_constr_1, &asn_PER_type_Ngap_SensorNameConfig_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_SensorNameConfig_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_SensorNameConfig_specs_1	/* Additional specs */
};

