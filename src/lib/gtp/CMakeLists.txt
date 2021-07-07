cmake_minimum_required(VERSION 3.16)

find_package(GTest REQUIRED)

file(GLOB_RECURSE HDR_FILES *.hpp)
file(GLOB_RECURSE SRC_FILES *.cpp)

add_library(gtp ${HDR_FILES} ${SRC_FILES})

target_compile_options(gtp PUBLIC -Wall -Wextra -pedantic -Wno-unused-parameter)
