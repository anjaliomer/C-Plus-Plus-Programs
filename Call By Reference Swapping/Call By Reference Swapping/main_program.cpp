#include "stdafx.h"
#include<iostream>

using namespace std;

void swap(int&, int &);


int main()
{
	int m = 10;
	int n = 50;
	cout << "m : " << m << " and n : " << n << endl;
	swap(m, n);
	cout << "m : " << m << " and n : " << n << endl;
    return 0;
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

