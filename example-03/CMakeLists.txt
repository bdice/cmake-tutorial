# Require at least 3.11
cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

# Declare project name and languages
project(factorial LANGUAGES CXX)

# Create a target
add_executable(factorial "")

set(CMAKE_CXX_STANDARD 14)

target_sources(factorial PRIVATE test_factorial.cpp)
