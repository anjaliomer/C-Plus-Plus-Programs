class strings
{
	char *name;
	int length;

public:

	strings();                             //default constructor
	strings(const char *s);                      //constructor with a single argument
	void display(void);
	void join(strings &a, strings &b);

};