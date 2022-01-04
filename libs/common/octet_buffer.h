//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#ifndef N3GPP_ACCESS_LIBS_COMMON_OCTET_BUFFER_H_
#define N3GPP_ACCESS_LIBS_COMMON_OCTET_BUFFER_H_

#include <cstdint>
#include <iterator>
#include <memory>
#include <vector>

namespace common {

class OctetBuffer {
 public:
  typedef std::vector<uint8_t> Octets;
  typedef Octets::size_type OctetBufferSizeType;

  OctetBuffer()
	  : octet_() {
  }
  OctetBuffer(Octets &oct)
	  : octet_(oct) {
  }
  ~OctetBuffer() {
  }

  int CopyOctets(const Octets &oct);
  int CopyOctets(const Octets &oct, OctetBufferSizeType idx, OctetBufferSizeType size);
  int AppendUint8(uint8_t data);
  int AppendBigEndianUint16(uint16_t data);
  int AppendBigEndianUint24(uint32_t data);
  int AppendBigEndianUint32(uint32_t data);
  int AppendLittleEndianUint16(uint16_t data);
  int AppendLittleEndianUint24(uint32_t data);
  int AppendLittleEndianUint32(uint32_t data);

  const Octets &GetOctets() const;
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

}// namespace common

#endif//N3GPP_ACCESS_LIBS_COMMON_OCTET_BUFFER_H_
