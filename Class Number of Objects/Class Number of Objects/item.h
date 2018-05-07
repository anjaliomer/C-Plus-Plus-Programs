class item
{
	static int count;
	int number;

public:

	void getData(int a)
	{
		number = a;
		count++;
	}

	void getCount(void);
};
