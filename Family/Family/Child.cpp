#include <iostream>
#include "Child.h"
using namespace std;

Child::Child() : Parent(1000)
{
	//money = 1000;
	//Parent::Parent(1000); //�����ڴ� �ν��Ͻ��� �����ɶ� ȣ���
	cout << "Child ������" << endl;
}

Child::~Child()
{
	cout << "Child �Ҹ���" << endl;
}

void Child::Humanity(void)
{
	cout << "��ġ�� �ΰ���" << endl;
}

void Child::Character(void)
{
	cout << "�Ұ��� ��ǰ" << endl;
}

void Child::Appearance(void)
{
	Parent::Appearance();
	cout << "��ĥ�� Ű" << endl;
}