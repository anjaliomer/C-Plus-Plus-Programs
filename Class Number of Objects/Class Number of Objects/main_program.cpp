#include"stdafx.h"
#include"item.h"
#include<iostream>

using namespace std;

int main()
{
	item a, b, c;

	a.getCount();
	b.getCount();
	c.getCount();

	a.getData(100);
	b.getData(200);
	c.getData(300);

	cout << "After reading the data" << endl;

	a.getCount();
	b.getCount();
	c.getCount();

	return 0;
}