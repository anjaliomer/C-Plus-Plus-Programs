#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int a, *ptr;
	a = 10;
	ptr = &a;
	cout << "\nValue of a : " << *ptr << "\n";
	*ptr = (*ptr) / 2;
	cout << "\nValue of a after manipulation : " << *ptr << "\n";
	return 0;
}

