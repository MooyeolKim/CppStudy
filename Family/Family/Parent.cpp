#include <iostream>
#include "Parent.h"
using namespace std;

Parent::Parent(void)
{
	money = 1000000000;
	cout << "Parent ������" << endl;
}

Parent::Parent(int money)
{
	this->money = money;
	cout << "Parent ������2" << endl;
}

Parent::~Parent(void)
{
	cout << "Parent �Ҹ���" << endl;
}

void Parent::Character(void)
{
	cout << "������ ��ǰ" << endl;
}

void Parent::Appearance(void)
{
	cout << "�߻��� �ܸ�" << endl;
}

void Parent::Wealth(void)
{
	cout << "��� : " << money << "��" << endl;
}