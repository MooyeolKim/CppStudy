#include <iostream>
using namespace std;

void level1(void);
void level2(void);

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
	try
	{
		level2();
		cout << " level1 - �Ϸ� " << endl;
	}
	catch (int exception)
	{
		cout << " level1 - ���� �߻� " << endl;
	}
}

void level2(void)
{
	cout << " level2 - ���� �߻� " << endl;
	throw 0;
	cout << " level2 - �Ϸ� " << endl;
}

