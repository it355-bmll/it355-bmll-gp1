#include <cstdlib>
#include <new>
#include <iostream>

/**
 * 
 * @file MEM53.cpp
 * @brief Example for SEI C++ Rule MEM53 "Explicit construct and destruct objects when manually managing object lifetime"
 * @author Levi Bottomley
 * 
 */


using namespace std;
//Dummy class for example
class T {
    public:
        T(){};
        ~T(){};
};


int main(){
    //Getting Shared Memory Locations for instance of T
    void *ptr = (malloc(sizeof(T)));
    //Memory objects are manually created and deconstructed
    T* obj = new (ptr) T;
    obj->~T();
    //Freeing shared memory to prevent memory leak
    free(ptr);

    return 0;
}