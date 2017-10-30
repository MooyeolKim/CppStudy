#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(void)
{
	x=y=0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::Show(void)
{
	cout << "(" << x << ", " << y << ")" << endl;
}

Point Point::operator+(Point pt)
{
	Point temp;
	temp.x = x + pt.x;
	temp.y = y + pt.y;
	return temp;
}