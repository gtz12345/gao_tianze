#include <iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	srand(x);
	y = rand()%1000+1;
	while(1)
	{
		cout<<"type your first guess:"<<endl;
		cin>>x;
		if(x>y)
			cout<<"high"<<endl;
		if(x<y)
			cout<<"low"<<endl;
		if(x==y)
		{
			cout<<"true"<<endl;
			break;
		}
	}
	return 0;
}
