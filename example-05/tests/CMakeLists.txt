add_executable(unit_tests unit_tests.cpp)

target_sources(unit_tests
    PRIVATE
        test_vector.cpp
        test_bdd_vector.cpp
    )
