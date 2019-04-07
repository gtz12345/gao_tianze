#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include<string>
#include"Account.h"

class SavingsAccount:public Account
{
    public:
        SavingsAccount(double=0.0,double=0.0);
        double calculateInterest()const;
    private:
        double interestrate;
};

#endif
