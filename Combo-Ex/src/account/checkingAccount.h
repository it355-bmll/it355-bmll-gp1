#include "./account.h"
#ifndef CACC_H_
#define CACC_H_ 1

class checkingAccount: virtual public account{
    public:
        double deduct(double amt);
}

#endif