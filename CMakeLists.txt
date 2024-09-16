cmake_minimum_required(VERSION 3.5)

project(Example VERSION 0.0.2)

add_definitions(-DLE_PLATFORM_WINDOW)


add_subdirectory(LEngine/src)
add_subdirectory(SandBox/src)
add_subdirectory(LEngine/vendor/spdlog)

