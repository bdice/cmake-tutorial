# Require at least 3.11
cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

# Declare project name and languages
project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)

add_library(sum_int sum_integers.cpp)

target_link_libraries(main PRIVATE sum_int)

add_subdirectory(tests)
