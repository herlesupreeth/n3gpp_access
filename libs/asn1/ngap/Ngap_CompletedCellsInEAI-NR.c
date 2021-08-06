/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_CompletedCellsInEAI-NR.h"

#include "Ngap_CompletedCellsInEAI-NR-Item.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_CompletedCellsInEAI_NR_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Ngap_CompletedCellsInEAI_NR_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Ngap_CompletedCellsInEAI_NR_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Ngap_CompletedCellsInEAI_NR_Item,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Ngap_CompletedCellsInEAI_NR_specs_1 = {
	sizeof(struct Ngap_CompletedCellsInEAI_NR),
	offsetof(struct Ngap_CompletedCellsInEAI_NR, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_CompletedCellsInEAI_NR = {
	"CompletedCellsInEAI-NR",
	"CompletedCellsInEAI-NR",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1,
	sizeof(asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1)
		/sizeof(asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1[0]), /* 1 */
	asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1)
		/sizeof(asn_DEF_Ngap_CompletedCellsInEAI_NR_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Ngap_CompletedCellsInEAI_NR_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Ngap_CompletedCellsInEAI_NR_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_Ngap_CompletedCellsInEAI_NR_1,
	1,	/* Single element */
	&asn_SPC_Ngap_CompletedCellsInEAI_NR_specs_1	/* Additional specs */
};

