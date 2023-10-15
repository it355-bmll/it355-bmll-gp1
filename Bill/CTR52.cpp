#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
// CTR52 guarantee library functions do not overflow 

using namespace std;
int main()
{
  vector<int> v;
  generate_n(
    back_insert_iterator<vector<int>>(v), 
    10, [n=0]() mutable { return n++; }           
  );
 
  for (int n : v){
    cout << n << ' ';
  }
  cout << '\n';
}