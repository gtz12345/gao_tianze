#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double befbalance,double rate):Account(befbalance)
{
 if(rate>=0.0)
    interestrate=rate;
}

double SavingsAccount::calculateInterest()const
{
    return interestrate*balance;
}
