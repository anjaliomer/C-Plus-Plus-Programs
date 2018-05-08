#include "stdafx.h"
#include "strings.h"
#include<iostream>
#include<cstring>

using namespace std;

strings::strings()                                               //default constructor
{
}

strings::strings(const char *s)                                  //constructor with a single argument
{
	len = strlen(s);
	p = new char[len + 1];
	strcpy_s(p, len + 1, s);
}

strings::strings(const strings &s)                                //copy constructor
{
	len = s.len;
	p = new char[len+1];
	strcpy_s(p, len+1, s.p);
}

strings::~strings()                                               //destructor
{
}

strings operator + (const strings &s, const strings &t)            //overloading + operator
{
	strings temp;
	temp.len = s.len + t.len;
	temp.p = new char[temp.len+2];
	strcpy_s(temp.p,temp.len+1, s.p);
	strcat_s(temp.p,temp.len+1, t.p);
	return temp;
}

int operator <= (const strings &s, const strings &t)                 //overloading <= operator
{
	int m = strlen(s.p);
	int n = strlen(t.p);

	if (m <= n)
		return 1;
	else
		return 0;
}

void show(const strings &s)
{
	cout << s.p;   
}
