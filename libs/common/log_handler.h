//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#ifndef N3GPP_ACCESS_LIBS_COMMON_LOG_HANDLER_H_
#define N3GPP_ACCESS_LIBS_COMMON_LOG_HANDLER_H_

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"

namespace common {

class LogHandler {
 public:
  LogHandler(const std::string &filename);
  virtual ~LogHandler();

  int AddLogger(const std::string &logger_name);
  int RemoveLogger(const std::string &logger_name);
  int SetLogLevel(const std::string &logger_name, spdlog::level::level_enum log_level);
  int SetLogFormat(const std::string &logger_name, const std::string &log_format);
 private:
  std::vector<spdlog::sink_ptr> sinks_;
};

}//namespace common

#endif//N3GPP_ACCESS_LIBS_COMMON_LOG_HANDLER_H_
