#include <iostream>
using namespace std;

int num = 100;

int main(void)
{
	int num = 200;
	::num += 5;
	num -= 5;
	
	cout << "�������� : " << ::num << endl;	
	cout << "�������� : " << num << endl;

	return 0;
}
