#include <iostream>

using namespace std;

class A{
    private:
        int num;

    public:
     A(){
        num = 12;
     }
     //No Except is a flag to notify callers that this method does not throw exceptions
    ~A() noexcept(true){
        try{
            num = 0;
            //num is thrown for example
            throw num;
        } catch (int e){
            cout << "ERR: DECONSTRUCTION OF A HAS CAUSED AN EXCEPTION: "<< e << endl;
            //If Exception Escapes the catch block inside of a deconstructor it will climb call stack
            return;
        } 
    }

    
};

int mainHelper(){
    A* example = new A();
    example->~A();
    return 0;
}

int main(){
    mainHelper();
    cout << "Program Exiting normally" << endl;
    return 0;
}