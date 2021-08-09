/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_ENB_ID_H_
#define	_Ngap_ENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_ENB_ID_PR {
	Ngap_ENB_ID_PR_NOTHING,	/* No components present */
	Ngap_ENB_ID_PR_macroENB_ID,
	Ngap_ENB_ID_PR_homeENB_ID,
	Ngap_ENB_ID_PR_short_macroENB_ID,
	Ngap_ENB_ID_PR_long_macroENB_ID,
	Ngap_ENB_ID_PR_choice_Extensions
} Ngap_ENB_ID_PR;

/* Forward declarations */
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_ENB-ID */
typedef struct Ngap_ENB_ID {
	Ngap_ENB_ID_PR present;
	union Ngap_ENB_ID_u {
		BIT_STRING_t	 macroENB_ID;
		BIT_STRING_t	 homeENB_ID;
		BIT_STRING_t	 short_macroENB_ID;
		BIT_STRING_t	 long_macroENB_ID;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_ENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_ENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_ENB_ID_1[5];
extern asn_per_constraints_t asn_PER_type_Ngap_ENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ENB_ID_H_ */
#include <asn_internal.h>