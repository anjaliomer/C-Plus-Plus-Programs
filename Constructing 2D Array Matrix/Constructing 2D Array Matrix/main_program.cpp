#include "stdafx.h"
#include"matrix.h"
#include<iostream>

using namespace std;

int main()
{
	int m, n;

	cout << "\nEnter size of the matrix\n";
	cin >> m >> n;
	matrix A(m, n);

	cout << "\nEnter Matrix Elements Row By Row\n";
	int value;

	for(int i = 0; i<m;i++)
		for (int j = 0;j < n;j++)
		{
			cin >> value;
			A.get_element(i, j, value);
		}
	cout << endl;
	cout << A.put_element(1,2);
	return 0;
}

