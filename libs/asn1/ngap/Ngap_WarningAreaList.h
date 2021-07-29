/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_WarningAreaList_H_
#define	_Ngap_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_WarningAreaList_PR {
	Ngap_WarningAreaList_PR_NOTHING,	/* No components present */
	Ngap_WarningAreaList_PR_eUTRA_CGIListForWarning,
	Ngap_WarningAreaList_PR_nR_CGIListForWarning,
	Ngap_WarningAreaList_PR_tAIListForWarning,
	Ngap_WarningAreaList_PR_emergencyAreaIDList,
	Ngap_WarningAreaList_PR_choice_Extensions
} Ngap_WarningAreaList_PR;

/* Forward declarations */
struct Ngap_EUTRA_CGIListForWarning;
struct Ngap_NR_CGIListForWarning;
struct Ngap_TAIListForWarning;
struct Ngap_EmergencyAreaIDList;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_WarningAreaList */
typedef struct Ngap_WarningAreaList {
	Ngap_WarningAreaList_PR present;
	union Ngap_WarningAreaList_u {
		struct Ngap_EUTRA_CGIListForWarning	*eUTRA_CGIListForWarning;
		struct Ngap_NR_CGIListForWarning	*nR_CGIListForWarning;
		struct Ngap_TAIListForWarning	*tAIListForWarning;
		struct Ngap_EmergencyAreaIDList	*emergencyAreaIDList;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_WarningAreaList;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_WarningAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_WarningAreaList_1[5];
extern asn_per_constraints_t asn_PER_type_Ngap_WarningAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_WarningAreaList_H_ */
#include <asn_internal.h>
