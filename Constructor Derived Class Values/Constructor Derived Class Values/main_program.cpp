#include "stdafx.h"
#include"alpha.h"
#include"beta.h"
#include"gamma.h"
#include<iostream>

using namespace std;

int main()
{
	gamma g(2, 4, 2.5);
	cout << "Display Number Values" << endl;
	g.show_alpha();
	g.show_beta();
	g.show_gamma();
	return 0;
}

