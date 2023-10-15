#include <iostream>
/**
 * 
 * @file ERR55.cpp
 * @brief Example for SEI C++ Rule ERR55 "Honor Exception Specifications"
 * @author Levi Bottomley
 * 
 */
using namespace std;

//This is compliant with ERR55 as methods that don't declare no exception are assumed to be able to throw
int MyCoolHelper() noexcept(false){
    throw 0;
    return 0;
};

int MyCoolFunction(){
    MyCoolHelper();
    return 2;
};

int main(){
    try{
        MyCoolFunction();
    }catch(int e){
        //Error is handled without rethrowing also making the code compliant
        cout << "MyCoolFunction Threw an Exception :(" <<endl;
        return 0;
    }
    return 0;
}

