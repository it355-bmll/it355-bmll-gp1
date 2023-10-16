#include <iostream>
#include <fstream>

/**
 * 
 * @file EXP12.c
 * @brief Example for SEI C Recommendation EXP12 "Do not Ignore values returned by functions"
 * @author Levi Bottomley
 * 
 */
int doSomethingWithNaturalNum(int &x){
    if(x > 0){
        x++;
        return 0;
    } else{
        return -1;
    }
} 


int main(){
    int i = -10;
    int didWork = doSomethingWithNaturalNum(i);
    if(didWork < 0){
        std::cout << "A natural Number was not given" << std::endl;
    }

    return 0;
}