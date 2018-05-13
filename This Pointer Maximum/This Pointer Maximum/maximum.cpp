#include "stdafx.h"
#include "maximum.h"
#include<iostream>

using namespace std;


void maximum::getValue(int x)
{
	value = x;
}

maximum & maximum::greater(maximum & y)
{
	if (value > y.value)
		return *this;
	if (value <= y.value)
		return y;
}

void maximum::show(void)
{
	cout << value;
}