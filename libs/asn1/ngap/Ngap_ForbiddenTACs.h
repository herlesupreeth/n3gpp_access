/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_ForbiddenTACs_H_
#define	_Ngap_ForbiddenTACs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_TAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_ForbiddenTACs */
typedef struct Ngap_ForbiddenTACs {
	A_SEQUENCE_OF(Ngap_TAC_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_ForbiddenTACs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ForbiddenTACs;
extern asn_SET_OF_specifics_t asn_SPC_Ngap_ForbiddenTACs_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_ForbiddenTACs_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_ForbiddenTACs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ForbiddenTACs_H_ */
#include <asn_internal.h>
