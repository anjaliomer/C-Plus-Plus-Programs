#include"stdafx.h"
#include<iomanip>
#include<iostream>
#include<cmath>

using namespace std;

void investment(int[], double[], int[], int);

int main()
{
	const int size = 3;
	int P[size] = { 1000,2000,3000 };
	double r[size] = { 0.10,0.11,0.12 };
	int n[size] = { 1,2,3 };
	investment(P, r, n, size);
	return 0;
}

void investment(int P[], double r[], int n[], int size)
{
	double* V = new double[(size*size*size)];
	int width = 19;
	cout << setw(width) << "Principal Amount" << setw(width)
		<< "Rate of Interest" << setw(width) << "Number of Years"
		<< setw(width) << "Value of the money" << endl;

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				V[count] = P[i];
					for (int l=1; l<=n[k]; l++)
					{
						V[count] = V[count] * (1 + r[j]);
					}
				cout << setw(width) << P[i] << setw(width) << r[j] << setw(width) << n[k] << setw(width) << V[count] << endl;
				count++;
			}
		}
	}
}