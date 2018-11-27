#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int64_t a=0;
     int64_t b=0;
     int64_t c=0;
     int64_t d=0;
    cout<<"Enter a number:";
    cin>>a;
    while(a!=0)
    {
        c=a%2;

        a/=2;
        b+=c*pow(10,d++);
    }
    cout<<"number:"<<b<<endl;
}
