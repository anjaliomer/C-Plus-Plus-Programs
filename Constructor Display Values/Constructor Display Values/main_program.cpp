#include"stdafx.h"
#include"integer.h"
#include<iostream>

using namespace std;

int main()
{
	integer intl_1(100, 200);                  //implicit call to constructor function
	integer intl_2=integer(1000, 2000);        //explicit call to constructor function
	intl_1.display();
	intl_2.display();
	return 0;
}