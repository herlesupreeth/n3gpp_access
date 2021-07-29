/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "asn1/NGAP_PDU Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_HandoverRequestAcknowledge_H_
#define	_Ngap_HandoverRequestAcknowledge_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_HandoverRequestAcknowledge */
typedef struct Ngap_HandoverRequestAcknowledge {
	Ngap_ProtocolIE_Container_124P34_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_HandoverRequestAcknowledge_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_HandoverRequestAcknowledge;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_HandoverRequestAcknowledge_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_HandoverRequestAcknowledge_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_HandoverRequestAcknowledge_H_ */
#include <asn_internal.h>
