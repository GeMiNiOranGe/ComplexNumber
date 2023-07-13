cmake_minimum_required(VERSION 3.25)

project(ComplexNumber VERSION 0.0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable `__cplusplus` macro to reflect the actual C++ standard version
if (MSVC)
    add_compile_options(/Zc:__cplusplus)
endif()

# Build library
add_library(complex_number)
add_library(matho::ComplexNumber ALIAS complex_number)

target_sources(complex_number
    PRIVATE
        library/complex_number.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS include
        FILES
            include/matho/complex_number.hpp
)
target_include_directories(complex_number PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
