cmake_minimum_required(VERSION 3.5)

project(LuzerLibrary VERSION 0.0.2)

add_library(libDll SHARED LE.h 
Application.h Application.cpp 
Log.h Log.cpp 
config.h Core.h EntryPoint.h
)

set_target_properties(
    libDll PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(
    libDll
    PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)

target_include_directories(
    libDll
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/spdlog/include
) 
