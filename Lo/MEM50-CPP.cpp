/**
 * @file MEM50-CPP.cpp
 * @brief A C++ program that demonstrates compliance with MEM50-CPP and prevents the access of freed memory
 */

#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr(new int(10));  // This uses a smart pointer, which will prevent the memory from being accessed after being freed

    std::cout << "Value: " << *ptr << std::endl;

    // Smart pointer handles deallocation after the allocated memory has exhausted its purpose

    return 0;
}