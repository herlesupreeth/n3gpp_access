/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "./asn1//NGAP_PDU Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_UEContextModificationResponse.h"

asn_TYPE_member_t asn_MBR_Ngap_UEContextModificationResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UEContextModificationResponse, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_Container_124P24,
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
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_Ngap_UEContextModificationResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_UEContextModificationResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_UEContextModificationResponse_specs_1 = {
	sizeof(struct Ngap_UEContextModificationResponse),
	offsetof(struct Ngap_UEContextModificationResponse, _asn_ctx),
	asn_MAP_Ngap_UEContextModificationResponse_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UEContextModificationResponse = {
	"UEContextModificationResponse",
	"UEContextModificationResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_UEContextModificationResponse_tags_1,
	sizeof(asn_DEF_Ngap_UEContextModificationResponse_tags_1)
		/sizeof(asn_DEF_Ngap_UEContextModificationResponse_tags_1[0]), /* 1 */
	asn_DEF_Ngap_UEContextModificationResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_UEContextModificationResponse_tags_1)
		/sizeof(asn_DEF_Ngap_UEContextModificationResponse_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ngap_UEContextModificationResponse_1,
	1,	/* Elements count */
	&asn_SPC_Ngap_UEContextModificationResponse_specs_1	/* Additional specs */
};
