#include <iostream>

using namespace std;

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
        cout<<a<<"ÊÇÍêÊý"<<endl;

}
int main()
{int a;
    for(a=1;a<1000;a++)
        isperfect(a);

}
