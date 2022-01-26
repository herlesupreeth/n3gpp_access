//
// This file is a part of n3gpp_access open source project.
// Copyright (c) 2021 Supreeth Herle.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//
#include <common/logger.h>
#include <gtest/gtest.h>

TEST(LogManagerTestSuite, LogManagerSingletonTest) {
  auto manager = common::LogManager::GetInstance();
  ASSERT_EQ(manager, common::LogManager::GetInstance());
}

TEST(LogManagerTestSuite, LogManagerInitializeWithStdoutSinkOnlyTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize(std::nullopt);
  ASSERT_TRUE(manager->GetStdoutSink() != nullptr);
}

TEST(LogManagerTestSuite, LogManagerInitializeWithStdoutAndFileSinkTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  ASSERT_TRUE(manager->GetStdoutSink() != nullptr);
  ASSERT_TRUE(manager->GetFileSink() != nullptr);
  ASSERT_TRUE(fopen("/tmp/logger_test.log", "r") != nullptr);
}

TEST(LogManagerTestSuite, LogManagerShutdownTest) {
  auto manager = common::LogManager::GetInstance();
  manager->Initialize("/tmp/logger_test.log");
  manager->Shutdown();
  ASSERT_TRUE(manager->GetStdoutSink() == nullptr);
  ASSERT_TRUE(manager->GetFileSink() == nullptr);
}

TEST(LogManagerTestSuite, LogManagerShutdownWithLoggerTest) {
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
