#include "stdafx.h"
#include"alpha.h"
#include"beta.h"
#include"gamma.h"
#include<iostream>

using namespace std;

int main()
{
	gamma g(10.5, 5, 20, 30);
	cout << endl;
	g.show_x();
	g.show_y();
	g.show_mn();
	return 0;
}

