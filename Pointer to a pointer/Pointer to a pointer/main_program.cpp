#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int a, *ptr1, **ptr2;
	a = 2;
	ptr1 = &a;
	ptr2 = &ptr1;
	cout << "\nThe address of a is " << ptr1<<"\n";
	cout << "\nThe value at the address " << ptr1 << " is " << *ptr1 << "\n";
	cout << "\nThe address of ptr1 is " << ptr2 << "\n";
	cout << "\nThe value at the address " << ptr2 << " is " << *ptr2<<"\n";

	//incrementing the addresses 

	cout << "\nAfter Incrementing the address values\n";
	ptr1 += 3;
	cout << "\nThe address of a is " << ptr1 << "\n";
	ptr2 += 3;
	cout << "\nThe address of ptr1 is " << ptr2 << "\n";
	
	return 0;
}

