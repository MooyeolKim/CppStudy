//14.04.04
#include <iostream>
using namespace std;

class Point
{
public:
	Point(void);
	Point(int x, int y);
	void Show(void);
	friend ostream &operator<<(ostream &os, const Point &pt);
	friend istream &operator>>(istream &is, Point &pt);
private:
	int x, y;
};