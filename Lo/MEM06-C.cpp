/**
 * @file MEM06-C.cpp
 * @brief A C++ program that demonstrates compliance with the MEM06-C recommendation by ensuring sensitive data does not leak.
 * 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sys/resource.h>


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

int main() {
    //Setting size of core dump to 0 to ensure no data accidentally leaks out
    struct rlimit limit;
    limit.rlim_cur = 0;
    limit.rlim_max = 0;
    if (setrlimit(RLIMIT_CORE, &limit) != 0) {
    std::cout << "HELP ERROR";
    }
    
    std::string sensitiveData = "This is sensitive information.";
    SecretData SecretData(sensitiveData);

    // Printing sensitive data without writing it to disk
    SecretData.PrintData();
    
    return 0;
}