#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point pt(10, 20);

	cout << pt[0] << endl;
	cout << pt.operator[](0) << endl;
	cout << pt[1] << endl;
	cout << pt.operator[](1) << endl;

	return 0;
}
