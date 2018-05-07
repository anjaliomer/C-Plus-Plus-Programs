#include "stdafx.h"
#include "times.h"
#include<iostream>

using namespace std;

void times::get_time(int h, int m)
{
	hours = h;
	minutes = m;
}

void times::put_time(void)
{
	cout << hours << " Hours and " << minutes << " Minutes" << endl;
	cout << endl;
}

void times::sum(times t1, times t2)
{
	minutes = t1.minutes + t2.minutes;
	hours = minutes / 60;
	hours = minutes % 60;
	hours = hours + t1.hours + t2.hours;
}
