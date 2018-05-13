#include "stdafx.h"
#include "item.h"
#include<iostream>

using namespace std;


void item::getData(int a, float b)
{
	code = a;
	price = b;
}

void item::show(void)
{
	cout << "Code: " << code << endl;
	cout << "Price: " << price << endl;
}