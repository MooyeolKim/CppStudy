#include <iostream>
using namespace std;

void level1(void);
void level2(void);

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
	level2();
	cout << " level1 - 완료 " << endl;
}

void level2(void)
{
	cout << " level2 - 완료 " << endl;
}

