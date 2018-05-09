#pragma once
#include "test.h"
#include"sports.h"

class result : public test, public sports
{
	float total;

public:
	void display(void);
};