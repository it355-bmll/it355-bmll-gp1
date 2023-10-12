#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Write data to a file
    std::ofstream outfile("data.txt");
    outfile << "Hello, World!";
    outfile.close();

    // Read data from the file after seeking to the beginning
    std::ifstream infile("data.txt");
    infile.seekg(0, std::ios::beg);

    std::string line;
    getline(infile, line);

    // Display the read data
    std::cout << "Data read from the file: " << line << std::endl;

    return 0;
}
