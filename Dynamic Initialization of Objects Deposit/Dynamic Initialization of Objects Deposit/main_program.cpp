#include"stdafx.h"
#include"fixed_deposit.h"
#include<iostream>

using namespace std;

int main()
{
	fixed_deposit fd1, fd2, fd3;
	long int p;
	
	int y;
	float r;
	int R;
	
	cout << "\nEnter amount, period, interest rate (in percent)\n";
	cin >> p >> y >> R;
	fd1 = fixed_deposit(p, y, R);

	cout<< "\nEnter amount, period, interest rate (in decimal form)\n";
	cin >> p >> y >> r;
	fd2 = fixed_deposit(p, y, r);

	cout << "\nEnter amount and perio\n";
	cin >> p >> y;
	fd3 = fixed_deposit(p, y);

	cout << "\nDeposit 1\n";
	fd1.display();

	cout << "\nDeposit 2\n";
	fd2.display();

	cout << "\nDeposit 3\n";
	fd3.display();
	
	return 0;
}