#include <iostream>

int func() noexcept(true) {
  int val = 10;
  if (val < 2)  {
    return 42; //shows that an error occurred without throwing exception
  }
  return 0; //program runs normally
}


void f() {
  if (int err = func()) {
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
