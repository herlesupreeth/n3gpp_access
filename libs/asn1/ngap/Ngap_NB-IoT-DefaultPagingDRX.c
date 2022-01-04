/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_NB-IoT-DefaultPagingDRX.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Ngap_NB_IoT_DefaultPagingDRX_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_NB_IoT_DefaultPagingDRX_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_NB_IoT_DefaultPagingDRX_value2enum_1[] = {
	{ 0,	5,	"rf128" },
	{ 1,	5,	"rf256" },
	{ 2,	5,	"rf512" },
	{ 3,	6,	"rf1024" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_NB_IoT_DefaultPagingDRX_enum2value_1[] = {
	3,	/* rf1024(3) */
	0,	/* rf128(0) */
	1,	/* rf256(1) */
	2	/* rf512(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_Ngap_NB_IoT_DefaultPagingDRX_specs_1 = {
	asn_MAP_Ngap_NB_IoT_DefaultPagingDRX_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_NB_IoT_DefaultPagingDRX_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_NB_IoT_DefaultPagingDRX = {
	"NB-IoT-DefaultPagingDRX",
	"NB-IoT-DefaultPagingDRX",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1,
	sizeof(asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1)
		/sizeof(asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1[0]), /* 1 */
	asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1)
		/sizeof(asn_DEF_Ngap_NB_IoT_DefaultPagingDRX_tags_1[0]), /* 1 */
	{ &asn_OER_type_Ngap_NB_IoT_DefaultPagingDRX_constr_1, &asn_PER_type_Ngap_NB_IoT_DefaultPagingDRX_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_NB_IoT_DefaultPagingDRX_specs_1	/* Additional specs */
};

