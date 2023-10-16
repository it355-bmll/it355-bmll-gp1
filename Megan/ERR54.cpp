#include <iostream>
#include <stdexcept>

// Class X definition
class X {
public:
    X() {
        std::cout << "X constructor" << std::endl;
    }
    ~X() {
        std::cout << "X destructor" << std::endl;
    }
};

// Class Y definition, derived from X
class Y : public X {
public:
    Y() {
        std::cout << "Y constructor" << std::endl;
    }
    ~Y() {
        std::cout << "Y destructor" << std::endl;
    }
};

void f() {
    try {
        throw Y();
    } catch (Y &y) { //exceptions from the most derived class first
        std::cout << "Caught Y exception." << std::endl;
    } catch (X &x) {
        std::cout << "Caught X exception." << std::endl;
    }
}

int main() {
    try {
        f();
    } catch (std::exception &e) {
        std::cout << "Caught standard exception: " << e.what() << std::endl;
    }
    return 0;
}
