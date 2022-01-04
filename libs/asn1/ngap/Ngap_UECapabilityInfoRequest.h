/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_UECapabilityInfoRequest_H_
#define	_Ngap_UECapabilityInfoRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_UECapabilityInfoRequest {
	Ngap_UECapabilityInfoRequest_requested	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_UECapabilityInfoRequest;

/* Ngap_UECapabilityInfoRequest */
typedef long	 Ngap_UECapabilityInfoRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_UECapabilityInfoRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UECapabilityInfoRequest;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_UECapabilityInfoRequest_specs_1;
asn_struct_free_f Ngap_UECapabilityInfoRequest_free;
asn_struct_print_f Ngap_UECapabilityInfoRequest_print;
asn_constr_check_f Ngap_UECapabilityInfoRequest_constraint;
ber_type_decoder_f Ngap_UECapabilityInfoRequest_decode_ber;
der_type_encoder_f Ngap_UECapabilityInfoRequest_encode_der;
xer_type_decoder_f Ngap_UECapabilityInfoRequest_decode_xer;
xer_type_encoder_f Ngap_UECapabilityInfoRequest_encode_xer;
oer_type_decoder_f Ngap_UECapabilityInfoRequest_decode_oer;
oer_type_encoder_f Ngap_UECapabilityInfoRequest_encode_oer;
per_type_decoder_f Ngap_UECapabilityInfoRequest_decode_uper;
per_type_encoder_f Ngap_UECapabilityInfoRequest_encode_uper;
per_type_decoder_f Ngap_UECapabilityInfoRequest_decode_aper;
per_type_encoder_f Ngap_UECapabilityInfoRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UECapabilityInfoRequest_H_ */
#include <asn_internal.h>
