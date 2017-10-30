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

ostream &operator<<(ostream &os, const Point &pt)
{
	os << "(" << pt.x << ", " << pt.y << ")";
	return os;
}

istream &operator>>(istream &is, Point &pt)
{
	is >> pt.x;
	is >> pt.y;
	return is;
}
