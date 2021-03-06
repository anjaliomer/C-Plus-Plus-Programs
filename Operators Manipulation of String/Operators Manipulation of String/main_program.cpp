#include "stdafx.h"
#include"strings.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	strings s1 = "New ";
	strings s2 = "York";
	strings s3 = "Delhi";
	strings t1, t2, t3;
	t1 = s1;
	t2 = s2;
	t3 = s1+s3;                                 //if we use the delete p; statement within the destructor  then
	                                            //t3.p get initiated to some garbage value as temp.p from the function 
	                                            //call c1+c2 gets destroyed the moment control returns to main
	                                            //and temp goes out of scope

	cout << "\nt1 = ";
	show(t1);
	cout << "\nt2 = ";
	show(t2);
	cout << "\nt3 = ";
	show(t3);
	cout << "\n\n";
	
	if (t1 <= t3)
	{
		show(t1);
		cout << " smaller than ";
		show(t3);
		cout << "\n";
	}
	else
	{
		show(t3);
		cout << " smaller than ";
		show(t1);
		cout << "\n";
	}
	
	return 0;
}
