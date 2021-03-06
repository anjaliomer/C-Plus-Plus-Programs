#include"stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//Election Declaration
	
	cout << "\nClass Monitor Election\n" << endl;
	enum candidate { Ram = 1, Shyam, Hari, Rajan, Krishna };
	cout << setw(15) << "Candidate Name" << setw(20) << "Candidate Number"<< endl;
	cout << setw(15) << "Ram" << setw(20) << Ram << endl;
	cout << setw(15) << "Shyam" << setw(20) << Shyam << endl;
	cout << setw(15) << "Hari" << setw(20) << Hari << endl;
	cout << setw(15) << "Rajan" << setw(20) << Rajan << endl;
	cout << setw(15) << "Krishna" << setw(20) << Krishna << endl << endl;

	//To promt for and record the vote
	
	const int size = 5;
	int count[size] = { 0,0,0,0,0 };
	int spoilt_ballot = 0;
	
	for (int i = 1;i <= 10;i++)
	{
		int vote;
		cout << "\nCast your vote by entering the candidate number. Thank You !\n" << endl;
		cin >> vote;
		switch (vote)
		{
		case 1:
			count[0] = count[0] + 1;
			break;
		case 2:
			count[1] = count[1] + 1;
			break;
		case 3:
			count[2] = count[2] + 1;
			break;
		case 4:
			count[3] = count[3] + 1;
			break;
		case 5:
			count[4] = count[4] + 1;
			break;
		default:
			cout << "\nSpoilt Ballot\n";
			spoilt_ballot = spoilt_ballot + 1;
		}

	}

	// To determine who won the election

	int max_id = 0;                          
	for (int i = 1; i < size-1;i++)
	{
		if (count[i] > count[max_id])
			max_id = i;
	}

	//To determine if a tie ocurred

	int tie = 0;
	for (int i = 0;i < size;i++)
	{
		if (count[i] == count[max_id] && i!=max_id)
			tie = tie + 1;
	}

	//To declare the result

	if (tie == 0)
	{
		switch (max_id + 1)
		{
		case 1:
			cout << "\n****************Ram is the winner****************\n";
			break;
		case 2:
			cout << "\n****************Shyam is the winner****************\n";
			break;
		case 3:
			cout << "\n****************Hari is the winner****************\n";
			break;
		case 4:
			cout << "\n****************Rajan is the winner****************\n";
			break;
		case 5:
			cout << "\n****************Krishna is the winner****************\n";
			break;
		}
	}
	else
		cout << "\n****************A tie occured****************\n";

	return 0;

}