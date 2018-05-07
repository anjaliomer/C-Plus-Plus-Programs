#include "stdafx.h"
#include "integer.h"
#include<iostream>

using namespace std;

integer::integer(int x, int y)           //constructor function definition
{
	m = x;
	n = y;
}

void integer::display(void)
{
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
}