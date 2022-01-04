/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./ngap_asn//38413-g60.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_OverloadAction_H_
#define	_Ngap_OverloadAction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_OverloadAction {
	Ngap_OverloadAction_reject_non_emergency_mo_dt	= 0,
	Ngap_OverloadAction_reject_rrc_cr_signalling	= 1,
	Ngap_OverloadAction_permit_emergency_sessions_and_mobile_terminated_services_only	= 2,
	Ngap_OverloadAction_permit_high_priority_sessions_and_mobile_terminated_services_only	= 3
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_OverloadAction;

/* Ngap_OverloadAction */
typedef long	 Ngap_OverloadAction_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_OverloadAction_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_OverloadAction;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_OverloadAction_specs_1;
asn_struct_free_f Ngap_OverloadAction_free;
asn_struct_print_f Ngap_OverloadAction_print;
asn_constr_check_f Ngap_OverloadAction_constraint;
ber_type_decoder_f Ngap_OverloadAction_decode_ber;
der_type_encoder_f Ngap_OverloadAction_encode_der;
xer_type_decoder_f Ngap_OverloadAction_decode_xer;
xer_type_encoder_f Ngap_OverloadAction_encode_xer;
oer_type_decoder_f Ngap_OverloadAction_decode_oer;
oer_type_encoder_f Ngap_OverloadAction_encode_oer;
per_type_decoder_f Ngap_OverloadAction_decode_uper;
per_type_encoder_f Ngap_OverloadAction_encode_uper;
per_type_decoder_f Ngap_OverloadAction_decode_aper;
per_type_encoder_f Ngap_OverloadAction_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_OverloadAction_H_ */
#include <asn_internal.h>
