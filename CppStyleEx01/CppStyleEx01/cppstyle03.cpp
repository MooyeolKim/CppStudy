#include <iostream>
using namespace std;

namespace A
{
	void Func(void)
	{
		cout << "A�Լ�\n";
	}
}

namespace B
{
	void Func(void)
	{
		cout << "B�Լ�\n";
	}
}

int main(void)
{
	A::Func();
	B::Func();

	return 0;
}

