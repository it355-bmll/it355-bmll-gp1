

#include <iostream>
//CTR54 do not subtract iterators that do not refer to the same container
using namespace std;

template <typename Ty>
bool in_range(const Ty *test, const Ty *r, size_t n) {
  return (test >= r) && (test < r + n);
}


void f() {
  double foo[10];
  double *x = &foo[0];
  double bar;
  cout << in_range(&bar, x, 10);
}


int main(){
  f();
  return 0;
}