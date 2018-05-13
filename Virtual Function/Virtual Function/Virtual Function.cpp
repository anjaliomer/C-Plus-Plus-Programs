#include "stdafx.h"
#include"Base.h"
#include"Derived.h"
#include<iostream>

using namespace std;


int main()
{
	Base B;
	Derived D;
	Base *bptr;
	
	cout << "\nbptr points to base\n";
	bptr = &B;
	bptr->display();                         //calls base version
	bptr->show();                            //calls base version

	cout << "\nbptr points to derived\n";
	bptr = &D;
	bptr->display();                          //calls base version
	bptr->show();                             //calls derived version
	return 0;
}

