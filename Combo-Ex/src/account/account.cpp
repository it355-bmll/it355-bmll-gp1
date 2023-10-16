#include "account.h"
#include <string>


Account::Account(int accNum,std::string name){
        this->accountNum = accNum;
        this->name = name;
};

double Account::getBalance(){
        return this->bal;
};

bool Account::setBalance(double newBalance){
    this->bal = newBalance;
    return true;
};

std::string Account::getName(){
    return this->name;
};


Account::~Account(){
        //Deconstructor is compliant with OOP52
};