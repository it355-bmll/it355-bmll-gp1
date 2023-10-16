#include <iostream>
//CTR56 do not use pointer arithmetic on polymorphic objects

using namespace std;

// Define S and T structures
struct S {
  int i = 0;
  // other members if needed
};


struct T : S{
  int j = 2;
  int i = 1;
  // members of T
};


void f(S** someSes, size_t count) {
  //This makes the function complient as we use the pointer system to increment through a polymorphic object array
  for (size_t i = 0; i < count; i++) {
    cout << someSes[i]->i << endl;
  }
}


int main() {
  S *test[5] = { new S,  new T,  new S,  new T,  new S};
  f(test, 5);
}