class item
{
	int code;
	static int count;

public:

	void setCode(void)
	{
		code = ++count;
	}

	void showCode(void);

	static void showCount(void);
};