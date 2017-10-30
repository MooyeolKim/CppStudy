#include <iostream>
using namespace std;

struct Point
{
	double x, y;
};

struct Circle
{
	struct Point center;
	double radius;
};

int main(void)
{
	struct Circle cir1;
	cir1.center.x = 100;
	cir1.center.y = 200;

	double &cx = cir1.center.x;
	double &cy = cir1.center.y;

	cx += 5;
	cy -= 5;

	cout << cx << ' ' << cir1.center.x << endl;
	cout << cy << ' ' << cir1.center.y << endl;

	return 0;
}