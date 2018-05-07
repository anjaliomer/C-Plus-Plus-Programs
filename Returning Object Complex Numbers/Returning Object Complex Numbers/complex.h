class complex
{
	float x;
	float y;

public:

	void input(float real, float imag);

	void show(complex);

	friend complex sum(complex, complex);
};
