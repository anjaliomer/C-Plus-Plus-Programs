#include "stdafx.h"
#include "item.h"
#include<iostream>

using namespace std;

int item::count;

void item::showCode(void)
{
	cout << "Object Code: " << code << endl;
}

void item::showCount(void)
{
	cout << "Count: " << count << endl;
}

