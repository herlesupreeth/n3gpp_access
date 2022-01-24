# Add the logger_test_run target
add_executable(logger_test_run logger_test.cc)
target_link_libraries(logger_test_run common_lib)
target_link_libraries(logger_test_run gtest gtest_main)
