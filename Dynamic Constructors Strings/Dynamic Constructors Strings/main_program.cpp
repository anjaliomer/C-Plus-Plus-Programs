#include "stdafx.h"
#include"strings.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	const char *first = "Josheph ";
	strings name1(first), name2("Louis "), name3("Lagrange"), s1, s2;
	
	s1.join(name1, name2);
	s2.join(s1, name3);
	name1.display();
	name2.display();
	name3.display();
	s1.display();
	s2.display();
	return 0;
}

