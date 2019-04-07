#include <iostream>
#include"Account.h"
#include"SavingsAccount.h"
#include"CheckingAccount.h"
using namespace std;

int main()
{
Account account1(1000);
SavingsAccount account2(1000,0.05);
CheckingAccount account3(1000,2.0);

account1.credit(100);
account1.debit(200);
account2.credit(100);
account2.debit(200);
account3.credit(100);
account3.debit(200);
cout<<account1.getBalance()<<"\n"<<account2.getBalance()<<"\n"<<account3.getBalance()<<"\n";
}
