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
		cout << "0이 아닌 100보다 작은 짝수를 입력하세요 : ";
		cin >> num;
		
		try
		{
			compute(num);
			cout << "잘 처리되었습니다.." << endl;
			print(num);
			cout << "인쇄 되었습니다." << endl;
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