#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include<string>
#include"Account.h"
class CheckingAccount:public Account
{
    public:
        CheckingAccount(double=0.0,double=0.0);

        double dealcost()const;
    private:
        double chargecost;
};

#endif // CHECKINGACCOUNT_H
