class ABC;

class XYZ
{
	int x;

public:

	void setValue(int i);

	void displayValue(void);

	friend void swap(XYZ &, ABC &);
};

class ABC
{
	int a;

public:

	void setValue(int i);

	void displayValue(void);

	friend void swap(XYZ &, ABC &);
};
