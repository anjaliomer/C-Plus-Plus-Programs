#include"stdafx.h"
#include"item.h"
#include<iostream>

using namespace std;

int main()
{
	item t1, t2, t3;

	t1.setCode();

	item::showCount();

	t2.setCode();

	item::showCount();

	t3.setCode();

	item::showCount();

	t1.showCode();
	t2.showCode();
	t3.showCode();

	return 0;
}