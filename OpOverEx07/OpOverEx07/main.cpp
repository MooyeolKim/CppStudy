#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(10, 20), p2(10, 20), p3(20, 30);

	//if(p1 == p2)
	if(p1.operator==(p2))
		cout << "p1�� p2�� ����." << endl;
	else
		cout << "p1�� p2�� ���� �ʴ�." << endl;

	//if(p2 != p3)
	if(p2.operator!=(p3))
		cout << "p2�� p3�� ���� �ʴ�." << endl;
	else
		cout << "p2�� p3�� ����." << endl;

	return 0;
}