/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_UEHistoryInformationFromTheUE_H_
#define	_Ngap_UEHistoryInformationFromTheUE_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_NRMobilityHistoryReport.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_UEHistoryInformationFromTheUE_PR {
	Ngap_UEHistoryInformationFromTheUE_PR_NOTHING,	/* No components present */
	Ngap_UEHistoryInformationFromTheUE_PR_nR,
	Ngap_UEHistoryInformationFromTheUE_PR_choice_Extensions
} Ngap_UEHistoryInformationFromTheUE_PR;

/* Forward declarations */
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_UEHistoryInformationFromTheUE */
typedef struct Ngap_UEHistoryInformationFromTheUE {
	Ngap_UEHistoryInformationFromTheUE_PR present;
	union Ngap_UEHistoryInformationFromTheUE_u {
		Ngap_NRMobilityHistoryReport_t	 nR;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_UEHistoryInformationFromTheUE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UEHistoryInformationFromTheUE;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_UEHistoryInformationFromTheUE_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UEHistoryInformationFromTheUE_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_UEHistoryInformationFromTheUE_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UEHistoryInformationFromTheUE_H_ */
#include <asn_internal.h>
