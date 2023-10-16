#include <iostream>
#include <cassert>

int main(){
  int number;
  std::cout << "Enter a positive number.";
  std::cin >> number;
  if(number<0) //uses an if statement and return instead of an abort to terminate the program
  {
    std::cout <<"Not a positive number, program closing" << std::endl;
    return 0;
  }
  std::cout<< "Congrats, " << number << "is positive"<< std::endl;
  return 0;
}
