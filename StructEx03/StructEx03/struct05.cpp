#include <stdio.h>

struct Point
{
	int x;
	int y;
};

struct Circle
{
	struct Point center;
	double radius;
};

int main(void)
{
	struct Circle c1 = {{10, 10}, 5.0};

	printf("원의 중심 좌표 : (%d, %d)\n", c1.center.x, c1.center.y);
	printf("원의 반지름 : %0.2f\n", c1.radius);

	return 0;
}