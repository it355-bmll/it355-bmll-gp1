#include <iostream>
// EXP53 do not read uninitialized memory  

using namespace std;
int main() {
  //This line makes this code compliant as by assigning a value to the new it it guarantees that the memory is initialized
  int i = 0;
  cout << i;
  
  return 0;
}