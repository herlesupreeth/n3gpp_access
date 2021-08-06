/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_TSCTrafficCharacteristics.h"

#include "Ngap_TSCAssistanceInformation.h"
#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_TSCTrafficCharacteristics_1[] = {
	{ ATF_POINTER, 3, offsetof(struct Ngap_TSCTrafficCharacteristics, tSCAssistanceInformationDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TSCAssistanceInformation,
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
		"tSCAssistanceInformationDL"
		},
	{ ATF_POINTER, 2, offsetof(struct Ngap_TSCTrafficCharacteristics, tSCAssistanceInformationUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TSCAssistanceInformation,
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
		"tSCAssistanceInformationUL"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_TSCTrafficCharacteristics, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P263,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_TSCTrafficCharacteristics_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_TSCTrafficCharacteristics_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tSCAssistanceInformationDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tSCAssistanceInformationUL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_TSCTrafficCharacteristics_specs_1 = {
	sizeof(struct Ngap_TSCTrafficCharacteristics),
	offsetof(struct Ngap_TSCTrafficCharacteristics, _asn_ctx),
	asn_MAP_Ngap_TSCTrafficCharacteristics_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_TSCTrafficCharacteristics_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_TSCTrafficCharacteristics = {
	"TSCTrafficCharacteristics",
	"TSCTrafficCharacteristics",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1,
	sizeof(asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1)
		/sizeof(asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1)
		/sizeof(asn_DEF_Ngap_TSCTrafficCharacteristics_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ngap_TSCTrafficCharacteristics_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_TSCTrafficCharacteristics_specs_1	/* Additional specs */
};

