/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_Suspend_Response_Indication_H_
#define	_Ngap_Suspend_Response_Indication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_Suspend_Response_Indication {
	Ngap_Suspend_Response_Indication_suspend_indicated	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_Suspend_Response_Indication;

/* Ngap_Suspend-Response-Indication */
typedef long	 Ngap_Suspend_Response_Indication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_Suspend_Response_Indication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_Suspend_Response_Indication;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_Suspend_Response_Indication_specs_1;
asn_struct_free_f Ngap_Suspend_Response_Indication_free;
asn_struct_print_f Ngap_Suspend_Response_Indication_print;
asn_constr_check_f Ngap_Suspend_Response_Indication_constraint;
ber_type_decoder_f Ngap_Suspend_Response_Indication_decode_ber;
der_type_encoder_f Ngap_Suspend_Response_Indication_encode_der;
xer_type_decoder_f Ngap_Suspend_Response_Indication_decode_xer;
xer_type_encoder_f Ngap_Suspend_Response_Indication_encode_xer;
oer_type_decoder_f Ngap_Suspend_Response_Indication_decode_oer;
oer_type_encoder_f Ngap_Suspend_Response_Indication_encode_oer;
per_type_decoder_f Ngap_Suspend_Response_Indication_decode_uper;
per_type_encoder_f Ngap_Suspend_Response_Indication_encode_uper;
per_type_decoder_f Ngap_Suspend_Response_Indication_decode_aper;
per_type_encoder_f Ngap_Suspend_Response_Indication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_Suspend_Response_Indication_H_ */
#include <asn_internal.h>
