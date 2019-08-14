# Require at least 3.11
cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

# Declare project name and languages
project(cxx-openmp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

option(USE_OPENMP "Enable OpenMP" ON)

if(USE_OPENMP)
    # Locate OpenMP
    find_package(OpenMP REQUIRED)

    # Create a target
    add_executable(cxx-openmp example.cpp)

    # Define preprocessor directives
    target_compile_definitions(cxx-openmp
        PRIVATE
            USE_OPENMP
        )

    # Add libraries to link to target
    target_link_libraries(cxx-openmp
        PRIVATE
            OpenMP::OpenMP_CXX
        )
else()
    add_executable(cxx-no-openmp example.cpp)
endif()
