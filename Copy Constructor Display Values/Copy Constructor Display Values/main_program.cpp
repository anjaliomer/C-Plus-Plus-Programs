#include"stdafx.h"
#include"integer.h"
#include<iostream>

using namespace std;

int main()
{
	integer I1;
	I1.display();
	integer I2(100, 200);
	I2.display();
	integer I3(I2);
	I3.display();
	return 0;
}