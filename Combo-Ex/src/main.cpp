#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include "account/account.h"
#include "account/checkingAccount.h"
#include "account/savingsAccount.h"
#include "accountHolder/user.h"

using namespace std;

int main(){
    static const double rate = 0.025;
    static const string names[] ={
    "Phil",
    "Smith",
    "Greg",
    "Jonathan",
    "Rishi"
    };
    std::unordered_map<std::string,Account*> accounts;

    for(int i = 0; i < size(names);i++){
        bool inserted = true;
        Account *savings = new SavingsAccount(i,name[i],rate);
        Account *checking= new CheckingAccount(i,name[i]);

        accounts.insert({to_string(i) + "-S",savings});
        accounts.insert({to_string(i) + "-C",checking});
    }
    return 0;
}