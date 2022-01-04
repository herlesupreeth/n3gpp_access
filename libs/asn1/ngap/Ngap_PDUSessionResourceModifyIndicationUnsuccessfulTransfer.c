/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer.h"

#include "Ngap_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer, cause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_9589P165,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_specs_1 = {
	sizeof(struct Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer),
	offsetof(struct Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer, _asn_ctx),
	asn_MAP_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer = {
	"PDUSessionResourceModifyIndicationUnsuccessfulTransfer",
	"PDUSessionResourceModifyIndicationUnsuccessfulTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1,
	sizeof(asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1[0]), /* 1 */
	asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_PDUSessionResourceModifyIndicationUnsuccessfulTransfer_specs_1	/* Additional specs */
};

