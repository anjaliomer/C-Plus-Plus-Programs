#include"stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	float number1, number2;
	cout << "\nEnter two number\n";
	cin >> number1 >> number2;
	float sum = number1 + number2;
	float average = (number1 + number2) / 2;
	cout << "\nSum of the numbers " << sum << "\n";
	cout << "\nAverage of the numbers " << average << "\n";
	return 0;
}
