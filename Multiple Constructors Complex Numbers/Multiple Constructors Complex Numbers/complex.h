class complex
{
	float x, y;

public:

	complex()                  //Empty Constructor
	{
	}

	complex(float a)           //constructor with one argument
	{
		x = y = a;
	}

	complex(float a, float b)   //constructor with two arguments
	{
		x = a;
		y = b;
	}

	complex(complex & c)        //copy constructor
	{
		x = c.x;
		y = c.y;
	}

	friend complex sum(complex, complex);
	friend void show(complex);
};