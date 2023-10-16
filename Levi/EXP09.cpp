#include <cstdio>
#include <cstdlib>

/**
 * 
 * @file EXP09.c
 * @brief Example for SEI C Recommendation EXP09 "Do not Ignore values returned by functions"
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