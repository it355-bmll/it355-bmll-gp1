#include <iostream>
/**
 * 
 * @file MEM52.cpp
 * @brief Example for SEI C++ Rule MEM52 "Handle Memory Allocation Exceptions"
 * @author Levi Bottomley
 * 
 */

using namespace std;


int main(){
    //This makes the code compliant as nothrow in a new declaration will silence notifications for memory allocations errors and return a null instead
    int *nums = new (nothrow) int[5];
    if(!nums){
        cout << "Memory not created" << endl;
        return 0;
    }
    cout << "Memory created" << endl;

    return 0;

}