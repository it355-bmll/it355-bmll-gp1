#include<iostream>
#include <string>
#include <cstdlib>

class J { //uses the same exception handling as before to remain consistent
  public:
    J(){
      try {
        std::cout << "works!";
      }
      catch (...){
        std::cout << "exception caught";
        throw;
      }
    }

};

int main (){
  try{
    J obj;
  }
  catch(...){
    std::cout<<"exception caught in main";
  }

  return 0;
}
