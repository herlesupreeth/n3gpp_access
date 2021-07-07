cmake_minimum_required(VERSION 3.16)
project(n3gpp_access)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)

include_directories(src)

#################### SUB DIRECTORIES ####################

add_subdirectory(src/utils)
add_subdirectory(src/lib)
