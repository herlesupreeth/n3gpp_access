/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_AMF-TNLAssociationToUpdateItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_AMF_TNLAssociationToUpdateItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_AMF_TNLAssociationToUpdateItem, aMF_TNLAssociationAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_CPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aMF-TNLAssociationAddress"
		},
	{ ATF_POINTER, 3, offsetof(struct Ngap_AMF_TNLAssociationToUpdateItem, tNLAssociationUsage),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TNLAssociationUsage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tNLAssociationUsage"
		},
	{ ATF_POINTER, 2, offsetof(struct Ngap_AMF_TNLAssociationToUpdateItem, tNLAddressWeightFactor),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_TNLAddressWeightFactor,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tNLAddressWeightFactor"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_AMF_TNLAssociationToUpdateItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_9589P8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_AMF_TNLAssociationToUpdateItem_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_AMF_TNLAssociationToUpdateItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aMF-TNLAssociationAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tNLAssociationUsage */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tNLAddressWeightFactor */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_AMF_TNLAssociationToUpdateItem_specs_1 = {
	sizeof(struct Ngap_AMF_TNLAssociationToUpdateItem),
	offsetof(struct Ngap_AMF_TNLAssociationToUpdateItem, _asn_ctx),
	asn_MAP_Ngap_AMF_TNLAssociationToUpdateItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ngap_AMF_TNLAssociationToUpdateItem_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem = {
	"AMF-TNLAssociationToUpdateItem",
	"AMF-TNLAssociationToUpdateItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1,
	sizeof(asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1)
		/sizeof(asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1)
		/sizeof(asn_DEF_Ngap_AMF_TNLAssociationToUpdateItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_AMF_TNLAssociationToUpdateItem_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_AMF_TNLAssociationToUpdateItem_specs_1	/* Additional specs */
};

