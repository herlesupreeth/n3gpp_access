/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_PagingAttemptInformation_H_
#define	_Ngap_PagingAttemptInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PagingAttemptCount.h"
#include "Ngap_IntendedNumberOfPagingAttempts.h"
#include "Ngap_NextPagingAreaScope.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_PagingAttemptInformation */
typedef struct Ngap_PagingAttemptInformation {
	Ngap_PagingAttemptCount_t	 pagingAttemptCount;
	Ngap_IntendedNumberOfPagingAttempts_t	 intendedNumberOfPagingAttempts;
	Ngap_NextPagingAreaScope_t	*nextPagingAreaScope;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_PagingAttemptInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PagingAttemptInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_PagingAttemptInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PagingAttemptInformation_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PagingAttemptInformation_H_ */
#include <asn_internal.h>
