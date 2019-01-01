#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
   array<int,5>values;
   for(size_t i=0;i<values.size();++i)
    values[i]=8;
   cout<<"element"<<setw(13)<<"value"<<endl;
   for(size_t j=0;j<values.size();++j)
    cout<<setw(7)<<j<<setw(13)<<values[j]<<endl;


}
