#include <iostream>
#include <string>

/**
 * 
 * @file API07.c
 * @brief Example for SEI C Recommendation API07 "Enforce Type Safety"
 * @author Levi Bottomley
 * 
 */


int main(){
    //This is type safe as vars are defined to vars of the type they are
    std::string var1 = "test 1";
    int var2 = 2;

    std::cout << "Varibles defined :" << var2 << " and " << var1 << std::endl;

    return 0;
}