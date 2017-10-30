//14.04.09
#include <iostream>
#include "Exception.h"
using namespace std; 

void compute(int num) throw (Exception);
void print(int num) throw (Exception);

int main(void)
{
	int num;

	while(1)
	{
		cout << "0�� �ƴ� 100���� ���� ¦���� �Է��ϼ��� : ";
		cin >> num;
		
		try
		{
			compute(num);
			cout << "�� ó���Ǿ����ϴ�.." << endl;
			print(num);
			cout << "�μ� �Ǿ����ϴ�." << endl;
			return 0;
		}

		catch(Exception e)
		{
			e.message();
		}
	}
}

void compute(int num)
{
	if (num == 0)
		throw Exception(Exception::ZERO);
	else if(num > 100)
		throw Exception(Exception::TOO_BIG);
	else if(num%2 == 1)
		throw Exception(Exception::ODD_NUM);
}
		
void print(int num)
{
	if(num < 0)
		throw Exception(Exception::NEGATIVE);
}