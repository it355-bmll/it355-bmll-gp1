#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * @file API00.cpp
 * @brief Example for SEI C Recommendation API00 "Functions should validate Parameters"
 * @author Levi Bottomley
 * 
 */


int isPositive(int num){
    if(num < 0){
        return 0;
    }
    return 1;
}

int main(){
    int num = -1;
    int posCheck = isPositive(num);
    if(posCheck > 0){
        printf("The number %d is positive\n",num);
    } else {
        printf("The number %d is negative\n",num);
    }
    return 0;
}