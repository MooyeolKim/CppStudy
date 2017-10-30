#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p1(10, 20), p2, p3;
	
	//p2 = p1 * 2;
	p2 = p1.operator*(2);
	cout << "p2 = "; 
	p2.Show();

	//p3 = 2 * p1;
	p3 = operator*(2, p1);
	cout << "p3 = ";
	p3.Show();

	return 0;
}