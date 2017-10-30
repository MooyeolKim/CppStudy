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

Point &Point::operator++(void)
{
	++x, ++y;
	return *this;
}

Point &Point::operator--(void)
{
	--x, --y;
	return *this;
}

const Point Point::operator++(int)
{
	Point temp = *this;
	++*this;
	return temp;
}

const Point Point::operator--(int)
{
	Point temp = *this;
	--*this;
	return temp;
}