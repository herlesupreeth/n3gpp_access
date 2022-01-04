/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_UEContextResumeRequest_H_
#define	_Ngap_UEContextResumeRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_UEContextResumeRequest */
typedef struct Ngap_UEContextResumeRequest {
	Ngap_ProtocolIE_Container_9538P15_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_UEContextResumeRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UEContextResumeRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_UEContextResumeRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UEContextResumeRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UEContextResumeRequest_H_ */
#include <asn_internal.h>
