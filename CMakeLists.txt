########################################################################
# Create n3gpp_access project
########################################################################
cmake_minimum_required(VERSION 3.16)
project(n3gpp_access)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

########################################################################
# Include directories for include files
########################################################################
include_directories(libs)

########################################################################
# Add subdirectories
########################################################################
add_subdirectory(libs)