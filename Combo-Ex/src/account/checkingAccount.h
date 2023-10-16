#include "account.h"
#ifndef CACC_H_
#define CACC_H_ 1

class CheckingAccount: virtual public Account{
    public:
        CheckingAccount(int id, std::string name);
        double deduct(double amt);
};

#endif