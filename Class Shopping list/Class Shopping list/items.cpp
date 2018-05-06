#include "stdafx.h"
#include "items.h"
#include<iostream>

using namespace std;

void items::CNT(void)
{
	count = 0;
}

void items::getItem(void)
{
	cout << "Enter Item code: ";
	cin >> itemCode[count];
	cout << itemCode[count] << endl;
	cout << "Enter Item price ";
	cin >> itemPrice[count];
	cout << itemPrice[count] << endl;
	cout << endl;
	count++;
}

void items::displaySum(void)
{
	float sum = 0;

	for (int i = 0; i<count;i++)        //because the count is getting incremented at the end of getItem that is why < and not <=
	{
		sum = sum + itemPrice[i];
	}
	cout << "Total value:" << sum << endl;
	cout << endl;
}

void items::removeItem(void)
{
	int a;
	cout << "Enter item code : ";
	cin >> a;
	cout << a << endl;
	cout << endl;
	for (int i = 0; i<count;i++)
	{
		if (itemCode[i] == a)
			itemPrice[i] = 0;
	}
}

void items::displayItem(void)
{
	for (int i = 0; i<count; i++)
	{
		cout << "Item Code: " << itemCode[i] << " ; Item Price: " << itemPrice[i] << endl;
	}
	cout << endl;
}