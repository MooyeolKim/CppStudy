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
		cout << " main - 완료 " << endl;
	}
	catch (int exception)
	{
		cout << " main - 예외발생 " << endl;
	}
	
	return 0;
}

void level1(void)
{
	Data *ptr = new Data [10];
	level2();
	delete [] ptr;
	cout << " level1 - 완료 " << endl;
}

void level2(void)
{
	cout << " level2 - 예외발생 " << endl;
	throw 0;
	cout << " level2 - 완료 " << endl;
}

