#include"stdafx.h"
#include"complex.h"
#include<iostream>

using namespace std;

int main()
{
	complex A, B, C;
	A.input(12.5, 16.7);
	A.show(A);
	B.input(9.5, 11.2);
	B.show(B);
	C = sum(A, B);
	C.show(C);
	return 0;
}