#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main(void)
{
	struct Point pt1 = {10, 20}, pt2 = {50, 60};

	printf("첫째 점의 좌표 : (%d, %d)\n", pt1.x, pt1.y);
	printf("둘째 점의 좌표 : (%d, %d)\n", pt2.x, pt2.y);

	return 0;
}