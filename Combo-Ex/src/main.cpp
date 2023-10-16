#include <iostream>
#include <string>
#include <map>
#include <vector>
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
    std::map<std::string,Account*> accounts;
    std::vector<string> keys;

    for(int i = 0; i < size(names);i++){
        bool inserted = true;
        Account *savings = new SavingsAccount(i,names[i],rate);
        Account *checking= new CheckingAccount(i,names[i]);
        accounts.insert({to_string(i) + "-S",savings});
        keys.push_back(to_string(i) + "-S");
        accounts.insert({to_string(i) + "-C",checking});
        keys.push_back(to_string(i) + "-C");
    }



    for(auto it = keys.begin(); it < keys.end();it++){
        (accounts[*it])->~Account();
        free(accounts[*it]);
        accounts[*it] = nullptr;
    }

    return 0;
}