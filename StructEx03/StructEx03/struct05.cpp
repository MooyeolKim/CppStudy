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

	printf("���� �߽� ��ǥ : (%d, %d)\n", c1.center.x, c1.center.y);
	printf("���� ������ : %0.2f\n", c1.radius);

	return 0;
}