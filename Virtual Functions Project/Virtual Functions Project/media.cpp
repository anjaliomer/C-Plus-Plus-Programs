#include "stdafx.h"
#include "media.h"
#include<cstring>


media::media(char *s, float a)
{
	strcpy_s(title,50, s);
	price = a;
}
