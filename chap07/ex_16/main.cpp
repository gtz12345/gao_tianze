#include <iostream>
#include<iomanip>
#include<array>

#include<random>
using namespace std;

int main()
{
   default_random_engine engine(static_cast<unsigned int>(time(0)));
   uniform_int_distribution<unsigned int>x(1,6);

    uniform_int_distribution<unsigned int>y(1,6);
   const size_t arraysize=13;
   array<int,arraysize>n={};
   for(int roll=1;roll<=36000;++roll)

   ++n[x(engine)+y(engine)];

   cout<<"i"<<setw(10)<<"n"<<endl;
   for(size_t i=1;i<n.size();++i)
    cout<<i<<setw(10)<<n[i]<<endl;
}
//
