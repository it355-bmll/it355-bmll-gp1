/**
 * @file EXP55-CPP.cpp
 * @brief A C++ program that demonstrates compliance with EXP55-CPP and references a constant variable with a constant reference
 */

 #include <iostream>

int main() {
    const int constantVariable = 42;
    const int& constantReferenceToConstantVariable = constantVariable;  // We are accessing the constantVariable object through a constant reference

    // constantReferenceToConstantVariable = 10; // If we uncomment this line, the program won't compile since we already declared that the reference was constant

    std::cout << "Value: " << constantVariable << std::endl;

    return 0;
}