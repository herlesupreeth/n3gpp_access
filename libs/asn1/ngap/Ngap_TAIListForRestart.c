/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_TAIListForRestart.h"

#include "Ngap_TAI.h"
static asn_oer_constraints_t asn_OER_type_Ngap_TAIListForRestart_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2048)) */};
asn_per_constraints_t asn_PER_type_Ngap_TAIListForRestart_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 11,  11,  1,  2048 }	/* (SIZE(1..2048)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_TAIListForRestart_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Ngap_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Ngap_TAIListForRestart_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Ngap_TAIListForRestart_specs_1 = {
	sizeof(struct Ngap_TAIListForRestart),
	offsetof(struct Ngap_TAIListForRestart, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_TAIListForRestart = {
	"TAIListForRestart",
	"TAIListForRestart",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Ngap_TAIListForRestart_tags_1,
	sizeof(asn_DEF_Ngap_TAIListForRestart_tags_1)
		/sizeof(asn_DEF_Ngap_TAIListForRestart_tags_1[0]), /* 1 */
	asn_DEF_Ngap_TAIListForRestart_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_TAIListForRestart_tags_1)
		/sizeof(asn_DEF_Ngap_TAIListForRestart_tags_1[0]), /* 1 */
	{ &asn_OER_type_Ngap_TAIListForRestart_constr_1, &asn_PER_type_Ngap_TAIListForRestart_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_Ngap_TAIListForRestart_1,
	1,	/* Single element */
	&asn_SPC_Ngap_TAIListForRestart_specs_1	/* Additional specs */
};

