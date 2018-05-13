#include "stdafx.h"
#include "book.h"
#include<iostream>

using namespace std;


void book::display(void)
{
	cout << "\n Title : " << title << endl;
	cout << "\n Pages : " << pages << endl;
	cout << "\n Price : " << price << endl ;
}

