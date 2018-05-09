#pragma once
#include<iostream>

using namespace std;

class beta
{
	float p, q;

public:

	beta(float a, float b) : p(a), q(b*p)
	{
		cout << "beta constructed" << endl;
	}
	void show_beta(void);
};