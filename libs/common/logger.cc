//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include "logger.h"

namespace common {

std::shared_ptr<LogManager> LogManager::manager_ = nullptr;
std::mutex LogManager::log_manager_mutex_;

Logger::Logger(const LoggerName &name, LogSinks sinks) {
  base_logger_ = std::make_shared<spdlog::logger>(name, sinks.begin(), sinks.end());
  try {
	spdlog::register_logger(base_logger_);
  }
  catch (spdlog::spdlog_ex &) {
	throw std::runtime_error("Logger with name [" + name + "] already registered");
  }
}

Logger::~Logger() {
  spdlog::drop(base_logger_->name());
}

void Logger::SetLogLevel(LogLevel log_level) {
  base_logger_->set_level(spdlog::level::level_enum(log_level));
}

void Logger::SetLogFormat(const LoggerPattern &pattern) {
  base_logger_->set_pattern(pattern);
}

void Logger::SetFlushOn(LogLevel log_level) {
  base_logger_->flush_on(log_level);
}

void Logger::Flush() {
  base_logger_->flush();
}

}//namespace common
