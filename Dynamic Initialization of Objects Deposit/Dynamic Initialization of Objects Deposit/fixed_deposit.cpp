#include "stdafx.h"
#include "fixed_deposit.h"
#include<iostream>

using namespace std;

fixed_deposit::fixed_deposit(long int p, int y, float r)
{
	p_amount = p;
	years = y;
	rate = r;
	r_value = p_amount;
	for (int i = 0; i <= y;i++)
		r_value = r_value * (1.0 + r);
}

fixed_deposit::fixed_deposit(long int p, int y, int r)
{
	p_amount = p;
	years = y;
	rate = r;
	r_value = p_amount;
	for (int i = 0; i <= y;i++)
		r_value = r_value*(1.0 +float(r)/100);
	
}

void fixed_deposit::display(void)
{
	cout << "\nPricipal Amount = " << p_amount << "\nReturn Value = "
		<< r_value << "\n";
}
