#include "my_math.h"
#include <iostream>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) 
        throw std::runtime_error("Division by zero");
    
    return a / b;
}

void usingMathLib() {
    
    double a = 10.5;
    double b = 3.2;
    
    std::cout << "Using Math Library" << std::endl;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;
    std::cout << "Division: " << divide(a, b) << std::endl;   
}