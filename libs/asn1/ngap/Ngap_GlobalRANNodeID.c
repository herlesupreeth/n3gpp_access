/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_GlobalRANNodeID.h"

#include "Ngap_GlobalGNB-ID.h"
#include "Ngap_GlobalNgENB-ID.h"
#include "Ngap_GlobalN3IWF-ID.h"
#include "Ngap_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_Ngap_GlobalRANNodeID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_GlobalRANNodeID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_GlobalRANNodeID_1[] = {
	{ ATF_POINTER, 0, offsetof(struct Ngap_GlobalRANNodeID, choice.globalGNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_GlobalGNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalGNB-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_GlobalRANNodeID, choice.globalNgENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_GlobalNgENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalNgENB-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_GlobalRANNodeID, choice.globalN3IWF_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_GlobalN3IWF_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalN3IWF-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_GlobalRANNodeID, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_SingleContainer_9541P15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_GlobalRANNodeID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalGNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* globalNgENB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* globalN3IWF-ID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_GlobalRANNodeID_specs_1 = {
	sizeof(struct Ngap_GlobalRANNodeID),
	offsetof(struct Ngap_GlobalRANNodeID, _asn_ctx),
	offsetof(struct Ngap_GlobalRANNodeID, present),
	sizeof(((struct Ngap_GlobalRANNodeID *)0)->present),
	asn_MAP_Ngap_GlobalRANNodeID_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_GlobalRANNodeID = {
	"GlobalRANNodeID",
	"GlobalRANNodeID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_GlobalRANNodeID_constr_1, &asn_PER_type_Ngap_GlobalRANNodeID_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_GlobalRANNodeID_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_GlobalRANNodeID_specs_1	/* Additional specs */
};

