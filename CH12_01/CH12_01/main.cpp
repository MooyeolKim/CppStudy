#include <iostream>
#include "Complex.h"
using namespace std;

int main(void)
{
	Complex a, b;

	cout << "ù��° ���Ҽ� �Է� : ";
	//cin >> a;
	operator>>(cin, a);

	cout << "�ι�° ���Ҽ� �Է� : ";
	//cin >> b;
	operator>>(cin, b);

	cout << "a = ";
	operator<<(cout, a) << endl;
	cout << "b = ";
	operator<<(cout, b) << endl;

	cout << "a+b = ";
	operator<<(cout, a.operator+(b)) << endl;
	cout << "a-b = ";
	operator<<(cout, a.operator-(b)) << endl;
	cout << "a*b = ";
	operator<<(cout, a.operator*(b)) << endl;
	cout << "a/b = ";
	operator<<(cout, a.operator/(b)) << endl;

	if(a.operator==(b))
		cout << a << "�� " << b << "�� ����." << endl;
	else
		cout << a << "�� " << b << "�� �����ʴ�." << endl;

	a.operator=(b);
	cout << "a=b : ";
	operator<<(cout, a) << endl;
	a.operator+=(b);
	cout << "a+=b : ";
	operator<<(cout, a) << endl;
	a.operator-=(b);
	cout << "a-=b : ";
	operator<<(cout, a) << endl;
	a.operator*=(b);
	cout << "a*=b : ";
	operator<<(cout, a) << endl;
	a.operator/=(b);
	cout << "a/=b : ";
	operator<<(cout, a) << endl;

	/*cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a+b = " << a+b << endl;
	cout << "a-b = " << a-b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a/b << endl;

	if(a==b)
		cout << a << "�� " << b << "�� ����." << endl;
	else
		cout << a << "�� " << b << "�� �����ʴ�." << endl;

	a=b;
	cout << "a=b : " << a << endl;
	a+=b;
	cout << "a+=b : " << a << endl;
	a-=b;
	cout << "a-=b : " << a << endl;
	a*=b;
	cout << "a*=b : " << a << endl;
	a/=b;
	cout << "a/=b : " << a << endl;
	*/
	
	return 0;
}