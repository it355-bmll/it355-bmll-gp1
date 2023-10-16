#include <iostream>
#include <string>
#include <cstdlib>

std::size_t get_index(const std::string& input){
  return 2;
}

int main() {
    std::string s("Hello");
    std::size_t stringLength = s.length();
    std::size_t i = get_index(s);

    if (i < stringLength) { //verifies that the value is within bounds
        s[i] = 'C';
        std::cout << "Modified string: " << s << std::endl;
    } else {
        std::cerr << "Error: Index out of bounds." << std::endl;
    }

    return 0;
}
