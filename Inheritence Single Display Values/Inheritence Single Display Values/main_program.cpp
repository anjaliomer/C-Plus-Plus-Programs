#include"stdafx.h"
#include"B.h"
#include"D.h"
#include<iostream>

using namespace std;

int main()
{
	D d;
	d.get_ab();
	d.mul();
	d.show_a();
	d.display();

	d.b = 20;
	d.mul();
	d.display();
	return 0;
}