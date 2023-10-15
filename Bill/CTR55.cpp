#include <iostream>
#include <vector>
//CTR55 do not use an additive operator on an iterator if it would result in overflow

using namespace std;

int main() {
    vector<int> myVector = {1, 2, 3, 4, 5};
    
    
    for (auto it = myVector.begin(); it < myVector.end(); it++) {
     
        cout << *it << " ";

        //The conditional makes this code compliant to rule CTR 55 as it prevents the iterator from exceeding allowed values for the vector
        if(it == myVector.end() - 1){
            break;
        }
    }
    
    return 0;
}