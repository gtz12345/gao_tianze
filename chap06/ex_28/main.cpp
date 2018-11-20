#include<iostream>
using namespace std;

int isperfect(int a)
{
    int b,c,sum;

    for(sum=0,b=1;b<a;b++)
    {
        c=a%b;
        if(c==0)
            sum+=b;
    }
    if(sum==a)
        cout<<"是完数";
        else
        cout<<"不是完数";
}
int main()
{int a;
    cin>>a;
   isperfect(a) ;
}
