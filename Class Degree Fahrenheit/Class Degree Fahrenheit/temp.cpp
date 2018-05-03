#include "stdafx.h"
#include "temp.h"
#include<iostream>

using namespace std;

void temp::getDegree(void)
{
	cout << "\nEnter temperature in Degree Celsius\n";
	cin >> degree;
}

void temp::displayFahrenheit(void)
{
	fahrenheit = 1.8*degree + 32;
	cout << "\Temperature in Fahrenheit = " << fahrenheit << "\n";
}



