#include "stdafx.h"
#include"student.h"
#include"test.h"
#include"result.h"
#include<iostream>

using namespace std;

int main()
{
	result student_1;
	student_1.get_number(111);
	student_1.get_marks(75.0, 59.5);
	student_1.display();
	return 0;
}

