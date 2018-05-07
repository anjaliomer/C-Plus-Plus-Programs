#include "stdafx.h"
#include "complex.h"
#include<iostream>

using namespace std;

void complex::input(float real, float imag)
{
	x = real;
	y = imag;
}

void complex::show(complex c)
{
	cout << x << " + j" << y << endl;
}

complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}