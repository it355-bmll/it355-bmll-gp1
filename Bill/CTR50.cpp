#import <iostream>
using namespace std;

int main() {
// CTR50 Guarantee that container indices and interators are within valid range

  std::vector<int> myTable = {1, 2, 3, 4, 5};


  try {
    insert_in_table(myTable, 2, 42);  // This will succeed
    insert_in_table(myTable, 10, 42); // This will throw an exception
  } catch (const std::out_of_range& e) {
    // Handle the exception here, e.g., print an error message
    std::cerr << "Error: " << e.what() << std::endl;
  }


  return 0;
}