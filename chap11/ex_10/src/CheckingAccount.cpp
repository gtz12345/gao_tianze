#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double befbalance,double cost):Account(befbalance)
{
    if(cost<=0.0)
        chargecost=cost;
}

double CheckingAccount::dealcost()const
{
    return balance-chargecost;
}
