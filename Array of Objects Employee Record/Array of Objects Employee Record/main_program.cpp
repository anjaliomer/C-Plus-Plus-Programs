#include"stdafx.h"
#include"employee.h"
#include<iostream>

using namespace std;



int main()
{
	
	const int size = 3;
	employee manager[size];

	for (int i = 0; i<size;i++)
	{
		cout << "Enter details of manager " << i + 1 << endl;
		cout << endl;
		manager[i].get_data();
	}

	for (int i = 0; i<size;i++)
	{
		cout << "Manager " << i + 1 << endl;
		cout << endl;
		manager[i].put_data();
	}

	return 0;
}