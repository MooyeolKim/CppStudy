#include <iostream>
using namespace std;

int value = 0;

int main(void)
{
	//int value = 10;
	value++;
	::value++;

	cout << "�������� : " << ::value << endl;
	cout << "�������� : " << value << endl;
	
	return 0;
}