#include <iostream>

using namespace std;


class Exception1 : public std::exception {};

int MyCoolFunction(){
    MyCoolHelper();
    return 2;
}

int MyCoolHelper() throws(Exception){
    throw Exception1{};
    return 0;
}

int main(){
    try{

    }catch(exception e){
        cout << "MyCoolFunction Threw an Exception :(" <<endl;
    }
    return 0;
}

