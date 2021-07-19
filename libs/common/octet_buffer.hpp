//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <vector>
#include<iterator>
#include <cstdint>

class OctetBuffer {
 public:
  typedef std::vector<uint8_t>::size_type size_type;

  OctetBuffer() : octet_() {}
  OctetBuffer(std::vector<uint8_t> &oct) : octet_(oct) {}
  ~OctetBuffer() {}

  void AppendOctects(std::vector<uint8_t> &oct);
  void AppendUint8(uint8_t data);
  void AppendBigEndianUint16(uint16_t data);
  void AppendBigEndianUint32(uint32_t data);
  void AppendLittleEndianUint16(uint16_t data);
  void AppendLittleEndianUint32(uint32_t data);

  const std::vector<uint8_t> &GetOctets() const;
  uint8_t GetUint8(size_type idx) const;
  uint16_t GetBigEndianUint16(size_type idx) const;
  uint32_t GetBigEndianUint32(size_type idx) const;
  uint16_t GetLittleEndianUint16(size_type idx) const;
  uint32_t GetLittleEndianUint32(size_type idx) const;

  size_type GetLength() const;
  bool IsEmpty() const;

 private:
  std::vector<uint8_t> octet_;
};
