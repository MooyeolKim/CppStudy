//14.03.28
#include <iostream>
using namespace std;

int main(void)
{
	char name[20];
	char signer[30];

	cout << "����� �̸���?";
	cin >> name;

	cout << "�����ϴ� ������?";
	cin >> signer;

	cout << "�� �̸��� " << name << "�Դϴ�." << endl;
	cout << "���� �����ϴ� ������ " << signer << "�Դϴ�." << endl;

	return 0;
}