#include <iostream>
using namespace std;

namespace A
{
	void Func(void)
	{
		cout << "A함수\n";
	}
}

namespace B
{
	void Func(void)
	{
		cout << "B함수\n";
	}
}

int main(void)
{
	A::Func();
	B::Func();

	return 0;
}

