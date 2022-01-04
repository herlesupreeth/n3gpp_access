/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_UEPagingIdentity.h"

#include "Ngap_FiveG-S-TMSI.h"
#include "Ngap_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_Ngap_UEPagingIdentity_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_UEPagingIdentity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_UEPagingIdentity_1[] = {
	{ ATF_POINTER, 0, offsetof(struct Ngap_UEPagingIdentity, choice.fiveG_S_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_FiveG_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveG-S-TMSI"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_UEPagingIdentity, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_SingleContainer_9541P45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_UEPagingIdentity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fiveG-S-TMSI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_UEPagingIdentity_specs_1 = {
	sizeof(struct Ngap_UEPagingIdentity),
	offsetof(struct Ngap_UEPagingIdentity, _asn_ctx),
	offsetof(struct Ngap_UEPagingIdentity, present),
	sizeof(((struct Ngap_UEPagingIdentity *)0)->present),
	asn_MAP_Ngap_UEPagingIdentity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UEPagingIdentity = {
	"UEPagingIdentity",
	"UEPagingIdentity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_UEPagingIdentity_constr_1, &asn_PER_type_Ngap_UEPagingIdentity_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_UEPagingIdentity_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_UEPagingIdentity_specs_1	/* Additional specs */
};

