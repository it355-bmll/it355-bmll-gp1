#include <iostream>

using namespace std;

namespace stdExt{
    string MyCoolMethod(){
        return "So cool";
    }
}

using namespace stdExt;

int main(){
    cout << MyCoolMethod() << endl;
    return 0;
}