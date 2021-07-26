//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "gtpv1.hpp"

namespace gtp {

GtpV1Hdr::GtpV1Hdr(GtpMessageType message_type, uint32_t teid, uint8_t flags,
              uint16_t length)
  : teid_(teid), length_(length), flags_(flags) {
  message_type_ = static_cast<uint8_t>(message_type);
}

GtpV1Hdr::~GtpV1Hdr() {}

uint16_t GtpV1Hdr::GetLength() const {
 return length_;
}

void GtpV1Hdr::SetLength(uint16_t length) {
  length_ = length;
}

uint32_t GtpV1Hdr::GetTeid() const {
  return teid_;
}

void GtpV1Hdr::SetTeid(uint32_t teid) {
  teid_ = teid;
}

uint8_t GtpV1Hdr::GetMessageType() const {
  return message_type_;
}

void GtpV1Hdr::SetMessageType(GtpMessageType message_type) {
  message_type_ = static_cast<uint8_t>(message_type);
}

bool GtpV1Hdr::IsSequenceNumberPresent() const {
  return (flags_ >> 1) & 0x01;
}

void GtpV1Hdr::SetSequenceNumberFlag() {
  flags_ |= 0x02;
}

void GtpV1Hdr::UnsetSequenceNumberFlag() {
  flags_ &= 0xFD;
}

bool GtpV1Hdr::IsNPduNumberPresent() const {
  return flags_ & 0x01;
}

void GtpV1Hdr::SetNPduNumberFlag() {
  flags_ |= 0x01;
}

void GtpV1Hdr::UnsetNPduNumberFlag() {
  flags_ &= 0xFE;
}

bool GtpV1Hdr::IsNxtExtHeaderPresent() const {
  return (flags_ >> 2) & 0x01;
}

void GtpV1Hdr::SetNxtExtHeaderFlag() {
  flags_ |= 0x04;
}

void GtpV1Hdr::UnsetNxtExtHeaderFlag() {
  flags_ &= 0xFB;
}

bool GtpV1Hdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(flags_);
  buf.AppendUint8(message_type_);
  buf.AppendBigEndianUint16(length_);
  buf.AppendBigEndianUint32(teid_);
  return true;
}

GtpV1Hdr* GtpV1Hdr::Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx) {

  // Start with first byte at index 0
  idx = 0;
  if (pdu.GetLength() < 8) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  uint8_t flags = pdu.GetUint8(0);
  // Check the GTP version decoded from PDU
  if (((flags >> 5) & 0x07) != 1) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported GTP version." << std::endl;
    return nullptr;
  }
  // Check the Protocol Type Bit decoded from PDU (only GTP is handled not GTP')
  if (((flags >> 4) & 0x01) != 1) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid Protocol Type for GTP" << std::endl;
    return nullptr;
  }
  // 8 Btyes mandtory header of GTPV1
  idx += 8;

  return new GtpV1Hdr(static_cast<GtpMessageType>(
    pdu.GetUint8(1)), pdu.GetBigEndianUint32(4), flags, pdu.GetBigEndianUint16(2));
}

GtpV1ExtHdr::GtpV1ExtHdr(GtpV1ExtHdrType ext_type) {
  nxt_ext_hdr_type_ = static_cast<uint8_t>(ext_type);
}

GtpV1ExtHdr::~GtpV1ExtHdr() {}

GtpV1UdpPortExtHdr::GtpV1UdpPortExtHdr(uint16_t port)
  : GtpV1ExtHdr(GtpV1ExtHdrType::udpPort), port_(port) {}

GtpV1UdpPortExtHdr::~GtpV1UdpPortExtHdr() {}

bool GtpV1UdpPortExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x01);
  buf.AppendBigEndianUint16(port_);
  return true;
}

GtpV1UdpPortExtHdr* GtpV1UdpPortExtHdr::Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 4)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  uint8_t length = pdu.GetUint8(++idx);
  // Check for length
  if (length != 1) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid length for UDP Port Extension Header." << std::endl;
  }

  return new GtpV1UdpPortExtHdr(pdu.GetBigEndianUint16(++idx));
}

GtpV1PdcpPduNumberExtHdr::GtpV1PdcpPduNumberExtHdr(uint16_t pdcp_pdu_num)
  : GtpV1ExtHdr(GtpV1ExtHdrType::pdcpPduNumber), pdcp_pdu_num_(pdcp_pdu_num) {}

GtpV1PdcpPduNumberExtHdr::~GtpV1PdcpPduNumberExtHdr() {}

bool GtpV1PdcpPduNumberExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x01);
  buf.AppendBigEndianUint16(pdcp_pdu_num_);
  return true;
}

GtpV1PdcpPduNumberExtHdr* GtpV1PdcpPduNumberExtHdr::Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 4)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  uint8_t length = pdu.GetUint8(++idx);
  // Check for length
  if (length != 1) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid length for UDP Port Extension Header." << std::endl;
  }
  // 15 bits only
  uint16_t pdcp_pdu_num = pdu.GetBigEndianUint16(++idx);
  pdcp_pdu_num &= 0xEFFF;

  return new GtpV1PdcpPduNumberExtHdr(pdcp_pdu_num);
}

} // namespace gtp
