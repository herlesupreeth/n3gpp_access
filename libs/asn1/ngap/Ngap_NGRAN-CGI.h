/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_NGRAN_CGI_H_
#define	_Ngap_NGRAN_CGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NGRAN_CGI_PR {
	Ngap_NGRAN_CGI_PR_NOTHING,	/* No components present */
	Ngap_NGRAN_CGI_PR_nR_CGI,
	Ngap_NGRAN_CGI_PR_eUTRA_CGI,
	Ngap_NGRAN_CGI_PR_choice_Extensions
} Ngap_NGRAN_CGI_PR;

/* Forward declarations */
struct Ngap_NR_CGI;
struct Ngap_EUTRA_CGI;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_NGRAN-CGI */
typedef struct Ngap_NGRAN_CGI {
	Ngap_NGRAN_CGI_PR present;
	union Ngap_NGRAN_CGI_u {
		struct Ngap_NR_CGI	*nR_CGI;
		struct Ngap_EUTRA_CGI	*eUTRA_CGI;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_NGRAN_CGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NGRAN_CGI;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_NGRAN_CGI_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_NGRAN_CGI_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_NGRAN_CGI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NGRAN_CGI_H_ */
#include <asn_internal.h>
