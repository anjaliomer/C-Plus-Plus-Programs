#include"stdafx.h"
#include<iostream>

using namespace std;

void pattern(void);

int main()
{
	pattern();
	return 0;
}

void pattern(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
}