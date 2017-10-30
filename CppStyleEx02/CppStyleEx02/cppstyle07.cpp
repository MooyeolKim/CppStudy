#include <iostream>
using namespace std;

void output(int num)
{
	cout << num << endl;
}

void output(void)
{
	cout << 20 << endl;
}

int main(void)
{
	output();
	return 0;
}


