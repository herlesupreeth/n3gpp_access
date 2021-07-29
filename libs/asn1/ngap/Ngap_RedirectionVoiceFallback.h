/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_RedirectionVoiceFallback_H_
#define	_Ngap_RedirectionVoiceFallback_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_RedirectionVoiceFallback {
	Ngap_RedirectionVoiceFallback_possible	= 0,
	Ngap_RedirectionVoiceFallback_not_possible	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_RedirectionVoiceFallback;

/* Ngap_RedirectionVoiceFallback */
typedef long	 Ngap_RedirectionVoiceFallback_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_RedirectionVoiceFallback_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_RedirectionVoiceFallback;
extern const asn_INTEGER_specifics_t asn_SPC_RedirectionVoiceFallback_specs_1;
asn_struct_free_f RedirectionVoiceFallback_free;
asn_struct_print_f RedirectionVoiceFallback_print;
asn_constr_check_f RedirectionVoiceFallback_constraint;
per_type_decoder_f RedirectionVoiceFallback_decode_aper;
per_type_encoder_f RedirectionVoiceFallback_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_RedirectionVoiceFallback_H_ */
#include <asn_internal.h>
