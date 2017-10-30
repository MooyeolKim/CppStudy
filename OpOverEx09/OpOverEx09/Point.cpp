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

void *Point::operator new(size_t size)
{
	return malloc(size);
}

void Point::operator delete(void *p)
{
	free(p);
}


