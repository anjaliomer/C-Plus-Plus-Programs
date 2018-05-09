#pragma once
#include "alpha.h"
#include"beta.h"
#include<iostream>

using namespace std;

class gamma : public beta, public alpha
{
	int m, n;

public:

	gamma(float a, int b, int c, int d) :
		beta(b),
		alpha(a)
	{
		m = c;
		n = d;
		cout << "gamma intialized" << endl;
	}

	void show_mn(void);
};