/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn1/NGAP_Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -D ngap`
 */

#ifndef	_Ngap_EndpointIPAddressAndPort_H_
#define	_Ngap_EndpointIPAddressAndPort_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_TransportLayerAddress.h"
#include "Ngap_PortNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_EndpointIPAddressAndPort */
typedef struct Ngap_EndpointIPAddressAndPort {
	Ngap_TransportLayerAddress_t	 endpointIPAddress;
	Ngap_PortNumber_t	 portNumber;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_EndpointIPAddressAndPort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_EndpointIPAddressAndPort;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_EndpointIPAddressAndPort_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_EndpointIPAddressAndPort_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_EndpointIPAddressAndPort_H_ */
#include <asn_internal.h>
