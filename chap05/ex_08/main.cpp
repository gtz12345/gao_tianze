#include <iostream>

using namespace std;

int main()
{
    int i;
    int x;
    int min;
    int y;
    cin>>x;
    for(i=0;i<x;i++)
       {
        cin>>y;
    if(y<min)
    {
        min=y;
    }
       }
       cout<<min;
}
