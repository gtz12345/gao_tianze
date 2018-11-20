#include <iostream>

using namespace std;

int main()
{
   int a,b;
   while(a!=-1)
   {
       cin>>a;
       cout<<"Enter hours worked(-1 to end):"<<a<<endl;
       cin>>b;
       cout<<"Enter hourly rate of the employee($00.00)"<<b<<endl;
       if(a<40)
       {
           cout<<"Salary is"<<"$"<<a*b<<endl;
       }else
       {
           cout<<"Salary is"<<"$"<<1.5*b*(a-40)+40*b<<endl;
       }

   }
}
