#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "account/account.h"
#include "account/checkingAccount.h"
#include "account/savingsAccount.h"
#include "accountHolder/user.h"

using namespace std;

//We have no over-aligned types, so we automatically comply with MEM57-CPP
//DCL58 is also complied with, since we aren't modifying the standard namespace
//ERR58-CPP is met because we don't do anything outside of main that would throw errors
//ERR56-CPP is met because we have no exceptions to throw
int main(){
    static const double rate = 0.025;
    static const string names[] ={ //STR50-CPP and STR51-CPP, since we are ensuring storage for character data and not attempting to 
    //create a std::string
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

        Account *savings = new SavingsAccount(i,names[i],rate); //not being accessed through cv-unqualified type, so EXP55-CPP is good
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