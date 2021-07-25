//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "gtpv1.hpp"

namespace gtp {

GtpV1Header::GtpV1Header(GtpMessageType message_type, uint32_t teid, uint16_t seq_num,
              uint8_t n_pdu_num, uint8_t nxt_ext_hdr_type)
  : teid_(teid) {

  version_ = 0x1;
  pt_ = 0x1;
  reserved_ = 0x0;
  message_type_ = static_cast<uint8_t>(message_type);
  length_ = 8;

  if (seq_num != 0) s_ = 0x1;
  if (n_pdu_num != 0) pn_ = 0x1;
  if (nxt_ext_hdr_type != 0) e_ = 0x1;

  bool flag = s_ | pn_ | e_;
  if (flag) {
    seq_num_ = seq_num;
    n_pdu_num_ = n_pdu_num;
    nxt_ext_hdr_type_ = nxt_ext_hdr_type;
    length_ += 4;
  }
}

GtpV1Header::~GtpV1Header() {}

uint16_t GtpV1Header::GetLength() {
 return length_;
}

void GtpV1Header::SetLength(uint16_t length) {
  length_ = length;
}

uint32_t GtpV1Header::GetTeid() {
  return teid_;
}

void GtpV1Header::SetTeid(uint32_t teid) {
  teid_ = teid;
}

uint16_t GtpV1Header::GetSequenceNumber() {
  if (seq_num_.has_value()) {
    return seq_num_.value();
  }
  return 0;
}

void GtpV1Header::SetSequenceNumber(uint16_t seq_num) {
  seq_num_ = seq_num;
}

bool GtpV1Header::Encode(const GtpV1Header &hdr, OctetBuffer &buf) {
  buf.AppendUint8(
    ((version_ & 0x07) << 5) | ((pt_ & 0x01) << 4) | ((e_ & 0x01) << 2) |
    ((s_ & 0x01) << 1) | (pn_ & 0x01)
  );
  buf.AppendUint8(message_type_);
  buf.AppendBigEndianUint16(length_);
  buf.AppendBigEndianUint32(teid_);

  if (e_ | s_ | pn_) {
    buf.AppendBigEndianUint16(seq_num_.value_or(0x00));
    buf.AppendUint8(n_pdu_num_.value_or(0x00));
    buf.AppendUint8(nxt_ext_hdr_type_.value_or(0x00));
  }

  return true;
}

bool GtpV1Header::Decode(const OctetBuffer &pdu, GtpV1Header &hdr) {
  if (pdu.GetLength() < 8) {
    // TODO: Replace with proper logging when available
    std::cout << "Error PDU length is too short." << std::endl;
    return false;
  }

  uint8_t flags = pdu.GetUint8(0);
  hdr.version_ = (flags >> 5) & 0x07;
  if (hdr.version_ != 1) {
    // TODO: Replace with proper logging when available
    std::cout << "Unsupported GTP version." << std::endl;
  }
  hdr.pt_ = (flags >> 4) & 0x01;
  if (hdr.pt_ != 1) {
    // TODO: Replace with proper logging when available
    std::cout << "Invalid Protocol Type for GTP" << std::endl;
  }
  hdr.reserved_ = 0x0;
  hdr.e_ = (flags >> 2) & 0x01;
  hdr.s_ = (flags >> 1) & 0x01;
  hdr.pn_ = flags & 0x01;

  hdr.message_type_ = pdu.GetUint8(1);
  hdr.length_ = pdu.GetBigEndianUint16(2);
  hdr.teid_ = pdu.GetBigEndianUint32(4);

  if (hdr.e_ | hdr.s_ | hdr.pn_) {
    if (pdu.GetLength() < 12) {
      // TODO: Replace with proper logging when available
      std::cout << "Error PDU length is too short." << std::endl;
      return false;
    }

    hdr.seq_num_ = hdr.s_ ? pdu.GetBigEndianUint16(8) : 0x00;
    hdr.n_pdu_num_ = hdr.pn_ ? pdu.GetUint8(10) : 0x00;
    hdr.nxt_ext_hdr_type_ = hdr.e_ ? pdu.GetUint8(11) : 0x00;
  }

  return true;
}

} // namespace gtp
