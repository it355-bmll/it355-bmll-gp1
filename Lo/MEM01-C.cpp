/**
 * @file MEM01-C.cpp
 * @brief A C++ program that demonstrates compliance with the MEM01-C recommendation by storing a new value in the pointer after being freed.
 * 
 */

#include <iostream>
#include <memory>

int main() {
    int* data = (int*)std::malloc(sizeof(int));

    *data = 56;

    //Checking to make sure memory isn't already null
    if (data == nullptr) {
        std::cout << "Allocation error" << std::endl;
        return 1;
    }

    std::cout << "Data is equal to: " << *data << std::endl;

    //Storing a new value in the data pointer after freeing the memory
    std::free(data);
    data = nullptr;

    return 0;
}