########################################################################
# Create common_lib
########################################################################
cmake_minimum_required(VERSION 3.16)
project(common_lib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(${PROJECT_NAME}
        octet_buffer.cc
        logger.cc logger.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if (BUILD_TESTS)
    message(STATUS "Building test cases for common library")
    add_subdirectory(tests)
endif ()
