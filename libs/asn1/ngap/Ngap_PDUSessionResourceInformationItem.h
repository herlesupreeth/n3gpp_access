/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_PDUSessionResourceInformationItem_H_
#define	_Ngap_PDUSessionResourceInformationItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PDUSessionID.h"
#include "Ngap_QosFlowInformationList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_DRBsToQosFlowsMappingList;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_PDUSessionResourceInformationItem */
typedef struct Ngap_PDUSessionResourceInformationItem {
	Ngap_PDUSessionID_t	 pDUSessionID;
	Ngap_QosFlowInformationList_t	 qosFlowInformationList;
	struct Ngap_DRBsToQosFlowsMappingList	*dRBsToQosFlowsMappingList;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_PDUSessionResourceInformationItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceInformationItem;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_PDUSessionResourceInformationItem_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceInformationItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PDUSessionResourceInformationItem_H_ */
#include <asn_internal.h>
