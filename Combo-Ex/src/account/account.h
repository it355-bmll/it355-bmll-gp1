#include <iostream>
#include <string>
#ifndef ACC_H_
#define ACC_H_ 1
#include <checkingAccount.h>

class account{
    protected:
        int accountNum;
        std::string name;
        double bal;
    public:
        account(int accNum, std::string name);
        double getBalance();
        bool setBalance(double newBal);
};



#endif