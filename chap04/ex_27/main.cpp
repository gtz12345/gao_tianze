#include <iostream>
#include <math.h>

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
        c=a%10;

        a/=10;
        b+=c*pow(2,d++);       //pow(x,y)  x��y�η� ͷ�ļ�Ϊ#include <math.h>
    }
    cout<<"number:"<<b<<endl;
}
