#include"stdafx.h"
#include<iostream>

using namespace std;

int m = 10;

int main()
{
	int m = 20;
	{
		int k = m;
		int m = 30;
		cout << "\nWe are in inner Block\n";
		cout << "k = " << k << endl;
		cout << "m = " << m << endl;
		cout << "::m = " << ::m << endl;

	}
	cout << "\nWe are in outer Block\n";
	cout << "m = " << m << endl;
	cout << "::m = " << ::m << endl;
	return 0;
}