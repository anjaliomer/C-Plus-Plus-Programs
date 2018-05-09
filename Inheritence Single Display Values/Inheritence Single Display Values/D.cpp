#include "stdafx.h"
#include "D.h"

#include<iostream>

using namespace std;

void D::mul(void)
{
	c = b * get_a();
}

void D::display(void)
{
	cout << "a = " << get_a() << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}