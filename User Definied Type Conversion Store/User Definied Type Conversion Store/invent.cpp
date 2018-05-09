#include "stdafx.h"
#include "invent.h"
#include<iostream>

using namespace std;


invent1::invent1(int a, int b, float c)
{
	code = a;
	items = b;
	price = c;
}

void invent1::putdata()
{
	cout << "Code : " << code << endl;
	cout << "Items : " << items << endl;
	cout << "Value : " << price << endl<<endl;
}

int invent1::getcode()
{
	return code;
}

int invent1::getItems()
{
	return items;
}

float invent1::getPrice()
{
	return price;
}

invent1::operator float()
{
	return(items*price);
}

/*invent1::operator invent2()
{
	invent2 temp;
	temp.code = code;
	temp.value = price * items;
	return temp;
}*/

invent2::invent2()
{
	code = 0;
	value = 0;
}

invent2::invent2(int x, float y)
{
	code = x;
	value = y;
}

void invent2::putdata()
{
	cout << "Code : " << code << endl;
	cout << "Value : " << value << endl << endl;
}

invent2::invent2(invent1 p)
{
	code = p.getcode();
	value = p.getItems()*p.getPrice();
}