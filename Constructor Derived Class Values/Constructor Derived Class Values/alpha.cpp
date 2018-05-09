#include "stdafx.h"
#include "alpha.h"
#include<iostream>

using namespace std;


alpha::alpha(int i)
{
	x = i;
	cout << "alpha constructed" << endl;
}
void alpha::show_alpha(void)
{
	cout << "x= " << x << endl;
}