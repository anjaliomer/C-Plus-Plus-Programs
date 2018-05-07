#include "stdafx.h"
#include "alpha.h"
#include<iostream>

using namespace std;

int count = 0;

alpha::alpha()
{
	::count++;
	cout << "\nNo. of objects created " << ::count;
}


alpha::~alpha()
{
	cout << "\nNo. of objects destroyed " << ::count;
	::count--;
}
