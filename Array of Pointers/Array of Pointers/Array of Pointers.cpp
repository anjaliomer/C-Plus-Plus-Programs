#include "stdafx.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	const char *ptr [10] = 
	{ "books","television","computer","sports" };
	char str[25];
	cout << "\nEnter your hobby\n";
	cin >> str;
	for (int i = 0; i <= 4;i++)
	{
		if (!strcmp(str, ptr[i]))
		{
			cout << "\nYour hobby is in the list\n";
		}
		break;
	}
	cout << "Your hobby is not in the list\n";

	return 0;
}

