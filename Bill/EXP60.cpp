#include <iostream>

// EXP 60 do not pass non standard type layout object across execution boundaries

struct S {
    int a;
    char b;
    double c;
};
//forces structure to be immutable
static_assert(std::is_standard_layout<S>::value, "S is required to be a std layout Type");

//Different File implementation
int func(S &s){
    //code that uses standard layout
    return 0;
};


int main() {
    S myObject;
    myObject.a = 42;
    myObject.b = 'A';
    myObject.c = 3.14;

    func(myObject);


    return 0;
}