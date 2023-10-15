#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * 
 * @file EXP12.c
 * @brief Example for SEI C Recommendation EXP12 "Do not Ignore values returned by functions"
 * @author Levi Bottomley
 * 
 */



int main(){
    char *source = "Test Str";
    char target[5];

    int err = strncpy_s(target,sizeof(target),source,5);
    //We check to ensure that the number return by strncpy is 0 otherwise an error occured in the operation
    if(err != 0){
        printf("String Copy had an error");
    }

    return 0;
}