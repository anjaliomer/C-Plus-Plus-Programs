#include "stdafx.h"
#include "person.h"
#include<iostream>

using namespace std;


void person::getData(void)
{
	cout << "\nEnter the name\n";
	cin >> name;
	cout << "\nEnter the age\n";
	cin >> age;
}

void person::displayData(void)
{
	cout << "\nName : " << name << "\n";
	cout << "\nAge : " << age << "\n";
}
