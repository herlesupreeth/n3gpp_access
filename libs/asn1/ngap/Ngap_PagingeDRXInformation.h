/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_PagingeDRXInformation_H_
#define	_Ngap_PagingeDRXInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_Paging-eDRX-Cycle.h"
#include "Ngap_Paging-Time-Window.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_PagingeDRXInformation */
typedef struct Ngap_PagingeDRXInformation {
	Ngap_Paging_eDRX_Cycle_t	 paging_eDRX_Cycle;
	Ngap_Paging_Time_Window_t	*paging_Time_Window;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_PagingeDRXInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PagingeDRXInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_PagingeDRXInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PagingeDRXInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PagingeDRXInformation_H_ */
#include <asn_internal.h>
