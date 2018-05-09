#pragma once
#include "student.h"

class test : public student
{
protected:
	float part_1, part_2;

public:
	void get_marks(float, float);
	void put_marks(void);
};
