#include <iostream>
using namespace std;

namespace A
{
	namespace B
	{
		namespace C
		{
			int num1 = 100;
			int num2 = 200;
		}
	}
}

int main(void)
{
	/*A::B::C::num1 += 5;
	A::B::C::num2 -= 5;

	cout << A::B::C::num1 <<endl;
	cout << A::B::C::num2 <<endl;
	*/
	namespace X = A::B::C;

	X::num1 += 5;
	X::num2 -= 5;

	cout << X::num1 << endl;
	cout << X::num2 << endl;

	return 0;
}