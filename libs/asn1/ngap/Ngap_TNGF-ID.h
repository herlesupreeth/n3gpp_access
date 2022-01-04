/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_TNGF_ID_H_
#define	_Ngap_TNGF_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_TNGF_ID_PR {
	Ngap_TNGF_ID_PR_NOTHING,	/* No components present */
	Ngap_TNGF_ID_PR_tNGF_ID,
	Ngap_TNGF_ID_PR_choice_Extensions
} Ngap_TNGF_ID_PR;

/* Forward declarations */
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_TNGF-ID */
typedef struct Ngap_TNGF_ID {
	Ngap_TNGF_ID_PR present;
	union Ngap_TNGF_ID_u {
		BIT_STRING_t	 tNGF_ID;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_TNGF_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_TNGF_ID;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_TNGF_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_TNGF_ID_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_TNGF_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_TNGF_ID_H_ */
#include <asn_internal.h>
