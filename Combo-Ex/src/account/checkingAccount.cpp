
#include "checkingAccount.h"

CheckingAccount::CheckingAccount(int id, std::string name): Account(id,name){};

double CheckingAccount::deduct(double amt){
    double currBal = this->getBalance();
    double newBal = currBal - amt;
    if(newBal > -1){
        this->setBalance(newBal);
        return newBal;
    } 
    return -1.0;
};