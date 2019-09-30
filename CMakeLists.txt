cmake_minimum_required(VERSION 2.8.9)
project(Locomotive)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

enable_testing()

include_directories(Locomotive/src)
include_directories(Locomotive/vendor/spdlog/include)

add_subdirectory(Locomotive)
add_subdirectory(Sandbox)
