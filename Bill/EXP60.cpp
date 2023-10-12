#include <iostream>
#include <nlohmann/json.hpp>
// EXP 60 do not pass non standard type layout object across execution boundaries

struct NonStandardLayout {
    int a;
    char b;
    double c;
};


int main() {
    NonStandardLayout myObject;
    myObject.a = 42;
    myObject.b = 'A';
    myObject.c = 3.14;


    nlohmann::json json = {
        {"a", myObject.a},
        {"b", myObject.b},
        {"c", myObject.c}
    };


    NonStandardLayout reconstructedObject;
    reconstructedObject.a = json["a"];
    reconstructedObject.b = json["b"];
    reconstructedObject.c = json["c"];


    return 0;
}