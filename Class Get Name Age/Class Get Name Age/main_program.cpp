#include"stdafx.h"
#include"person.h"
#include<iostream>

using namespace std;

int main()
{
	person A;
	cout << "\nPerson A\n";
	A.getData();
	cout << "\nEntered Details\n";
	A.displayData();
	return 0;
}