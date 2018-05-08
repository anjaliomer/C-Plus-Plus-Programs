#include "stdafx.h"
#include "vector.h"
#include<iostream>

using namespace std;

extern const int size;

vector::vector()
{
	for (int i = 0;i < ::size;i++)
		v[i] = 0;
}

vector::vector(int*x)
{
	for (int i = 0; i < ::size;i++)
		v[i] = x[i];
}

vector operator*(int a, vector b)
{
	vector c;
	for (int i = 0; i < ::size; i++)
		c.v[i] = a * b.v[i];
	return c;
}

vector operator*(vector b, int a)
{
	vector c;
	for (int i = 0; i < ::size; i++)
		c.v[i] = b.v[i]*a;
	return c;
}

istream & operator >> (istream &din, vector &b)
{
	for (int i = 0;i < ::size;i++)
		din >> b.v[i];
	return(din);
}

ostream & operator << (ostream &dout, vector &b)
{
	dout << "(" << b.v[0];
	for (int i = 1; i < ::size;i++)
		dout << "," << b.v[i];
	dout << ")";
	return (dout);
}

