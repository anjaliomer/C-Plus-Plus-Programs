#include"stdafx.h"
#include"times.h"
#include<iostream>

using namespace std;

int main()
{
	times T1, T2, T3;

	T1.get_time(2, 45);
	T2.get_time(3, 30);

	T3.sum(T1, T2);

	cout << "T1= ";
	T1.put_time();
	cout << "T2= ";
	T2.put_time();
	cout << "T3= ";
	T3.put_time();
	return 0;
}