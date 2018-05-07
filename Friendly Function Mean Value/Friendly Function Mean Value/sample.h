class sample
{
	int a;
	int b;

public:

	void setValue(void)
	{
		a = 25;
		b = 40;
	}

	friend float mean(sample s);
};