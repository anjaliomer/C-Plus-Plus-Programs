#include "stdafx.h"
#include "D.h"
#include<iostream>

using namespace std;

void D::mul(void)
{
	get_ab();
	c = b * get_a();
}

void D::display(void)
{
	get_ab();
	cout << "a = " << get_a() << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
