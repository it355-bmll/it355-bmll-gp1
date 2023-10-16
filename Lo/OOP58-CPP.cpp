/**
 * @file OOP58-CPP.cpp
 * @brief A C++ program that demonstrates compliance with OOP52-CPP and creates a copy of data without changing it.
 */
#include <iostream>

class MyClass {
public:
    MyClass(int val) : value(val) {}

    //This constructor allows copying of object without changing the values
    MyClass(const MyClass& other) : value(other.value) {
        std::cout << "Copy constructor called." << std::endl;
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    // Creates some original data to be copied
    MyClass originalData(42);

    // Create a copy of the data above
    MyClass copyData(originalData);

    // Ensuring the copy of the data is no different to the original
    std::cout << "Original data value: " << originalData.getValue() << std::endl;
    std::cout << "Copied data value: " << copyData.getValue() << std::endl;

    return 0;
}