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

class GtpV1Header {
 public:
  GtpV1Header(GtpMessageType message_type, uint32_t teid, uint16_t seq_num = 0,
              uint8_t n_pdu_num = 0, uint8_t nxt_ext_hdr_type = 0);
  ~GtpV1Header();

  uint16_t GetLength();
  void SetLength(uint16_t length);
  uint32_t GetTeid();
  void SetTeid(uint32_t teid);
  uint16_t GetSequenceNumber();
  void SetSequenceNumber(uint16_t seq_num);

  bool Encode(const GtpV1Header &hdr, OctetBuffer &buf);
  bool Decode(const OctetBuffer &pdu, GtpV1Header &hdr);

 private:
  uint8_t version_ : 3;
  uint8_t pt_ : 1;
  uint8_t reserved_ : 1;
  uint8_t e_ : 1;
  uint8_t s_ : 1;
  uint8_t pn_ : 1;
  uint8_t message_type_;
  uint16_t length_;
  uint32_t teid_;
  std::optional<uint16_t> seq_num_ = std::nullopt;
  std::optional<uint8_t> n_pdu_num_ = std::nullopt;
  std::optional<uint8_t> nxt_ext_hdr_type_ = std::nullopt;
};

} // namespace gtp
