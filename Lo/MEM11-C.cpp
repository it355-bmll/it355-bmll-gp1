/**
 * @file MEM11-C.cpp
 * @brief A C++ program that demonstrates compliance with the MEM11-C recommendation by limiting the size of the amount of memory the data array can use.
 * 
 */

#include <iostream>
#include <memory>

const int MAX_SIZE = 100;

int main() {
    // Using smart pointers for memory management since it just makes things simpler
    std::unique_ptr<int[]> data = std::make_unique<int[]>(MAX_SIZE);

    // Initializing allocated memory
    for (int i = 0; i < MAX_SIZE; i++) {
        data[i] = i * 2;
    }

    // Filling the data array with incrementally increasing integers.
    for (int i = 0; i < MAX_SIZE; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    // Memory is automatically deallocated when 'data' goes out of scope, preventing heap space from being overrun

    return 0;
}