cmake_minimum_required(VERSION 3.20)
project(startup)

include(${CMAKE_SOURCE_DIR}/cmake/flags.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/base.cmake)

ValidateCompiler()

add_subdirectory(src)
add_subdirectory(vendor)