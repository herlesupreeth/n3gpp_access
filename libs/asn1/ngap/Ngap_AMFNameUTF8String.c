/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#include "Ngap_AMFNameUTF8String.h"

int
Ngap_AMFNameUTF8String_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size >= 1 && size <= 150)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using UTF8String,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Ngap_AMFNameUTF8String_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
asn_per_constraints_t asn_PER_type_Ngap_AMFNameUTF8String_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_Ngap_AMFNameUTF8String_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (12 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_AMFNameUTF8String = {
	"AMFNameUTF8String",
	"AMFNameUTF8String",
	&asn_OP_UTF8String,
	asn_DEF_Ngap_AMFNameUTF8String_tags_1,
	sizeof(asn_DEF_Ngap_AMFNameUTF8String_tags_1)
		/sizeof(asn_DEF_Ngap_AMFNameUTF8String_tags_1[0]), /* 1 */
	asn_DEF_Ngap_AMFNameUTF8String_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_AMFNameUTF8String_tags_1)
		/sizeof(asn_DEF_Ngap_AMFNameUTF8String_tags_1[0]), /* 1 */
	{ &asn_OER_type_Ngap_AMFNameUTF8String_constr_1, &asn_PER_type_Ngap_AMFNameUTF8String_constr_1, Ngap_AMFNameUTF8String_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

