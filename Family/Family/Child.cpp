#include <iostream>
#include "Child.h"
using namespace std;

Child::Child() : Parent(1000)
{
	//money = 1000;
	//Parent::Parent(1000); //생성자는 인스턴스가 생성될때 호출됨
	cout << "Child 생성자" << endl;
}

Child::~Child()
{
	cout << "Child 소멸자" << endl;
}

void Child::Humanity(void)
{
	cout << "넘치는 인간미" << endl;
}

void Child::Character(void)
{
	cout << "불같은 성품" << endl;
}

void Child::Appearance(void)
{
	Parent::Appearance();
	cout << "훤칠한 키" << endl;
}