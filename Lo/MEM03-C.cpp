/**
 * @file MEM03-C.cpp
 * @brief A C++ program that demonstrates compliance with the MEM03-C recommendation by sanitizing the secret resource.
 * 
 */

#include <iostream>
#include <cstring>
#include <memory>

int main() {
    //creating a variable that contains some secret value
    const char* secret = "Yo look at how secret this is";

    std::cout << "Your secret is: " << secret << std::endl;

    //Sanitizing the resource
    size_t dataSize = std::strlen(secret);
    std::unique_ptr<char[]> sanitizedData(new char[dataSize + 1]);
    std::memset(sanitizedData.get(), 0, dataSize + 1);

    return 0;
}