#include"stdafx.h"
#include<iostream>

using namespace std;

void swap(int *, int *);

int main()
{
	int a = 10;
	int b = 50;
	cout << "Before swap a: " << a << " ; b: " <<b<< endl;
	swap(&a, &b);
	cout << "After swap a: " << a << " ; b: " <<b<< endl;
	return 0;
}

void swap(int * m, int *n)
{
	int temp = *m;
	*m = *n;
	*n = temp;
}

