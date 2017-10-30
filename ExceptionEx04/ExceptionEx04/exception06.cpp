#include <iostream>
using namespace std;

void level1(void);
void level2(void);

class Data
{
public:
	Data();
	~Data();
};

Data::Data()
{
	cout << "Data constructor" << endl;
}

Data::~Data()
{
	cout << "Data destructor" << endl;
}

int main(void)
{
	try
	{
		level1();
		cout << " main - �Ϸ� " << endl;
	}
	catch (int exception)
	{
		cout << " main - ���ܹ߻� " << endl;
	}
	
	return 0;
}

void level1(void)
{
	Data *ptr = new Data [10];
	level2();
	delete [] ptr;
	cout << " level1 - �Ϸ� " << endl;
}

void level2(void)
{
	cout << " level2 - ���ܹ߻� " << endl;
	throw 0;
	cout << " level2 - �Ϸ� " << endl;
}

