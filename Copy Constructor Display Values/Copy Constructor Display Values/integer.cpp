#include "stdafx.h"
#include "integer.h"
#include<iostream>

using namespace std;

integer::integer(integer & i)
{
	m = i.m;
	n = i.n;
}

void integer::display(void)
{
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
}