#include <iostream>
#include<array>
using namespace std;

int main()
{
    int x=0;
    array<int,100>temperatures;
    for(size_t i=0;i<temperatures.size();++i)
        x+=temperatures[i];
        cout<<x;
}
