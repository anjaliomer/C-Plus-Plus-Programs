#include "stdafx.h"
#include"item.h"
#include<iostream>

using namespace std;

const int size = 2;

int main()
{
	item x;
	item *ptr = &x;
	x.getData(100, 35);
	x.show();
	ptr->getData(101, 50);
	ptr->show();
	item *ptr1 = new item;
	ptr1->getData(102, 75);
	ptr1->show();
	item *ptr3 = new item[::size];
	int a;
	float b;
	for (int i = 0; i < ::size; i++)
	{
		cout << "\nEnter the code and the price\n";
		cin >> a >> b;
		ptr3->getData(a, b);
		ptr3++;
	}

	ptr3 -= ::size;

	for (int i = 0; i < ::size; i++)
	{
		ptr3->show();
		ptr3++;
	}
	return 0;
}

