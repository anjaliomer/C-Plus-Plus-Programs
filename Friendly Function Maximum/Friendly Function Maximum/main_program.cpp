#include"stdafx.h"
#include"maximum.h"
#include<iostream>

using namespace std;

int main()
{
	ABC abc;
	abc.setValue(10);
	XYZ xyz;
	xyz.setValue(20);
	max(xyz, abc);
	return 0;
}