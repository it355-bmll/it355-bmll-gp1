#include <iostream>
#include <string>
#ifndef ACC_H_
#define ACC_H_ 1

class Account{
    protected:
        int accountNum;
        std::string name;
        double bal;
    public:
        Account(int accNum, std::string name);
        double getBalance();
        bool setBalance(double newBal);
        std::string getName();
        //DCL57 is met by decontructor not throwing
        virtual ~Account() noexcept(true);
};



#endif