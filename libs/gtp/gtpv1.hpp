//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <optional>
#include <cstdint>
#include <iostream>
#include <vector>
#include <iterator>
#include <memory>

#include "octet_buffer.hpp"

namespace gtp {

enum class GtpMessageType {
  echoRequest = 1,
  echoResponse = 2,
  createPdpContextReq = 16,
  createPdpContextRes = 17,
  updatePdpContextReq = 18,
  updatePdpContextRes = 19,
  deletePdpContextReq = 20,
  deletePdpContextRes = 21,
  errorIndication = 26,
  pduNotificationReq = 27,
  supportedExtensionHeadersNotification = 31,
  endMarker = 254,
  gPdu = 255,
};

class GtpV1Hdr {
 public:
  GtpV1Hdr(GtpMessageType message_type, uint32_t teid, uint8_t flags, uint16_t length);
  ~GtpV1Hdr();

  uint16_t GetLength() const;
  void SetLength(uint16_t length);
  uint32_t GetTeid() const;
  void SetTeid(uint32_t teid);
  uint8_t GetMessageType() const;
  void SetMessageType(GtpMessageType message_type);
  bool IsSequenceNumberPresent() const;
  void SetSequenceNumberFlag();
  void UnsetSequenceNumberFlag();
  bool IsNPduNumberPresent() const;
  void SetNPduNumberFlag();
  void UnsetNPduNumberFlag();
  bool IsNxtExtHeaderPresent() const;
  void SetNxtExtHeaderFlag();
  void UnsetNxtExtHeaderFlag();

  bool Encode(OctetBuffer &buf) const;
  static std::unique_ptr<GtpV1Hdr> Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint8_t flags_ = 0x30;
  uint8_t message_type_;
  uint16_t length_ = 0;
  uint32_t teid_ = 0;
};

enum class GtpV1ExtHdrType {
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

class GtpV1ExtHdr {
 public:
  GtpV1ExtHdr(GtpV1ExtHdrType ext_type);
  ~GtpV1ExtHdr();

 protected:
  uint8_t nxt_ext_hdr_type_ = 0x00;
};

class GtpV1UdpPortExtHdr : GtpV1ExtHdr {
 public:
  GtpV1UdpPortExtHdr(uint16_t port);
  ~GtpV1UdpPortExtHdr();

  bool Encode(OctetBuffer &buf) const;
  static std::unique_ptr<GtpV1UdpPortExtHdr> Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint16_t port_;
};

class GtpV1PdcpPduNumberExtHdr : GtpV1ExtHdr {
 public:
  GtpV1PdcpPduNumberExtHdr(uint16_t pdcp_pdu_num);
  ~GtpV1PdcpPduNumberExtHdr();

  bool Encode(OctetBuffer &buf) const;
  static std::unique_ptr<GtpV1PdcpPduNumberExtHdr> Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx);

 private:
  // 15 bits
  uint16_t pdcp_pdu_num_ : 15;
};

class GtpV1LongPdcpPduNumberExtHdr : GtpV1ExtHdr {
 public:
  GtpV1LongPdcpPduNumberExtHdr(uint16_t l_pdcp_pdu_num);
  ~GtpV1LongPdcpPduNumberExtHdr();

  bool Encode(OctetBuffer &buf) const;
  static std::unique_ptr<GtpV1LongPdcpPduNumberExtHdr> Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx);

 private:
  // 18 bits
  uint32_t l_pdcp_pdu_num_ : 18;
};

class GtpV1ServiceClassIndicatorExtHdr : GtpV1ExtHdr {
 public:
  GtpV1ServiceClassIndicatorExtHdr(uint8_t sci);
  ~GtpV1ServiceClassIndicatorExtHdr();

  bool Encode(OctetBuffer &buf) const;
  static std::unique_ptr<GtpV1ServiceClassIndicatorExtHdr> Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx);

 private:
  uint8_t sci_;
};

class GtpV1BaseRanContainerExtHdr : GtpV1ExtHdr {
 public:
  GtpV1BaseRanContainerExtHdr(
    GtpV1ExtHdrType ran_container_type, const OctetBuffer::Octets &ran_container,
    OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~GtpV1BaseRanContainerExtHdr();

  bool Encode(OctetBuffer &buf) const;
  static std::unique_ptr<GtpV1BaseRanContainerExtHdr> Decode(
    GtpV1ExtHdrType ran_container_type, const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx);

 protected:
  OctetBuffer ran_container_;
};

class GtpV1RanContainerExtHdr : public GtpV1BaseRanContainerExtHdr {
 public:
  GtpV1RanContainerExtHdr(
    const OctetBuffer::Octets &ran_container,
    OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~GtpV1RanContainerExtHdr();

  static std::unique_ptr<GtpV1RanContainerExtHdr> Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);
};

class GtpV1XwRanContainerExtHdr : GtpV1BaseRanContainerExtHdr {
 public:
  GtpV1XwRanContainerExtHdr(
    const OctetBuffer::Octets &ran_container,
    OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~GtpV1XwRanContainerExtHdr();

  static std::unique_ptr<GtpV1XwRanContainerExtHdr> Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);
};

class GtpV1NrRanContainerExtHdr : GtpV1BaseRanContainerExtHdr {
 public:
  GtpV1NrRanContainerExtHdr(
    const OctetBuffer::Octets &ran_container,
    OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size);
  ~GtpV1NrRanContainerExtHdr();

  static std::unique_ptr<GtpV1NrRanContainerExtHdr> Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx);
};

class GtpV1Msg {
 public:
  uint16_t GetSequenceNumber();
  void SetSequenceNumber(uint16_t seq_num);
  uint8_t GetNPduNumber();
  void SetNPduNumber(uint8_t n_pdu_num);
 private:
  GtpV1Hdr header_;
  std::optional<uint16_t> seq_num_ = std::nullopt;
  std::optional<uint8_t> n_pdu_num_ = std::nullopt;
  std::optional<std::vector<GtpV1ExtHdr>> extensions_ = std::nullopt;
  OctetBuffer payload_;
};

} // namespace gtp
