#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    int n=20;
      array<int,20>x={1,2,3,4,5,6,7,4,1,2,10,2,1,4,5,3,6,8,4,1};
   for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[j]==x[i])
            {
                for(int k=j+1;k<n;k++)
                {
                    x[k-1]=x[k];
                }
                n--;
                j--;
            }
        }

    cout<<x[i];}
}




