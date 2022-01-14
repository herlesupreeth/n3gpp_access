//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "logger.h"

namespace common {

std::mutex Logger::sink_mutex_;

Logger::Logger(const std::string &logger_name) {
  std::lock_guard<std::mutex> lock(sink_mutex_);
  if (!console_sink_) {
	console_sink_ = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
	// Set console sink to log all info or worse messages by default
	console_sink_->set_level(spdlog::level::info);
  }
  if (!file_sink_) {
	std::make_shared<spdlog::sinks::basic_file_sink_mt>(
		log_file_name_.empty() ? "/tmp/n3gpp_access.log" : log_file_name_, false);
	// Set file sink to log all trace or worse messages by default
	file_sink_->set_level(spdlog::level::level_enum::trace);
  }

  std::vector<spdlog::sink_ptr> sinks{console_sink_, file_sink_};
  base_logger_ = std::make_shared<spdlog::logger>(logger_name, sinks.begin(), sinks.end());
  try {
	spdlog::register_logger(base_logger_);
  } catch (spdlog::spdlog_ex &) {
	throw std::runtime_error("Logger with name [" + logger_name + "] already registered");
  }
}

Logger::~Logger() {
  spdlog::drop(base_logger_->name());
}

int Logger::SetLogLevel(LogLevel log_level) {
  base_logger_->set_level(spdlog::level::level_enum(log_level));
  return 0;
}

int Logger::SetLogFormat(const std::string &log_format) {
  base_logger_->set_pattern(log_format);
  return 0;
}

}//namespace common
