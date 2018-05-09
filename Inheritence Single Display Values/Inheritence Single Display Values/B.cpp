#include "stdafx.h"
#include "B.h"
#include<iostream>

using namespace std;


void B::get_ab(void)
{
	a = 5;
	b = 10;
}

int B::get_a(void)
{
	return a;
}

void B::show_a(void)
{
	cout << "a = " << a << endl;
}