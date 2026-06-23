cmake_minimum_required(VERSION 3.20)

function(ValidateCompiler)
    if(NOT CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
        message(FATAL_ERROR "Compiler is not Clang. Only Clang is allowed.")
    endif()
endfunction()
