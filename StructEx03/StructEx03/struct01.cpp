//14.03.19
#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main(void)
{
	struct Point pt;

	printf("pt의 크기 : %d\n", sizeof(pt));
	printf("Point의 크기 : %d\n", sizeof(Point));
	printf("pt.x의 크기 : %d\n", sizeof(pt.x));
	printf("pt.y의 크기 : %d\n", sizeof(pt.y));

	return 0;
}