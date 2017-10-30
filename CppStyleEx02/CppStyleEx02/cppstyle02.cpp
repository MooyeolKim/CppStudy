#include <iostream>
using namespace std;

int main(void)
{
	int num = -10;
	bool isNegative;
	isNegative = num<0;

	cout << isNegative << endl;
	if(isNegative == true)
		num = -num;

	cout << num << endl << isNegative << endl;
	return 0;
}