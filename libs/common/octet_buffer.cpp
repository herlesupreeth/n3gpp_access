//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "octet_buffer.hpp"

namespace common
{

	int OctetBuffer::CopyOctets(const OctetBuffer::Octets& oct)
	{
		octet_.insert(octet_.end(), oct.cbegin(), oct.cend());
		return 0;
	}

	int OctetBuffer::CopyOctets(const OctetBuffer::Octets& oct,
								 OctetBuffer::OctetBufferSizeType idx, OctetBuffer::OctetBufferSizeType size)
	{
		if ((oct.cbegin() + idx + size) >= oct.cend())
		{
			return -1;
		}
		octet_.insert(octet_.end(), oct.cbegin() + idx, oct.cbegin() + idx + size + 1);
		return 0;
	}

	int OctetBuffer::AppendUint8(uint8_t data)
	{
		octet_.push_back(data & 0xFF);
		return 0;
	}

	int OctetBuffer::AppendBigEndianUint16(uint16_t data)
	{
		AppendUint8(static_cast<uint8_t>(data >> 8 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data & 0xFF));
		return 0;
	}

	int OctetBuffer::AppendBigEndianUint24(uint32_t data)
	{
		uint32_t data_24_bit = data & 0x00FFFFFF;
		AppendUint8(static_cast<uint8_t>(data >> 16 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 8 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data & 0xFF));
		return 0;
	}

	int OctetBuffer::AppendBigEndianUint32(uint32_t data)
	{
		AppendUint8(static_cast<uint8_t>(data >> 24 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 16 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 8 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data & 0xFF));
		return 0;
	}

	int OctetBuffer::AppendLittleEndianUint16(uint16_t data)
	{
		AppendUint8(static_cast<uint8_t>(data & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 8 & 0xFF));
		return 0;
	}

	int OctetBuffer::AppendLittleEndianUint24(uint32_t data)
	{
		uint32_t data_24_bit = data & 0x00FFFFFF;
		AppendUint8(static_cast<uint8_t>(data & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 8 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 16 & 0xFF));
		return 0;
	}

	int OctetBuffer::AppendLittleEndianUint32(uint32_t data)
	{
		AppendUint8(static_cast<uint8_t>(data & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 8 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 16 & 0xFF));
		AppendUint8(static_cast<uint8_t>(data >> 24 & 0xFF));
		return 0;
	}

	const OctetBuffer::Octets& OctetBuffer::GetOctets() const
	{
		return octet_;
	}

	uint8_t OctetBuffer::GetUint8(OctetBuffer::OctetBufferSizeType idx) const
	{
		return octet_.at(idx);
	}

	uint16_t OctetBuffer::GetBigEndianUint16(OctetBuffer::OctetBufferSizeType idx) const
	{
		return (static_cast<uint16_t>(octet_.at(idx + 1)) | (static_cast<uint16_t>(octet_.at(idx)) << 8));
	}

	uint32_t OctetBuffer::GetBigEndianUint24(OctetBuffer::OctetBufferSizeType idx) const
	{
		return (static_cast<uint32_t>(octet_.at(idx + 3)) | (static_cast<uint32_t>(octet_.at(idx + 2)) << 8) | (static_cast<uint32_t>(octet_.at(idx + 1)) << 16));
	}

	uint32_t OctetBuffer::GetBigEndianUint32(OctetBuffer::OctetBufferSizeType idx) const
	{
		return (static_cast<uint32_t>(octet_.at(idx + 3)) | (static_cast<uint32_t>(octet_.at(idx + 2)) << 8) | (static_cast<uint32_t>(octet_.at(idx + 1)) << 16) | (static_cast<uint32_t>(octet_.at(idx + 0)) << 24));
	}

	uint16_t OctetBuffer::GetLittleEndianUint16(OctetBuffer::OctetBufferSizeType idx) const
	{
		return (static_cast<uint16_t>(octet_.at(idx)) | (static_cast<uint16_t>(octet_.at(idx + 1)) << 8));
	}

	uint32_t OctetBuffer::GetLittleEndianUint24(OctetBuffer::OctetBufferSizeType idx) const
	{
		return (static_cast<uint32_t>(octet_.at(idx)) | (static_cast<uint32_t>(octet_.at(idx + 1)) << 8) | (static_cast<uint32_t>(octet_.at(idx + 2)) << 16));
	}

	uint32_t OctetBuffer::GetLittleEndianUint32(OctetBuffer::OctetBufferSizeType idx) const
	{
		return (static_cast<uint32_t>(octet_.at(idx)) | (static_cast<uint32_t>(octet_.at(idx + 1)) << 8) | (static_cast<uint32_t>(octet_.at(idx + 2)) << 16) | (static_cast<uint32_t>(octet_.at(idx + 3)) << 24));
	}

	OctetBuffer::OctetBufferSizeType OctetBuffer::GetLength() const
	{
		return static_cast<uint16_t>(octet_.size());
	}

	bool OctetBuffer::IsEmpty() const
	{
		return octet_.empty();
	}

}// namespace common
