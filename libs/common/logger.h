//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#ifndef N3GPP_ACCESS_LIBS_COMMON_LOGGER_H_
#define N3GPP_ACCESS_LIBS_COMMON_LOGGER_H_

#include <iostream>
#include <map>
#include <mutex>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"

namespace common {

enum class LogLevel {
  trace = spdlog::level::level_enum::trace,
  debug = spdlog::level::level_enum::debug,
  info = spdlog::level::level_enum::info,
  warn = spdlog::level::level_enum::warn,
  error = spdlog::level::level_enum::err,
  critical = spdlog::level::level_enum::critical,
};

class Logger {
 public:
  explicit Logger(const std::string &logger_name);
  ~Logger();

  int SetLogLevel(LogLevel log_level);
  int SetLogFormat(const std::string &log_format);

  template<typename T>
  void Trace(const T &msg) {
	base_logger_->trace(msg);
  }

  template<typename T>
  void Debug(const T &msg) {
	base_logger_->debug(msg);
  }

  template<typename T>
  void Info(const T &msg) {
	base_logger_->info(msg);
  }

  template<typename T>
  void Warn(const T &msg) {
	base_logger_->warn(msg);
  }

  template<typename T>
  void Error(const T &msg) {
	base_logger_->error(msg);
  }

  template<typename T>
  void Critical(const T &msg) {
	base_logger_->critical(msg);
  }

 protected:
  std::shared_ptr<spdlog::logger> base_logger_;

  static std::mutex sink_mutex_;
  static spdlog::sink_ptr console_sink_;
  static spdlog::sink_ptr file_sink_;
  static std::string log_file_name_;
};

}//namespace common

#endif //N3GPP_ACCESS_LIBS_COMMON_LOGGER_H_
