########################################################################
# Create gtp_lib
########################################################################
cmake_minimum_required(VERSION 3.16)
project(gtp_lib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(${PROJECT_NAME}
        gtpv1.cc
        )

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC common_lib)
