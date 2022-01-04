/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_IntersystemUnnecessaryHO.h"

#include "Ngap_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Ngap_earlyIRATHO_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_Ngap_earlyIRATHO_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_earlyIRATHO_value2enum_4[] = {
	{ 0,	4,	"true" },
	{ 1,	5,	"false" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_earlyIRATHO_enum2value_4[] = {
	1,	/* false(1) */
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Ngap_earlyIRATHO_specs_4 = {
	asn_MAP_Ngap_earlyIRATHO_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_earlyIRATHO_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_earlyIRATHO_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Ngap_earlyIRATHO_4 = {
	"earlyIRATHO",
	"earlyIRATHO",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_earlyIRATHO_tags_4,
	sizeof(asn_DEF_Ngap_earlyIRATHO_tags_4)
		/sizeof(asn_DEF_Ngap_earlyIRATHO_tags_4[0]) - 1, /* 1 */
	asn_DEF_Ngap_earlyIRATHO_tags_4,	/* Same as above */
	sizeof(asn_DEF_Ngap_earlyIRATHO_tags_4)
		/sizeof(asn_DEF_Ngap_earlyIRATHO_tags_4[0]), /* 2 */
	{ &asn_OER_type_Ngap_earlyIRATHO_constr_4, &asn_PER_type_Ngap_earlyIRATHO_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_earlyIRATHO_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Ngap_IntersystemUnnecessaryHO_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_IntersystemUnnecessaryHO, sourcecellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_NGRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourcecellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_IntersystemUnnecessaryHO, targetcellID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_EUTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetcellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_IntersystemUnnecessaryHO, earlyIRATHO),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_earlyIRATHO_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"earlyIRATHO"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_IntersystemUnnecessaryHO, candidateCellList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_CandidateCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidateCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_IntersystemUnnecessaryHO, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_9589P108,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_IntersystemUnnecessaryHO_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_IntersystemUnnecessaryHO_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourcecellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetcellID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* earlyIRATHO */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* candidateCellList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_IntersystemUnnecessaryHO_specs_1 = {
	sizeof(struct Ngap_IntersystemUnnecessaryHO),
	offsetof(struct Ngap_IntersystemUnnecessaryHO, _asn_ctx),
	asn_MAP_Ngap_IntersystemUnnecessaryHO_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_Ngap_IntersystemUnnecessaryHO_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_IntersystemUnnecessaryHO = {
	"IntersystemUnnecessaryHO",
	"IntersystemUnnecessaryHO",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1,
	sizeof(asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1)
		/sizeof(asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1[0]), /* 1 */
	asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1)
		/sizeof(asn_DEF_Ngap_IntersystemUnnecessaryHO_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_IntersystemUnnecessaryHO_1,
	5,	/* Elements count */
	&asn_SPC_Ngap_IntersystemUnnecessaryHO_specs_1	/* Additional specs */
};

