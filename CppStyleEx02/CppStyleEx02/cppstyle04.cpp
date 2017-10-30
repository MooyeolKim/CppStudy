#include <iostream>
using namespace std;

int value = 0;

int main(void)
{
	//int value = 10;
	value++;
	::value++;

	cout << "전역변수 : " << ::value << endl;
	cout << "지역변수 : " << value << endl;
	
	return 0;
}