/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "./asn1//NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -D ./ngap/`
 */

#ifndef	_Ngap_BluetoothMeasConfig_H_
#define	_Ngap_BluetoothMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_BluetoothMeasConfig {
	Ngap_BluetoothMeasConfig_setup	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_BluetoothMeasConfig;

/* Ngap_BluetoothMeasConfig */
typedef long	 Ngap_BluetoothMeasConfig_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_BluetoothMeasConfig_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_BluetoothMeasConfig;
extern const asn_INTEGER_specifics_t asn_SPC_BluetoothMeasConfig_specs_1;
asn_struct_free_f BluetoothMeasConfig_free;
asn_struct_print_f BluetoothMeasConfig_print;
asn_constr_check_f BluetoothMeasConfig_constraint;
ber_type_decoder_f BluetoothMeasConfig_decode_ber;
der_type_encoder_f BluetoothMeasConfig_encode_der;
xer_type_decoder_f BluetoothMeasConfig_decode_xer;
xer_type_encoder_f BluetoothMeasConfig_encode_xer;
oer_type_decoder_f BluetoothMeasConfig_decode_oer;
oer_type_encoder_f BluetoothMeasConfig_encode_oer;
per_type_decoder_f BluetoothMeasConfig_decode_uper;
per_type_encoder_f BluetoothMeasConfig_encode_uper;
per_type_decoder_f BluetoothMeasConfig_decode_aper;
per_type_encoder_f BluetoothMeasConfig_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_BluetoothMeasConfig_H_ */
#include <asn_internal.h>
