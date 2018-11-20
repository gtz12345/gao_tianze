#include <iostream>
#include<cmath>
using namespace std;

int main()
{
int car;
double hours1,hours2,hours3,hours4;
double charge1,charge2,charge3,charge4;

cin>>hours1>>hours2>>hours3;


cout<<"Car"<<"\t"<<"Hours"<<"\t"<<"Charge"<<endl;
if(hours1<4)
    charge1=2;
else
    charge1=0.5*(hours1-3)+2;
cout<<1<<"\t"<<hours1<<"\t"<<charge1;
if(hours2<4)
    charge2=2;
else
    charge2=0.5*(hours2-3)+2;
cout<<"\n"<<2<<"\t"<<hours2<<"\t"<<charge2<<"\n";
if(hours3<4)
    charge3=2;
else
    charge3=0.5*(hours3-3)+2;
    {if(hours3=24)
    charge3=10.0;};
cout<<3<<"\t"<<hours3<<"\t"<<charge3<<endl;
hours4=hours1+hours2+hours3;
charge4=charge1+charge2+charge3;
cout<<"TOTAL"<<"\t"<<hours4<<"\t"<<charge4<<endl;
}
