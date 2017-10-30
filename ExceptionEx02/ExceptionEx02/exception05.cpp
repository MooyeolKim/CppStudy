//14.04.09
#include <iostream>
using namespace std; 

void compute(int num) throw (int);
void print(int num) throw (char);

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

		catch(...)
		{
			cout << "입력이 잘못 되었습니다." << endl;
		}
	}
}

void compute(int num)
{
	if (num == 0)
		throw 0;
	else if(num > 100)
		throw 1;
	else if(num%2 == 1)
		throw 2;
}
		
void print(int num)
{
	if(num < 0)
		throw 'x';
}