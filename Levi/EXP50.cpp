#include <iostream>
/**
 * 
 * @file EXP50.cpp
 * @brief Example for SEI C++ Rule EXP50 "Do not rely on order of operation for side effects"
 * @author Levi Bottomley
 * 
 */
int main(){
    //this code is compliant as all operations are preformed one at a time or in know orders preventing side effects
    int i = 0;
    i++;
    i = i * 2;
    return 0;
}