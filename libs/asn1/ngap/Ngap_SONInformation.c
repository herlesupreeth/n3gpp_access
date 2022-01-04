/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_SONInformation.h"

#include "Ngap_SONInformationReply.h"
#include "Ngap_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_Ngap_SONInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_SONInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_SONInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_SONInformation, choice.sONInformationRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_SONInformationRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sONInformationRequest"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_SONInformation, choice.sONInformationReply),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_SONInformationReply,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sONInformationReply"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_SONInformation, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_SingleContainer_9541P37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_SONInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sONInformationRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sONInformationReply */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_SONInformation_specs_1 = {
	sizeof(struct Ngap_SONInformation),
	offsetof(struct Ngap_SONInformation, _asn_ctx),
	offsetof(struct Ngap_SONInformation, present),
	sizeof(((struct Ngap_SONInformation *)0)->present),
	asn_MAP_Ngap_SONInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_SONInformation = {
	"SONInformation",
	"SONInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_SONInformation_constr_1, &asn_PER_type_Ngap_SONInformation_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_SONInformation_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_SONInformation_specs_1	/* Additional specs */
};

