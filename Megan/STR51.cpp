#include <iostream>
#include <string>
#include <cstdlib> // for std::getenv

int main() {
    // Retrieve the getenv path
    const char* tmpVal = std::getenv("PATH");

    // Create an std::string 'tmp' based on the environment variable value
    std::string tmp = (tmpVal != nullptr) ? tmpVal : "";

    // Check if 'tmp' is not empty (i.e., 'TMP' exists and has a value)
    if (!tmp.empty()) {
        std::cout << "TMP environment variable value: " << tmp << std::endl;
    } else {
        std::cout << "TMP environment variable is not set or is empty." << std::endl;
    }
      return 0;
}
