class space
{
	int x;
	int y;
	int z;

public:

	void getValue(int x, int y, int z);
	void displayValue(void);
	friend void operator-(space &a);
};
