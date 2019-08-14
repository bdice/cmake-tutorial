# Require at least 3.11
cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

# Declare project name and languages
project(hello-world LANGUAGES CXX)

# Create a target
add_executable(hello "")

target_sources(hello PRIVATE hello.cpp)
