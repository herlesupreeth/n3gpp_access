########################################################################
# Create common_lib
########################################################################
cmake_minimum_required(VERSION 3.16)
project(common_lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(${PROJECT_NAME}
  octet_buffer.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()
