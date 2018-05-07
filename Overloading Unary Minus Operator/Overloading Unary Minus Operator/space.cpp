#include "stdafx.h"
#include "space.h"
#include<iostream>

using namespace std;

void space::getValue(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

void space::displayValue(void)
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << endl;
}

void space::operator-()
{
	x = -x;
	y = -y;
	z = -z;
}