cmake_minimum_required(VERSION 3.10)

# Set the project name
project(UnitTestPlayground VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add executable
add_executable(${PROJECT_NAME} 
    src/main.cpp
)