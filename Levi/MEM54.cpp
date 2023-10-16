#include <iostream>
#include <new>

using namespace std;

/**
 * 
 * @file MEM54.cpp
 * @brief Example for SEI C++ Rule MEM54 "Provide placement new with properly aligned pointers to sufficient storage capacity"
 * @author Levi Bottomley
 * 
 */

int main(){
    //This causes the code to be complient as alignas function makes the buffer properly aligned to allow the storage for a long
    alignas(long) unsigned char buffer[sizeof(long)];
    long *lp = ::new (buffer) long;

    cout << buffer << endl;
    free(lp);
    return 0;
}