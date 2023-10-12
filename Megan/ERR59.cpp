#include <iostream>

int func() noexcept(true) {
  int val = 10;
  if (val < 2)  {
    return 42;
  }
  // ...
  return 0;
}


void f() {
  if (int err = func()) {
    // Handle error
    std::cerr << "error occurred" << err << std::endl;
  }
  else{
    std::cout << "success" << std::endl;
  }
}

int main(){
  f();
  return 0;
}
