#include <iostream>
using namespace std;

int num = 100;

int main(void)
{
	int num = 200;
	::num += 5;
	num -= 5;
	
	cout << "전역변수 : " << ::num << endl;	
	cout << "지역변수 : " << num << endl;

	return 0;
}
