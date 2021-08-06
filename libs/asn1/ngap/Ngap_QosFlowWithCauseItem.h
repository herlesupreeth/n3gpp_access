/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_QosFlowWithCauseItem_H_
#define	_Ngap_QosFlowWithCauseItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_QosFlowIdentifier.h"
#include "Ngap_Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_QosFlowWithCauseItem */
typedef struct Ngap_QosFlowWithCauseItem {
	Ngap_QosFlowIdentifier_t	 qosFlowIdentifier;
	Ngap_Cause_t	 cause;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_QosFlowWithCauseItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_QosFlowWithCauseItem;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_QosFlowWithCauseItem_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_QosFlowWithCauseItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_QosFlowWithCauseItem_H_ */
#include <asn_internal.h>
