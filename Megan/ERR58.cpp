#include<iostream>
#include <string>
#include <cstdlib>

class K {
  public:
    K(){
      try {
        std::cout << "works";
      }
      catch (...){
        std::cout << "exception caught";
        throw;
      }
    }

};

int main (){
  try{
    K obj;
  }
  catch(...){
    std::cout<<"exception caught in main";
  }

  return 0;
}
