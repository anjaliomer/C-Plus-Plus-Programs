#include "stdafx.h"
#include<iostream>
#include<cstring>

using namespace std;


int main()
{
	char ar[5] = "Book";              //One extra element to accomodate \0
	char br[] = "Novel";
	const char *ptr = "Scripture";
	char cr[] = "Text";
	char * ptr1 = cr;
	int len = strlen(ar);
	int len1 = strlen(br);
	int len2 = strlen(ptr);
	int len3 = strlen(ptr1);


	for (int i = 0; i < len;i++)                 //prints book
		cout << ar[i];                           //Try ar[i], i[ar], *(ar+i), *(i+ar)
	
	cout << endl;
	
	for (int i = 0; i < len1; i++)               //prints Novel
		cout << br[i];                           //Try ar[i], i[ar], *(ar+i), *(i+ar)
	
	cout << endl;
	
	cout << ptr << endl;                         //prints scripture

	for (int i = 0; i < len2;i++)
	{
		cout << *ptr;
		ptr++;
	}
	cout << endl;

	cout << ptr1 << endl;                        //prints text

	for (int i = 0; i < len3;i++)
	{
		cout << *ptr1;
		ptr1++;
	}
	cout << endl;


	int lenM = len / 2;                         //To reverse Book

	for (int i = 0; i < lenM; i++)
	{
		char temp;
		temp = ar[i];
		ar[i] = ar[len-i-1];
		ar[len - i-1] = temp;
	}

	for (int i = 0; i < len; i++)
		cout << ar[i];
	cout << endl;


	int lenM1 = len1 / 2;                         //To reverse Novel

	for (int i = 0; i < lenM1; i++)
	{
		br[i] = br[i] + br[len1- i- 1];
		br[len1- i- 1] = br[i] - br[len1- i- 1];
		br[i] = br[i] - br[len1- i- 1];
	}

	for (int i = 0; i < len1 ;i++)
		cout << br[i];
	cout << endl;

	ptr--;                                    //reverses Scripture

	for (int i = len2-1; i >=0; i--)
	{
		cout << *ptr;
		ptr--;
	}
	cout << endl;

	ptr1--;                                    //reverses Text

	for (int i = len3 - 1; i >= 0; i--)
	{
		cout << *ptr1;
		ptr1--;
	}
	cout << endl;
	
	return 0;
}
