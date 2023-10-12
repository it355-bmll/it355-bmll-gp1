#include <algorithm>
#include <iostream>
#include <vector>


void f(const std::vector<int> &c) {
// CTR 53 use valid iterator range
  std::for_each(c.begin(), c.end(), [](int i) { std::cout << i << ' '; });
  std::cout << '\n'; // Add a newline to separate the output from the rest of the program.
}