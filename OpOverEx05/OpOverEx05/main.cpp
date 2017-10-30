#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(10, 20), p2(20, 30), p3;

	//p3 = p1 + p2; 
	p3 = p1.operator+(p2);
	p3.Show();

	//p3 = p2 - p1;
	p3 = p2.operator-(p1);
	p3.Show();

	//p3 = p1 * 3;
	p3 = p1.operator*(3);
	p3.Show();

	//p3 = p2 / 5;
	p3 = p2.operator/(5);
	p3.Show();

	//p3 = 3 * p1;
	p3 = operator*(3, p1);
	p3.Show();

	//p3= 5 / p2;
	p3 = operator/(5, p2);
	p3.Show();

	return 0;
}