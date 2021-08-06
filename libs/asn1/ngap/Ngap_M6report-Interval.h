/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_M6report_Interval_H_
#define	_Ngap_M6report_Interval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_M6report_Interval {
	Ngap_M6report_Interval_ms120	= 0,
	Ngap_M6report_Interval_ms240	= 1,
	Ngap_M6report_Interval_ms480	= 2,
	Ngap_M6report_Interval_ms640	= 3,
	Ngap_M6report_Interval_ms1024	= 4,
	Ngap_M6report_Interval_ms2048	= 5,
	Ngap_M6report_Interval_ms5120	= 6,
	Ngap_M6report_Interval_ms10240	= 7,
	Ngap_M6report_Interval_ms20480	= 8,
	Ngap_M6report_Interval_ms40960	= 9,
	Ngap_M6report_Interval_min1	= 10,
	Ngap_M6report_Interval_min6	= 11,
	Ngap_M6report_Interval_min12	= 12,
	Ngap_M6report_Interval_min30	= 13
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_M6report_Interval;

/* Ngap_M6report-Interval */
typedef long	 Ngap_M6report_Interval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_M6report_Interval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_M6report_Interval;
extern const asn_INTEGER_specifics_t asn_SPC_M6report_Interval_specs_1;
asn_struct_free_f M6report_Interval_free;
asn_struct_print_f M6report_Interval_print;
asn_constr_check_f M6report_Interval_constraint;
ber_type_decoder_f M6report_Interval_decode_ber;
der_type_encoder_f M6report_Interval_encode_der;
xer_type_decoder_f M6report_Interval_decode_xer;
xer_type_encoder_f M6report_Interval_encode_xer;
oer_type_decoder_f M6report_Interval_decode_oer;
oer_type_encoder_f M6report_Interval_encode_oer;
per_type_decoder_f M6report_Interval_decode_uper;
per_type_encoder_f M6report_Interval_encode_uper;
per_type_decoder_f M6report_Interval_decode_aper;
per_type_encoder_f M6report_Interval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_M6report_Interval_H_ */
#include <asn_internal.h>
