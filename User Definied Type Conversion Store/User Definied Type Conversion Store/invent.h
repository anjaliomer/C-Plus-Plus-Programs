#pragma once

class invent2;

class invent1
{
	int code;
	int items;
	float price;

public:

	invent1(int a, int b, float c);        //constructor with three arguments
	void putdata();                        //Member function to display the values of code, item and price
	int getcode();                         //Member function to get the value of code
	int getItems();                        //Member function to get the number of items
	float getPrice();                      //Member function to get the value of each item
	operator float();                      //Converts invent1 type to float type (class to basic type conversion)
	//operator invent2();                    //converts invent1 to invent2 type using a conversion function 
	                                       //in source class
};

class invent2
{
	int code;
	float value;

public:

	invent2();                             //default constructor
	invent2(int x, float y);               //constructor with two arguments
	void putdata();                        //member function to display data
	invent2(invent1 p);                    //constructor function in the destination class to convert invent1 
	                                       //type to invent2 type
	//friend invent1::operator invent2();    //Conversion function definied in source class to convert invent1 
	                                       //type to invent2 type
};

