#include"stdafx.h"
#include"swap.h"
#include<iostream>

using namespace std;

int main()
{
	XYZ m;
	ABC n;

	m.setValue(20);
	n.setValue(10);

	cout << "Values before exchange" << endl;
	m.displayValue();
	n.displayValue();
	swap(m, n);

	cout << "Values after exchange" << endl;
	m.displayValue();
	n.displayValue();
	return 0;
}