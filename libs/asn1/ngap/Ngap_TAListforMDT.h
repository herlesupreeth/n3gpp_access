/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_TAListforMDT_H_
#define	_Ngap_TAListforMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_TAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_TAListforMDT */
typedef struct Ngap_TAListforMDT {
	A_SEQUENCE_OF(Ngap_TAC_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_TAListforMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_TAListforMDT;
extern asn_SET_OF_specifics_t asn_SPC_Ngap_TAListforMDT_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_TAListforMDT_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_TAListforMDT_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_TAListforMDT_H_ */
#include <asn_internal.h>