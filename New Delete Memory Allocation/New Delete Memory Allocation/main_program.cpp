#include "stdafx.h"
#include<iostream>

using namespace std;


char* allocateMemory();

int main()
{
	char* str;
	str = allocateMemory();
	if (!str)
		cout << "\nMemory Allocation Failed\n";
	cout << *str;
	delete str;
	return 0;
}

char* allocateMemory()
{
	cout << "\nMemory Allocation Test\n";
	char * str = new char('x');
    return str;
}

