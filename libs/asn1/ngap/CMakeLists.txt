########################################################################
# Create asn1_ngap_lib
########################################################################
cmake_minimum_required(VERSION 3.16)
project(asn1_ngap_lib)

file(GLOB NGAP_ASN1_HDRS *.h)
file(GLOB NGAP_ASN1_SRCS *.c)

add_library(${PROJECT_NAME} ${NGAP_ASN1_HDRS} ${NGAP_ASN1_SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} PUBLIC asn1_common_lib)
