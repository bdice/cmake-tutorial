# Require at least 3.11
cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

# Declare project name and languages
project(cxx-openmp LANGUAGES CXX)

# Locate OpenMP
find_package(OpenMP REQUIRED)

# Create a target
add_executable(cxx-openmp example.cpp)

# Add libraries to link to target
target_link_libraries(cxx-openmp
    PRIVATE
        OpenMP::OpenMP_CXX
    )
