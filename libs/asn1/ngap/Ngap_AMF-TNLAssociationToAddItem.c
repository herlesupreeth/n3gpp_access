/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#include "Ngap_AMF-TNLAssociationToAddItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_AMF_TNLAssociationToAddItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_AMF_TNLAssociationToAddItem, aMF_TNLAssociationAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_CPTransportLayerInformation,
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
		"aMF-TNLAssociationAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_AMF_TNLAssociationToAddItem, tNLAssociationUsage),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TNLAssociationUsage,
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
		"tNLAssociationUsage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_AMF_TNLAssociationToAddItem, tNLAddressWeightFactor),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TNLAddressWeightFactor,
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
		"tNLAddressWeightFactor"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_AMF_TNLAssociationToAddItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P6,
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
static const int asn_MAP_Ngap_AMF_TNLAssociationToAddItem_oms_1[] = { 1, 3 };
static const ber_tlv_tag_t asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_AMF_TNLAssociationToAddItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aMF-TNLAssociationAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tNLAssociationUsage */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tNLAddressWeightFactor */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_AMF_TNLAssociationToAddItem_specs_1 = {
	sizeof(struct Ngap_AMF_TNLAssociationToAddItem),
	offsetof(struct Ngap_AMF_TNLAssociationToAddItem, _asn_ctx),
	asn_MAP_Ngap_AMF_TNLAssociationToAddItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ngap_AMF_TNLAssociationToAddItem_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_AMF_TNLAssociationToAddItem = {
	"AMF-TNLAssociationToAddItem",
	"AMF-TNLAssociationToAddItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1,
	sizeof(asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1)
		/sizeof(asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1)
		/sizeof(asn_DEF_Ngap_AMF_TNLAssociationToAddItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ngap_AMF_TNLAssociationToAddItem_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_AMF_TNLAssociationToAddItem_specs_1	/* Additional specs */
};

