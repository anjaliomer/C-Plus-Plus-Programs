#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(a) / sizeof(a[0]);
	int *ptr = a;

	cout << "\nPrinting the array values using the for loop\n";

	for (int i = 0;i < size;i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	
	cout << "\nPrinting the array values using pointer\n";

	int i = 0;

	while (i < size)
	{
		cout << *ptr << " ";
		ptr++;
		i++;
	}

	cout << endl;

	cout << "\nPrinting the array values in reverse order using pointers\n";

	i--;
	ptr--;

	while (i >= 0)
	{
		cout << *ptr << " ";
		i--;
		ptr--;
	}

	cout << endl;

	cout << "\nPrinting array values at even positions using pointers\n";

	i++;
	ptr++;

	while (i <size )
	{
		cout << *ptr << " ";
		i+=2;
		ptr+=2;
	}

	cout << endl;

	cout << "\nPrinting array values at odd positions starting from end using pointers\n";

	i-=3;
	ptr-=3;

	while (i >=0)
	{
		cout << *ptr << " ";
		i -= 2;
		ptr -= 2;
	}

	cout << endl;

    return 0;
}

