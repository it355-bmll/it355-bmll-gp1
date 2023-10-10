/**
 * @file EXP54-CPP.cpp
 * @brief A C++ program that demonstrates compliance with EXP54-CPP. It creates an object of the MyClass class, accesses the value, then deletes the object. To make
 * code noncompliant, remove the comment on line 36.
 */
#include <iostream>

class MyClass {
public:
    //constructor
    MyClass(int val) : value(val) {
        std::cout << "Object created with value: " << value << std::endl;
    }
    //destructor
    ~MyClass() {
        std::cout << "Object destroyed with value: " << value << std::endl;
    }
    //some function that returns a value
    void printValue() const {
        std::cout << "Object value: " << value << std::endl;
    }

private:
    int value = 112358;
};

int main() {
    MyClass* obj1 = new MyClass(42);

    // Accessing the object and executing the printValue function
    obj1->printValue();

    // Deallocates memory for the obj1 object
    delete obj1;

    //obj1->printValue(); // Uncommenting this line makes the code noncompliant, as we are attempting to access the object after it has been deleted

    return 0;
}