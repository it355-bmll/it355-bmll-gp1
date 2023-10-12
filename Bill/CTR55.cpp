#include <iostream>
#include <vector>
//CTR55 do not use an additive operator on an iteratorif it would result in overflow

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
     
        std::cout << *it << " ";
    }
    
    return 0;
}