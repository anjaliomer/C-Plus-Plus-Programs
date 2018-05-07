#include "stdafx.h"
#include "matrix.h"


matrix::matrix(int x, int y)
{
	d1 = x;
	d2 = y;
	p = new int *[d1];                //creates an array pointer
	for (int i = 0;i < d1;i++)
		p[i] = new int[d2];           //creates each row
}


matrix::~matrix()
{
	for (int i = 0;i < d1;i++)
		delete p[i];
	delete p;
}
