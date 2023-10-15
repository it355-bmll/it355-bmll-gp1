#include <iostream>


using namespace std;


int main(){
    int *nums = new (std::nothrow) int[5];
    if(!nums){
        cout << "Memory not created" << endl;
        return 0;
    }
    cout << "Memory created" << endl;

    return 0;

}