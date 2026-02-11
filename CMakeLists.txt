cmake_minimum_required(VERSION 3.10)

# Set the project name
project(UnitTestPlayground)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add executable
add_executable(${PROJECT_NAME} 
    src/main.cpp
)

# Add math library
add_library(my_math_lib src/my_math.cpp)

# Link the math library to the executable
target_link_libraries(${PROJECT_NAME} my_math_lib)