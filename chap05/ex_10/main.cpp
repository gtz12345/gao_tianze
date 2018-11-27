#include <iostream>
#include<iomanip>
using namespace std;
int factorial(int x)
{
  if(x<=1)
        return 1;
  else
    return x*factorial(x-1);
}
int main()
{
    for(int x=0;x<=5;++x)
        cout<<" "<<x<<"!="<<factorial(x)<<endl;
}
