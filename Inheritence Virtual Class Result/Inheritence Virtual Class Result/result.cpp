#include "stdafx.h"
#include "result.h"
#include<iostream>

using namespace std;

void result::display(void)
{
	total = part_1 + part_2 + score;

	put_number();
	put_marks();
	put_score();
	cout << "Total Score : " << total << endl;
}