#pragma once

class media
{
protected:
	char title[50];
	float price;
public:
	media(char *s, float a);
	virtual void display(void) {}       //empty virtual function
};

