#include <account.h>
#include <string>


account::account(int accNum,std::string name){
        this->accountNum = accNum;
        this->name = name;
};

double account::getBalance(){
        return this->bal;
};

bool account::setBalance(double newBalance){
    this->bal = newBalance;
}