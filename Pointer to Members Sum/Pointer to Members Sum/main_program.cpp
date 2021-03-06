#include"stdafx.h"
#include"M.h"
#include<iostream>

using namespace std;

int main() 
{
	M n;
	void (M::*pf)(int, int) = &M::set_xy;       //defining pointer to member function
	(n.*pf)(10, 20);                            //calling a member function through pointer
	cout << "Sum= " << sum(n) << endl;          //calling friend function

	M *ap = &n;                                 //defining pointer to an object
	(ap->*pf)(30, 40);                          //using pointer to object to call the member function through pointer
	cout << "Sum= " << sum(n) << endl;          //calling friend function
	return 0;
}