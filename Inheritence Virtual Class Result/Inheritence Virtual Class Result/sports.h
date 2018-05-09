#pragma once
#include "student.h"

class sports : virtual public student
{
protected:
	float score;

public:
	void get_score(float);
	void put_score(void);
};