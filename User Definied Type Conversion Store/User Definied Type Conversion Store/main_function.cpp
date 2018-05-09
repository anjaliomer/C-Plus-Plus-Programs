#include "stdafx.h"
#include"invent.h"
#include<iostream>

using namespace std;

int main()
{
	invent1 s1(100, 5, 140.0);                        //define object s1 of class type invent1
	                                                  //and invokes construtor function
	invent2 d1;                                       //define object d1 of class type invent2
												      //and invokes construtor function
	float total_value;                                //defines a variable total_value of float type
	total_value = s1;                                 //converts invent1 type to float type by invoking conversion
	                                                  //function float()
	d1 = s1;                                          //converts invent1 type to invent2 type by invoking the 
	                                                  // constructor function in destination class 
	                                                  //invent2   
	cout << "\nProduct details - invent1 type\n";
	s1.putdata();

	cout << "\nStock Value\n";
	cout << "Value = " << total_value << "\n\n";

	cout << "\nProduct details - invent2 type\n";
	d1.putdata();

	return 0;
}

