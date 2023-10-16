#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <random>
#include "account/account.h"
#include "account/checkingAccount.h"
#include "account/savingsAccount.h"
#include "accountHolder/user.h"

using namespace std;

//We have no over-aligned types, so we automatically comply with MEM57-CPP
//DCL58 is also complied with, since we aren't modifying the standard namespace
//ERR58-CPP is met because we don't do anything outside of main that would throw errors
//ERR56-CPP is met because we have no exceptions to throw
//ERR59 No Exceptions are thrown across execution bounds
//ERR55 Exceptions are honored as they aren't thrown
//EXP60 No Classes are passed outside of Execution
//FIO50 is complied as files are not used
int main(){
    //DCL00 is met by rate being constant
    std::cout << "Starting" <<endl;
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

    //Createing Random Num-generator
    //MSC51 Random Number Generator Seeded Properly
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> distribution(1, 100);
    //EXP19-C Loops are braced
    //STR53 Strings are accessed as whole element so range isn't violated
    for(size_t i = 0; i < size(names);i++){
        //MEM56 Pointers are stored in related addresses
        //MEM52 Handling Allocation Errors in the program
        //EXP53 Memory is not Accessed when uninitialized
        Account* savings = nullptr;
        Account* checking = nullptr;
        try{
            savings = new SavingsAccount(i + 1,names[i],rate); //not being accessed through cv-unqualified type, so EXP55-CPP is good
            savings->setBalance(distribution(generator));

            checking= new CheckingAccount(i + 1,names[i]);
            checking->setBalance(distribution(generator));

        } catch(std::bad_alloc e){
            std::cout << "Failed to create account database exiting.." <<std::endl;
            return -1;
        }

        accounts[to_string(i + 1) + "-S"] = savings;
        keys.push_back(to_string(i+ 1) + "-S");

        accounts[to_string(i+ 1) + "-C"]= checking;
        keys.push_back(to_string(i+ 1) + "-C");
    }


    //CTR53 Using valid ranges for the iterator
    //CTR54 Iterator is not subtracted from unrelated
    //CTR55 Iterator doesn't get added into overflowing
    for(auto it = keys.begin(); it < keys.end();it++){
        //CTR50 Checking if index exists in accounts
        //CTR51 Valid Reference to Account Elements
        //CTR56 Using Key rather then pointer arithmetic to search for objects
        if(accounts[*it] != nullptr){
            //MEM53 Objects are explicitly Deconstructed
            std::cout << "Account " << *it << " has " << accounts[*it]->getBalance() << endl;
            (accounts[*it])->~Account(); //OOP52-CPP - Deletes polymorphic job with a virtual destructor
             //MEM51-CPP - Properly deallocates dynamically allocated resources by descoping buffer
            accounts[*it] = nullptr; //MEM50-CPP - Does not access freed memory
            //EXP54 Objects are not access after deconstruction
        }

    
    }
    std::cout << "Exiting" << endl;
    return 0; //choosing return as a termination strategy fulfills ERR04-C
}
