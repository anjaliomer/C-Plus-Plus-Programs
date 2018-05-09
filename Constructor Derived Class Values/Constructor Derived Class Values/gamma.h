#pragma once
#include "alpha.h"
#include"beta.h"
#include<iostream>

using namespace std;

class gamma : public beta, public alpha
{
	int u, v;

public:

	gamma(int a, int b, float c) :
		alpha(a * 2),
		beta(c, c),
		u(a)
	{
		v = b;
		cout << "gamma constructed" << endl;
	}

	void show_gamma(void);
};
