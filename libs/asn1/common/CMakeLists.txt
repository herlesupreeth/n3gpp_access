########################################################################
# Create asn1_common_lib
########################################################################
cmake_minimum_required(VERSION 3.16)
project(asn1_common_lib)

file(GLOB ASN1_COMMON_HDRS *.h)
file(GLOB ASN1_COMMON_SRCS *.c)

add_library(${PROJECT_NAME} ${ASN1_COMMON_HDRS} ${ASN1_COMMON_SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_options(${PROJECT_NAME} PUBLIC)
