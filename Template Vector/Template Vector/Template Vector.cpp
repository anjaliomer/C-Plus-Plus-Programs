#include "stdafx.h"
#include"vector.h"
#include<iostream>

using namespace std;


int main()
{
	double x[3] = { 1.1, 2.2, 3.3 };
	double y[3] = { 4.4, 5.5, 6.6 };
	vector<double> v1(x);
	vector<double> v2(y);
	double R = v1 * v2;
	cout << "R = " << R << endl;

	return 0;
}

