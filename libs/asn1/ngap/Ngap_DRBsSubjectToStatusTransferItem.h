/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_DRBsSubjectToStatusTransferItem_H_
#define	_Ngap_DRBsSubjectToStatusTransferItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_DRB-ID.h"
#include "Ngap_DRBStatusUL.h"
#include "Ngap_DRBStatusDL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_DRBsSubjectToStatusTransferItem */
typedef struct Ngap_DRBsSubjectToStatusTransferItem {
	Ngap_DRB_ID_t	 dRB_ID;
	Ngap_DRBStatusUL_t	 dRBStatusUL;
	Ngap_DRBStatusDL_t	 dRBStatusDL;
	struct Ngap_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_DRBsSubjectToStatusTransferItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_DRBsSubjectToStatusTransferItem;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_DRBsSubjectToStatusTransferItem_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_DRBsSubjectToStatusTransferItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_DRBsSubjectToStatusTransferItem_H_ */
#include <asn_internal.h>
