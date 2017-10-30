//14.03.28
#include <iostream>
using namespace std;

int main(void)
{
	int result, a=3, b=4;
	result = a+b;

	for(int i=0 ; i<10 ; i++)
	{
		result += i;
	}

	cout << result << endl;

	return 0;
}