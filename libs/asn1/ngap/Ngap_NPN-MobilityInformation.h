/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_NPN_MobilityInformation_H_
#define	_Ngap_NPN_MobilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NPN_MobilityInformation_PR {
	Ngap_NPN_MobilityInformation_PR_NOTHING,	/* No components present */
	Ngap_NPN_MobilityInformation_PR_sNPN_MobilityInformation,
	Ngap_NPN_MobilityInformation_PR_pNI_NPN_MobilityInformation,
	Ngap_NPN_MobilityInformation_PR_choice_Extensions
} Ngap_NPN_MobilityInformation_PR;

/* Forward declarations */
struct Ngap_SNPN_MobilityInformation;
struct Ngap_PNI_NPN_MobilityInformation;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_NPN-MobilityInformation */
typedef struct Ngap_NPN_MobilityInformation {
	Ngap_NPN_MobilityInformation_PR present;
	union Ngap_NPN_MobilityInformation_u {
		struct Ngap_SNPN_MobilityInformation	*sNPN_MobilityInformation;
		struct Ngap_PNI_NPN_MobilityInformation	*pNI_NPN_MobilityInformation;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_NPN_MobilityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NPN_MobilityInformation;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_NPN_MobilityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_NPN_MobilityInformation_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_NPN_MobilityInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NPN_MobilityInformation_H_ */
#include <asn_internal.h>
