cmake_minimum_required(VERSION 3.5)

project(SandBox VERSION 0.0.5)

set(SOURCES
        SandBoxApp.cpp
)

add_executable(SandBox ${SOURCES})
set_target_properties(
    SandBox PROPERTIES
                            CXX_STANDARD 14
                            CXX_STANDARD_REQUIRED ON
                        )
target_include_directories(
    SandBox
   PRIVATE
   ${CMAKE_CURRENT_BINARY_DIR}
)
target_include_directories(
    SandBox
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/../../LEngine/src
) 


target_include_directories(
    SandBox
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/../../LEngine/vendor/spdlog/include
) 
target_include_directories(
    SandBox
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/../../LEngine/vendor/spdlog/src
) 


target_link_libraries(SandBox libDll)

message(${CMAKE_CURRENT_BINARY_DIR})


add_custom_command(
                    TARGET SandBox POST_BUILD 
                    COMMAND ${CMAKE_COMMAND} -E copy 
                    ${CMAKE_CURRENT_BINARY_DIR}/../../LEngine/src/Debug/libDll.dll
                    ${CMAKE_CURRENT_BINARY_DIR}/Debug/
)