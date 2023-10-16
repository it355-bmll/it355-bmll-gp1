#include <iostream>
#include <string>

int main() {
    char* charPointer = nullptr;

    // Check if the pointer is null before creating a string
    if (charPointer != nullptr) {
        std::string str(charPointer); // Create string from the pointer since it isnt null
        std::cout << "String: " << str << std::endl;
    } else {
        std::cout << "Cannot create std::string from a null pointer." << std::endl;
    }

    return 0;
}
