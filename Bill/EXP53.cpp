#include <iostream>
// EXP53 do not read uninitialized memory  
int main() {
  int i = 0;
  std::cout << i;
  
  return 0;
}