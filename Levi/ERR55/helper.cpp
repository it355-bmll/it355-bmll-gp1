#include "helper.h"


int MyCoolFunction() noexcept(true){
    for(int i = 0; i < 50; i++){
        if(i ==  20){
            return i;
        }
    }
    return 0;
}