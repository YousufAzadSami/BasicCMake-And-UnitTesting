# Math library CMakeLists.txt

# Add the math library
add_library(my_math_lib 
    src/my_math.cpp
)

# Set include directory for this library
target_include_directories(my_math_lib 
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)