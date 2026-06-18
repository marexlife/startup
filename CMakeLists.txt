cmake_minimum_required(VERSION 3.20)
project(startup)

include(${CMAKE_SOURCE_DIR}/CMake/flags.cmake)
include(${CMAKE_SOURCE_DIR}/CMake/base.cmake)

ValidateCompiler()

add_subdirectory(src)
add_subdirectory(vendor)