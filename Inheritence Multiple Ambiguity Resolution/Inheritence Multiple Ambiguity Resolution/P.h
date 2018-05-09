#pragma once
#include "M.h"
#include"N.h"

class P : public M, public N
{
public:

	void display(void)
	{
		M::display();
	}
};