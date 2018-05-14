#include "stdafx.h"
#include"vector.h"
#include<iostream>

using namespace std;


int main()
{
	int a[3] = { 1, 2, 3 };
	int b[3] = { 4, 5, 6 };
	vector<int> v1(a);
	vector<int> v2(b);
	int R = v1 * v2;
	cout << "R = " << R << endl;

	double x[3] = { 1.1, 2.2, 3.3 };
	double y[3] = { 4.4, 5.5, 6.6 };
	vector<double> v3(x);
	vector<double> v4(y);
	double R1 = v3 * v4;
	cout << "R = " << R1 << endl;
	return 0;
}