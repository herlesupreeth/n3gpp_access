/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_TargetRNC_ID_H_
#define	_Ngap_TargetRNC_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_LAI.h"
#include "Ngap_RNC-ID.h"
#include "Ngap_ExtendedRNC-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_TargetRNC-ID */
typedef struct Ngap_TargetRNC_ID {
	Ngap_LAI_t	 lAI;
	Ngap_RNC_ID_t	 rNC_ID;
	Ngap_ExtendedRNC_ID_t	*extendedRNC_ID;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_TargetRNC_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_TargetRNC_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_TargetRNC_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_TargetRNC_ID_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_TargetRNC_ID_H_ */
#include <asn_internal.h>
