#include"stdafx.h"
#include<iostream>

using namespace std;

int& maximum(int&, int&);

int main()
{
	int x = 100;
	int y = 300;
	maximum(x, y)= -1;
	if (x == -1)
		cout << "\nx is larger\n";
	else if (y==-1)
		cout << "\ny is larger\n";
	return 0;
}

int& maximum(int& a, int& b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;
}