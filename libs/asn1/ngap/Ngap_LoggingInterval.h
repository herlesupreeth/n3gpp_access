/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_LoggingInterval_H_
#define	_Ngap_LoggingInterval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_LoggingInterval {
	Ngap_LoggingInterval_ms320	= 0,
	Ngap_LoggingInterval_ms640	= 1,
	Ngap_LoggingInterval_ms1280	= 2,
	Ngap_LoggingInterval_ms2560	= 3,
	Ngap_LoggingInterval_ms5120	= 4,
	Ngap_LoggingInterval_ms10240	= 5,
	Ngap_LoggingInterval_ms20480	= 6,
	Ngap_LoggingInterval_ms30720	= 7,
	Ngap_LoggingInterval_ms40960	= 8,
	Ngap_LoggingInterval_ms61440	= 9,
	Ngap_LoggingInterval_infinity	= 10
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_LoggingInterval;

/* Ngap_LoggingInterval */
typedef long	 Ngap_LoggingInterval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_LoggingInterval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_LoggingInterval;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_LoggingInterval_specs_1;
asn_struct_free_f Ngap_LoggingInterval_free;
asn_struct_print_f Ngap_LoggingInterval_print;
asn_constr_check_f Ngap_LoggingInterval_constraint;
ber_type_decoder_f Ngap_LoggingInterval_decode_ber;
der_type_encoder_f Ngap_LoggingInterval_encode_der;
xer_type_decoder_f Ngap_LoggingInterval_decode_xer;
xer_type_encoder_f Ngap_LoggingInterval_encode_xer;
oer_type_decoder_f Ngap_LoggingInterval_decode_oer;
oer_type_encoder_f Ngap_LoggingInterval_encode_oer;
per_type_decoder_f Ngap_LoggingInterval_decode_uper;
per_type_encoder_f Ngap_LoggingInterval_encode_uper;
per_type_decoder_f Ngap_LoggingInterval_decode_aper;
per_type_encoder_f Ngap_LoggingInterval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_LoggingInterval_H_ */
#include <asn_internal.h>
