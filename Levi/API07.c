#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * 
 * @file API07.c
 * @brief Example for SEI C Recommendation API07 "Enforce Type Safety"
 * @author Levi Bottomley
 * 
 */


int main(){
    char *source = "Test Str";
    char target[5];

    //Strncpy_s ensures that the string has a terminating character event when copying a larger string
    int err = strncpy_s(target,sizeof(target),source,4);
    if(err != 0){
        printf("String Copy had an error\n");
        printf("Error: %d\n",errno);
    }

    return 0;
}