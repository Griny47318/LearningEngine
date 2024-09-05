cmake_minimum_required(VERSION 3.5)

project(SandBox VERSION 0.0.5)

set(SOURCES
        SandBox.cpp
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
   ${CMAKE_CURRENT_SOURCE_DIR}/../../LEngine/src/
) 

target_link_libraries(SandBox test)