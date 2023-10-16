#include "./account.h"
#include <string>
#ifndef SACC_H_
#define SACC_H_ 1

class SavingsAccount: virtual public Account{
    private:
        double rate;
    public:
        SavingsAccount(int id, std::string name, double rate);
        double addInterest();
};

#endif