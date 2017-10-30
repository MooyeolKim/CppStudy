#include <iostream>
using namespace std;

bool Divide(double dividend, double divider, double *result);

int main(void)
{
	double a, b, result;

	cout << "0�� �ƴ� �� ���� �Է��ϼ���: ";
	cin >> a;
	cin >> b;

	if(Divide(a, b, &result))
	{
		cout << a << "/" << b << " = " << result << endl;
	}
	else
	{
		cout << "�Է��� �߸��Ǿ����ϴ�." << endl;
	}

	if(Divide(b, a, &result))
	{
		cout << b << "/" << a << " = " << result << endl;
	}
	else
	{
		cout << "�Է��� �߸��Ǿ����ϴ�." << endl;
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

