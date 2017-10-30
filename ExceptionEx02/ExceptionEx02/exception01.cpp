#include <iostream>
using namespace std;

bool Divide(double dividend, double divider, double *result);

int main(void)
{
	double a, b, result;

	cout << "0이 아닌 두 수를 입력하세요: ";
	cin >> a;
	cin >> b;

	if(Divide(a, b, &result))
	{
		cout << a << "/" << b << " = " << result << endl;
	}
	else
	{
		cout << "입력이 잘못되었습니다." << endl;
	}

	if(Divide(b, a, &result))
	{
		cout << b << "/" << a << " = " << result << endl;
	}
	else
	{
		cout << "입력이 잘못되었습니다." << endl;
	}

	return 0;
}

bool Divide(double dividend, double divider, double *result)
{
	if (divider == 0)
		return false;

	*result = dividend/divider;
	return true;
}

