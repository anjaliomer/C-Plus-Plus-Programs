#include "stdafx.h"
#include<iostream>

using namespace std;

typedef void(*FunPtr)(int, int);

void Add(int i, int j)
{
	cout << i << " + " << j << " = " << i + j<<endl;
}

void Subtract(int i, int j)
{
	cout << i << " - " << j << " = " << i - j<<endl;
}

int main()
{
	FunPtr ptr;
	ptr = &Add;
	ptr(1, 2);
	ptr = &Subtract;
	ptr(3, 2);
	void(*ptr1)(int, int);
	ptr1 = &Add;
	ptr1(5, 4);
	ptr1 = &Subtract;
	ptr1(9, 7);
	return 0;
}

