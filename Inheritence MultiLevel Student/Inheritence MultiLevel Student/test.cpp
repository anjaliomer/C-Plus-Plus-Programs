#include "stdafx.h"
#include "test.h"
#include<iostream>

using namespace std;


void test::get_marks(float x, float y)
{
	sub_1 = x;
	sub_2 = y;
}

void test::put_marks(void)
{
	cout << "Marks in Subject 1 : " << sub_1 << endl;
	cout << "Marks in Subject 2 : " << sub_2 << endl;
}