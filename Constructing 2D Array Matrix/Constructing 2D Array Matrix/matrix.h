#pragma once
class matrix
{
	int **p;     //pointer to a matrix
	int d1, d2;  //dimensions

public:

	matrix(int x, int y);
	void get_element(int i, int j, int value)
	{
		p[i][j] = value;
	}

	int &put_element(int i, int j)
	{
		return p[i][j];
	}

	~matrix();
};

