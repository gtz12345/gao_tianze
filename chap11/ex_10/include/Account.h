#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
using namespace std;

class Account
{
    public:
        Account(double);
        void credit(double);
        bool debit(double);
        void setBalance(double);
        double getBalance()const;

        double balance;
};

#endif // ACCOUNT_H
