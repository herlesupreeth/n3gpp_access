/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_CoreNetworkAssistanceInformationForInactive_H_
#define	_Ngap_CoreNetworkAssistanceInformationForInactive_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_UEIdentityIndexValue.h"
#include "Ngap_PagingDRX.h"
#include "Ngap_PeriodicRegistrationUpdateTimer.h"
#include "Ngap_MICOModeIndication.h"
#include "Ngap_TAIListForInactive.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ExpectedUEBehaviour;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_CoreNetworkAssistanceInformationForInactive */
typedef struct Ngap_CoreNetworkAssistanceInformationForInactive {
	Ngap_UEIdentityIndexValue_t	 uEIdentityIndexValue;
	Ngap_PagingDRX_t	*uESpecificDRX;	/* OPTIONAL */
	Ngap_PeriodicRegistrationUpdateTimer_t	 periodicRegistrationUpdateTimer;
	Ngap_MICOModeIndication_t	*mICOModeIndication;	/* OPTIONAL */
	Ngap_TAIListForInactive_t	 tAIListForInactive;
	struct Ngap_ExpectedUEBehaviour	*expectedUEBehaviour;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_CoreNetworkAssistanceInformationForInactive_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_CoreNetworkAssistanceInformationForInactive;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_CoreNetworkAssistanceInformationForInactive_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_CoreNetworkAssistanceInformationForInactive_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_CoreNetworkAssistanceInformationForInactive_H_ */
#include <asn_internal.h>
