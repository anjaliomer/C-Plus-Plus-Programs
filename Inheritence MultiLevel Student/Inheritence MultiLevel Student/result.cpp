#include "stdafx.h"
#include "result.h"
#include<iostream>

using namespace std;

void result::display(void)
{
	total = sub_1 + sub_2;
	put_number();
	put_marks();
	cout << "Total = " << total << endl;
}