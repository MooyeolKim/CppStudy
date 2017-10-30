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

Point Point::operator*(int mag)
{
	Point temp;
	temp.x = x*mag;
	temp.y = y*mag;
	return temp;
}

Point operator*(int mag, Point pt)
{
	Point temp;
	temp.x = mag*pt.x;
	temp.y = mag*pt.y;
	return temp;
}