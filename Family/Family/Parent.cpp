#include <iostream>
#include "Parent.h"
using namespace std;

Parent::Parent(void)
{
	money = 1000000000;
	cout << "Parent 생성자" << endl;
}

Parent::Parent(int money)
{
	this->money = money;
	cout << "Parent 생성자2" << endl;
}

Parent::~Parent(void)
{
	cout << "Parent 소멸자" << endl;
}

void Parent::Character(void)
{
	cout << "차분한 성품" << endl;
}

void Parent::Appearance(void)
{
	cout << "잘생긴 외모" << endl;
}

void Parent::Wealth(void)
{
	cout << "재산 : " << money << "원" << endl;
}