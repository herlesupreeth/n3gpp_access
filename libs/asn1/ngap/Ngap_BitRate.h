/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_BitRate_H_
#define	_Ngap_BitRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_BitRate */
typedef INTEGER_t	 Ngap_BitRate_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_BitRate_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_BitRate;
asn_struct_free_f Ngap_BitRate_free;
asn_struct_print_f Ngap_BitRate_print;
asn_constr_check_f Ngap_BitRate_constraint;
ber_type_decoder_f Ngap_BitRate_decode_ber;
der_type_encoder_f Ngap_BitRate_encode_der;
xer_type_decoder_f Ngap_BitRate_decode_xer;
xer_type_encoder_f Ngap_BitRate_encode_xer;
oer_type_decoder_f Ngap_BitRate_decode_oer;
oer_type_encoder_f Ngap_BitRate_encode_oer;
per_type_decoder_f Ngap_BitRate_decode_uper;
per_type_encoder_f Ngap_BitRate_encode_uper;
per_type_decoder_f Ngap_BitRate_decode_aper;
per_type_encoder_f Ngap_BitRate_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_BitRate_H_ */
#include <asn_internal.h>
