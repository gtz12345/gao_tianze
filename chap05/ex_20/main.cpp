#include <iostream>

using namespace std;

int main()
{

   int side1,side2,hypotenuse;
   for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
    for(side1=1;side1<=500;side1++)
      for(side2=1;side2<=500;side2++)
      if(side1*side1+side2*side2==hypotenuse*hypotenuse)
      {if(side1<side2)
   {cout<<" "<<side1<<" "<<side2<<" "<<hypotenuse<<endl;}
      }
}
