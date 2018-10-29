#include<iostream>


using namespace std;



int main()
 {
	float number;
	float account;
	float balance;
	float charge;
	float credits;
	float limit;
	float Newbalance;
	while (number!=-1)
        {


		cout<<"Enter account number(or -1 to quit):";
		cin >> number;



		cout << "Enter beginning balance:";

		cin >> balance;

		cout << "Enter total charges:";

		cin >> charge;
		cout  << "Enter total credits:";
		cin >> credits;
		cout  << "Enter credit limit:";
		cin >> limit;
		Newbalance = balance + charge - credits;
		if (Newbalance > limit)
            {
			cout << "New balance is " << Newbalance << endl;
			cout << "Account:	" << number << endl;
			cout << "Credit limit:	" << limit << endl;
			cout << "Balance:	" << Newbalance << endl;
			cout << "Credit Limit Exceeded"<<endl;
		}
		else
		{
			cout << "New balance is " <<  Newbalance << endl;
		}

	}
}
