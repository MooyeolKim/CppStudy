#include <iostream>
#include "Point.h"
using namespace std;

int main(void)
{
	Point p(0, 0);
	operator<<(cout, p) << endl;
	cout << "ÁÂÇ¥ ÀÔ·Â : ";
	//cin >> p;
	operator>>(cin, p);
	//cout << p << endl;
	operator<<(cout, p) << endl;
	return 0;
}