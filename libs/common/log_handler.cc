//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "log_handler.h"

namespace common {

LogHandler::LogHandler(const std::string &filename) {
  sinks_.push_back(std::make_shared<spdlog::sinks::stdout_sink_mt>());
  sinks_.push_back(std::make_shared<spdlog::sinks::stderr_sink_mt>());
  if (!filename.empty()) {
	sinks_.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(filename, false));
  }
}

LogHandler::~LogHandler() {
  spdlog::shutdown();
}

int LogHandler::AddLogger(const std::string &logger_name) {
  if (!logger_name.empty()) {
	auto logger = std::make_shared<spdlog::logger>(logger_name, sinks_.begin(), sinks_.end());
	spdlog::register_logger(logger);
	return 0;
  }
  return -1;
}

int LogHandler::RemoveLogger(const std::string &logger_name) {
  auto logger = spdlog::get(logger_name);
  if (logger == nullptr) {
	return -1;
  }
  spdlog::drop(logger_name);
  return -1;
}

int LogHandler::SetLogLevel(const std::string &logger_name, spdlog::level::level_enum log_level) {
  auto logger = spdlog::get(logger_name);
  if (logger == nullptr) {
	return -1;
  }
  logger->set_level(log_level);
  return 0;
}

int LogHandler::SetLogFormat(const std::string &logger_name, const std::string &log_format) {
  auto logger = spdlog::get(logger_name);
  if (logger == nullptr) {
	return -1;
  }
  logger->set_pattern(log_format);
  return 0;
}

}//namespace common
