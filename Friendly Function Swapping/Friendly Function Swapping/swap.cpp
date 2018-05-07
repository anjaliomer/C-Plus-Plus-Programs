#include "stdafx.h"
#include "swap.h"
#include<iostream>

using namespace std;


void XYZ::setValue(int i)
{
	x = i;
}

void XYZ::displayValue(void)
{
	cout << "x= " << x << endl;
}

void ABC::setValue(int i)
{
	a = i;
}

void ABC::displayValue(void)
{
	cout << "a= " << a << endl;
}


void swap(XYZ & m, ABC & n)
{
	int temp = m.x;
	m.x = n.a;
	n.a = temp;
}
