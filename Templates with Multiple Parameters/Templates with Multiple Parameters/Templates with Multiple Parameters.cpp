#include "stdafx.h"
#include"Test.h"
#include<iostream>

using namespace std;


int main()
{
	Test<float, int> test1(1.23, 123);
	Test<int, char> test2(100, 'W');
	test1.show();
	test2.show();
	
	return 0;
}

