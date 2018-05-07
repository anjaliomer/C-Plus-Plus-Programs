class integer
{
	int m, n;

public:

	integer(void)
	{
		m = 0;
		n = 0;
	}

	integer(int x, int y);

	integer(integer & i);                         //copy constructor

	void display(void);
};

inline integer::integer(int x, int y)
{
	m = x;
	n = y;
}