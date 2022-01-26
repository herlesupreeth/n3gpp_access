# Add the log_lib_test_run target
add_executable(log_lib_test_run logger_test.cc)
target_link_libraries(log_lib_test_run common_lib)
target_link_libraries(log_lib_test_run gtest gtest_main)
