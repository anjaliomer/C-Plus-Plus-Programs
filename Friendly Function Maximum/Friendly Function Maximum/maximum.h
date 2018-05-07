class ABC;

class XYZ
{
	int x;

public:

	void setValue(int i)
	{
		x = i;
	}

	friend void max(XYZ, ABC);
};

class ABC
{
	int a;

public:

	void setValue(int i)
	{
		a = i;
	}

	friend void max(XYZ, ABC);
};