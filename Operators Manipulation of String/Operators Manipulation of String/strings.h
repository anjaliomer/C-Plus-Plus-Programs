class strings
{
	char *p;
	int len;

public:

	strings();                                    //default constructor
	strings(const char *s);                      //constructor with a single argument
	strings(const strings &s);
	~strings();
	friend strings operator+(const strings &s, const strings &t);
	friend int operator<=(const strings &s, const strings &t);
	friend void show(const strings &s);
	
};