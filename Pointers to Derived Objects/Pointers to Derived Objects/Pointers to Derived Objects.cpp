#include "stdafx.h"
#include"BC.h"
#include"DC.h"
#include<iostream>

using namespace std;


int main()
{
	BC *bptr;        //base pointer
	BC base;
	bptr = &base;
	bptr->b = 100;
	cout << "\nbptr points to base object\n";
	bptr->show();
	DC derived;
	bptr = &derived;
	bptr->b = 200;     //bptr->d = 300; won't work
	cout << "\nbptr now points to derived object\n";
	bptr->show();

	DC *dptr;
	dptr = &derived;
	dptr->d = 300;
	cout << "\ndptr is derived type pointer\n";
	dptr->show();

	cout << "\nUsing casting operator\n";
	((DC*)bptr)->d = 400;
	((DC*)bptr)->show();


	return 0;
}

