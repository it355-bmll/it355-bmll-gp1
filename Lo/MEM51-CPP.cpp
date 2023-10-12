/**
 * @file MEM51-CPP.cpp
 * @brief A C++ program that demonstrates compliance with MEM51-CPP and properly deallocates dynamically allocated resources
 */

#include <iostream>

int main() {
    int* myDynamicallyAllocatedArray = new int[10]; // Defining object that uses dynamically allocated memory
    
    delete[] myDynamicallyAllocatedArray; // Proper deallocation of myDynamicallyAllocatedArray
    
    return 0;
}