class complex
{
	float x;
	float y;

public:

	complex() {};
	complex(float a, float b);
	void display(void);
	friend complex operator+(complex, complex);
};
