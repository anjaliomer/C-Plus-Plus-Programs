#include<iostream>

using namespace std;

const int size=3;

class vector
{
	int v[::size];

public:

	vector();
	vector(int *);
	friend vector operator *(int , vector );
	friend vector operator *(vector , int );
	friend istream & operator >> (istream &, vector &);
	friend ostream & operator << (ostream &, vector &);
};