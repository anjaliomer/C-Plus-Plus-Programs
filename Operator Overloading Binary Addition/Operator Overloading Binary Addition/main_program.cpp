#include "stdafx.h"
#include"complex_sum.h"
#include<iostream>

using namespace std;

int main()
{
	complex c1(2.5, 6.7);
	complex c2(7.8, 9.5);
	complex c3;
	c3 = c1 + c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}

