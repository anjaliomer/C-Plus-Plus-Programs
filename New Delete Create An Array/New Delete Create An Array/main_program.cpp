#include"stdafx.h"
#include<iostream>

using namespace std;

int* allocateMemory(int);

int main()
{
	int m, *ptr;
	cout << "\nEnter the length of the array to be created\n";
	cin >> m;
	ptr = allocateMemory(m);
	if (!ptr)
		cout << "\nMemory allocation failed\n";
	else
		cout << "\nEnter the array elements\n";
	for (int i = 0; i<m; i++)
	{
		cin >> ptr[i];
	}
	cout << "\nBelow are the entered values\n";
	for (int i = 0; i<m; i++)
	{
		cout << ptr[i]<<" ";
	}
	return 0;
}

int* allocateMemory(int m)
{
	int *ptr = new int[m];
	return ptr;
}