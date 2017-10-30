#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(10, 10), p2(20, 20);

	//++p1;
	p1.operator++();
	p1.Show();

	//++++p1;
	p1.operator++().operator++();
	p1.Show();

	//p1++;
	p1.operator++(1);
	p1.Show();

	//p1++++;
	//p1.Show();

	//--p2;
	p2.operator--();
	p2.Show();

	//----p2;
	p2.operator--().operator--();
	p2.Show();

	//p2--;
	p2.operator--(1);
	p2.Show();

	//p2----;
	//p2.Show();

	return 0;
}