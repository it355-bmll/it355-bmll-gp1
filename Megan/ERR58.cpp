#include<iostream>
#include <string>
#include <cstdlib>

class A {
  public:
    A(){
      try {
        std::cout << "in constructor\n";
      }
      catch (...){
        std::cout << "exception caught";
        throw;
      }
    }

};

int main (){
  try{
    A obj;
  }
  catch(...){
    std::cout<<"exception caught in main";
  }

  return 0;
}
