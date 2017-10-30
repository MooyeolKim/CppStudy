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

		catch(int exception)
		{
			switch(exception)
			{
			case 0:
				cout << "0�� �Է��ϸ� �ȵ˴ϴ�." << endl;
				break;
			case 1:
				cout << "100�̻��� ���� �Է��ϸ� �ȵ˴ϴ�." << endl;
				break;
			case 2:
				cout << "Ȧ���� �Է��ϸ� �ȵ˴ϴ�." << endl;
				break;
			}
		}
		catch(char print_exception)
		{
			cout << "������ �μ��� �� �����ϴ�." << endl;
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