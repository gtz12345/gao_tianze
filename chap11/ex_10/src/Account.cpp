#include "Account.h"

Account::Account(double befbalance)
{
    if(befbalance>=0.0)
        balance=befbalance;
    else
        balance=0.0;
}
void Account::credit(double amount)
{
    balance+=amount;
}
bool Account::debit(double amount)
{
    if(amount<=balance)
        {
            balance-=amount;
    return 1;
    }
    else
        {cout<<"Debit amount exceeded account balance.";
        return 0;}
}
void Account::setBalance(double nbalance)
{
    balance=nbalance;
}
double Account::getBalance()const
{
    return balance;
}
