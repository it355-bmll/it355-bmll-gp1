#include <iostream>
#include <memory>

using namespace std;

/**
 * 
 * @file MEM56.cpp
 * @brief Example for SEI C++ Rule MEM56 "Do not store an already owned pointer value in unrelated smart pointer"
 * @author Levi Bottomley
 * 
 */

struct T : std::enable_shared_from_this<T>{
    //This allows a cloned version of the shared pointer that is not owned to prevent deallocation issues
    std::shared_ptr<T> x() {return shared_from_this();};
};

int main(){
    std::shared_ptr<T> structure1 = std::make_shared<T>();
    std::shared_ptr<T> structure2 = structure1->x();

    return 0;
}