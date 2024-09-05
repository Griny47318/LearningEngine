cmake_minimum_required(VERSION 3.5)

project(LerneLibrary VERSION 0.0.2)

add_library(test SHARED Test.h
Test.cpp
)

set_target_properties(
    test PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(
    test
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)