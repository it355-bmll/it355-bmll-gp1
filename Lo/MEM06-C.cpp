/**
 * @file MEM06-C.cpp
 * @brief A C++ program that demonstrates compliance with the recommendation MEM06-C. This code creates an object of class SecretData,
 * stores some secret data, and ensures the secret data can be displayed without writing it to the disk.
 */

#include <iostream>
#include <fstream>
#include <string>

//Setting size of core dump to 0 to ensure no data accidentally leaks out
struct rlimit limit;
limit.rlim_cur = 0;
limit.rlim_max = 0;
if (setrlimit(RLIMIT_CORE, &limit) != 0) {
    std::cout << "HELP ERROR";
}

class SecretData {
public:
    SecretData(const std::string& data) : data_(data) {}

    // This function prints the data without writing it to disk
    void PrintData() {
        std::cout << "Secret Data: " << data_ << std::endl;
    }

private:
    std::string data_;
};

void main() {
    std::string sensitiveData = "This is sensitive information.";
    SecretData SecretData(sensitiveData);

    // Printing sensitive data without writing it to disk
    SecretData.PrintData();

}