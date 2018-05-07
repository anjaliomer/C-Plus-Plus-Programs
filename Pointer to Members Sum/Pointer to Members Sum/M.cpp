#include "stdafx.h"
#include "M.h"


void M::set_xy(int a, int b)
{
	x = a;
	y = b;
}

int sum(M m)                                //passing object as an argument
{
	int M::*px = &M::x;                     //pointer to data member of M
	int M::*py = &M::y;                     //pointer to data member of M
	M *pm = &m;                             //pointer to object of type M
	int S = m.*px + pm->*py;                //using object and then pointer to object to access a data member via pointer
	return S;                               //Returning Object
}