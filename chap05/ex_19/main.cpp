#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n=1;
    double pi;

    while(n<1000)
    {

        pi+=pow(-1,n-1)*4/(2*n-1);
        cout<<setw(5)<<"pi="<<pi;
        n++;
    }
}
