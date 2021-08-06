/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_M7Configuration_H_
#define	_Ngap_M7Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_M7period.h"
#include "Ngap_Links-to-log.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_M7Configuration */
typedef struct Ngap_M7Configuration {
	Ngap_M7period_t	 m7period;
	Ngap_Links_to_log_t	 m7_links_to_log;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_M7Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_M7Configuration;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_M7Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_M7Configuration_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_M7Configuration_H_ */
#include <asn_internal.h>
