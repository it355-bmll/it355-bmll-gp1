#include <iostream>
/**
 * 
 * @file DCL58.cpp
 * @brief Example for SEI C++ Rule DCL58 "Do not modify standard namespace"
 * @author Levi Bottomley
 * 
 */
using namespace std;

//This code is compliant because it creates it's own separate namespace to create methods
namespace stdExt{
    string MyCoolMethod(){
        return "So cool";
    }
}

using namespace stdExt;

int main(){
    cout << MyCoolMethod() << endl;
    return 0;
}