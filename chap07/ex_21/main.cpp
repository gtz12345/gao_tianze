#include <iostream>
#include<array>
#include<iomanip>
using namespace std;


int main()
{
array<array<int,4>,5>x={1,1,1,2,2,3,4,5,6,5,4,1,2,3,2,1,2,3,1,4};


cout<<" ";
for(int j=0;j<4;j++)

{
    cout<<setw(5)<<j+1;
}
cout<<endl;


for(int i=0;i<5;i++)
{int a=0;
    cout<<i+1;
for(int j=0;j<4;j++)
   {

    cout<<setw(5)<<x[i][j];
    a+=x[i][j];
    }
    cout<<setw(5)<<a<<endl;
    }

cout<<" ";
for(int j=0;j<4;j++)
{int b=0;
    for(int i=0;i<5;i++)
    {b+=x[i][j];}
    cout<<setw(5)<<b;
}
}
