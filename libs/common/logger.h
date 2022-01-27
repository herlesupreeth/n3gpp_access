//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

// SF.8: Use #include guards for all .h files - CppCoreGuidelines

#ifndef N3GPP_ACCESS_LIBS_COMMON_LOGGER_H_
#define N3GPP_ACCESS_LIBS_COMMON_LOGGER_H_

#ifdef ENABLE_TRACE_LOGGING
#define ENABLE_DEBUG_LOGGING
#endif // ENABLE_TRACE_LOGGING

#ifdef DISABLE_LOGGING
#undef ENABLE_TRACE_LOGGING
#undef ENABLE_DEBUG_LOGGING
#endif // DISABLE_LOGGING

#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"

#include <iostream>
#include <map>
#include <mutex>

namespace common {

typedef spdlog::level::level_enum LogLevel;
typedef spdlog::sink_ptr LogSink;
typedef std::vector<LogSink> LogSinks;
typedef std::string LoggerName;
typedef std::string LoggerPattern;

class Logger {
 public:
  Logger(const LoggerName &name, LogSinks sinks);
  ~Logger();

  void SetLogLevel(LogLevel log_level);
  void SetLogFormat(const LoggerPattern &pattern);
  void SetFlushOn(LogLevel log_level);
  void Flush();

  template<typename T>
  void Trace(const T &msg) {
	base_logger_->trace(msg);
  }

  template<typename... Args>
  void Trace(const std::string &msg, const std::string &file, int line) {
	base_logger_->trace("{} [{}:{}]", msg, file, line);
  }

  template<typename T>
  void Debug(const T &msg) {
	base_logger_->debug(msg);
  }

  template<typename... Args>
  void Debug(const std::string &msg, const std::string &file, int line) {
	base_logger_->debug("{} [{}:{}]", msg, file, line);
  }

  template<typename T>
  void Info(const T &msg) {
	base_logger_->info(msg);
  }

  template<typename... Args>
  void Info(const std::string &msg, const std::string &file, int line) {
	base_logger_->info("{} [{}:{}]", msg, file, line);
  }

  template<typename T>
  void Warn(const T &msg) {
	base_logger_->warn(msg);
  }

  template<typename... Args>
  void Warn(const std::string &msg, const std::string &file, int line) {
	base_logger_->warn("{} [{}:{}]", msg, file, line);
  }

  template<typename T>
  void Error(const T &msg) {
	base_logger_->error(msg);
  }

  template<typename... Args>
  void Error(const std::string &msg, const std::string &file, int line) {
	base_logger_->error("{} [{}:{}]", msg, file, line);
  }

  template<typename T>
  void Critical(const T &msg) {
	base_logger_->critical(msg);
  }

  template<typename... Args>
  void Critical(const std::string &msg, const std::string &file, int line) {
	base_logger_->critical("{} [{}:{}]", msg, file, line);
  }

 private:
  std::shared_ptr<spdlog::logger> base_logger_;
};

class LogManager {
 public:
  // Allow only single instance of LogManager
  LogManager(LogManager &other) = delete;
  void operator=(const LogManager &) = delete;
  ~LogManager() = default;

  void Initialize(std::optional<const std::string> logfile_path) {
	std::lock_guard<std::mutex> log_manager_lock(log_manager_mutex_);
	if (!stdout_sink_) {
	  stdout_sink_ = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
#ifdef ENABLE_TRACE_LOGGING
	  stdout_sink_->set_level(LogLevel::trace);
#elif ENABLE_DEBUG_LOGGING
	  stdout_sink_->set_level(LogLevel::debug);
#elif DISABLE_LOGGING
	  stdout_sink_->set_level(LogLevel::off);
#endif
	}
	if (logfile_path.has_value() && !file_sink_) {
	  file_sink_ = std::make_shared<spdlog::sinks::basic_file_sink_mt>(logfile_path.value(), false);
#ifdef ENABLE_TRACE_LOGGING
	  file_sink_->set_level(LogLevel::trace);
#elif ENABLE_DEBUG_LOGGING
	  file_sink_->set_level(LogLevel::debug);
#elif DISABLE_LOGGING
	  file_sink_->set_level(LogLevel::off);
#endif
	}
  }

  void Shutdown() {
	spdlog::shutdown();

	logger_name_to_logger_map_.clear();
	stdout_sink_.reset();
	file_sink_.reset();
  }

  static std::shared_ptr<LogManager> GetInstance() {
	std::lock_guard<std::mutex> log_manager_lock(log_manager_mutex_);
	if (!manager_) {
	  manager_ = std::shared_ptr<LogManager>(new LogManager());
	}
	return manager_;
  }

  std::shared_ptr<Logger> GetLogger(const LoggerName &name) {
	std::lock_guard<std::mutex> log_manager_lock(log_manager_mutex_);
	if (logger_name_to_logger_map_.count(name) == 0) {
	  LogSinks sinks;
	  if (stdout_sink_) {
		sinks.push_back(stdout_sink_);
	  }
	  if (file_sink_) {
		sinks.push_back(file_sink_);
	  }
	  if (sinks.empty()) {
		return nullptr;
	  }
	  logger_name_to_logger_map_[name] = std::make_shared<Logger>(name, sinks);
	  // Set logger to flush upon info by default
	  logger_name_to_logger_map_[name]->SetFlushOn(LogLevel::info);
	  // Set default logging level for logger
#ifdef ENABLE_TRACE_LOGGING
	  logger_name_to_logger_map_[name]->SetLogLevel(LogLevel::trace);
#elif ENABLE_DEBUG_LOGGING
	  logger_name_to_logger_map_[name]->SetLogLevel(LogLevel::debug);
#elif DISABLE_LOGGING
	  logger_name_to_logger_map_[name]->SetLogLevel(LogLevel::off);
#endif
	}
	return logger_name_to_logger_map_[name];
  }

  [[nodiscard]] const LogSink &GetStdoutSink() const {
	return stdout_sink_;
  }
  [[nodiscard]] const LogSink &GetFileSink() const {
	return file_sink_;
  }

 protected:
  LogManager() = default;

 private:
  static std::shared_ptr<LogManager> manager_;
  static std::mutex log_manager_mutex_;

  LogSink stdout_sink_;
  LogSink file_sink_;

  std::map<LoggerName, std::shared_ptr<Logger>> logger_name_to_logger_map_;
};

#ifndef DISABLE_LOGGING

#ifdef ENABLE_TRACE_LOGGING
#define LOG_TRACE(name, msg, ...) \
    if (common::LogManager::GetInstance()->GetLogger(name)) { \
        common::LogManager::GetInstance()->GetLogger(name)->Trace(msg, __FILE__, __LINE__); \
    }

#ifdef ENABLE_DEBUG_LOGGING
#define LOG_DEBUG(name, msg, ...) \
      if (common::LogManager::GetInstance()->GetLogger(name)) { \
          common::LogManager::GetInstance()->GetLogger(name)->Debug(msg, __FILE__, __LINE__); \
      }
#else // ENABLE_DEBUG_LOGGING
#define LOG_DEBUG(name, msg, ...) (void)0
#endif // ENABLE_DEBUG_LOGGING

#else // ENABLE_TRACE_LOGGING
#define LOG_TRACE(name, msg, ...) (void)0
#endif // ENABLE_TRACE_LOGGING

#define LOG_INFO(name, msg, ...) \
    if (common::LogManager::GetInstance()->GetLogger(name)) { \
        common::LogManager::GetInstance()->GetLogger(name)->Info(msg, __FILE__, __LINE__); \
    }
#define LOG_WARN(name, msg, ...) \
    if (common::LogManager::GetInstance()->GetLogger(name)) { \
        common::LogManager::GetInstance()->GetLogger(name)->Warn(msg, __FILE__, __LINE__); \
    }
#define LOG_ERR(name, msg, ...) \
    if (common::LogManager::GetInstance()->GetLogger(name)) { \
        common::LogManager::GetInstance()->GetLogger(name)->Error(msg, __FILE__, __LINE__); \
    }
#define LOG_CRIT(name, msg, ...) \
    if (common::LogManager::GetInstance()->GetLogger(name)) { \
        common::LogManager::GetInstance()->GetLogger(name)->Critical(msg, __FILE__, __LINE__); \
    }
#else // !DISABLE_LOGGING
#define LOG_TRACE(name, msg, ...) (void)0
#define LOG_DEBUG(name, msg, ...) (void)0
#define LOG_INFO(name, msg, ...) (void)0
#define LOG_WARN(name, msg, ...) (void)0
#define LOG_ERR(name, msg, ...) (void)0
#define LOG_CRIT(name, msg, ...) (void)0
#endif // !DISABLE_LOGGING

}//namespace common

#endif //N3GPP_ACCESS_LIBS_COMMON_LOGGER_H_
