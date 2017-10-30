//14.04.08
#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b) //내부에 swap함수가 있으므로 오류
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int a=1, b=2;
	Swap(a, b);
	cout << a << ", " << b << endl;

	double c=0.1, d=0.2;
	Swap(c, d);
	cout << c << ", " << d << endl;
	return 0;
}
