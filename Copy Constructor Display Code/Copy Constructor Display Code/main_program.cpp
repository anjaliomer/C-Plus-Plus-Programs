#include"stdafx.h"
#include"code.h"
#include<iostream>

using namespace std;

int main()
{
	code A(100);                 //invokes constructor with a single argument
	code B(A);                   //invokes copy constructor
	code C = A;                  //invokes copy constructor

	code D;                      //declare an object of class type code
	D = A;                       // oveloaded assignement operator

	cout << "\n id of A is ";
	A.display();
	cout << "\n id of B is ";
	B.display();
	cout << "\n id of C is ";
	C.display();
	cout << "\n id of D is ";
	D.display();
	return 0;

}