#include <iostream>
using namespace std;

int isPrime(int x)
{
    int n;
    if(n<2)
        return 0;

    for(n=x-1;n>=2;n--)

        {if(x%n==0)
return 0;}

return 1;

}

	int main()
	{
	    int x;

	    for(x=2;x<10000;x++)
	    if(isPrime(x))
            cout<<x<<"ÊÇËØÊý"<<"\t";

	}
