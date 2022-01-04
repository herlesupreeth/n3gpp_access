//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#ifndef N3GPP_ACCESS_LIBS_GTP_GTPV1_H_
#define N3GPP_ACCESS_LIBS_GTP_GTPV1_H_

#include <cstdint>
#include <iostream>
#include <iterator>
#include <memory>
#include <optional>
#include <vector>

#include "octet_buffer.h"

namespace gtpv1u {

using common::OctetBuffer;

enum class MessageType {
  echoRequest = 1,
  echoResponse = 2,
  errorIndication = 26,
  supportedExtensionHeadersNotification = 31,
  endMarker = 254,
  gPdu = 255,
};

class Header {
 public:
  Header(MessageType message_type, uint32_t teid, uint8_t flags, uint16_t length);
  ~Header();

  [[nodiscard]] uint16_t GetLength() const;
  void SetLength(uint16_t length);
  [[nodiscard]] uint32_t GetTeid() const;
  void SetTeid(uint32_t teid);
  [[nodiscard]] uint8_t GetMessageType() const;
  void SetMessageType(MessageType message_type);
  [[nodiscard]] bool IsSequenceNumberPresent() const;
  void SetSequenceNumberFlag();
  void UnsetSequenceNumberFlag();
  [[nodiscard]] bool IsNPduNumberPresent() const;
  void SetNPduNumberFlag();
  void UnsetNPduNumberFlag();
  [[nodiscard]] bool IsNxtExtHeaderPresent() const;
  void SetNxtExtHeaderFlag();
  void UnsetNxtExtHeaderFlag();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<Header> Decode(
	  const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint8_t flags_ = 0x30;
  uint8_t message_type_;
  uint16_t length_ = 0;
  uint32_t teid_ = 0;
};

enum class ExtHdrType {
  noMoreExtensionHeaders = 0x00,
  reservedControlPlaneOnly1 = 0x01,
  reservedControlPlaneOnly2 = 0x02,
  longPdcpPduNumber1 = 0x03,
  serviceClassIndicator = 0x20,
  udpPort = 0x40,
  ranContainer = 0x81,
  longPdcpPduNumber2 = 0x82,
  xwRanContainer = 0x83,
  nrRanContainer = 0x84,
  pduSessionContainer = 0x85,
  pdcpPduNumber = 0xC0,
  reservedControlPlaneOnly3 = 0xC1,
  reservedControlPlaneOnly4 = 0xC2,
};

class ExtHdr {
 public:
  explicit ExtHdr(ExtHdrType ext_type);
  ~ExtHdr();

 protected:
  uint8_t nxt_ext_hdr_type_ = 0x00;
};

class UdpPortExtHdr : ExtHdr {
 public:
  explicit UdpPortExtHdr(uint16_t port);
  ~UdpPortExtHdr();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<UdpPortExtHdr> Decode(const OctetBuffer &pdu,
											   OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint16_t port_;
};

class PdcpPduNumberExtHdr : ExtHdr {
 public:
  explicit PdcpPduNumberExtHdr(uint16_t pdcp_pdu_num);
  ~PdcpPduNumberExtHdr();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<PdcpPduNumberExtHdr> Decode(const OctetBuffer &pdu,
													 OctetBuffer::OctetBufferSizeType &idx);

 private:
  // 15 bits
  uint16_t pdcp_pdu_num_ : 15;
};

class LongPdcpPduNumberExtHdr : ExtHdr {
 public:
  explicit LongPdcpPduNumberExtHdr(uint16_t l_pdcp_pdu_num);
  ~LongPdcpPduNumberExtHdr();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<LongPdcpPduNumberExtHdr> Decode(const OctetBuffer &pdu,
														 OctetBuffer::OctetBufferSizeType &idx);

 private:
  // 18 bits
  uint32_t l_pdcp_pdu_num_ : 18;
};

class ServiceClassIndicatorExtHdr : ExtHdr {
 public:
  explicit ServiceClassIndicatorExtHdr(uint8_t sci);
  ~ServiceClassIndicatorExtHdr();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<ServiceClassIndicatorExtHdr> Decode(const OctetBuffer &pdu,
															 OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint8_t sci_;
};

class BaseRanContainerExtHdr : ExtHdr {
 public:
  BaseRanContainerExtHdr(
	  ExtHdrType ran_container_type, const OctetBuffer::Octets &ran_container,
	  OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~BaseRanContainerExtHdr();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<BaseRanContainerExtHdr> Decode(
	  ExtHdrType ran_container_type, const OctetBuffer &pdu,
	  OctetBuffer::OctetBufferSizeType &idx);

 protected:
  OctetBuffer ran_container_;
};

class RanContainerExtHdr : public BaseRanContainerExtHdr {
 public:
  RanContainerExtHdr(
	  const OctetBuffer::Octets &ran_container,
	  OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~RanContainerExtHdr();

  static std::unique_ptr<RanContainerExtHdr> Decode(
	  const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);
};

class XwRanContainerExtHdr : BaseRanContainerExtHdr {
 public:
  XwRanContainerExtHdr(
	  const OctetBuffer::Octets &ran_container,
	  OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~XwRanContainerExtHdr();

  static std::unique_ptr<XwRanContainerExtHdr> Decode(
	  const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);
};

class NrRanContainerExtHdr : BaseRanContainerExtHdr {
 public:
  NrRanContainerExtHdr(
	  const OctetBuffer::Octets &ran_container,
	  OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~NrRanContainerExtHdr();

  static std::unique_ptr<NrRanContainerExtHdr> Decode(
	  const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);
};

class PduSessionContainerExtHdr : ExtHdr {
 public:
  PduSessionContainerExtHdr(const OctetBuffer::Octets &pdu_sess_container,
							OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~PduSessionContainerExtHdr();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<PduSessionContainerExtHdr> Decode(const OctetBuffer &pdu,
														   OctetBuffer::OctetBufferSizeType &idx);

 protected:
  OctetBuffer pdu_sess_container_;
};

class Msg {
 public:
  uint16_t GetSequenceNumber();
  void SetSequenceNumber(uint16_t seq_num);
  uint8_t GetNPduNumber();
  void SetNPduNumber(uint8_t n_pdu_num);

 private:
  Header header_;
  std::optional<uint16_t> seq_num_ = std::nullopt;
  std::optional<uint8_t> n_pdu_num_ = std::nullopt;
  std::optional<std::vector<ExtHdr>> extensions_ = std::nullopt;
  OctetBuffer payload_;
};

// Information Element Types

enum class IeType {
  recovery = 14,
  tunnelEndpointIdentifierData1 = 16,
  gsnAddress = 133,
  extensionHeaderTypeList = 141,
  privateExtension = 255,
};

class Ie {
 public:
  Ie(IeType ie_type, bool is_tlv);
  ~Ie();

 protected:
  uint8_t ie_type_;
};

class RecoveryIe : Ie {
 public:
  explicit RecoveryIe(uint8_t restart_cntr);
  ~RecoveryIe();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<RecoveryIe> Decode(const OctetBuffer &pdu,
											OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint8_t restart_cntr_;
};

class TunnelEndpointIdentifierData1Ie : Ie {
 public:
  explicit TunnelEndpointIdentifierData1Ie(uint32_t teid);
  ~TunnelEndpointIdentifierData1Ie();

  int Encode(OctetBuffer &buf) const;
  static std::unique_ptr<TunnelEndpointIdentifierData1Ie> Decode(const OctetBuffer &pdu,
																 OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint32_t teid_;
};

}// namespace gtpv1u

#endif//N3GPP_ACCESS_LIBS_GTP_GTPV1_H_
