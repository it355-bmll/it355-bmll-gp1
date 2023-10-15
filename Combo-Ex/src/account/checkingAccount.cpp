
#include <checkingAccount.h>



double checkingAccount::deduct(double amt){
    double currBal = this->getBalance();
    double newBal = currBal - amt;
    if(newBal > -1){
        this->setBalance(newBal);
        return newBal;
    } 
    throw
}



#endif