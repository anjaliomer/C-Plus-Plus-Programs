#include "stdafx.h"
#include"vector.h"
#include<iostream>

using namespace std;

extern const int size;

int x[::size] = { 2,4,6 };

int main()
{
	vector m;                                   //invokes constructor 1
	vector n = x;                               //invokes constructor 2 
	cout << "\nEnter elements of vector m\n";
	cin >> m;
	cout << endl;
	cout << "m = " << m << "\n\n";
	
	vector p, q;
	
	p = 2 * m;
	q = n * 2;
	
	cout << "n= "<<n<<"\n\n";
	cout << "p = " << p << "\n\n";
	cout << "q = " << q << "\n";
	return 0;
}

