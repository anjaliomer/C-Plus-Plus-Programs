#include"stdafx.h"
#include"complex.h"
#include<iostream>

using namespace std;

int main()
{
	complex c1;
	complex c2(2.5);
	complex c3(2.5, 6.7);
	complex c4(c3);
	complex c5;
	c5 = sum(c3, c4);
	show(c1);
	show(c2);
	show(c3);
	show(c4);
	show(c5);

	return 0;
}