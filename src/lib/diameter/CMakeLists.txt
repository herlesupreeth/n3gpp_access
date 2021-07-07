cmake_minimum_required(VERSION 3.16)

file(GLOB_RECURSE HDR_FILES *.hpp)
file(GLOB_RECURSE SRC_FILES *.cpp)

add_library(diameter ${HDR_FILES} ${SRC_FILES})

target_compile_options(diameter PRIVATE -Wall -Wextra -pedantic -Wno-unused-parameter)
