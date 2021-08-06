/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_GlobalRANNodeID_H_
#define	_Ngap_GlobalRANNodeID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_GlobalRANNodeID_PR {
	Ngap_GlobalRANNodeID_PR_NOTHING,	/* No components present */
	Ngap_GlobalRANNodeID_PR_globalGNB_ID,
	Ngap_GlobalRANNodeID_PR_globalNgENB_ID,
	Ngap_GlobalRANNodeID_PR_globalN3IWF_ID,
	Ngap_GlobalRANNodeID_PR_choice_Extensions
} Ngap_GlobalRANNodeID_PR;

/* Forward declarations */
struct Ngap_GlobalGNB_ID;
struct Ngap_GlobalNgENB_ID;
struct Ngap_GlobalN3IWF_ID;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_GlobalRANNodeID */
typedef struct Ngap_GlobalRANNodeID {
	Ngap_GlobalRANNodeID_PR present;
	union Ngap_GlobalRANNodeID_u {
		struct Ngap_GlobalGNB_ID	*globalGNB_ID;
		struct Ngap_GlobalNgENB_ID	*globalNgENB_ID;
		struct Ngap_GlobalN3IWF_ID	*globalN3IWF_ID;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_GlobalRANNodeID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_GlobalRANNodeID;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_GlobalRANNodeID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_GlobalRANNodeID_1[4];
extern asn_per_constraints_t asn_PER_type_Ngap_GlobalRANNodeID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_GlobalRANNodeID_H_ */
#include <asn_internal.h>
