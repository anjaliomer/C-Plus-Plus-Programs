#include "stdafx.h"
#include "employee.h"
#include<iostream>

using namespace std;


void employee::get_data(void)
{
	cout << "Enter the name" << endl;
	cin >> name;
	cout << "Enter the age" << endl;
	cin >> age;
	cout << endl;
}

void employee::put_data(void)
{
	cout << "Manager name: " << name << endl;
	cout << "Manager age: " << age << endl;
	cout << endl;
}
