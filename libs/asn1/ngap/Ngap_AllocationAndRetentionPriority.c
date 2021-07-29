/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#include "Ngap_AllocationAndRetentionPriority.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_AllocationAndRetentionPriority_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_AllocationAndRetentionPriority, priorityLevelARP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_PriorityLevelARP,
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
		"priorityLevelARP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_AllocationAndRetentionPriority, pre_emptionCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_Pre_emptionCapability,
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
		"pre-emptionCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_AllocationAndRetentionPriority, pre_emptionVulnerability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_Pre_emptionVulnerability,
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
		"pre-emptionVulnerability"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_AllocationAndRetentionPriority, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P1,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_AllocationAndRetentionPriority_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_AllocationAndRetentionPriority_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevelARP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pre-emptionCapability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pre-emptionVulnerability */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_AllocationAndRetentionPriority_specs_1 = {
	sizeof(struct Ngap_AllocationAndRetentionPriority),
	offsetof(struct Ngap_AllocationAndRetentionPriority, _asn_ctx),
	asn_MAP_Ngap_AllocationAndRetentionPriority_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ngap_AllocationAndRetentionPriority_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_AllocationAndRetentionPriority = {
	"AllocationAndRetentionPriority",
	"AllocationAndRetentionPriority",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1,
	sizeof(asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1[0]), /* 1 */
	asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_Ngap_AllocationAndRetentionPriority_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ngap_AllocationAndRetentionPriority_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_AllocationAndRetentionPriority_specs_1	/* Additional specs */
};

