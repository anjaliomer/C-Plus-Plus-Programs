#pragma once
#include "student.h"

class test : public student
{
protected:

	float sub_1;
	float sub_2;

public:

	void get_marks(float, float);
	void put_marks(void);
};
