#include "stdafx.h"
#include"student.h"
#include"test.h"
#include"sports.h"
#include"result.h"
#include<iostream>

using namespace std;

int main()
{
	result student_1;
	student_1.get_number(1234);
	student_1.get_marks(27.5, 33.0);
	student_1.get_score(6.0);
	student_1.display();
	return 0;
}

