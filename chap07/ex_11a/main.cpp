#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<int,10>counts;
    for(size_t i=0;i<counts.size();++i)
        counts[i]=0;
   cout<<"element"<<setw(13)<<"count"<<endl;
   for(size_t j=0;j<counts.size();++j)
    cout<<setw(7)<<j<<setw(13)<<counts[j]<<endl;


}
