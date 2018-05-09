#include "stdafx.h"
#include "sports.h"
#include<iostream>

using namespace std;


void sports::get_score(float s)
{
	score = s;
}

void sports::put_score(void)
{
	cout << "Sports : " << score << endl;
}
