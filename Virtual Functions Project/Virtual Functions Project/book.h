#pragma once
#include "media.h"
class book : public media
{
	int pages;

public:
	book(char *s, float a, int p) :media(s, a)
	{
		pages = p;
	}
	void display(void);
};

