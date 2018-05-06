const int m = 50;

class items
{
	int itemCode[m];
	float itemPrice[m];
	int count;

public:

	void CNT(void);
	void getItem(void);
	void displaySum(void);
	void removeItem(void);
	void displayItem(void);
};

inline void items::CNT(void)
{
	count = 0;
}