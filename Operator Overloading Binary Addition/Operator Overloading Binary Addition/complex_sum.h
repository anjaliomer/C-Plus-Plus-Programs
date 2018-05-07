class complex
{
	float x;
	float y;

public:

	complex() {};                       //empty constructor
	complex(float a, float b);          //constructor with two arguments
	void display(void);
	complex operator+(complex c);
};
