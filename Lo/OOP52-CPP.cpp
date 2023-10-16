/**
 * @file OOP52-CPP.cpp
 * @brief A C++ program that demonstrates compliance with OOP52-CPP and uses a virtual destructor to delete a polymorphic object
 */

#include <iostream>
class OriginClass { // Defining a class that we will use for the polymorphic object
public:
    OriginClass() { // Constructor
        std::cout << "OriginClass constructor" << std::endl;
    }
    virtual ~OriginClass() { // Destructor. This virtual destructor is what makes this code compliant.
        std::cout << "OriginClass destructor" << std::endl;
    }
};

class DerivedClass : public OriginClass {
public:
    DerivedClass() { // Constructor
        std::cout << "Derived constructor" << std::endl;
    }

    ~DerivedClass() override { // Destructor
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    OriginClass* polymorphicObject = new DerivedClass;

    // Delete the polymorphic object
    delete polymorphicObject;

    return 0;
}