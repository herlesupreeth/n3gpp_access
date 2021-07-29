/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_IntersystemSONInformation_H_
#define	_Ngap_IntersystemSONInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_IntersystemSONInformation_PR {
	Ngap_IntersystemSONInformation_PR_NOTHING,	/* No components present */
	Ngap_IntersystemSONInformation_PR_intersystemSONInformationReport,
	Ngap_IntersystemSONInformation_PR_choice_Extensions
} Ngap_IntersystemSONInformation_PR;

/* Forward declarations */
struct Ngap_IntersystemSONInformationReport;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_IntersystemSONInformation */
typedef struct Ngap_IntersystemSONInformation {
	Ngap_IntersystemSONInformation_PR present;
	union Ngap_IntersystemSONInformation_u {
		struct Ngap_IntersystemSONInformationReport	*intersystemSONInformationReport;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_IntersystemSONInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_IntersystemSONInformation;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_IntersystemSONInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_IntersystemSONInformation_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_IntersystemSONInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_IntersystemSONInformation_H_ */
#include <asn_internal.h>
