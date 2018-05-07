#include "stdafx.h"
#include "complex_sum.h"
#include<iostream>

using namespace std;


complex::complex(float a, float b)
{
	x = a;
	y = b;
}

void complex::display(void)
{
	cout << x << " + j" << y << endl;
}

complex complex::operator+(complex c)
{
	return complex((x + c.x), (y + c.y));                 //invoking constructor with two arguments
}
