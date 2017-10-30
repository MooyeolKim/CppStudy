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


Point &Point::operator=(const Point &pt)
{
	x = pt.x;
	y = pt.y;
	return *this;
}

Point &Point::operator+=(const Point &pt)
{
	x += pt.x;
	y += pt.y;
	return *this;
}

Point &Point::operator-=(const Point &pt)
{
	x -= pt.x;
	y -= pt.y;
	return *this;
}

Point &Point::operator*=(int mag)
{
	x *= mag;
	y *= mag;
	return *this;
}

Point &Point::operator/=(int div)
{
	x /= div;
	y /= div;
	return *this;
}

	