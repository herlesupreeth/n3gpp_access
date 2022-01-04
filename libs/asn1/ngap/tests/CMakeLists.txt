########################################################################
# Create asn1_ngap_lib_test
########################################################################
cmake_minimum_required(VERSION 3.16)
project(asn1_ngap_lib_test)

add_executable(${PROJECT_NAME}
        converter-example.c
        pdu_collection.c
        )

target_compile_options(${PROJECT_NAME} PUBLIC -DASN_PDU_COLLECTION)
target_link_libraries(${PROJECT_NAME} PUBLIC asn1_common_lib asn1_ngap_lib)

# Include tests
if (BUILD_TESTING)
    add_subdirectory(tests)
endif ()