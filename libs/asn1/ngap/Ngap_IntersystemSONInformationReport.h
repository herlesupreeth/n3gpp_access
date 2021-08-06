/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_IntersystemSONInformationReport_H_
#define	_Ngap_IntersystemSONInformationReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_IntersystemSONInformationReport_PR {
	Ngap_IntersystemSONInformationReport_PR_NOTHING,	/* No components present */
	Ngap_IntersystemSONInformationReport_PR_hOReportInformation,
	Ngap_IntersystemSONInformationReport_PR_failureIndicationInformation,
	Ngap_IntersystemSONInformationReport_PR_choice_Extensions
} Ngap_IntersystemSONInformationReport_PR;

/* Forward declarations */
struct Ngap_InterSystemHOReport;
struct Ngap_InterSystemFailureIndication;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_IntersystemSONInformationReport */
typedef struct Ngap_IntersystemSONInformationReport {
	Ngap_IntersystemSONInformationReport_PR present;
	union Ngap_IntersystemSONInformationReport_u {
		struct Ngap_InterSystemHOReport	*hOReportInformation;
		struct Ngap_InterSystemFailureIndication	*failureIndicationInformation;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_IntersystemSONInformationReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_IntersystemSONInformationReport;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_IntersystemSONInformationReport_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_IntersystemSONInformationReport_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_IntersystemSONInformationReport_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_IntersystemSONInformationReport_H_ */
#include <asn_internal.h>
