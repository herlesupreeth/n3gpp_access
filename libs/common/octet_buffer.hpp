//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <vector>
#include <iterator>
#include <cstdint>
#include <memory>

class OctetBuffer {
 public:
  typedef std::vector<uint8_t> Octets;
  typedef Octets::size_type OctetBufferSizeType;

  OctetBuffer() : octet_() {}
  OctetBuffer(Octets &oct) : octet_(oct) {}
  ~OctetBuffer() {}

  bool CopyOctects(Octets &oct);
  bool CopyOctects(Octets &oct, OctetBufferSizeType idx, OctetBufferSizeType size);
  bool AppendUint8(uint8_t data);
  bool AppendBigEndianUint16(uint16_t data);
  bool AppendBigEndianUint24(uint32_t data);
  bool AppendBigEndianUint32(uint32_t data);
  bool AppendLittleEndianUint16(uint16_t data);
  bool AppendLittleEndianUint24(uint32_t data);
  bool AppendLittleEndianUint32(uint32_t data);

  const std::unique_ptr<OctetBuffer::Octets> GetOctets() const;
  uint8_t GetUint8(OctetBufferSizeType idx) const;
  uint16_t GetBigEndianUint16(OctetBufferSizeType idx) const;
  uint32_t GetBigEndianUint24(OctetBufferSizeType idx) const;
  uint32_t GetBigEndianUint32(OctetBufferSizeType idx) const;
  uint16_t GetLittleEndianUint16(OctetBufferSizeType idx) const;
  uint32_t GetLittleEndianUint24(OctetBufferSizeType idx) const;
  uint32_t GetLittleEndianUint32(OctetBufferSizeType idx) const;

  OctetBufferSizeType GetLength() const;
  bool IsEmpty() const;

 private:
  Octets octet_;
};
