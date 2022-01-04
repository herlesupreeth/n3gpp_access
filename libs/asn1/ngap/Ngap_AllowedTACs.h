/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_AllowedTACs_H_
#define	_Ngap_AllowedTACs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_TAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_AllowedTACs */
typedef struct Ngap_AllowedTACs {
	A_SEQUENCE_OF(Ngap_TAC_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_AllowedTACs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_AllowedTACs;
extern asn_SET_OF_specifics_t asn_SPC_Ngap_AllowedTACs_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_AllowedTACs_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_AllowedTACs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_AllowedTACs_H_ */
#include <asn_internal.h>
