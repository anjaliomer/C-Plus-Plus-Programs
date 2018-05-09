#include "stdafx.h"
#include "student.h"
#include<iostream>

using namespace std;


void student::get_number(int a)
{
	roll_number = a;
}

void student::put_number(void)
{
	cout << "Roll Number : " << roll_number << endl;
}