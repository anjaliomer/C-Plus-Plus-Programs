class fixed_deposit
{
	long int p_amount;                                  //principal amount
	int years;                                          //period of investment
	float rate;                                         //interest rate
	float r_value;                                      //return value of amount

public:

	fixed_deposit(){}                                   //empty Constructor
	fixed_deposit(long int p, int y, float r = 0.12);   //constructor with default argument
	fixed_deposit(long int p, int y, int r);
	void display(void);
};