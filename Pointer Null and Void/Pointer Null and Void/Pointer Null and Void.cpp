#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	//Null Pointer

	int *ptr3 = NULL;

	cout << "\nThe address contained in ptr3 " << ptr3 << "\n";

	//Void Pointer ( Generic Pointer )

	void *ptr;
	int i = 5;
	float f = 6;



	ptr = &i;

	//cout<<"\nThe value of i is "<<ptr<<"\n";          illegal

	int *iptr;

	iptr = (int*)ptr;

	cout << "\nThe value of i is " << *iptr << "\n";



	ptr = &f;

	//cout<<"\nThe value of f is "<<ptr<<"\n";          illegal

	float *fptr;

	fptr = (float*)ptr;

	cout << "\nThe value of f is " << *fptr << "\n";



	return 0;
}



