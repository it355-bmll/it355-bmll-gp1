#include <iostream>
#include <vector>

using namespace std;

int insert_in_table(int arr[], int index, int val){
  int size = sizeof(arr);
  if(index < size){
    arr[index] = val;
    return 0;
  }
  return 1;
}


int main() {
// CTR50 Guarantee that container indices and interator are within valid range

  int myTable[5] = {1, 2, 3, 4, 5};


  try {
    cout << insert_in_table(myTable, 2, 42) << endl;  // This will succeed insert and return 0
    cout << insert_in_table(myTable, 10, 42) << endl; // This will return 1 as it prevented bad insert
  } catch (const out_of_range& e) {
    // Handle the exception here, e.g., print an error message
    cerr << "Error: " << e.what() << std::endl;
  }


  return 0;
}