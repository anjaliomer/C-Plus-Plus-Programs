#include "stdafx.h"
#include "strings.h"
#include<iostream>
#include<cstring>

using namespace std;

strings::strings()                                               //default constructor
{
	length = 0;
	name = new char[length + 1];
}

strings::strings(const char *s)                                  //constructor with a single argument
{
	length = strlen(s);
	name = new char[length + 1];
    strcpy_s (name, length+1 ,s );
}

void strings::join(strings &a, strings &b)                       //dynamic allocation
{
	length = a.length + b.length;
	delete name;
	name = new char[length + 1];
	strcpy_s(name, length+1, a.name);
	strcat_s(name, length+1, b.name);
}

void strings::display(void)
{
	cout << name << "\n";
}