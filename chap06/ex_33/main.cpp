#include <iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
    int seed=0;
    int i=0,n=0;
    cout<<"Enter seed:";
    cin>>seed;
    srand(seed);
    for(int counter=1;counter<=100;++counter)
    {
        if(1+rand()%2==1)
{

cout<<setw(10)<<"Head";


i++;

}
        else
            {cout<<setw(10)<<"Tail";
    n++;}
    }
cout<<"\n"<<"正面次数"<<i;
cout<<"\n"<<"反面次数"<<n;
}
