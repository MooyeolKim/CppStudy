#include <iostream>
using namespace std;

void Divide(double dividend, double divider, double *result);

int main(void)
{
	double a, b, result;

	cout << "0�� �ƴ� �� ���� �Է��ϼ���: ";
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
		cout << "�Է��� �߸��Ǿ����ϴ�." << endl;
	}

	return 0;
}

void Divide(double dividend, double divider, double *result)
{
	if (divider == 0)
		throw false;

	*result = dividend/divider;
}