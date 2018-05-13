#include "stdafx.h"
#include"media.h"
#include"book.h"
#include"tape.h"
#include<iostream>


using namespace std;


int main()
{
	char *title = new char[30];
	float price, time;
	int pages;

	//Book details

	cout << "\nEnter Book Details\n";
	cout << "\nTitle : ";
	cin >> title;
	cout << "\nPrice : ";
	cin >> price;
	cout << "\nPages : ";
	cin >> pages;

	book book1(title, price, pages);

	//Tape details

	cout << "\nEnter Tape Details\n";
	cout << "\nTitle : ";
	cin >> title;
	cout << "\nPrice : ";
	cin >> price;
	cout << "\nPlay time : ";
	cin >> time;

	tape tape1(title, price, time);

	media* list[2];
	list[0] = &book1;
	list[1] = &tape1;

	cout << "\nMedia Details\n";

	cout << "\n.......BOOK........\n";
	list[0]->display();

	cout << "\n.......TAPE........\n";
	list[1]->display();

	return 0;
}

