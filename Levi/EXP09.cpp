#include <cstdio>
#include <cstdlib>

/**
 * 
 * @file EXP09.cpp
 * @brief Example for SEI C Recommendation EXP09 "Use sizeof to determine the size of var or type"
 * @author Levi Bottomley
 * 
 */


int main(){
    //Size for I is created by getting the size of an integer value
    void *i = malloc(sizeof(int));

    //freeing to prevent memory leak
    free(i);
    
    return 0;
}