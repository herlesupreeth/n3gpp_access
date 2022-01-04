/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_DRBStatusUL18_H_
#define	_Ngap_DRBStatusUL18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_COUNTValueForPDCP-SN18.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_DRBStatusUL18 */
typedef struct Ngap_DRBStatusUL18 {
	Ngap_COUNTValueForPDCP_SN18_t	 uL_COUNTValue;
	BIT_STRING_t	*receiveStatusOfUL_PDCP_SDUs;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_DRBStatusUL18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_DRBStatusUL18;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_DRBStatusUL18_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_DRBStatusUL18_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_DRBStatusUL18_H_ */
#include <asn_internal.h>
