/**
 * @file DCL50-CPP.cpp
 * @brief A C++ program that demonstrates compliance with DCL50-CPP and defines a C++ variadic template function, not a C-style variadic function
 */


#include <iostream>

//Defines a C++ variadic template function
template<typename... Args>
int sum_of_all_values(Args... args) {
    return (args + ...);
}

//The main function uses a C++ variadic template function, preventing the need for a C-style variadic function to perform the same operation
int main() {
    int result = sum_of_all_values(28, 58, 215); 
    std::cout << "The sum of all values is: " << result << std::endl;

    return 0;
}