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

bool Point::operator==(const Point &pt) const
{
	return (x == pt.x && y == pt.y);
}

bool Point::operator!=(const Point &pt) const
{
	return (x != pt.x || y != pt.y);
}