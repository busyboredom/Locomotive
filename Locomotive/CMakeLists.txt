# To link static linking library to dynamic library
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Logging library uses CMake
add_subdirectory(vendor/spdlog)

# For dynamic linking
add_definitions(-LM_BUILD_DLL)

add_subdirectory(src)


