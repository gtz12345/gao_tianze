

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
	    cin>>x;
	    if(isPrime(x))
            cout<<x<<"是素数";
            else
            cout<<x<<"不是素数";
	}

