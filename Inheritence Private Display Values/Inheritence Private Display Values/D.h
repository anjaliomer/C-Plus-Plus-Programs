#pragma once
#include "B.h"

class D : private B
{
	int c;

public:

	void mul(void);
	void display(void);
};

