#include"stdafx.h"
#include<iostream>
#include"items.h"

using namespace std;

int main()
{
	items order;
	order.CNT();
	int x;
	do {
		cout << "You can do the following; Enter appropriate number" << endl;
		cout << "1: Add an item" << endl;
		cout << "2: Display total value" << endl;
		cout << "3: Delete an item" << endl;
		cout << "4: Display all items" << endl;
		cout << "5: Quit" << endl;
		cout << endl;
		cout << "What is your option? ";
		cin >> x;
		cout << endl;
		switch (x)
		{
		case 1:
			order.getItem();
			break;
		case 2:
			order.displaySum();
			break;
		case 3:
			order.removeItem();
			break;
		case 4:
			order.displayItem();
			break;
		case 5:
			break;
		default:
			cout << "Error in input. Try again" << endl;
		}

	} while (x != 5);

	return 0;
}