#include "stdafx.h"
#include<iostream>
#include"maximum.h"

using namespace std;


int main()
{
	maximum a, b;
	a.getValue(5);
	b.getValue(2);
	maximum max = a.greater(b);
	max.show();
	return 0;
}

