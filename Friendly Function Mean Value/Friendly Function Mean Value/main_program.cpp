#include"stdafx.h"
#include"sample.h"
#include<iostream>

using namespace std;

int main()
{
	sample x;
	x.setValue();
	cout << "Mean Value: " << mean(x) << endl;
	return 0;
}