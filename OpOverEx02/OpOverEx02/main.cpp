#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(10, 20), p2(5, 7), p3;

	//p3 = p1 + p2;
	p3 = p1.operator+(p2);
	p3.Show();
	return 0;
}