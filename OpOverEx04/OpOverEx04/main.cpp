#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(10, 20), p2(20, 30), p3;

	//p1 += p2;
	p1.operator+=(p2);
	p1.Show();

	//p2 *= 2;
	p2.operator*=(2);
	p2.Show();

	//p2 -= p1;
	p2.operator-=(p1);
	p2.Show();

	//p1 /= 5;
	p1.operator/=(5);
	p1.Show();

	//p3 = p1;
	p3.operator=(p1);
	p3.Show();

	return 0;
}