#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main(void)
{
	struct Point pt1 = {10, 20}, pt2 = {50, 60};

	printf("ù° ���� ��ǥ : (%d, %d)\n", pt1.x, pt1.y);
	printf("��° ���� ��ǥ : (%d, %d)\n", pt2.x, pt2.y);

	return 0;
}