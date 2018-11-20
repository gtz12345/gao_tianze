#include <iostream>
#include<cmath>
using namespace std;
int integerPower(int base,int exponent)
  {
  int y=1;
    while(exponent!=0)
  {
    y*=base;
    exponent--;
  }
cout<<""<<y<<endl;
}
int main()
{
  int base,exponent ;
cin>>base>>exponent;
while(exponent!=0)
{
integerPower(base,exponent);
--exponent;
}

}





