#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
float a,b,c;
   float d=0;
   float e=0;
   while(a!=-1)
    {
   cin>>a;
   cout<<"Enter miles driven(-1 to quit):"<<a<<endl;

   cin>>b;
   cout<<"Enter gallons used:"<<b<<endl;

   c=a/b;
   cout<<"MPG this trip:"<<setprecision(8)<<c<<endl;
   d+=a;
   e+=b;
   cout<<"Total MPG:"<<setprecision(8)<<(d/e)<<endl;
   }
}
