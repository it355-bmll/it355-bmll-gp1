#include <iostream>

using namespace std;


/**
 * 
 * @file MEM55.cpp
 * @brief Example for SEI C++ Rule MEM55 "Honor Dynnamic Storage Management Requirements"
 * @author Levi Bottomley
 * 
 */

class A{
    public:
        void *operator new(std::size_t size){
            if(void *ret = malloc(sizeof(A))){
                return ret;
            }
            //this code is compliant because if it doesn't get enough space to create a memory pointer it throws bad allocation
            throw std::bad_alloc();
        }
};

int main(){
    A* test = new A();

    free(test);

    return 0;
}