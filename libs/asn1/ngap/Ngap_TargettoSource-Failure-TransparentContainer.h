/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_TargettoSource_Failure_TransparentContainer_H_
#define	_Ngap_TargettoSource_Failure_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_TargettoSource-Failure-TransparentContainer */
typedef OCTET_STRING_t	 Ngap_TargettoSource_Failure_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_TargettoSource_Failure_TransparentContainer;
asn_struct_free_f Ngap_TargettoSource_Failure_TransparentContainer_free;
asn_struct_print_f Ngap_TargettoSource_Failure_TransparentContainer_print;
asn_constr_check_f Ngap_TargettoSource_Failure_TransparentContainer_constraint;
per_type_decoder_f Ngap_TargettoSource_Failure_TransparentContainer_decode_aper;
per_type_encoder_f Ngap_TargettoSource_Failure_TransparentContainer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_TargettoSource_Failure_TransparentContainer_H_ */
#include <asn_internal.h>
