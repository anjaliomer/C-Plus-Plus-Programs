#pragma once
#include "media.h"
class tape : public media
{
	float time;

public:
	tape(char *s, float a, float t) :media(s, a)
	{
		time = t;
	}
	void display(void);
};

