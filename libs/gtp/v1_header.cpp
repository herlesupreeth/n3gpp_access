//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include <cstdint>

#include "v1_header.hpp"

namespace gtp {

GtpV1Header::GtpV1Header(GtpMessageType message_type, uint32_t teid, uint16_t seq_num,
							uint8_t n_pdu_num, uint8_t nxt_ext_hdr_type)
	: teid_(teid) {

	version_ = 0x1;
	pt_ = 0x1;
	reserved_ = 0x0;
	message_type_ = static_cast<uint8_t>(message_type);

	if (seq_num != 0) s_ = 0x1;
	if (n_pdu_num != 0) pn_ = 0x1;
	if (nxt_ext_hdr_type != 0) e_ = 0x1;

	bool flag = s_ | pn_ | e_;
	if (flag) {
		seq_num_ = seq_num;
		n_pdu_num_ = n_pdu_num;
		nxt_ext_hdr_type_ = nxt_ext_hdr_type;
	}
};

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

} // namespace gtp
