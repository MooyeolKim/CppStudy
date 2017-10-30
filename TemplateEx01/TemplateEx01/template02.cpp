#include <iostream>
using namespace std;

template <typename T>
int DataSize(T data)
{
	return sizeof(data);
}

template <>
int DataSize(char *data)
{
	return strlen(data);
}

int main(void)
{
	int num = 0;
	double real = 0.0;
	char *str = "Good morning!";

	cout << DataSize(num) << endl;
	cout << DataSize(real) << endl;
	cout << DataSize(str) << endl;
	return 0;
}
