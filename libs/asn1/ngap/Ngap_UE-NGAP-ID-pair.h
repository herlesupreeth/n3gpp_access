/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_UE_NGAP_ID_pair_H_
#define	_Ngap_UE_NGAP_ID_pair_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_AMF-UE-NGAP-ID.h"
#include "Ngap_RAN-UE-NGAP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_UE-NGAP-ID-pair */
typedef struct Ngap_UE_NGAP_ID_pair {
	Ngap_AMF_UE_NGAP_ID_t	 aMF_UE_NGAP_ID;
	Ngap_RAN_UE_NGAP_ID_t	 rAN_UE_NGAP_ID;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_UE_NGAP_ID_pair_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UE_NGAP_ID_pair;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_UE_NGAP_ID_pair_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UE_NGAP_ID_pair_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UE_NGAP_ID_pair_H_ */
#include <asn_internal.h>
