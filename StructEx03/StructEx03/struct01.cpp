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

	printf("pt�� ũ�� : %d\n", sizeof(pt));
	printf("Point�� ũ�� : %d\n", sizeof(Point));
	printf("pt.x�� ũ�� : %d\n", sizeof(pt.x));
	printf("pt.y�� ũ�� : %d\n", sizeof(pt.y));

	return 0;
}