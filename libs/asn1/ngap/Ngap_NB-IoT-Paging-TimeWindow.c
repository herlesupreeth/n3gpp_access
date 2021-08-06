/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_NB-IoT-Paging-TimeWindow.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_NB_IoT_Paging_TimeWindow_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Ngap_NB_IoT_Paging_TimeWindow_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_NB_IoT_Paging_TimeWindow_value2enum_1[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s3" },
	{ 3,	2,	"s4" },
	{ 4,	2,	"s5" },
	{ 5,	2,	"s6" },
	{ 6,	2,	"s7" },
	{ 7,	2,	"s8" },
	{ 8,	2,	"s9" },
	{ 9,	3,	"s10" },
	{ 10,	3,	"s11" },
	{ 11,	3,	"s12" },
	{ 12,	3,	"s13" },
	{ 13,	3,	"s14" },
	{ 14,	3,	"s15" },
	{ 15,	3,	"s16" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_NB_IoT_Paging_TimeWindow_enum2value_1[] = {
	0,	/* s1(0) */
	9,	/* s10(9) */
	10,	/* s11(10) */
	11,	/* s12(11) */
	12,	/* s13(12) */
	13,	/* s14(13) */
	14,	/* s15(14) */
	15,	/* s16(15) */
	1,	/* s2(1) */
	2,	/* s3(2) */
	3,	/* s4(3) */
	4,	/* s5(4) */
	5,	/* s6(5) */
	6,	/* s7(6) */
	7,	/* s8(7) */
	8	/* s9(8) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_Ngap_NB_IoT_Paging_TimeWindow_specs_1 = {
	asn_MAP_Ngap_NB_IoT_Paging_TimeWindow_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_NB_IoT_Paging_TimeWindow_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_NB_IoT_Paging_TimeWindow = {
	"NB-IoT-Paging-TimeWindow",
	"NB-IoT-Paging-TimeWindow",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1,
	sizeof(asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1)
		/sizeof(asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1[0]), /* 1 */
	asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1)
		/sizeof(asn_DEF_Ngap_NB_IoT_Paging_TimeWindow_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Ngap_NB_IoT_Paging_TimeWindow_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Ngap_NB_IoT_Paging_TimeWindow_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_NB_IoT_Paging_TimeWindow_specs_1	/* Additional specs */
};

