/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_PagingProbabilityInformation_H_
#define	_Ngap_PagingProbabilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_PagingProbabilityInformation {
	Ngap_PagingProbabilityInformation_p00	= 0,
	Ngap_PagingProbabilityInformation_p05	= 1,
	Ngap_PagingProbabilityInformation_p10	= 2,
	Ngap_PagingProbabilityInformation_p15	= 3,
	Ngap_PagingProbabilityInformation_p20	= 4,
	Ngap_PagingProbabilityInformation_p25	= 5,
	Ngap_PagingProbabilityInformation_p30	= 6,
	Ngap_PagingProbabilityInformation_p35	= 7,
	Ngap_PagingProbabilityInformation_p40	= 8,
	Ngap_PagingProbabilityInformation_p45	= 9,
	Ngap_PagingProbabilityInformation_p50	= 10,
	Ngap_PagingProbabilityInformation_p55	= 11,
	Ngap_PagingProbabilityInformation_p60	= 12,
	Ngap_PagingProbabilityInformation_p65	= 13,
	Ngap_PagingProbabilityInformation_p70	= 14,
	Ngap_PagingProbabilityInformation_p75	= 15,
	Ngap_PagingProbabilityInformation_p80	= 16,
	Ngap_PagingProbabilityInformation_p85	= 17,
	Ngap_PagingProbabilityInformation_p90	= 18,
	Ngap_PagingProbabilityInformation_p95	= 19,
	Ngap_PagingProbabilityInformation_p100	= 20
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_PagingProbabilityInformation;

/* Ngap_PagingProbabilityInformation */
typedef long	 Ngap_PagingProbabilityInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_PagingProbabilityInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PagingProbabilityInformation;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_PagingProbabilityInformation_specs_1;
asn_struct_free_f Ngap_PagingProbabilityInformation_free;
asn_struct_print_f Ngap_PagingProbabilityInformation_print;
asn_constr_check_f Ngap_PagingProbabilityInformation_constraint;
ber_type_decoder_f Ngap_PagingProbabilityInformation_decode_ber;
der_type_encoder_f Ngap_PagingProbabilityInformation_encode_der;
xer_type_decoder_f Ngap_PagingProbabilityInformation_decode_xer;
xer_type_encoder_f Ngap_PagingProbabilityInformation_encode_xer;
oer_type_decoder_f Ngap_PagingProbabilityInformation_decode_oer;
oer_type_encoder_f Ngap_PagingProbabilityInformation_encode_oer;
per_type_decoder_f Ngap_PagingProbabilityInformation_decode_uper;
per_type_encoder_f Ngap_PagingProbabilityInformation_encode_uper;
per_type_decoder_f Ngap_PagingProbabilityInformation_decode_aper;
per_type_encoder_f Ngap_PagingProbabilityInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PagingProbabilityInformation_H_ */
#include <asn_internal.h>
