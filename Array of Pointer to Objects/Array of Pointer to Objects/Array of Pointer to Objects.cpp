#include "stdafx.h"
#include"city.h"
#include<iostream>

using namespace std;


int main()
{
	const int size = 10;
	city *cptr[size];                              //Array of ten pointers to city
	
	for (int i = 0; i < size;i++)
	{
		cptr[i] = new city;                        //create new city
		cptr[i]->getName();
		cptr[i]->printName();
	}
	
	return 0;
}

