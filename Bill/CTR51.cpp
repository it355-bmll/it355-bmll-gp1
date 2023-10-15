#include <deque>
#include <iostream>
//CTR51 use valid references pointers iterators to reference elements of a container
using namespace std;

void f(const double *items, size_t count) {
  double* subVal = new double[count];
  int itmCount = sizeof(items) / sizeof(double);
  for (size_t i = 0; i < count; i++) {
    //This demonstrates the rule by making sure we never exceed the container's max size
    cout << items[i % itmCount] << endl;
    subVal[i] = (items[i % itmCount] + 41.0);
  }
}


int main(){
  double values[4] = {1.0,2.0,3.0,4.0};
  f(values,20);

  return 0;

}