/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_RedundantPDUSessionInformation.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_RedundantPDUSessionInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_RedundantPDUSessionInformation, rSN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_RSN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rSN"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_RedundantPDUSessionInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_9589P222,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_RedundantPDUSessionInformation_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_RedundantPDUSessionInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rSN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_RedundantPDUSessionInformation_specs_1 = {
	sizeof(struct Ngap_RedundantPDUSessionInformation),
	offsetof(struct Ngap_RedundantPDUSessionInformation, _asn_ctx),
	asn_MAP_Ngap_RedundantPDUSessionInformation_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Ngap_RedundantPDUSessionInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_RedundantPDUSessionInformation = {
	"RedundantPDUSessionInformation",
	"RedundantPDUSessionInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1,
	sizeof(asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1)
		/sizeof(asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1[0]), /* 1 */
	asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1)
		/sizeof(asn_DEF_Ngap_RedundantPDUSessionInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_RedundantPDUSessionInformation_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_RedundantPDUSessionInformation_specs_1	/* Additional specs */
};

