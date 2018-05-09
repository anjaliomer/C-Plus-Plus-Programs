#include "stdafx.h"
#include "alpha.h"
#include<iostream>

using namespace std;

alpha::alpha(int i)
{
	x = i;
	cout << "Alpha Intialized" << endl;
}

void alpha::show_x(void)
{
	cout << "x= " << x << endl;
}