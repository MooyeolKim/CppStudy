//14.04.09
#include <iostream>
using namespace std; 

void compute(int num);
void print(int num);

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

		catch(int exception)
		{
			switch(exception)
			{
			case 0:
				cout << "0을 입력하면 안됩니다." << endl;
				break;
			case 1:
				cout << "100이상의 수를 입력하면 안됩니다." << endl;
				break;
			case 2:
				cout << "홀수를 입력하면 안됩니다." << endl;
				break;
			}
		}
		catch(char print_exception)
		{
			cout << "음수는 인쇄할 수 없습니다." << endl;
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