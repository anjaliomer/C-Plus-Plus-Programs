class code
{
	int id;

public:

	code() {};                   //empty constructor
	code(int a)                  //constructor with a single argument
	{
		id = a;
	}
	code(code &x)                //copy constructor
	{
		id = x.id;
	}
	void display(void);
};