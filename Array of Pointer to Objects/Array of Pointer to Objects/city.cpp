#include "stdafx.h"
#include "city.h"
#include<iostream>
#include<cstring>

using namespace std;

city::city()
{
	len = 0;
	name = new char[len + 1];
}

void city::getName(void)
{
	char *s;
	s = new char[30];
	cout << "Enter city name: ";
	cin >> s;
	len = strlen(s);
	delete name;
	name = new char[len + 1];
	strcpy_s(name, len+1, s);
	delete s;
}

void city::printName(void)
{
	cout << name << "\n";
}