#include "stdafx.h"
#include"space.h"
#include<iostream>

using namespace std;

int main()
{
	space s;
	s.getValue(10, -20, 30);
	s.displayValue();
	-s;
	s.displayValue();
	return 0;
}