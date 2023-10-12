/**
 * @file MEM57-CPP.cpp
 * @brief A C++ program that demonstrates compliance with MEM57-CPP. It will create an over-aligned struct, then creates a new object without using the new expression.
 */
#include <iostream>
#include <new>

// Over-aligned type of struct
struct OverAlignedData {
    alignas(8) int data; // Align to 8 bytes
};

int main() {
    // Allocates memory for an OverAlignedData object without using the new expression
    OverAlignedData* overAlignedObject;
    try {
        overAlignedObject = new(std::align_val_t(8)) OverAlignedData;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Allocation failed: " << e.what() << std::endl;
        return 1;
    }

    // Initialize and use the object inside of the memory that was allocated earlier
    overAlignedObject->data = 42;
    std::cout << "Aligned Data: " << overAlignedObject->data << std::endl;

    // Deallocation of memory
    delete overAlignedObject;

    return 0;
}