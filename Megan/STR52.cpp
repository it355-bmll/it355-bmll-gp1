#include <algorithm>
#include <string>
#include <iostream>

void f(const std::string &input) { //references a constant string making it a valid reference
  //static std::string input = "086 090 085 097 103"
  std::string grades{input};
  std::replace(grades.begin(), grades.end(), '5', '1'); //begin and end are valid nonconstant functions
  std::cout << "Modified grades: " << grades << std::endl;
}

int main(){
  std::string inputGrades = "086080075087093";
  std::cout << "Originl grades: " << inputGrades << std::endl;
  f(inputGrades);
  return 0;
}
