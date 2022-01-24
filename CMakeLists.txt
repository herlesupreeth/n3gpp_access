########################################################################
# Create n3gpp_access project
########################################################################
cmake_minimum_required(VERSION 3.16)
project(n3gpp_access)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
    message(STATUS "Build type not specified: defaulting to Release.")
endif (NOT CMAKE_BUILD_TYPE)
set(CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING "")

if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    add_definitions(-DENABLE_TRACE_LOGGING)
    set(BUILD_TESTS ON)
elseif(${CMAKE_BUILD_TYPE} STREQUAL "RelWithDebInfo")
    add_definitions(-DENABLE_DEBUG_LOGGING)
elseif(${CMAKE_BUILD_TYPE} STREQUAL "Release")
    add_definitions(-DDISABLE_LOGGING)
endif ()

########################################################################
# Include third-party libraries
########################################################################
add_subdirectory(third_party/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

########################################################################
# Include directories for include files
########################################################################
include_directories(libs)

########################################################################
# Add subdirectories
########################################################################
add_subdirectory(libs)
