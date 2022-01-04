/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_DAPSResponseInfoItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_DAPSResponseInfoItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DAPSResponseInfoItem, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_DAPSResponseInfoItem, dAPSResponseInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_DAPSResponseInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dAPSResponseInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_DAPSResponseInfoItem, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_9589P49,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_Ngap_DAPSResponseInfoItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_DAPSResponseInfoItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_DAPSResponseInfoItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dAPSResponseInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_DAPSResponseInfoItem_specs_1 = {
	sizeof(struct Ngap_DAPSResponseInfoItem),
	offsetof(struct Ngap_DAPSResponseInfoItem, _asn_ctx),
	asn_MAP_Ngap_DAPSResponseInfoItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_DAPSResponseInfoItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_DAPSResponseInfoItem = {
	"DAPSResponseInfoItem",
	"DAPSResponseInfoItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_DAPSResponseInfoItem_tags_1,
	sizeof(asn_DEF_Ngap_DAPSResponseInfoItem_tags_1)
		/sizeof(asn_DEF_Ngap_DAPSResponseInfoItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_DAPSResponseInfoItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_DAPSResponseInfoItem_tags_1)
		/sizeof(asn_DEF_Ngap_DAPSResponseInfoItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_DAPSResponseInfoItem_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_DAPSResponseInfoItem_specs_1	/* Additional specs */
};

