#include "stdafx.h"
#include "complex.h"
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

complex operator+(complex m, complex n)
{
	complex t;
	t.x = m.x + n.x;
	t.y = m.y + n.y;
	return t;
}
