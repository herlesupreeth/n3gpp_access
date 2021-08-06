/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_NPN_AccessInformation_H_
#define	_Ngap_NPN_AccessInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NPN_AccessInformation_PR {
	Ngap_NPN_AccessInformation_PR_NOTHING,	/* No components present */
	Ngap_NPN_AccessInformation_PR_pNI_NPN_Access_Information,
	Ngap_NPN_AccessInformation_PR_choice_Extensions
} Ngap_NPN_AccessInformation_PR;

/* Forward declarations */
struct Ngap_CellCAGList;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_NPN-AccessInformation */
typedef struct Ngap_NPN_AccessInformation {
	Ngap_NPN_AccessInformation_PR present;
	union Ngap_NPN_AccessInformation_u {
		struct Ngap_CellCAGList	*pNI_NPN_Access_Information;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_NPN_AccessInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NPN_AccessInformation;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_NPN_AccessInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_NPN_AccessInformation_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_NPN_AccessInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NPN_AccessInformation_H_ */
#include <asn_internal.h>
