#include "savingsAccount.h"


SavingsAccount::SavingsAccount(int id, std::string name,double rate) : Account(id,name){
    this->rate = rate;
};

double SavingsAccount::addInterest(){
    double currBal = this->getBalance();
    double newBal = currBal + (currBal * rate);    
    this->setBalance(newBal);
    return newBal;
};