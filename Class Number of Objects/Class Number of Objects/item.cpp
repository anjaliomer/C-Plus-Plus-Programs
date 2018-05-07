#include "stdafx.h"
#include "item.h"
#include<iostream>

using namespace std;


int item::count;

void item::getCount(void)
{
	cout << "Count: " << count << endl;
}