#include <cstdlib>
#include <new>

using namespace std;
struct T {
    T();
};


int main(){
    //Getting Shared Memory Locations for instance of T
    void *ptr = (malloc(sizeof(T)));
    T* obj = new (ptr) T();
    obj->~T();
    free(ptr);

    return 0;
}