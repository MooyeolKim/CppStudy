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

Point Point::operator+(const Point &pt) const
{
	return Point(x + pt.x, y + pt.y);
}

Point Point::operator-(const Point &pt) const
{
	return Point(x - pt.x, y - pt.y);
}

Point Point::operator*(int mag) const
{
	return Point(x * mag, y * mag);
}

Point Point::operator/(int div) const
{
	return Point(x / div, y / div);
}

Point operator*(int mag, const Point &pt)
{
	return Point(pt.x * mag, pt.y * mag);
}

Point operator/(int div, const Point &pt)
{
	return Point(pt.x / div, pt.y / div);
}