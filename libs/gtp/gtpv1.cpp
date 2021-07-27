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

std::unique_ptr<GtpV1Hdr> GtpV1Hdr::Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx) {
  // Start with first byte at index 0
  idx = 0;
  if (pdu.GetLength() < 8) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  uint8_t flags = pdu.GetUint8(idx);
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
  auto res = std::make_unique<GtpV1Hdr>(
    static_cast<GtpMessageType>(pdu.GetUint8(idx + 1)),
    pdu.GetBigEndianUint32(idx + 4), flags, pdu.GetBigEndianUint16(idx + 2));
  // 8 Bytes mandtory header of GTPV1
  idx += 8;

  return res;
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

std::unique_ptr<GtpV1UdpPortExtHdr> GtpV1UdpPortExtHdr::Decode(const OctetBuffer &pdu,
    OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 5)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }
  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(GtpV1ExtHdrType::udpPort)) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported Extension Header Type." << std::endl;
    return nullptr;
  }

  uint8_t length = pdu.GetUint8(idx + 1);
  // Check for length
  if (length != 0x01) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid length for UDP Port Extension Header." << std::endl;
    return nullptr;
  }
  auto res = std::make_unique<GtpV1UdpPortExtHdr>(pdu.GetBigEndianUint16(idx + 2));
  // Increment index to point to Next Extension Header Type
  idx += 4;

  return res;
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

std::unique_ptr<GtpV1PdcpPduNumberExtHdr> GtpV1PdcpPduNumberExtHdr::Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 5)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(GtpV1ExtHdrType::pdcpPduNumber)) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported Extension Header Type." << std::endl;
    return nullptr;
  }

  uint8_t length = pdu.GetUint8(idx + 1);
  // Check for length
  if (length != 0x01) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid length for PDCP PDU Number Extension Header." << std::endl;
    return nullptr;
  }
  // 15 bits only
  uint16_t pdcp_pdu_num = pdu.GetBigEndianUint16(idx + 2);
  pdcp_pdu_num &= 0xEFFF;
  // Increment index to point to Next Extension Header Type
  idx += 4;

  return std::make_unique<GtpV1PdcpPduNumberExtHdr>(pdcp_pdu_num);
}

// TODO: Support Release < 15
// GtpV1ExtHdrType::longPdcpPduNumber1 >= Release 15
// GtpV1ExtHdrType::longPdcpPduNumber2 < Release 15
GtpV1LongPdcpPduNumberExtHdr::GtpV1LongPdcpPduNumberExtHdr(uint16_t l_pdcp_pdu_num)
  : GtpV1ExtHdr(GtpV1ExtHdrType::longPdcpPduNumber1), l_pdcp_pdu_num_(l_pdcp_pdu_num) {}

GtpV1LongPdcpPduNumberExtHdr::~GtpV1LongPdcpPduNumberExtHdr() {}

bool GtpV1LongPdcpPduNumberExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x02);
  buf.AppendBigEndianUint24(l_pdcp_pdu_num_);
  // 3 Bytes Spare
  buf.AppendBigEndianUint24(0x00);
  return true;
}

std::unique_ptr<GtpV1LongPdcpPduNumberExtHdr> GtpV1LongPdcpPduNumberExtHdr::Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 9)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(GtpV1ExtHdrType::longPdcpPduNumber1)) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported Extension Header Type." << std::endl;
    return nullptr;
  }

  uint8_t length = pdu.GetUint8(idx + 1);
  // Check for length
  if (length != 0x02) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid length for Long PDCP PDU Number Extension Header." << std::endl;
    return nullptr;
  }
  // 18 bits only
  uint32_t l_pdcp_pdu_num = pdu.GetBigEndianUint24(idx + 2);
  l_pdcp_pdu_num &= 0x00FFFFFF;
  // Increment index to point to Next Extension Header Type
  idx += 8;

  return std::make_unique<GtpV1LongPdcpPduNumberExtHdr>(l_pdcp_pdu_num);
}

GtpV1ServiceClassIndicatorExtHdr::GtpV1ServiceClassIndicatorExtHdr(uint8_t sci)
  : GtpV1ExtHdr(GtpV1ExtHdrType::serviceClassIndicator), sci_(sci) {}

GtpV1ServiceClassIndicatorExtHdr::~GtpV1ServiceClassIndicatorExtHdr() {}

bool GtpV1ServiceClassIndicatorExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x01);
  buf.AppendUint8(sci_);
  // Spare
  buf.AppendUint8(0x00);
  return true;
}

std::unique_ptr<GtpV1ServiceClassIndicatorExtHdr> GtpV1ServiceClassIndicatorExtHdr::Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 5)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(GtpV1ExtHdrType::serviceClassIndicator)) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported Extension Header Type." << std::endl;
    return nullptr;
  }

  uint8_t length = pdu.GetUint8(idx + 1);
  // Check for length
  if (length != 0x01) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid length for Service Class Indicator Extension Header." << std::endl;
    return nullptr;
  }
  auto res = std::make_unique<GtpV1ServiceClassIndicatorExtHdr>(pdu.GetUint8(idx + 2));
  // Increment index to point to Next Extension Header Type
  idx += 4;

  return res;
}

GtpV1RanContainerExtHdr::GtpV1RanContainerExtHdr(
    const OctetBuffer::Octets &ran_container, OctetBuffer::OctetBufferSizeType start_idx,
    OctetBuffer::OctetBufferSizeType size)
  : GtpV1ExtHdr(GtpV1ExtHdrType::ranContainer) {
  ran_container_.CopyOctects(ran_container, start_idx, size);
}

GtpV1RanContainerExtHdr::~GtpV1RanContainerExtHdr() {}

bool GtpV1RanContainerExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8((3 - ran_container_.GetLength()) / 4);
  buf.CopyOctects(ran_container_.GetOctets());
  return true;
}

std::unique_ptr<GtpV1RanContainerExtHdr> GtpV1RanContainerExtHdr::Decode(
    const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  // Check for atleast Extension Header Type + length byte
  if (pdu.GetLength() < (idx + 2)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(GtpV1ExtHdrType::ranContainer)) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported Extension Header Type." << std::endl;
    return nullptr;
  }

  uint8_t n = pdu.GetUint8(idx + 1);
  OctetBuffer::OctetBufferSizeType ran_cont_size = 2 * ((4 * n) - 1);
  // Check for PDU length
  if (pdu.GetLength() < (idx + ran_cont_size + 1)) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return nullptr;
  }
  auto res = std::make_unique<GtpV1RanContainerExtHdr>(
                                pdu.GetOctets(),
                                idx + 2,
                                ran_cont_size + 1);
  // Increment index to point to Next Extension Header Type
  idx += ran_cont_size + 2;

  return res;
}

} // namespace gtp
