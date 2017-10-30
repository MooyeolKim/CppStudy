#include <iostream>
using namespace std;

void Divide(double dividend, double divider, double *result);

int main(void)
{
	double a, b, result;

	cout << "0이 아닌 두 수를 입력하세요: ";
	cin >> a;
	cin >> b;

	try
	{
		Divide(a, b, &result);
		cout << a << "/" << b << " = " << result << endl;
	
		Divide(b, a, &result);
		cout << b << "/" << a << " = " << result << endl;
	}

	catch(bool exception)
	{
		cout << "입력이 잘못되었습니다." << endl;
	}

	return 0;
}

void Divide(double dividend, double divider, double *result)
{
	if (divider == 0)
		throw false;

	*result = dividend/divider;
}