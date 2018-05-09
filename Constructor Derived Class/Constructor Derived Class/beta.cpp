#include "stdafx.h"
#include "beta.h"
#include<iostream>

using namespace std;

beta::beta(float j)
{
	y = j;
	cout << "beta intialized" << endl;
}
void beta::show_y(void)
{
	cout << "y= " << y << endl;
}