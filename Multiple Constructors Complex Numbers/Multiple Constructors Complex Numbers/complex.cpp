#include "stdafx.h"
#include "complex.h"
#include<iostream>

using namespace std;


complex sum(complex c1, complex c2)             //friend function 
{
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}

void show(complex c)                             //friend function
{
	cout << c.x << " + j" << c.y << endl;
}
