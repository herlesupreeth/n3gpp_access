//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "gtpv1.h"

namespace gtpv1u {

constexpr char kGtpv1LoggerName[] = "gtpv1";

static std::shared_ptr<common::Logger> kGtpv1Logger = std::make_shared<common::Logger>(
	std::string(kGtpv1LoggerName));

Header::Header(MessageType message_type, uint32_t teid, uint8_t flags,
			   uint16_t length)
	: teid_(teid), length_(length), flags_(flags) {
  message_type_ = static_cast<uint8_t>(message_type);
}

Header::~Header() = default;

uint16_t Header::GetLength() const {
  return length_;
}

void Header::SetLength(uint16_t length) {
  length_ = length;
}

uint32_t Header::GetTeid() const {
  return teid_;
}

void Header::SetTeid(uint32_t teid) {
  teid_ = teid;
}

uint8_t Header::GetMessageType() const {
  return message_type_;
}

void Header::SetMessageType(MessageType message_type) {
  message_type_ = static_cast<uint8_t>(message_type);
}

bool Header::IsSequenceNumberPresent() const {
  return ((flags_ >> 1) & 0x01) == 0x01;
}

void Header::SetSequenceNumberFlag() {
  flags_ |= 0x02;
}

void Header::UnsetSequenceNumberFlag() {
  flags_ &= 0xFD;
}

bool Header::IsNPduNumberPresent() const {
  return (flags_ & 0x01) == 0x01;
}

void Header::SetNPduNumberFlag() {
  flags_ |= 0x01;
}

void Header::UnsetNPduNumberFlag() {
  flags_ &= 0xFE;
}

bool Header::IsNxtExtHeaderPresent() const {
  return ((flags_ >> 2) & 0x01) == 0x01;
}

void Header::SetNxtExtHeaderFlag() {
  flags_ |= 0x04;
}

void Header::UnsetNxtExtHeaderFlag() {
  flags_ &= 0xFB;
}

int Header::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(flags_);
  buf.AppendUint8(message_type_);
  buf.AppendBigEndianUint16(length_);
  buf.AppendBigEndianUint32(teid_);
  return 0;
}

/**
 * Decode GTPv1 header.
 * @param pdu: Octet buffer containing bytes to be decoded.
 * @param idx: Index in pdu to be updated after decoding the header.
 * @return: A unique pointer to Header object.
 */
std::unique_ptr<Header> Header::Decode(const OctetBuffer &pdu,
									   OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 7)) {
	kGtpv1Logger->Error("Error PDU length is too short.");
	return nullptr;
  }

  uint8_t flags = pdu.GetUint8(idx);
  // Check the GTP version decoded from PDU
  if (((flags >> 5) & 0x07) != 1) {
	kGtpv1Logger->Error("Unsupported GTP version.");
	return nullptr;
  }
  // Check the Protocol Type Bit decoded from PDU (only GTP is handled not GTP')
  if (((flags >> 4) & 0x01) != 1) {
	// TODO: Replace with proper logging when available
	std::cout << "Invalid Protocol Type for GTP" << std::endl;
	return nullptr;
  }
  auto res = std::make_unique<Header>(
	  static_cast<MessageType>(pdu.GetUint8(idx + 1)),
	  pdu.GetBigEndianUint32(idx + 4), flags, pdu.GetBigEndianUint16(idx + 2));
  // 8 Bytes mandtory header of GTPV1
  idx += 8;

  return res;
}

ExtHdr::ExtHdr(ExtHdrType ext_type) {
  nxt_ext_hdr_type_ = static_cast<uint8_t>(ext_type);
}

ExtHdr::~ExtHdr() = default;

UdpPortExtHdr::UdpPortExtHdr(uint16_t port)
	: ExtHdr(ExtHdrType::udpPort), port_(port) {
}

UdpPortExtHdr::~UdpPortExtHdr() = default;

int UdpPortExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x01);
  buf.AppendBigEndianUint16(port_);
  return 0;
}

std::unique_ptr<UdpPortExtHdr> UdpPortExtHdr::Decode(const OctetBuffer &pdu,
													 OctetBuffer::OctetBufferSizeType &idx) {
  // Length check considers Ext. header type + length + payload + next Ext. header type
  if (pdu.GetLength() < (idx + 4)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }
  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(ExtHdrType::udpPort)) {
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
  auto res = std::make_unique<UdpPortExtHdr>(pdu.GetBigEndianUint16(idx + 2));
  // Increment index to point to Next Extension Header Type
  idx += 4;

  return res;
}

PdcpPduNumberExtHdr::PdcpPduNumberExtHdr(uint16_t pdcp_pdu_num)
	: ExtHdr(ExtHdrType::pdcpPduNumber), pdcp_pdu_num_(pdcp_pdu_num) {
}

PdcpPduNumberExtHdr::~PdcpPduNumberExtHdr() = default;

int PdcpPduNumberExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x01);
  buf.AppendBigEndianUint16(pdcp_pdu_num_);
  return 0;
}

std::unique_ptr<PdcpPduNumberExtHdr> PdcpPduNumberExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  // Length check considers Ext. header type + length + payload + next Ext. header type
  if (pdu.GetLength() < (idx + 4)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(ExtHdrType::pdcpPduNumber)) {
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

  return std::make_unique<PdcpPduNumberExtHdr>(pdcp_pdu_num);
}

// TODO: Support Release < 15
// ExtHdrType::longPdcpPduNumber1 >= Release 15
// ExtHdrType::longPdcpPduNumber2 < Release 15
LongPdcpPduNumberExtHdr::LongPdcpPduNumberExtHdr(uint16_t l_pdcp_pdu_num)
	: ExtHdr(ExtHdrType::longPdcpPduNumber1), l_pdcp_pdu_num_(l_pdcp_pdu_num) {
}

LongPdcpPduNumberExtHdr::~LongPdcpPduNumberExtHdr() = default;

int LongPdcpPduNumberExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x02);
  buf.AppendBigEndianUint24(l_pdcp_pdu_num_);
  // 3 Bytes Spare
  buf.AppendBigEndianUint24(0x00);
  return 0;
}

std::unique_ptr<LongPdcpPduNumberExtHdr> LongPdcpPduNumberExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  // Length check considers Ext. header type + length + payload + next Ext. header type
  if (pdu.GetLength() < (idx + 8)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(ExtHdrType::longPdcpPduNumber1)) {
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

  return std::make_unique<LongPdcpPduNumberExtHdr>(l_pdcp_pdu_num);
}

ServiceClassIndicatorExtHdr::ServiceClassIndicatorExtHdr(uint8_t sci)
	: ExtHdr(ExtHdrType::serviceClassIndicator), sci_(sci) {
}

ServiceClassIndicatorExtHdr::~ServiceClassIndicatorExtHdr() = default;

int ServiceClassIndicatorExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8(0x01);
  buf.AppendUint8(sci_);
  // Spare
  buf.AppendUint8(0x00);
  return 0;
}

std::unique_ptr<ServiceClassIndicatorExtHdr> ServiceClassIndicatorExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  // Length check considers Ext. header type + length + payload + next Ext. header type
  if (pdu.GetLength() < (idx + 4)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(ExtHdrType::serviceClassIndicator)) {
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
  auto res = std::make_unique<ServiceClassIndicatorExtHdr>(pdu.GetUint8(idx + 2));
  // Increment index to point to Next Extension Header Type
  idx += 4;

  return res;
}

BaseRanContainerExtHdr::BaseRanContainerExtHdr(
	ExtHdrType ran_container_type, const OctetBuffer::Octets &ran_container,
	OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size)
	: ExtHdr(ran_container_type) {
  ran_container_.CopyOctets(ran_container, start_idx, size);
}

BaseRanContainerExtHdr::~BaseRanContainerExtHdr() = default;

int BaseRanContainerExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8((3 - ran_container_.GetLength()) / 4);
  buf.CopyOctets(ran_container_.GetOctets());
  return 0;
}

std::unique_ptr<BaseRanContainerExtHdr> BaseRanContainerExtHdr::Decode(
	ExtHdrType ran_container_type, const OctetBuffer &pdu,
	OctetBuffer::OctetBufferSizeType &idx) {
  // Check for atleast Extension Header Type + length byte
  if (pdu.GetLength() < (idx + 1)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(ran_container_type)) {
	// TODO: Replace with proper logging when available
	std::cout << "Unsupported Extension Header Type." << std::endl;
	return nullptr;
  }

  uint8_t n = pdu.GetUint8(idx + 1);
  OctetBuffer::OctetBufferSizeType ran_cont_size = (4 * n) - 1;
  // Length check considers Ext. header type + length + payload + next Ext. header type
  if (pdu.GetLength() < (idx + 1 + ran_cont_size + 1)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }
  auto res = std::make_unique<BaseRanContainerExtHdr>(
	  ran_container_type,
	  pdu.GetOctets(),
	  idx + 2,
	  ran_cont_size);
  // Increment index to point to Next Extension Header Type
  idx += ran_cont_size + 2;

  return res;
}

RanContainerExtHdr::RanContainerExtHdr(
	const OctetBuffer::Octets &ran_container,
	OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size)
	: BaseRanContainerExtHdr(ExtHdrType::ranContainer,
							 ran_container, start_idx, size) {
}

RanContainerExtHdr::~RanContainerExtHdr() = default;

std::unique_ptr<RanContainerExtHdr> RanContainerExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  auto res = std::unique_ptr<RanContainerExtHdr>(
	  static_cast<RanContainerExtHdr *>(BaseRanContainerExtHdr::Decode(
		  ExtHdrType::ranContainer, pdu, idx)
		  .release()));
  return res;
}

XwRanContainerExtHdr::XwRanContainerExtHdr(
	const OctetBuffer::Octets &ran_container,
	OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size)
	: BaseRanContainerExtHdr(ExtHdrType::xwRanContainer,
							 ran_container, start_idx, size) {
}

XwRanContainerExtHdr::~XwRanContainerExtHdr() = default;

std::unique_ptr<XwRanContainerExtHdr> XwRanContainerExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  auto res = std::unique_ptr<XwRanContainerExtHdr>(
	  static_cast<XwRanContainerExtHdr *>(BaseRanContainerExtHdr::Decode(
		  ExtHdrType::xwRanContainer, pdu, idx)
		  .release()));
  return res;
}

NrRanContainerExtHdr::NrRanContainerExtHdr(
	const OctetBuffer::Octets &ran_container,
	OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size)
	: BaseRanContainerExtHdr(ExtHdrType::nrRanContainer,
							 ran_container, start_idx, size) {
}

NrRanContainerExtHdr::~NrRanContainerExtHdr() = default;

std::unique_ptr<NrRanContainerExtHdr> NrRanContainerExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  auto res = std::unique_ptr<NrRanContainerExtHdr>(
	  static_cast<NrRanContainerExtHdr *>(BaseRanContainerExtHdr::Decode(
		  ExtHdrType::nrRanContainer, pdu, idx)
		  .release()));
  return res;
}

PduSessionContainerExtHdr::PduSessionContainerExtHdr(
	const OctetBuffer::Octets &pdu_sess_container,
	OctetBuffer::OctetBufferSizeType start_idx, OctetBuffer::OctetBufferSizeType size)
	: ExtHdr(ExtHdrType::pduSessionContainer) {
  pdu_sess_container_.CopyOctets(pdu_sess_container, start_idx, size);
}

PduSessionContainerExtHdr::~PduSessionContainerExtHdr() = default;

int PduSessionContainerExtHdr::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(nxt_ext_hdr_type_);
  // Length in 4 octets
  buf.AppendUint8((3 - pdu_sess_container_.GetLength()) / 4);
  buf.CopyOctets(pdu_sess_container_.GetOctets());
  return 0;
}

std::unique_ptr<PduSessionContainerExtHdr> PduSessionContainerExtHdr::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {
  // Check for atleast Extension Header Type + length byte
  if (pdu.GetLength() < (idx + 1)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }

  // Check for Extension header type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(ExtHdrType::pduSessionContainer)) {
	// TODO: Replace with proper logging when available
	std::cout << "Unsupported Extension Header Type." << std::endl;
	return nullptr;
  }

  uint8_t n = pdu.GetUint8(idx + 1);
  OctetBuffer::OctetBufferSizeType pdu_sess_cont_size = (4 * n) - 1;
  // Length check considers Ext. header type + length + payload + next Ext. header type
  if (pdu.GetLength() < (idx + 1 + pdu_sess_cont_size + 1)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }
  auto res = std::make_unique<PduSessionContainerExtHdr>(
	  pdu.GetOctets(),
	  idx + 2,
	  pdu_sess_cont_size);
  // Increment index to point to Next Extension Header Type
  idx += pdu_sess_cont_size + 2;

  return res;
}

// Information Element Types

Ie::Ie(IeType ie_type, bool is_tlv) {
  ie_type_ = static_cast<uint8_t>(ie_type) | (is_tlv ? 0x80 : 0x00);
}

Ie::~Ie() = default;

RecoveryIe::RecoveryIe(uint8_t restart_counter)
	: Ie(IeType::recovery, false), restart_counter_(restart_counter) {
}

RecoveryIe::~RecoveryIe() = default;

int RecoveryIe::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(ie_type_);
  buf.AppendUint8(restart_counter_);
  return 0;
}

std::unique_ptr<RecoveryIe> RecoveryIe::Decode(const OctetBuffer &pdu,
											   OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 1)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }
  // Check for Ie type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(IeType::recovery)) {
	// TODO: Replace with proper logging when available
	std::cout << "Unsupported Ie Type." << std::endl;
	return nullptr;
  }

  auto res = std::make_unique<RecoveryIe>(pdu.GetUint8(idx + 1));
  // Increment index to point to Next Ie
  idx += 2;

  return res;
}

TunnelEndpointIdentifierData1Ie::TunnelEndpointIdentifierData1Ie(uint32_t teid)
	: Ie(IeType::tunnelEndpointIdentifierData1, false), teid_(teid) {
}

TunnelEndpointIdentifierData1Ie::~TunnelEndpointIdentifierData1Ie() = default;

int TunnelEndpointIdentifierData1Ie::Encode(OctetBuffer &buf) const {
  buf.AppendUint8(ie_type_);
  buf.AppendBigEndianUint32(teid_);
  return 0;
}

std::unique_ptr<TunnelEndpointIdentifierData1Ie> TunnelEndpointIdentifierData1Ie::Decode(
	const OctetBuffer &pdu, OctetBuffer::OctetBufferSizeType &idx) {

  if (pdu.GetLength() < (idx + 3)) {
	// TODO: Replace with proper logging when available
	std::cout << "Error PDU length is too short." << std::endl;
	return nullptr;
  }
  // Check for Ie type
  if (pdu.GetUint8(idx) != static_cast<uint8_t>(IeType::tunnelEndpointIdentifierData1)) {
	// TODO: Replace with proper logging when available
	std::cout << "Unsupported Ie Type." << std::endl;
	return nullptr;
  }

  auto res = std::make_unique<TunnelEndpointIdentifierData1Ie>(
	  pdu.GetBigEndianUint32(idx + 1));
  // Increment index to point to Next Ie
  idx += 4;

  return res;
}

}// namespace gtpv1u
