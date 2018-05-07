class M
{
	int x;
	int y;

public:

	void set_xy(int a, int b);

	friend int sum(M m);
};