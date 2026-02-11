#include <iostream>
#include "my_math.h"


void usingMathLib() {
    
    double a = 10.5;
    double b = 3.2;
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;
    std::cout << "Division: " << divide(a, b) << std::endl;   
}

int main() {
    std::cout << "Hello, C++ with CMake!" << std::endl;

    usingMathLib();

    return 0;
}