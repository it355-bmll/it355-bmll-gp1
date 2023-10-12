#include <iostream>
//CTR56 do not use pointer arithmetic on polymorphic objects

// Define S and T structures
struct S {
  int i;
  // other members if needed
};


struct T {
  // members of T
};


void f(const S *someSes, std::size_t count) {
  for (std::size_t i = 0; i < count; ++i) {
    std::cout << someSes[i].i << std::endl;
  }
}


int main() {
  S test[5]; // Use an array of S, not T
  f(test, 5);
}