//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//
#include <common/logger.h>
#include <gtest/gtest.h>

#include <fstream>

// Test LogManager

TEST(LogManagerTestSuite, LogManagerSingletonTest) {
  auto manager = common::LogManager::GetInstance();
  ASSERT_EQ(manager, common::LogManager::GetInstance());
  manager->Shutdown();
}

TEST(LogManagerTestSuite, LogManagerInitializeWithStdoutSinkOnlyTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize(std::nullopt);
  ASSERT_TRUE(manager->GetStdoutSink() != nullptr);
  manager->Shutdown();
}

TEST(LogManagerTestSuite, LogManagerInitializeWithStdoutAndFileSinkTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  ASSERT_TRUE(manager->GetStdoutSink() != nullptr);
  ASSERT_TRUE(manager->GetFileSink() != nullptr);
  ASSERT_TRUE(fopen("/tmp/logger_test.log", "r") != nullptr);
  manager->Shutdown();
}

TEST(LogManagerTestSuite, LogManagerShutdownTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  manager->Shutdown();
  ASSERT_TRUE(manager->GetStdoutSink() == nullptr);
  ASSERT_TRUE(manager->GetFileSink() == nullptr);
}

TEST(LogManagerTestSuite, LogManagerWithLoggerShutdownTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  auto logger = manager->GetLogger("test");
  ASSERT_EQ(logger, manager->GetLogger("test"));
  manager->Shutdown();
  ASSERT_TRUE(manager->GetStdoutSink() == nullptr);
  ASSERT_TRUE(manager->GetFileSink() == nullptr);
}

TEST(LogManagerTestSuite, LogManagerAddLoggerTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  auto logger = manager->GetLogger("test");
  ASSERT_EQ(logger, manager->GetLogger("test"));
  manager->Shutdown();
}

// Test Logger

TEST(LoggerTestSuite, LoggingOnStdoutSinkTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize(std::nullopt);
  auto logger = manager->GetLogger("test");
  ASSERT_TRUE(logger != nullptr);
  testing::internal::CaptureStdout();
  logger->Info("Test message");
  std::string stdout_log_message = testing::internal::GetCapturedStdout();
  ASSERT_TRUE(stdout_log_message.find("Test message") != std::string::npos);
  manager->Shutdown();
}

TEST(LoggerTestSuite, LoggingOnFileSinkTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  auto logger = manager->GetLogger("test");
  ASSERT_TRUE(logger != nullptr);
  logger->Info("Test message");
  logger->Flush();

  std::string logged_message;
  std::ifstream file_in("/tmp/logger_test.log");
  ASSERT_TRUE(file_in.is_open());
  std::getline(file_in, logged_message);
  ASSERT_TRUE(logged_message.find("Test message") != std::string::npos);
  file_in.close();
  manager->Shutdown();
}

TEST(LoggerTestSuite, NoTraceLoggingForLoggerSetToInfoTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/no_trace_logger_test.log");
  auto logger = manager->GetLogger("test");
  ASSERT_TRUE(logger != nullptr);
  logger->SetLogLevel(common::LogLevel::info);

  // Test stdout sink
  testing::internal::CaptureStdout();

  logger->Trace("Test message");
  logger->Flush();

  std::string stdout_log_message = testing::internal::GetCapturedStdout();
  // Message must not be logged in stdout sink
  ASSERT_TRUE(stdout_log_message.find("Test message") == std::string::npos);

  // Test file sink
  std::string file_logged_message;
  std::ifstream file_in("/tmp/no_trace_logger_test.log");
  ASSERT_TRUE(file_in.is_open());
  std::getline(file_in, file_logged_message);
  // Message must not be logged in file sink either
  ASSERT_TRUE(file_logged_message.find("Test message") == std::string::npos);
  file_in.close();

  manager->Shutdown();
}

TEST(LoggerTestSuite, FilenameAndFunctionInLogTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  auto logger = manager->GetLogger("test");
  ASSERT_TRUE(logger != nullptr);
  logger->SetLogLevel(common::LogLevel::trace);

  testing::internal::CaptureStdout();

  LOG_DEBUG("test", "Test message")

  std::string stdout_log_message = testing::internal::GetCapturedStdout();
  // Message must not be logged in stdout sink
  ASSERT_TRUE(stdout_log_message.find("Test message") != std::string::npos);

  manager->Shutdown();
}
