cmake_minimum_required(VERSION 3.10)

# Set CMake policy for doctest compatibility
set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

# Set the project name
project(UnitTestPlayground)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include DocTest for testing
include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG        v2.4.11
    GIT_SHALLOW    TRUE
)
FetchContent_MakeAvailable(doctest)

# Include directories
# include_directories(include)

# Add executable
add_executable(${PROJECT_NAME} 
    src/main.cpp
)

# Add math library directory
add_subdirectory(my_math_lib)

# Link the math library to the executable
target_link_libraries(${PROJECT_NAME} my_math_lib)

# Enable testing
enable_testing()

# Add test executable
add_executable(unit_tests 
    tests/test_my_math.cpp
)

# Link libraries to test executable
target_link_libraries(unit_tests 
    my_math_lib
    doctest
)

# Add test to CTest
add_test(NAME unit_tests COMMAND unit_tests)