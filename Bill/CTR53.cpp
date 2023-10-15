#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


void f(const vector<int> &c) {
// CTR 53 use valid iterator range
  for_each(c.begin(), c.end(), [](int i) { cout << i << ' '; });
  cout << '\n'; // Add a newline to separate the output from the rest of the program.
}


int main(){
  vector<int> test = {1,2,3,4,5};
  f(test);

  return 0;
}