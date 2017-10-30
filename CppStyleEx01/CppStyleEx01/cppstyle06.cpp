#include <iostream>
using namespace std;

int Add(int a)
{
	return ++a;
}

int Add(int a, int b)
{
	return a+b;
}

double Add(double a, double b)
{
	return a+b;
}

int main(void)
{
	cout<<Add(6)<<endl<<Add(8,9)<<endl<<Add(3.5, 4.3)<<endl;

	return 0;
}