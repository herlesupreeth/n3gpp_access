/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_SecurityKey_H_
#define	_Ngap_SecurityKey_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_SecurityKey */
typedef BIT_STRING_t	 Ngap_SecurityKey_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_SecurityKey_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_SecurityKey;
asn_struct_free_f Ngap_SecurityKey_free;
asn_struct_print_f Ngap_SecurityKey_print;
asn_constr_check_f Ngap_SecurityKey_constraint;
per_type_decoder_f Ngap_SecurityKey_decode_aper;
per_type_encoder_f Ngap_SecurityKey_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_SecurityKey_H_ */
#include <asn_internal.h>
