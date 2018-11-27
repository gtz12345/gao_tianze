#include<iostream>



using namespace std;

int main()
{
    int x;
	cin>>x;
	for (int i = 0; i < (x+1)/2; i++)
	{
		for (int j = 0; j < (x-1)/2- i; j++)
			cout << ' ';
		for (int j = 0; j < 2*i + 1; j++)
			cout << '*';
		cout << endl;
	}
	for (int i = (x-1)/2; i >0; i--)
	{
		for (int j = 0; j < (x+1)/2-i; j++)
			cout << ' ';
		for (int j = 0; j < 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}

}
