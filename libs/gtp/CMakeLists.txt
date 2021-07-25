########################################################################
# Create gtp library
########################################################################
cmake_minimum_required(VERSION 3.16)
project(gtp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(${PROJECT_NAME}
  gtpv1.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE common)

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()
