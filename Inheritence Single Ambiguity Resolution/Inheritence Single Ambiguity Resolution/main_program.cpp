#include "stdafx.h"
#include"A.h"
#include"B.h"
#include<iostream>

using namespace std;

int main()
{
	B b;
	b.display();
	b.A::display();
	b.B::display();
	return 0;
}

