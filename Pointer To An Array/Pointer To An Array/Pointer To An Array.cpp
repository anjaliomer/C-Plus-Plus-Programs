#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int number[50], *ptr;
	int size;
	cout << "\nEnter the number of elements do you want to enter\n";
	cin >> size;
	cout << "\nEnter the elements\n";
	for (int i = 0;i < size;i++)
	{
		cin >> number[i];
	}
	ptr = number;
	int sum = 0;
	for (int i = 0;i < size; i++)
	{
		if (*ptr % 2 == 0)
		{
			sum = sum + *ptr;
		}
		ptr++;
	}
	cout << "\nSum of the even elements is " << sum << "\n";

    return 0;
}

