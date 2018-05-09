#include "stdafx.h"
#include "test.h"
#include<iostream>

using namespace std;


void test::get_marks(float a, float b)
{
	part_1 = a;
	part_2 = b;
}

void test::put_marks(void)
{
	cout << "Part 1 : " << part_1 << endl;
	cout << "Part 2 : " << part_2 << endl;
}