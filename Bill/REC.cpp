#include <iostream>
#include <cmath>

using namespace std;


const double pi = 3.14;  // the value of pi is constant, and should never be changed, rec dcl00
                        // only one variable declared, rec dcl 04
double calcArea(int radius) {       // type information included in function declarator dcl-07
    double area = pi * pow(radius, 2);
    return area;
}

int main(){
    int x = 2;
    int y = 3;
    int z = 4;
    int radius[3] = {x,y,z};
    for (int i = 0; i < size(radius); i++) {
        double area = calcArea(radius[i]);
        cout << area << endl;
    }       // braces for body of a loop rec exp19
    
    return 0;
}