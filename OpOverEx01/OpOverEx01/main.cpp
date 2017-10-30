#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(0, 0), p2, p3;

	//p2 = ++p1;
	p2 = p1.operator++();
	p1.Show();
	p2.Show();

	//p3 = p1++;
	p3 = p1.operator++(1);
	p1.Show();
	p3.Show();

	return 0;
}