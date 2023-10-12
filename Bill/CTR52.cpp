#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
// CTR52 guarantee library functions do not overflow 
int main()
{
  std::vector<int> v;
  std::generate_n(
    std::back_insert_iterator<std::vector<int>>(v), 
    10, [n=0]() mutable { return ++n; }           
  );
 
  for (int n : v)
    std::cout << n << ' ';
  std::cout << '\n';
}